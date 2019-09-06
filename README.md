# andruwne.github.io
I am not a fan of Markdown. For some reason I have to use two spaces and a line break to get a newline.

## About
'stage' branch is merged into 'master' on Sundays.

## Design
### Layout
Main content is used as such, first body then 'wrapper' then 'pane'.
```
<body>
	<div class="wrapper">
		<div class="pane">
			<p>content</p>
		</div>
	</div>
</body>
```

### Colorscheme
Generated from [www.colormind.io](https://colormind.io).  
<pre>
navy      #142544
blueberry #8283AE
bluegrey  #97A7B8
pink      #F67EAA
burgundy  #834265
</pre>

### Not set in stone
'wrapper-left' will float the wrapper to the left side of the page.
```
<div class="wrapper wrapper-left">
```

'wrapper-right' will float the wrapper to the right side of the page.
```
<div class="wrapper wrapper-right">
```
