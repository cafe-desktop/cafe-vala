/* typesymbol.c generated by balac, the Bala compiler
 * generated from typesymbol.bala, do not modify */

/* typesymbol.bala
 *
 * Copyright (C) 2008-2009 Florian Brosch, Didier Villevalois
 * Copyright (C) 2011      Florian Brosch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */

#include "baladoc.h"
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <bala.h>
#include <balacodegen.h>

enum  {
	BALADOC_API_TYPESYMBOL_0_PROPERTY,
	BALADOC_API_TYPESYMBOL_IS_BASIC_TYPE_PROPERTY,
	BALADOC_API_TYPESYMBOL_NUM_PROPERTIES
};
static GParamSpec* baladoc_api_typesymbol_properties[BALADOC_API_TYPESYMBOL_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))

struct _BaladocApiTypeSymbolPrivate {
	gboolean _is_basic_type;
};

static gint BaladocApiTypeSymbol_private_offset;
static gpointer baladoc_api_typesymbol_parent_class = NULL;

static void baladoc_api_typesymbol_set_is_basic_type (BaladocApiTypeSymbol* self,
                                               gboolean value);
static void baladoc_api_typesymbol_finalize (GObject * obj);
static GType baladoc_api_typesymbol_get_type_once (void);
static void _bala_baladoc_api_typesymbol_get_property (GObject * object,
                                                guint property_id,
                                                GValue * value,
                                                GParamSpec * pspec);
static void _bala_baladoc_api_typesymbol_set_property (GObject * object,
                                                guint property_id,
                                                const GValue * value,
                                                GParamSpec * pspec);

static inline gpointer
baladoc_api_typesymbol_get_instance_private (BaladocApiTypeSymbol* self)
{
	return G_STRUCT_MEMBER_P (self, BaladocApiTypeSymbol_private_offset);
}

BaladocApiTypeSymbol*
baladoc_api_typesymbol_construct (GType object_type,
                                  BaladocApiNode* parent,
                                  BaladocApiSourceFile* file,
                                  const gchar* name,
                                  BalaSymbolAccessibility accessibility,
                                  BaladocApiSourceComment* comment,
                                  gboolean is_basic_type,
                                  BalaTypeSymbol* data)
{
	BaladocApiTypeSymbol * self = NULL;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	self = (BaladocApiTypeSymbol*) baladoc_api_symbol_construct (object_type, parent, file, name, accessibility, comment, (BalaSymbol*) data);
	baladoc_api_typesymbol_set_is_basic_type (self, is_basic_type);
	return self;
}

gboolean
baladoc_api_typesymbol_get_is_basic_type (BaladocApiTypeSymbol* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_basic_type;
	return result;
}

static void
baladoc_api_typesymbol_set_is_basic_type (BaladocApiTypeSymbol* self,
                                          gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = baladoc_api_typesymbol_get_is_basic_type (self);
	if (old_value != value) {
		self->priv->_is_basic_type = value;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_typesymbol_properties[BALADOC_API_TYPESYMBOL_IS_BASIC_TYPE_PROPERTY]);
	}
}

/**
 * Gets the name of the GType macro which represents the type symbol
 */
gchar*
baladoc_api_typesymbol_get_type_macro_name (BaladocApiTypeSymbol* self)
{
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	BalaCodeNode* _tmp3_;
	BalaCodeNode* _tmp4_;
	BalaCodeNode* _tmp13_;
	BalaCodeNode* _tmp14_;
	gchar* _tmp15_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp3_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
	_tmp4_ = _tmp3_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, BALA_TYPE_CLASS)) {
		BalaCodeNode* _tmp5_;
		BalaCodeNode* _tmp6_;
		gboolean _tmp7_;
		gboolean _tmp8_;
		_tmp5_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp6_ = _tmp5_;
		_tmp7_ = bala_class_get_is_compact (G_TYPE_CHECK_INSTANCE_CAST (_tmp6_, BALA_TYPE_CLASS, BalaClass));
		_tmp8_ = _tmp7_;
		_tmp2_ = _tmp8_;
	} else {
		_tmp2_ = FALSE;
	}
	if (_tmp2_) {
		_tmp1_ = TRUE;
	} else {
		BalaCodeNode* _tmp9_;
		BalaCodeNode* _tmp10_;
		_tmp9_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp10_ = _tmp9_;
		_tmp1_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp10_, BALA_TYPE_ERROR_DOMAIN);
	}
	if (_tmp1_) {
		_tmp0_ = TRUE;
	} else {
		BalaCodeNode* _tmp11_;
		BalaCodeNode* _tmp12_;
		_tmp11_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp12_ = _tmp11_;
		_tmp0_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp12_, BALA_TYPE_DELEGATE);
	}
	if (_tmp0_) {
		result = NULL;
		return result;
	}
	_tmp13_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
	_tmp14_ = _tmp13_;
	_tmp15_ = bala_get_ccode_type_id (_tmp14_);
	result = _tmp15_;
	return result;
}

