/*******************************************************************************
* Copyright (c) 2000, 2003 IBM Corporation and others. All rights reserved.
* The contents of this file are made available under the terms
* of the GNU Lesser General Public License (LGPL) Version 2.1 that
* accompanies this distribution (lgpl-v21.txt).  The LGPL is also
* available at http://www.gnu.org/licenses/lgpl.html.  If the version
* of the LGPL at http://www.gnu.org is different to the version of
* the LGPL accompanying this distribution and there is any conflict
* between the two license versions, the terms of the LGPL accompanying
* this distribution shall govern.
* 
* Contributors:
*     IBM Corporation - initial API and implementation
*******************************************************************************/

#include "swt.h"
#include "os.h"

#include <stdio.h>
#include <assert.h>

#include <gtk/gtk.h>
#include <gdk/gdk.h>

#define GTK_NATIVE(func) Java_org_eclipse_swt_internal_gtk_GTK_##func

#ifndef NO_GTK_1WIDGET_1HEIGHT
JNIEXPORT jint JNICALL GTK_NATIVE(GTK_1WIDGET_1HEIGHT)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc;
	NATIVE_ENTER(env, that, "GTK_1WIDGET_1HEIGHT\n")
	rc = (jint)GTK_WIDGET_HEIGHT(arg0);
	NATIVE_EXIT(env, that, "GTK_1WIDGET_1HEIGHT\n")
	return rc;
}
#endif

#ifndef NO_GTK_1WIDGET_1WIDTH
JNIEXPORT jint JNICALL GTK_NATIVE(GTK_1WIDGET_1WIDTH)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc;
	NATIVE_ENTER(env, that, "GTK_1WIDGET_1WIDTH\n")
	rc = (jint)GTK_WIDGET_WIDTH(arg0);
	NATIVE_EXIT(env, that, "GTK_1WIDGET_1WIDTH\n")
	return rc;
}
#endif

#ifndef NO_g_1signal_1connect
JNIEXPORT jint JNICALL GTK_NATIVE(g_1signal_1connect)
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2, jint arg3)
{
	jbyte *lparg1=NULL;
	jint rc;
	NATIVE_ENTER(env, that, "g_1signal_1connect\n")
	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	rc = (jint)g_signal_connect((gpointer)arg0, (const gchar *)lparg1, (GCallback)arg2, (gpointer)arg3);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, JNI_ABORT);
	NATIVE_EXIT(env, that, "g_1signal_1connect\n")
	return rc;
}
#endif

#ifndef NO_gtk_1events_1pending
JNIEXPORT jint JNICALL GTK_NATIVE(gtk_1events_1pending)
	(JNIEnv *env, jclass that)
{
	jint rc;
	NATIVE_ENTER(env, that, "gtk_1events_1pending\n")
	rc = (jint)gtk_events_pending();
	NATIVE_EXIT(env, that, "gtk_1events_1pending\n")
	return rc;
}
#endif

#ifndef NO_gtk_1init_1check
JNIEXPORT jboolean JNICALL GTK_NATIVE(gtk_1init_1check)
	(JNIEnv *env, jclass that, jintArray arg0, jintArray arg1)
{
	jint *lparg0=NULL;
	jint *lparg1=NULL;
	jboolean rc;
	NATIVE_ENTER(env, that, "gtk_1init_1check\n")
	if (arg0) lparg0 = (*env)->GetIntArrayElements(env, arg0, NULL);
	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	rc = (jboolean)gtk_init_check((int *)lparg0, (char ***)lparg1);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg0) (*env)->ReleaseIntArrayElements(env, arg0, lparg0, 0);
	NATIVE_EXIT(env, that, "gtk_1init_1check\n")
	return rc;
}
#endif

#ifndef NO_gtk_1main
JNIEXPORT void JNICALL GTK_NATIVE(gtk_1main)
	(JNIEnv *env, jclass that)
{
	NATIVE_ENTER(env, that, "gtk_1main\n")
	gtk_main();
	NATIVE_EXIT(env, that, "gtk_1main\n")
}
#endif

#ifndef NO_gtk_1main_1iteration
JNIEXPORT jint JNICALL GTK_NATIVE(gtk_1main_1iteration)
	(JNIEnv *env, jclass that)
{
	jint rc;
	NATIVE_ENTER(env, that, "gtk_1main_1iteration\n")
	rc = (jint)gtk_main_iteration();
	NATIVE_EXIT(env, that, "gtk_1main_1iteration\n")
	return rc;
}
#endif

#ifndef NO_gtk_1plug_1new
JNIEXPORT jint JNICALL GTK_NATIVE(gtk_1plug_1new)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc;
	NATIVE_ENTER(env, that, "gtk_1plug_1new\n")
	rc = (jint)gtk_plug_new(arg0);
	NATIVE_EXIT(env, that, "gtk_1plug_1new\n")
	return rc;
}
#endif

#ifndef NO_gtk_1widget_1destroy
JNIEXPORT void JNICALL GTK_NATIVE(gtk_1widget_1destroy)
	(JNIEnv *env, jclass that, jint arg0)
{
	NATIVE_ENTER(env, that, "gtk_1widget_1destroy\n")
	gtk_widget_destroy((GtkWidget *)arg0);
	NATIVE_EXIT(env, that, "gtk_1widget_1destroy\n")
}
#endif

#ifndef NO_gtk_1widget_1show
JNIEXPORT void JNICALL GTK_NATIVE(gtk_1widget_1show)
	(JNIEnv *env, jclass that, jint arg0)
{
	NATIVE_ENTER(env, that, "gtk_1widget_1show\n")
	gtk_widget_show((GtkWidget *)arg0);
	NATIVE_EXIT(env, that, "gtk_1widget_1show\n")
}
#endif

#ifndef NO_gtk_1widget_1show_1now
JNIEXPORT void JNICALL GTK_NATIVE(gtk_1widget_1show_1now)
	(JNIEnv *env, jclass that, jint arg0)
{
	NATIVE_ENTER(env, that, "gtk_1widget_1show_1now\n")
	gtk_widget_show_now((GtkWidget *)arg0);
	NATIVE_EXIT(env, that, "gtk_1widget_1show_1now\n")
}
#endif

#ifndef NO_gtk_1window_1new
JNIEXPORT jint JNICALL GTK_NATIVE(gtk_1window_1new)
	(JNIEnv *env, jclass that, jint arg0)
{
	jint rc;
	NATIVE_ENTER(env, that, "gtk_1window_1new\n")
	rc = (jint)gtk_window_new((GtkWindowType)arg0);
	NATIVE_EXIT(env, that, "gtk_1window_1new\n")
	return rc;
}
#endif

