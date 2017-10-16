/* Credentials.c generated by valac 0.30.1, the Vala compiler
 * generated from Credentials.vala, do not modify */

/*
* Copyright (c) 2011-2017 elementary LLC. (http://launchpad.net/pantheon-greeter)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 59 Temple Place - Suite 330,
* Boston, MA 02111-1307, USA.
*
*/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <lightdm.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_CREDENTIALS (credentials_get_type ())
#define CREDENTIALS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CREDENTIALS, Credentials))
#define IS_CREDENTIALS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CREDENTIALS))
#define CREDENTIALS_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_CREDENTIALS, CredentialsIface))

typedef struct _Credentials Credentials;
typedef struct _CredentialsIface CredentialsIface;

#define TYPE_MESSAGE_TEXT (message_text_get_type ())

typedef enum  {
	MESSAGE_TEXT_FPRINT_SWIPE,
	MESSAGE_TEXT_FPRINT_SWIPE_AGAIN,
	MESSAGE_TEXT_FPRINT_SWIPE_TOO_SHORT,
	MESSAGE_TEXT_FPRINT_NOT_CENTERED,
	MESSAGE_TEXT_FPRINT_REMOVE,
	MESSAGE_TEXT_FPRINT_PLACE,
	MESSAGE_TEXT_FPRINT_PLACE_AGAIN,
	MESSAGE_TEXT_FPRINT_NO_MATCH,
	MESSAGE_TEXT_FPRINT_TIMEOUT,
	MESSAGE_TEXT_FPRINT_ERROR,
	MESSAGE_TEXT_FAILED,
	MESSAGE_TEXT_OTHER
} MessageText;

struct _CredentialsIface {
	GTypeInterface parent_iface;
	void (*show_message) (Credentials* self, LightDMMessageType type, MessageText messagetext, const gchar* text);
};



GType message_text_get_type (void) G_GNUC_CONST;
GType credentials_get_type (void) G_GNUC_CONST;
void credentials_show_message (Credentials* self, LightDMMessageType type, MessageText messagetext, const gchar* text);


void credentials_show_message (Credentials* self, LightDMMessageType type, MessageText messagetext, const gchar* text) {
	g_return_if_fail (self != NULL);
	CREDENTIALS_GET_INTERFACE (self)->show_message (self, type, messagetext, text);
}


static void credentials_base_init (CredentialsIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		g_signal_new ("replied", TYPE_CREDENTIALS, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
	}
}


GType credentials_get_type (void) {
	static volatile gsize credentials_type_id__volatile = 0;
	if (g_once_init_enter (&credentials_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CredentialsIface), (GBaseInitFunc) credentials_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType credentials_type_id;
		credentials_type_id = g_type_register_static (G_TYPE_INTERFACE, "Credentials", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (credentials_type_id, gtk_widget_get_type ());
		g_once_init_leave (&credentials_type_id__volatile, credentials_type_id);
	}
	return credentials_type_id__volatile;
}


