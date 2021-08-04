/* valaarrayresizemethod.c generated by valac, the Vala compiler
 * generated from valaarrayresizemethod.vala, do not modify */

/* valaarrayresizemethod.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include "vala.h"
#include <glib.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

static gpointer vala_array_resize_method_parent_class = NULL;

static GType vala_array_resize_method_get_type_once (void);

/**
 * Creates a new array resize method.
 *
 * @return newly created method
 */
ValaArrayResizeMethod*
vala_array_resize_method_construct (GType object_type,
                                    ValaSourceReference* source_reference)
{
	ValaArrayResizeMethod* self = NULL;
	ValaVoidType* _tmp0_;
	ValaVoidType* _tmp1_;
	_tmp0_ = vala_void_type_new (NULL);
	_tmp1_ = _tmp0_;
	self = (ValaArrayResizeMethod*) vala_method_construct (object_type, "resize", (ValaDataType*) _tmp1_, source_reference, NULL);
	_vala_code_node_unref0 (_tmp1_);
	vala_symbol_set_external ((ValaSymbol*) self, TRUE);
	vala_code_node_set_attribute_double ((ValaCodeNode*) self, "CCode", "instance_pos", 0.1, NULL);
	return self;
}

ValaArrayResizeMethod*
vala_array_resize_method_new (ValaSourceReference* source_reference)
{
	return vala_array_resize_method_construct (BALA_TYPE_ARRAY_RESIZE_METHOD, source_reference);
}

static void
vala_array_resize_method_class_init (ValaArrayResizeMethodClass * klass,
                                     gpointer klass_data)
{
	vala_array_resize_method_parent_class = g_type_class_peek_parent (klass);
}

static void
vala_array_resize_method_instance_init (ValaArrayResizeMethod * self,
                                        gpointer klass)
{
}

/**
 * Represents the Array.resize method.
 */
static GType
vala_array_resize_method_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaArrayResizeMethodClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_array_resize_method_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaArrayResizeMethod), 0, (GInstanceInitFunc) vala_array_resize_method_instance_init, NULL };
	GType vala_array_resize_method_type_id;
	vala_array_resize_method_type_id = g_type_register_static (BALA_TYPE_METHOD, "ValaArrayResizeMethod", &g_define_type_info, 0);
	return vala_array_resize_method_type_id;
}

GType
vala_array_resize_method_get_type (void)
{
	static volatile gsize vala_array_resize_method_type_id__volatile = 0;
	if (g_once_init_enter (&vala_array_resize_method_type_id__volatile)) {
		GType vala_array_resize_method_type_id;
		vala_array_resize_method_type_id = vala_array_resize_method_get_type_once ();
		g_once_init_leave (&vala_array_resize_method_type_id__volatile, vala_array_resize_method_type_id);
	}
	return vala_array_resize_method_type_id__volatile;
}

