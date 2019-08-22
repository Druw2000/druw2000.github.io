#!/bin/bash
# incremental

function show_help {
	echo "Usage: incremental [COMMAND]"
	echo -e "\tTool to maintain SVN repositories"
	echo "Commands:"
	echo -e "\thelp\n\tbackup\n\tcreate\n\tupdate\n\tdump\n\tload\n\tinfo"
}

function retreive_revisions {
	hrn=$(svnlook youngest hardware)	
	srn=$(svnlook youngest software)
}

function write_revisions {
	cp revisions.txt backups/revisions.txt
	cat /dev/null > revisions.txt
	echo -ne "hardware $hrn\n" >> revisions.txt
	echo -ne "software $srn\n" >> revisions.txt
}

function show_revisions {
	cat revisions.txt
}

function populate_repos {
	svnadmin --force-uuid load hardware < backups/hardware.dump
	svnadmin --force-uuid load software < backups/software.dump
}

function create_repos {
	echo "Creating $1 repository"
	mkdir $1
	svnadmin create $1
}

function retreive_dumps {
	svnrdump dump svn://[domain]/repositories/hardware --incremental -r $hrn:HEAD > backups/hardware.dump
	svnrdump dump svn://[domain]/repositories/software --incremental -r $srn:HEAD > backups/software.dump
}

function dump_repos {
	#case $1 in
	#	full)
	#		svnadmin dump hardware > hardware.dump
	#		svnadmin dump software > software.dump
	#	incremental)
	echo "Dumped repos"
}
function remote_retrieve_revisions {
	svn info svn://[domain]/repositories/$1 | grep Revision | awk '{print $2}'
}

# If 'cd' fails then exit the program
cd /repositories || exit 1

# Load arguments into array
args=("$@")
for arg in $args
do
	# Parse arguments for actions
	case $arg in
		#backup)
		#	echo "Retreiving remote revisions"
		#	retrieve_revisions

		#	echo "Retreiving remote repositories and dumping"
		#	retrieve_dumps

		#	echo "Clearing old revisions"
		#	clear_revisions

		#	echo "Writing new revisions"
		#	write_revisions
		#	;;
		help|usage)
			show_help
			;;
		update)
			echo "Retreiving remote revisions"
			retrieve_revisions
			echo "Writing new revisions"
			write_revisions
			;;
		create)
			if [ ! -d "hardware" ] && [ ! $(svnadmin info hardware) ]; then
				create_repos hardware
			else
				echo "Hardware repository or directory already exist"
				echo "Try 'svnadmin info hardware'"
			fi
			if [ ! -d "software" ] && [ ! $(svnadmin info software) ]; then
				create_repos software
			else
				echo "Software repository or directory already exist"
				echo "Try 'svnadmin info software'"
			fi
			;;
		dump)
			dump_repos
			;;
		load)
			echo "Populating repositories..."
			populate_repos
			;;
		info)
			echo "Showing current revisions..."
			show_revisions
			;;
		#remote)
		#	echo "Retrieving remote revisions"
		#	case $arg2 in
		#		retrieve)
		#			remote_retrieve_revisions $3
		#			;;
		#	esac
		#*)
		#	echo "Unknown or no option given"
		#	echo "Try 'incremental help' for help"
		#	;;
	esac
done

