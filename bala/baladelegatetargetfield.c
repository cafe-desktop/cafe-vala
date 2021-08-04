/* valadelegatetargetfield.c generated by valac, the Vala compiler
 * generated from valadelegatetargetfield.vala, do not modify */

/* valadelegatetargetfield.vala
 *
 * Copyright (C) 2019  Rico Tzschichholz
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
 * 	Rico Tzschichholz <ricotz@ubuntu.com>
 */

#include "vala.h"
#include <glib.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

static gpointer vala_delegate_target_field_parent_class = NULL;

static GType vala_delegate_target_field_get_type_once (void);

/**
 * Creates a new delegate target field.
 *
 * @return newly created field
 */
ValaDelegateTargetField*
vala_delegate_target_field_construct (GType object_type,
                                      ValaSourceReference* source_reference)
{
	ValaDelegateTargetField* self = NULL;
	ValaVoidType* _tmp0_;
	ValaVoidType* _tmp1_;
	ValaPointerType* _tmp2_;
	ValaPointerType* _tmp3_;
	_tmp0_ = vala_void_type_new (NULL);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_pointer_type_new ((ValaDataType*) _tmp1_, NULL);
	_tmp3_ = _tmp2_;
	self = (ValaDelegateTargetField*) vala_field_construct (object_type, "target", (ValaDataType*) _tmp3_, NULL, source_reference, NULL);
	_vala_code_node_unref0 (_tmp3_);
	_vala_code_node_unref0 (_tmp1_);
	vala_symbol_set_external ((ValaSymbol*) self, TRUE);
	return self;
}

ValaDelegateTargetField*
vala_delegate_target_field_new (ValaSourceReference* source_reference)
{
	return vala_delegate_target_field_construct (BALA_TYPE_DELEGATE_TARGET_FIELD, source_reference);
}

static void
vala_delegate_target_field_class_init (ValaDelegateTargetFieldClass * klass,
                                       gpointer klass_data)
{
	vala_delegate_target_field_parent_class = g_type_class_peek_parent (klass);
}

static void
vala_delegate_target_field_instance_init (ValaDelegateTargetField * self,
                                          gpointer klass)
{
}

/**
 * Represents the Delegate.target field.
 */
static GType
vala_delegate_target_field_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaDelegateTargetFieldClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_delegate_target_field_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDelegateTargetField), 0, (GInstanceInitFunc) vala_delegate_target_field_instance_init, NULL };
	GType vala_delegate_target_field_type_id;
	vala_delegate_target_field_type_id = g_type_register_static (BALA_TYPE_FIELD, "ValaDelegateTargetField", &g_define_type_info, 0);
	return vala_delegate_target_field_type_id;
}

GType
vala_delegate_target_field_get_type (void)
{
	static volatile gsize vala_delegate_target_field_type_id__volatile = 0;
	if (g_once_init_enter (&vala_delegate_target_field_type_id__volatile)) {
		GType vala_delegate_target_field_type_id;
		vala_delegate_target_field_type_id = vala_delegate_target_field_get_type_once ();
		g_once_init_leave (&vala_delegate_target_field_type_id__volatile, vala_delegate_target_field_type_id);
	}
	return vala_delegate_target_field_type_id__volatile;
}