/**
 * Gets the name of the GType macro which casts a type instance to the given type.
 */
gchar*
baladoc_api_typesymbol_get_type_cast_macro_name (BaladocApiTypeSymbol* self)
{
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	BalaCodeNode* _tmp2_;
	BalaCodeNode* _tmp3_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp2_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
	_tmp3_ = _tmp2_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp3_, BALA_TYPE_CLASS)) {
		BalaCodeNode* _tmp4_;
		BalaCodeNode* _tmp5_;
		gboolean _tmp6_;
		gboolean _tmp7_;
		_tmp4_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp5_ = _tmp4_;
		_tmp6_ = bala_class_get_is_compact (G_TYPE_CHECK_INSTANCE_CAST (_tmp5_, BALA_TYPE_CLASS, BalaClass));
		_tmp7_ = _tmp6_;
		_tmp1_ = !_tmp7_;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		_tmp0_ = TRUE;
	} else {
		BalaCodeNode* _tmp8_;
		BalaCodeNode* _tmp9_;
		_tmp8_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp9_ = _tmp8_;
		_tmp0_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp9_, BALA_TYPE_INTERFACE);
	}
	if (_tmp0_) {
		BalaCodeNode* _tmp10_;
		BalaCodeNode* _tmp11_;
		gchar* _tmp12_;
		_tmp10_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp11_ = _tmp10_;
		_tmp12_ = bala_get_ccode_upper_case_name ((BalaSymbol*) G_TYPE_CHECK_INSTANCE_CAST (_tmp11_, BALA_TYPE_TYPESYMBOL, BalaTypeSymbol), NULL);
		result = _tmp12_;
		return result;
	} else {
		result = NULL;
		return result;
	}
}

/**
 * Gets the name of the GType macro which determines whether a type instance is of a given type.
 */
gchar*
baladoc_api_typesymbol_get_is_type_macro_name (BaladocApiTypeSymbol* self)
{
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	BalaCodeNode* _tmp2_;
	BalaCodeNode* _tmp3_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp2_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
	_tmp3_ = _tmp2_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp3_, BALA_TYPE_CLASS)) {
		BalaCodeNode* _tmp4_;
		BalaCodeNode* _tmp5_;
		gboolean _tmp6_;
		gboolean _tmp7_;
		_tmp4_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp5_ = _tmp4_;
		_tmp6_ = bala_class_get_is_compact (G_TYPE_CHECK_INSTANCE_CAST (_tmp5_, BALA_TYPE_CLASS, BalaClass));
		_tmp7_ = _tmp6_;
		_tmp1_ = !_tmp7_;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		_tmp0_ = TRUE;
	} else {
		BalaCodeNode* _tmp8_;
		BalaCodeNode* _tmp9_;
		_tmp8_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp9_ = _tmp8_;
		_tmp0_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp9_, BALA_TYPE_INTERFACE);
	}
	if (_tmp0_) {
		BalaCodeNode* _tmp10_;
		BalaCodeNode* _tmp11_;
		gchar* _tmp12_;
		_tmp10_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp11_ = _tmp10_;
		_tmp12_ = bala_get_ccode_type_check_function (G_TYPE_CHECK_INSTANCE_CAST (_tmp11_, BALA_TYPE_TYPESYMBOL, BalaTypeSymbol));
		result = _tmp12_;
		return result;
	} else {
		result = NULL;
		return result;
	}
}

/**
 * Gets the name of the get_type() function which represents the type symbol
 */
