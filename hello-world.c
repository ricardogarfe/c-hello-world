#include <gtk/gtk.h>

int main (int argc, char **argv)
{
    GtkWidget *win;
    GtkWidget *label;

    // Inicializar gtk
    gtk_init(&argc, &argv);

    // Llamada al método new de la clase window en el direcotrio gtk.
    win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(win, "delete-event", G_CALLBACK(gtk_main_quit), NULL);
    label = gtk_label_new("Hello World!");

    // Sistema de tipos de clib se encarga del casting.
    // GTK_CONTAINER en vez de GtkContainer *(win).
    gtk_container_add(GTK_CONTAINER (win), label);

    // Muestra los widgets.
    gtk_widget_show(label);
    gtk_widget_show(win);    

    gtk_main();

    return 0;
}
