#include <gtk.h>

int main() {
	g_object_get (settings, "gtk-theme-name", &theme, NULL);
	gtk_css_provider_load_from_resource (app->provider, "/application/xyz/adwaita.css");
}