gchar*
baladoc_api_typesymbol_get_type_function_name (BaladocApiTypeSymbol* self)
{
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	BalaCodeNode* _tmp3_;
	BalaCodeNode* _tmp4_;
	BalaCodeNode* _tmp13_;
	BalaCodeNode* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp3_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
	_tmp4_ = _tmp3_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, BALA_TYPE_CLASS)) {
		BalaCodeNode* _tmp5_;
		BalaCodeNode* _tmp6_;
		gboolean _tmp7_;
		gboolean _tmp8_;
		_tmp5_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp6_ = _tmp5_;
		_tmp7_ = bala_class_get_is_compact (G_TYPE_CHECK_INSTANCE_CAST (_tmp6_, BALA_TYPE_CLASS, BalaClass));
		_tmp8_ = _tmp7_;
		_tmp2_ = _tmp8_;
	} else {
		_tmp2_ = FALSE;
	}
	if (_tmp2_) {
		_tmp1_ = TRUE;
	} else {
		BalaCodeNode* _tmp9_;
		BalaCodeNode* _tmp10_;
		_tmp9_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp10_ = _tmp9_;
		_tmp1_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp10_, BALA_TYPE_ERROR_DOMAIN);
	}
	if (_tmp1_) {
		_tmp0_ = TRUE;
	} else {
		BalaCodeNode* _tmp11_;
		BalaCodeNode* _tmp12_;
		_tmp11_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
		_tmp12_ = _tmp11_;
		_tmp0_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp12_, BALA_TYPE_DELEGATE);
	}
	if (_tmp0_) {
		result = NULL;
		return result;
	}
	_tmp13_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
	_tmp14_ = _tmp13_;
	_tmp15_ = bala_get_ccode_lower_case_name (_tmp14_, NULL);
	_tmp16_ = _tmp15_;
	_tmp17_ = g_strdup_printf ("%s_get_type", _tmp16_);
	_tmp18_ = _tmp17_;
	_g_free0 (_tmp16_);
	result = _tmp18_;
	return result;
}

static void
baladoc_api_typesymbol_class_init (BaladocApiTypeSymbolClass * klass,
                                   gpointer klass_data)
{
	baladoc_api_typesymbol_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &BaladocApiTypeSymbol_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _bala_baladoc_api_typesymbol_get_property;
	G_OBJECT_CLASS (klass)->set_property = _bala_baladoc_api_typesymbol_set_property;
	G_OBJECT_CLASS (klass)->finalize = baladoc_api_typesymbol_finalize;
	/**
	 * Specifies whether this symbol is a basic type (string, int, char, etc)
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_TYPESYMBOL_IS_BASIC_TYPE_PROPERTY, baladoc_api_typesymbol_properties[BALADOC_API_TYPESYMBOL_IS_BASIC_TYPE_PROPERTY] = g_param_spec_boolean ("is-basic-type", "is-basic-type", "is-basic-type", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
baladoc_api_typesymbol_instance_init (BaladocApiTypeSymbol * self,
                                      gpointer klass)
{
	self->priv = baladoc_api_typesymbol_get_instance_private (self);
}

static void
baladoc_api_typesymbol_finalize (GObject * obj)
{
	BaladocApiTypeSymbol * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_API_TYPE_TYPESYMBOL, BaladocApiTypeSymbol);
	G_OBJECT_CLASS (baladoc_api_typesymbol_parent_class)->finalize (obj);
}

/**
 * Represents a runtime data type.
 */
static GType
baladoc_api_typesymbol_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BaladocApiTypeSymbolClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_api_typesymbol_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BaladocApiTypeSymbol), 0, (GInstanceInitFunc) baladoc_api_typesymbol_instance_init, NULL };
	GType baladoc_api_typesymbol_type_id;
	baladoc_api_typesymbol_type_id = g_type_register_static (BALADOC_API_TYPE_SYMBOL, "BaladocApiTypeSymbol", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	BaladocApiTypeSymbol_private_offset = g_type_add_instance_private (baladoc_api_typesymbol_type_id, sizeof (BaladocApiTypeSymbolPrivate));
	return baladoc_api_typesymbol_type_id;
}

GType
baladoc_api_typesymbol_get_type (void)
{
	static volatile gsize baladoc_api_typesymbol_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_api_typesymbol_type_id__volatile)) {
		GType baladoc_api_typesymbol_type_id;
		baladoc_api_typesymbol_type_id = baladoc_api_typesymbol_get_type_once ();
		g_once_init_leave (&baladoc_api_typesymbol_type_id__volatile, baladoc_api_typesymbol_type_id);
	}
	return baladoc_api_typesymbol_type_id__volatile;
}

static void
_bala_baladoc_api_typesymbol_get_property (GObject * object,
                                           guint property_id,
                                           GValue * value,
                                           GParamSpec * pspec)
{
	BaladocApiTypeSymbol * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BALADOC_API_TYPE_TYPESYMBOL, BaladocApiTypeSymbol);
	switch (property_id) {
		case BALADOC_API_TYPESYMBOL_IS_BASIC_TYPE_PROPERTY:
		g_value_set_boolean (value, baladoc_api_typesymbol_get_is_basic_type (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_bala_baladoc_api_typesymbol_set_property (GObject * object,
                                           guint property_id,
                                           const GValue * value,
                                           GParamSpec * pspec)
{
	BaladocApiTypeSymbol * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BALADOC_API_TYPE_TYPESYMBOL, BaladocApiTypeSymbol);
	switch (property_id) {
		case BALADOC_API_TYPESYMBOL_IS_BASIC_TYPE_PROPERTY:
		baladoc_api_typesymbol_set_is_basic_type (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

