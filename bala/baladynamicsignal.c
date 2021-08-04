/* valadynamicsignal.c generated by valac, the Vala compiler
 * generated from valadynamicsignal.vala, do not modify */

/* valadynamicsignal.vala
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
#include <stdlib.h>
#include <string.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaDynamicSignalPrivate {
	ValaDataType* _dynamic_type;
	ValaExpression* _handler;
};

static gint ValaDynamicSignal_private_offset;
static gpointer vala_dynamic_signal_parent_class = NULL;

static void vala_dynamic_signal_finalize (ValaCodeNode * obj);
static GType vala_dynamic_signal_get_type_once (void);

static inline gpointer
vala_dynamic_signal_get_instance_private (ValaDynamicSignal* self)
{
	return G_STRUCT_MEMBER_P (self, ValaDynamicSignal_private_offset);
}

ValaDataType*
vala_dynamic_signal_get_dynamic_type (ValaDynamicSignal* self)
{
	ValaDataType* result;
	ValaDataType* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_dynamic_type;
	result = _tmp0_;
	return result;
}

static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}

void
vala_dynamic_signal_set_dynamic_type (ValaDynamicSignal* self,
                                      ValaDataType* value)
{
	ValaDataType* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_dynamic_type);
	self->priv->_dynamic_type = _tmp0_;
}

ValaExpression*
vala_dynamic_signal_get_handler (ValaDynamicSignal* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_handler;
	result = _tmp0_;
	return result;
}

void
vala_dynamic_signal_set_handler (ValaDynamicSignal* self,
                                 ValaExpression* value)
{
	ValaExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_handler);
	self->priv->_handler = _tmp0_;
}

ValaDynamicSignal*
vala_dynamic_signal_construct (GType object_type,
                               ValaDataType* dynamic_type,
                               const gchar* name,
                               ValaDataType* return_type,
                               ValaSourceReference* source_reference,
                               ValaComment* comment)
{
	ValaDynamicSignal* self = NULL;
	g_return_val_if_fail (dynamic_type != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (return_type != NULL, NULL);
	self = (ValaDynamicSignal*) vala_signal_construct (object_type, name, return_type, source_reference, comment);
	vala_dynamic_signal_set_dynamic_type (self, dynamic_type);
	return self;
}

ValaDynamicSignal*
vala_dynamic_signal_new (ValaDataType* dynamic_type,
                         const gchar* name,
                         ValaDataType* return_type,
                         ValaSourceReference* source_reference,
                         ValaComment* comment)
{
	return vala_dynamic_signal_construct (BALA_TYPE_DYNAMIC_SIGNAL, dynamic_type, name, return_type, source_reference, comment);
}

static void
vala_dynamic_signal_class_init (ValaDynamicSignalClass * klass,
                                gpointer klass_data)
{
	vala_dynamic_signal_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_dynamic_signal_finalize;
	g_type_class_adjust_private_offset (klass, &ValaDynamicSignal_private_offset);
}

static void
vala_dynamic_signal_instance_init (ValaDynamicSignal * self,
                                   gpointer klass)
{
	self->priv = vala_dynamic_signal_get_instance_private (self);
}

static void
vala_dynamic_signal_finalize (ValaCodeNode * obj)
{
	ValaDynamicSignal * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_DYNAMIC_SIGNAL, ValaDynamicSignal);
	_vala_code_node_unref0 (self->priv->_dynamic_type);
	_vala_code_node_unref0 (self->priv->_handler);
	BALA_CODE_NODE_CLASS (vala_dynamic_signal_parent_class)->finalize (obj);
}

/**
 * Represents a late bound signal.
 */
static GType
vala_dynamic_signal_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaDynamicSignalClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_dynamic_signal_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDynamicSignal), 0, (GInstanceInitFunc) vala_dynamic_signal_instance_init, NULL };
	GType vala_dynamic_signal_type_id;
	vala_dynamic_signal_type_id = g_type_register_static (BALA_TYPE_SIGNAL, "ValaDynamicSignal", &g_define_type_info, 0);
	ValaDynamicSignal_private_offset = g_type_add_instance_private (vala_dynamic_signal_type_id, sizeof (ValaDynamicSignalPrivate));
	return vala_dynamic_signal_type_id;
}

GType
vala_dynamic_signal_get_type (void)
{
	static volatile gsize vala_dynamic_signal_type_id__volatile = 0;
	if (g_once_init_enter (&vala_dynamic_signal_type_id__volatile)) {
		GType vala_dynamic_signal_type_id;
		vala_dynamic_signal_type_id = vala_dynamic_signal_get_type_once ();
		g_once_init_leave (&vala_dynamic_signal_type_id__volatile, vala_dynamic_signal_type_id);
	}
	return vala_dynamic_signal_type_id__volatile;
}

