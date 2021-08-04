/* balafieldprototype.c generated by balac, the Vala compiler
 * generated from balafieldprototype.bala, do not modify */

/* balafieldprototype.bala
 *
 * Copyright (C) 2008  Jürg Billeter
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

#include "bala.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>

static gpointer bala_field_prototype_parent_class = NULL;

static ValaDataType* bala_field_prototype_real_copy (ValaDataType* base);
static gchar* bala_field_prototype_real_to_qualified_string (ValaDataType* base,
                                                      ValaScope* scope);
static GType bala_field_prototype_get_type_once (void);

ValaField*
bala_field_prototype_get_field_symbol (ValaFieldPrototype* self)
{
	ValaField* result;
	ValaSymbol* _tmp0_;
	ValaSymbol* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = bala_data_type_get_symbol ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, BALA_TYPE_FIELD, ValaField);
	return result;
}

ValaFieldPrototype*
bala_field_prototype_construct (GType object_type,
                                ValaField* field_symbol)
{
	ValaFieldPrototype* self = NULL;
	g_return_val_if_fail (field_symbol != NULL, NULL);
	self = (ValaFieldPrototype*) bala_data_type_construct_with_symbol (object_type, (ValaSymbol*) field_symbol);
	return self;
}

ValaFieldPrototype*
bala_field_prototype_new (ValaField* field_symbol)
{
	return bala_field_prototype_construct (BALA_TYPE_FIELD_PROTOTYPE, field_symbol);
}

static ValaDataType*
bala_field_prototype_real_copy (ValaDataType* base)
{
	ValaFieldPrototype * self;
	ValaFieldPrototype* _result_ = NULL;
	ValaField* _tmp0_;
	ValaField* _tmp1_;
	ValaFieldPrototype* _tmp2_;
	ValaDataType* result = NULL;
	self = (ValaFieldPrototype*) base;
	_tmp0_ = bala_field_prototype_get_field_symbol (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = bala_field_prototype_new (_tmp1_);
	_result_ = _tmp2_;
	result = (ValaDataType*) _result_;
	return result;
}

static gchar*
bala_field_prototype_real_to_qualified_string (ValaDataType* base,
                                               ValaScope* scope)
{
	ValaFieldPrototype * self;
	ValaField* _tmp0_;
	ValaField* _tmp1_;
	gchar* _tmp2_;
	gchar* result = NULL;
	self = (ValaFieldPrototype*) base;
	_tmp0_ = bala_field_prototype_get_field_symbol (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = bala_symbol_get_full_name ((ValaSymbol*) _tmp1_);
	result = _tmp2_;
	return result;
}

static void
bala_field_prototype_class_init (ValaFieldPrototypeClass * klass,
                                 gpointer klass_data)
{
	bala_field_prototype_parent_class = g_type_class_peek_parent (klass);
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) bala_field_prototype_real_copy;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*) (ValaDataType*, ValaScope*)) bala_field_prototype_real_to_qualified_string;
}

static void
bala_field_prototype_instance_init (ValaFieldPrototype * self,
                                    gpointer klass)
{
}

/**
 * A reference to an instance field without a specific instance.
 */
static GType
bala_field_prototype_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaFieldPrototypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_field_prototype_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaFieldPrototype), 0, (GInstanceInitFunc) bala_field_prototype_instance_init, NULL };
	GType bala_field_prototype_type_id;
	bala_field_prototype_type_id = g_type_register_static (BALA_TYPE_DATA_TYPE, "ValaFieldPrototype", &g_define_type_info, 0);
	return bala_field_prototype_type_id;
}

GType
bala_field_prototype_get_type (void)
{
	static volatile gsize bala_field_prototype_type_id__volatile = 0;
	if (g_once_init_enter (&bala_field_prototype_type_id__volatile)) {
		GType bala_field_prototype_type_id;
		bala_field_prototype_type_id = bala_field_prototype_get_type_once ();
		g_once_init_leave (&bala_field_prototype_type_id__volatile, bala_field_prototype_type_id);
	}
	return bala_field_prototype_type_id__volatile;
}

