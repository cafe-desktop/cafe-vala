/* class.c generated by balac, the Bala compiler
 * generated from class.bala, do not modify */

/* class.bala
 *
 * Copyright (C) 2008-2011  Florian Brosch
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
 * 	Florian Brosch <flo.brosch@gmail.com>
 */

#include "baladoc.h"
#include <balagee.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <bala.h>
#include <balacodegen.h>

enum  {
	BALADOC_API_CLASS_0_PROPERTY,
	BALADOC_API_CLASS_BASE_TYPE_PROPERTY,
	BALADOC_API_CLASS_IS_ABSTRACT_PROPERTY,
	BALADOC_API_CLASS_IS_SEALED_PROPERTY,
	BALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY,
	BALADOC_API_CLASS_IS_COMPACT_PROPERTY,
	BALADOC_API_CLASS_NODE_TYPE_PROPERTY,
	BALADOC_API_CLASS_NUM_PROPERTIES
};
static GParamSpec* baladoc_api_class_properties[BALADOC_API_CLASS_NUM_PROPERTIES];
#define _bala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (bala_iterable_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _baladoc_api_signature_builder_unref0(var) ((var == NULL) ? NULL : (var = (baladoc_api_signature_builder_unref (var), NULL)))

struct _BaladocApiClassPrivate {
	BalaArrayList* interfaces;
	gchar* dbus_name;
	gchar* take_value_function_cname;
	gchar* get_value_function_cname;
	gchar* set_value_function_cname;
	gchar* unref_function_name;
	gchar* ref_function_name;
	gchar* free_function_name;
	gchar* finalize_function_name;
	gchar* param_spec_function_name;
	gchar* type_id;
	gchar* is_class_type_macro_name;
	gchar* class_type_macro_name;
	gchar* class_macro_name;
	gchar* private_cname;
	gchar* cname;
	BaladocApiTypeReference* _base_type;
	BalaCollection* _full_implemented_interfaces;
	gboolean _is_abstract;
	gboolean _is_sealed;
	gboolean _is_fundamental;
	BalaSet* _known_derived_interfaces;
	BalaSet* _known_child_classes;
};

static gint BaladocApiClass_private_offset;
static gpointer baladoc_api_class_parent_class = NULL;

static gchar* _baladoc_api_class_get_private_cname (BaladocApiClass* self,
                                             BalaClass* element);
static void baladoc_api_class_set_is_fundamental (BaladocApiClass* self,
                                           gboolean value);
static void baladoc_api_class_set_is_abstract (BaladocApiClass* self,
                                        gboolean value);
static void baladoc_api_class_set_is_sealed (BaladocApiClass* self,
                                      gboolean value);
static void baladoc_api_class_real_accept (BaladocApiNode* base,
                                    BaladocApiVisitor* visitor);
static BaladocContentInline* baladoc_api_class_real_build_signature (BaladocApiItem* base);
static void baladoc_api_class_finalize (GObject * obj);
static GType baladoc_api_class_get_type_once (void);
static void _bala_baladoc_api_class_get_property (GObject * object,
                                           guint property_id,
                                           GValue * value,
                                           GParamSpec * pspec);
static void _bala_baladoc_api_class_set_property (GObject * object,
                                           guint property_id,
                                           const GValue * value,
                                           GParamSpec * pspec);

static inline gpointer
baladoc_api_class_get_instance_private (BaladocApiClass* self)
{
	return G_STRUCT_MEMBER_P (self, BaladocApiClass_private_offset);
}

BaladocApiClass*
baladoc_api_class_construct (GType object_type,
                             BaladocApiNode* parent,
                             BaladocApiSourceFile* file,
                             const gchar* name,
                             BalaSymbolAccessibility accessibility,
                             BaladocApiSourceComment* comment,
                             BalaClass* data)
{
	BaladocApiClass * self = NULL;
	gboolean _tmp0_ = FALSE;
	BalaClass* _tmp1_;
	BalaClass* _tmp2_;
	gboolean is_basic_type = FALSE;
	GEqualFunc _tmp5_;
	BalaArrayList* _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	gchar* _tmp19_ = NULL;
	gchar* _tmp23_;
	gchar* _tmp24_ = NULL;
	gboolean _tmp25_;
	gboolean _tmp26_;
	gchar* _tmp28_;
	gchar* _tmp29_;
	gchar* _tmp30_;
	gchar* _tmp31_;
	gboolean _tmp32_;
	gboolean _tmp33_;
	gboolean _tmp34_;
	gboolean _tmp35_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	_tmp1_ = bala_class_get_base_class (data);
	_tmp2_ = _tmp1_;
	if (_tmp2_ == NULL) {
		const gchar* _tmp3_;
		const gchar* _tmp4_;
		_tmp3_ = bala_symbol_get_name ((BalaSymbol*) data);
		_tmp4_ = _tmp3_;
		_tmp0_ = g_strcmp0 (_tmp4_, "string") == 0;
	} else {
		_tmp0_ = FALSE;
	}
	is_basic_type = _tmp0_;
	self = (BaladocApiClass*) baladoc_api_typesymbol_construct (object_type, parent, file, name, accessibility, comment, is_basic_type, (BalaTypeSymbol*) data);
	_tmp5_ = g_direct_equal;
	_tmp6_ = bala_array_list_new (BALADOC_API_TYPE_TYPEREFERENCE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp5_);
	_bala_iterable_unref0 (self->priv->interfaces);
	self->priv->interfaces = _tmp6_;
	_tmp7_ = bala_class_get_is_compact (data);
	_tmp8_ = _tmp7_;
	if (!_tmp8_) {
		gchar* _tmp9_;
		gchar* _tmp10_;
		gchar* _tmp11_;
		gchar* _tmp12_;
		_tmp9_ = bala_get_ccode_class_type_check_function (data);
		_g_free0 (self->priv->is_class_type_macro_name);
		self->priv->is_class_type_macro_name = _tmp9_;
		_tmp10_ = bala_get_ccode_class_type_function (data);
		_g_free0 (self->priv->class_type_macro_name);
		self->priv->class_type_macro_name = _tmp10_;
		_tmp11_ = bala_get_ccode_type_get_function ((BalaObjectTypeSymbol*) data);
		_g_free0 (self->priv->class_macro_name);
		self->priv->class_macro_name = _tmp11_;
		_tmp12_ = _baladoc_api_class_get_private_cname (self, data);
		_g_free0 (self->priv->private_cname);
		self->priv->private_cname = _tmp12_;
	}
	_tmp13_ = bala_gd_bus_module_get_dbus_name ((BalaTypeSymbol*) data);
	_g_free0 (self->priv->dbus_name);
	self->priv->dbus_name = _tmp13_;
	_tmp14_ = bala_get_ccode_type_id ((BalaCodeNode*) data);
	_g_free0 (self->priv->type_id);
	self->priv->type_id = _tmp14_;
	_tmp15_ = bala_get_ccode_name ((BalaCodeNode*) data);
	_g_free0 (self->priv->cname);
	self->priv->cname = _tmp15_;
	_tmp16_ = bala_get_ccode_param_spec_function ((BalaCodeNode*) data);
	_g_free0 (self->priv->param_spec_function_name);
	self->priv->param_spec_function_name = _tmp16_;
	_tmp17_ = bala_get_ccode_unref_function ((BalaObjectTypeSymbol*) data);
	_g_free0 (self->priv->unref_function_name);
	self->priv->unref_function_name = _tmp17_;
	_tmp18_ = bala_get_ccode_ref_function ((BalaTypeSymbol*) data);
	_g_free0 (self->priv->ref_function_name);
	self->priv->ref_function_name = _tmp18_;
	if (bala_class_is_fundamental (data)) {
		gchar* _tmp20_;
		gchar* _tmp21_;
		gchar* _tmp22_;
		_tmp20_ = bala_get_ccode_lower_case_prefix ((BalaSymbol*) data);
		_tmp21_ = _tmp20_;
		_tmp22_ = g_strdup_printf ("%sfinalize", _tmp21_);
		_g_free0 (_tmp19_);
		_tmp19_ = _tmp22_;
		_g_free0 (_tmp21_);
	} else {
		_g_free0 (_tmp19_);
		_tmp19_ = NULL;
	}
	_tmp23_ = g_strdup (_tmp19_);
	_g_free0 (self->priv->finalize_function_name);
	self->priv->finalize_function_name = _tmp23_;
	_tmp25_ = bala_class_get_is_compact (data);
	_tmp26_ = _tmp25_;
	if (_tmp26_) {
		gchar* _tmp27_;
		_tmp27_ = bala_get_ccode_free_function ((BalaTypeSymbol*) data);
		_g_free0 (_tmp24_);
		_tmp24_ = _tmp27_;
	} else {
		_g_free0 (_tmp24_);
		_tmp24_ = NULL;
	}
	_tmp28_ = g_strdup (_tmp24_);
	_g_free0 (self->priv->free_function_name);
	self->priv->free_function_name = _tmp28_;
	_tmp29_ = bala_get_ccode_take_value_function ((BalaCodeNode*) data);
	_g_free0 (self->priv->take_value_function_cname);
	self->priv->take_value_function_cname = _tmp29_;
	_tmp30_ = bala_get_ccode_get_value_function ((BalaCodeNode*) data);
	_g_free0 (self->priv->get_value_function_cname);
	self->priv->get_value_function_cname = _tmp30_;
	_tmp31_ = bala_get_ccode_set_value_function ((BalaCodeNode*) data);
	_g_free0 (self->priv->set_value_function_cname);
	self->priv->set_value_function_cname = _tmp31_;
	baladoc_api_class_set_is_fundamental (self, bala_class_is_fundamental (data));
	_tmp32_ = bala_class_get_is_abstract (data);
	_tmp33_ = _tmp32_;
	baladoc_api_class_set_is_abstract (self, _tmp33_);
	_tmp34_ = bala_class_get_is_sealed (data);
	_tmp35_ = _tmp34_;
	baladoc_api_class_set_is_sealed (self, _tmp35_);
	_g_free0 (_tmp24_);
	_g_free0 (_tmp19_);
	return self;
}

BaladocApiClass*
baladoc_api_class_new (BaladocApiNode* parent,
                       BaladocApiSourceFile* file,
                       const gchar* name,
                       BalaSymbolAccessibility accessibility,
                       BaladocApiSourceComment* comment,
                       BalaClass* data)
{
	return baladoc_api_class_construct (BALADOC_API_TYPE_CLASS, parent, file, name, accessibility, comment, data);
}

static gchar*
_baladoc_api_class_get_private_cname (BaladocApiClass* self,
                                      BalaClass* element)
{
	gboolean _tmp0_;
	gboolean _tmp1_;
	gchar* cname = NULL;
	gchar* _tmp2_;
	gchar* _tmp3_ = NULL;
	const gchar* _tmp4_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (element != NULL, NULL);
	_tmp0_ = bala_class_get_is_compact (element);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		result = NULL;
		return result;
	}
	_tmp2_ = bala_get_ccode_name ((BalaCodeNode*) element);
	cname = _tmp2_;
	_tmp4_ = cname;
	if (_tmp4_ != NULL) {
		const gchar* _tmp5_;
		gchar* _tmp6_;
		_tmp5_ = cname;
		_tmp6_ = g_strconcat (_tmp5_, "Private", NULL);
		_g_free0 (_tmp3_);
		_tmp3_ = _tmp6_;
	} else {
		_g_free0 (_tmp3_);
		_tmp3_ = NULL;
	}
	result = _tmp3_;
	_g_free0 (cname);
	return result;
}

BaladocApiTypeReference*
baladoc_api_class_get_base_type (BaladocApiClass* self)
{
	BaladocApiTypeReference* result;
	BaladocApiTypeReference* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_base_type;
	result = _tmp0_;
	return result;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

void
baladoc_api_class_set_base_type (BaladocApiClass* self,
                                 BaladocApiTypeReference* value)
{
	BaladocApiTypeReference* old_value;
	g_return_if_fail (self != NULL);
	old_value = baladoc_api_class_get_base_type (self);
	if (old_value != value) {
		BaladocApiTypeReference* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_base_type);
		self->priv->_base_type = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_class_properties[BALADOC_API_CLASS_BASE_TYPE_PROPERTY]);
	}
}

/**
 * Returns the name of this class as it is used in C.
 */
gchar*
baladoc_api_class_get_cname (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the name of this class' private data structure as it is used in C.
 */
gchar*
baladoc_api_class_get_private_cname (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->private_cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the C symbol representing the runtime type id for this data type.
 */
gchar*
baladoc_api_class_get_type_id (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->type_id;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the C function name that increments the reference count of
 * instances of this data type.
 *
 * @return the name of the C function or null if this data type does not
 *         support reference counting
 */
gchar*
baladoc_api_class_get_ref_function_cname (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->ref_function_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the C function name that decrements the reference count of
 * instances of this data type.
 *
 * @return the name of the C function or null if this data type does not
 *         support reference counting
 */
gchar*
baladoc_api_class_get_unref_function_cname (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->unref_function_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the C function name that frees the
 * instances of this data type.
 *
 * @return the name of the C function or null
 */
gchar*
baladoc_api_class_get_free_function_name (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->free_function_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the C function name that finalizes the
 * instances of this data type.
 *
 * @return the name of the C function or null
 */
gchar*
baladoc_api_class_get_finalize_function_name (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->finalize_function_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the cname of the GValue parameter spec function.
 */
gchar*
baladoc_api_class_get_param_spec_function_cname (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->param_spec_function_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the cname of the GValue setter function.
 */
gchar*
baladoc_api_class_get_set_value_function_cname (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->set_value_function_cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the cname of the GValue getter function.
 */
gchar*
baladoc_api_class_get_get_value_function_cname (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->get_value_function_cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the cname of the GValue taker function.
 */
gchar*
baladoc_api_class_get_take_value_function_cname (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->take_value_function_cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the dbus-name.
 */
gchar*
baladoc_api_class_get_dbus_name (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->dbus_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Gets the name of the GType macro which returns the class struct.
 */
gchar*
baladoc_api_class_get_class_macro_name (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->class_macro_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Gets the name of the GType macro which returns the type of the class.
 */
gchar*
baladoc_api_class_get_class_type_macro_name (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->class_type_macro_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Gets the name of the GType macro which returns whether a class instance is of a given type.
 */
gchar*
baladoc_api_class_get_is_class_type_macro_name (BaladocApiClass* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->is_class_type_macro_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns a list of all newly implemented interfaces.
 *
 * @see get_full_implemented_interface_list
 */
static gpointer
_bala_iterable_ref0 (gpointer self)
{
	return self ? bala_iterable_ref (self) : NULL;
}

BalaCollection*
baladoc_api_class_get_implemented_interface_list (BaladocApiClass* self)
{
	BalaArrayList* _tmp0_;
	BalaCollection* _tmp1_;
	BalaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->interfaces;
	_tmp1_ = _bala_iterable_ref0 ((BalaCollection*) _tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns a list of all implemented interfaces.
 *
 * @see get_implemented_interface_list
 */
BalaCollection*
baladoc_api_class_get_full_implemented_interface_list (BaladocApiClass* self)
{
	BalaCollection* _tmp0_;
	BalaCollection* _tmp12_;
	BalaCollection* _tmp13_;
	BalaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_full_implemented_interfaces;
	if (_tmp0_ == NULL) {
		GEqualFunc _tmp1_;
		BalaArrayList* _tmp2_;
		BalaCollection* _tmp3_;
		BalaArrayList* _tmp4_;
		BaladocApiTypeReference* _tmp5_;
		_tmp1_ = g_direct_equal;
		_tmp2_ = bala_array_list_new (BALADOC_API_TYPE_TYPEREFERENCE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp1_);
		_bala_iterable_unref0 (self->priv->_full_implemented_interfaces);
		self->priv->_full_implemented_interfaces = (BalaCollection*) _tmp2_;
		_tmp3_ = self->priv->_full_implemented_interfaces;
		_tmp4_ = self->priv->interfaces;
		bala_collection_add_all (_tmp3_, (BalaCollection*) _tmp4_);
		_tmp5_ = self->priv->_base_type;
		if (_tmp5_ != NULL) {
			BalaCollection* _tmp6_;
			BaladocApiTypeReference* _tmp7_;
			BaladocApiItem* _tmp8_;
			BaladocApiItem* _tmp9_;
			BalaCollection* _tmp10_;
			BalaCollection* _tmp11_;
			_tmp6_ = self->priv->_full_implemented_interfaces;
			_tmp7_ = self->priv->_base_type;
			_tmp8_ = baladoc_api_typereference_get_data_type (_tmp7_);
			_tmp9_ = _tmp8_;
			_tmp10_ = baladoc_api_class_get_full_implemented_interface_list (G_TYPE_CHECK_INSTANCE_CAST (_tmp9_, BALADOC_API_TYPE_CLASS, BaladocApiClass));
			_tmp11_ = _tmp10_;
			bala_collection_add_all (_tmp6_, _tmp11_);
			_bala_iterable_unref0 (_tmp11_);
		}
	}
	_tmp12_ = self->priv->_full_implemented_interfaces;
	_tmp13_ = _bala_iterable_ref0 (_tmp12_);
	result = _tmp13_;
	return result;
}

void
baladoc_api_class_add_interface (BaladocApiClass* self,
                                 BaladocApiTypeReference* iface)
{
	BalaArrayList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (iface != NULL);
	_tmp0_ = self->priv->interfaces;
	bala_collection_add ((BalaCollection*) _tmp0_, iface);
}

gboolean
baladoc_api_class_get_is_abstract (BaladocApiClass* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_abstract;
	return result;
}

static void
baladoc_api_class_set_is_abstract (BaladocApiClass* self,
                                   gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = baladoc_api_class_get_is_abstract (self);
	if (old_value != value) {
		self->priv->_is_abstract = value;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_class_properties[BALADOC_API_CLASS_IS_ABSTRACT_PROPERTY]);
	}
}

gboolean
baladoc_api_class_get_is_sealed (BaladocApiClass* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_sealed;
	return result;
}

static void
baladoc_api_class_set_is_sealed (BaladocApiClass* self,
                                 gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = baladoc_api_class_get_is_sealed (self);
	if (old_value != value) {
		self->priv->_is_sealed = value;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_class_properties[BALADOC_API_CLASS_IS_SEALED_PROPERTY]);
	}
}

gboolean
baladoc_api_class_get_is_fundamental (BaladocApiClass* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_fundamental;
	return result;
}

static void
baladoc_api_class_set_is_fundamental (BaladocApiClass* self,
                                      gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = baladoc_api_class_get_is_fundamental (self);
	if (old_value != value) {
		self->priv->_is_fundamental = value;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_class_properties[BALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY]);
	}
}

gboolean
baladoc_api_class_get_is_compact (BaladocApiClass* self)
{
	gboolean result;
	BalaCodeNode* _tmp0_;
	BalaCodeNode* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = baladoc_api_item_get_data ((BaladocApiItem*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = bala_class_get_is_compact (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, BALA_TYPE_CLASS, BalaClass));
	_tmp3_ = _tmp2_;
	result = _tmp3_;
	return result;
}

static BaladocApiNodeType
baladoc_api_class_real_get_node_type (BaladocApiNode* base)
{
	BaladocApiNodeType result;
	BaladocApiClass* self;
	self = (BaladocApiClass*) base;
	result = BALADOC_API_NODE_TYPE_CLASS;
	return result;
}

/**
 * {@inheritDoc}
 */
static void
baladoc_api_class_real_accept (BaladocApiNode* base,
                               BaladocApiVisitor* visitor)
{
	BaladocApiClass * self;
	self = (BaladocApiClass*) base;
	g_return_if_fail (visitor != NULL);
	baladoc_api_visitor_visit_class (visitor, self);
}

/**
 * Returns a list of all known classes based on this class
 */
BalaCollection*
baladoc_api_class_get_known_child_classes (BaladocApiClass* self)
{
	BalaSet* _tmp0_;
	BalaCollection* _tmp1_;
	BalaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_known_child_classes;
	_tmp1_ = _bala_iterable_ref0 ((BalaCollection*) _tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns a list of all known interfaces based on this class
 */
BalaCollection*
baladoc_api_class_get_known_derived_interfaces (BaladocApiClass* self)
{
	BalaSet* _tmp0_;
	BalaCollection* _tmp1_;
	BalaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_known_derived_interfaces;
	_tmp1_ = _bala_iterable_ref0 ((BalaCollection*) _tmp0_);
	result = _tmp1_;
	return result;
}

void
baladoc_api_class_register_derived_interface (BaladocApiClass* self,
                                              BaladocApiInterface* iface)
{
	BalaSet* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (iface != NULL);
	_tmp0_ = self->priv->_known_derived_interfaces;
	bala_collection_add ((BalaCollection*) _tmp0_, iface);
}

void
baladoc_api_class_register_child_class (BaladocApiClass* self,
                                        BaladocApiClass* cl)
{
	BaladocApiTypeReference* _tmp0_;
	BalaSet* _tmp4_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (cl != NULL);
	_tmp0_ = self->priv->_base_type;
	if (_tmp0_ != NULL) {
		BaladocApiTypeReference* _tmp1_;
		BaladocApiItem* _tmp2_;
		BaladocApiItem* _tmp3_;
		_tmp1_ = self->priv->_base_type;
		_tmp2_ = baladoc_api_typereference_get_data_type (_tmp1_);
		_tmp3_ = _tmp2_;
		baladoc_api_class_register_child_class (G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, BALADOC_API_TYPE_CLASS, BaladocApiClass), cl);
	}
	_tmp4_ = self->priv->_known_child_classes;
	bala_collection_add ((BalaCollection*) _tmp4_, cl);
}

/**
 * {@inheritDoc}
 */
static BaladocContentInline*
baladoc_api_class_real_build_signature (BaladocApiItem* base)
{
	BaladocApiClass * self;
	BaladocApiSignatureBuilder* signature = NULL;
	BaladocApiSignatureBuilder* _tmp0_;
	BaladocApiSignatureBuilder* _tmp1_;
	BalaSymbolAccessibility _tmp2_;
	BalaSymbolAccessibility _tmp3_;
	const gchar* _tmp4_;
	gboolean _tmp5_;
	gboolean _tmp7_;
	BaladocApiSignatureBuilder* _tmp9_;
	BaladocApiSignatureBuilder* _tmp10_;
	BalaList* type_parameters = NULL;
	BalaList* _tmp11_;
	BalaList* _tmp12_;
	gint _tmp13_;
	gint _tmp14_;
	gboolean first = FALSE;
	BaladocApiTypeReference* _tmp31_;
	BalaArrayList* _tmp37_;
	gint _tmp38_;
	gint _tmp39_;
	BaladocApiSignatureBuilder* _tmp55_;
	BaladocContentRun* _tmp56_;
	BaladocContentInline* result = NULL;
	self = (BaladocApiClass*) base;
	_tmp0_ = baladoc_api_signature_builder_new ();
	signature = _tmp0_;
	_tmp1_ = signature;
	_tmp2_ = baladoc_api_symbol_get_accessibility ((BaladocApiSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = bala_symbol_accessibility_to_string (_tmp3_);
	baladoc_api_signature_builder_append_keyword (_tmp1_, _tmp4_, TRUE);
	_tmp5_ = self->priv->_is_abstract;
	if (_tmp5_) {
		BaladocApiSignatureBuilder* _tmp6_;
		_tmp6_ = signature;
		baladoc_api_signature_builder_append_keyword (_tmp6_, "abstract", TRUE);
	}
	_tmp7_ = self->priv->_is_sealed;
	if (_tmp7_) {
		BaladocApiSignatureBuilder* _tmp8_;
		_tmp8_ = signature;
		baladoc_api_signature_builder_append_keyword (_tmp8_, "sealed", TRUE);
	}
	_tmp9_ = signature;
	baladoc_api_signature_builder_append_keyword (_tmp9_, "class", TRUE);
	_tmp10_ = signature;
	baladoc_api_signature_builder_append_symbol (_tmp10_, (BaladocApiNode*) self, TRUE);
	_tmp11_ = baladoc_api_node_get_children_by_type ((BaladocApiNode*) self, BALADOC_API_NODE_TYPE_TYPE_PARAMETER, FALSE);
	type_parameters = _tmp11_;
	_tmp12_ = type_parameters;
	_tmp13_ = bala_collection_get_size ((BalaCollection*) _tmp12_);
	_tmp14_ = _tmp13_;
	if (_tmp14_ > 0) {
		BaladocApiSignatureBuilder* _tmp15_;
		gboolean first = FALSE;
		BaladocApiSignatureBuilder* _tmp30_;
		_tmp15_ = signature;
		baladoc_api_signature_builder_append (_tmp15_, "<", FALSE);
		first = TRUE;
		{
			BalaList* _param_list = NULL;
			BalaList* _tmp16_;
			BalaList* _tmp17_;
			gint _param_size = 0;
			BalaList* _tmp18_;
			gint _tmp19_;
			gint _tmp20_;
			gint _param_index = 0;
			_tmp16_ = type_parameters;
			_tmp17_ = _bala_iterable_ref0 (_tmp16_);
			_param_list = _tmp17_;
			_tmp18_ = _param_list;
			_tmp19_ = bala_collection_get_size ((BalaCollection*) _tmp18_);
			_tmp20_ = _tmp19_;
			_param_size = _tmp20_;
			_param_index = -1;
			while (TRUE) {
				gint _tmp21_;
				gint _tmp22_;
				BaladocApiItem* param = NULL;
				BalaList* _tmp23_;
				gpointer _tmp24_;
				BaladocApiSignatureBuilder* _tmp26_;
				BaladocApiItem* _tmp27_;
				BaladocContentInline* _tmp28_;
				BaladocContentInline* _tmp29_;
				_param_index = _param_index + 1;
				_tmp21_ = _param_index;
				_tmp22_ = _param_size;
				if (!(_tmp21_ < _tmp22_)) {
					break;
				}
				_tmp23_ = _param_list;
				_tmp24_ = bala_list_get (_tmp23_, _param_index);
				param = (BaladocApiItem*) ((BaladocApiNode*) _tmp24_);
				if (!first) {
					BaladocApiSignatureBuilder* _tmp25_;
					_tmp25_ = signature;
					baladoc_api_signature_builder_append (_tmp25_, ",", FALSE);
				}
				_tmp26_ = signature;
				_tmp27_ = param;
				_tmp28_ = baladoc_api_item_get_signature (_tmp27_);
				_tmp29_ = _tmp28_;
				baladoc_api_signature_builder_append_content (_tmp26_, _tmp29_, FALSE);
				first = FALSE;
				_g_object_unref0 (param);
			}
			_bala_iterable_unref0 (_param_list);
		}
		_tmp30_ = signature;
		baladoc_api_signature_builder_append (_tmp30_, ">", FALSE);
	}
	first = TRUE;
	_tmp31_ = self->priv->_base_type;
	if (_tmp31_ != NULL) {
		BaladocApiSignatureBuilder* _tmp32_;
		BaladocApiSignatureBuilder* _tmp33_;
		BaladocApiTypeReference* _tmp34_;
		BaladocContentInline* _tmp35_;
		BaladocContentInline* _tmp36_;
		_tmp32_ = signature;
		baladoc_api_signature_builder_append (_tmp32_, ":", TRUE);
		_tmp33_ = signature;
		_tmp34_ = self->priv->_base_type;
		_tmp35_ = baladoc_api_item_get_signature ((BaladocApiItem*) _tmp34_);
		_tmp36_ = _tmp35_;
		baladoc_api_signature_builder_append_content (_tmp33_, _tmp36_, TRUE);
		first = FALSE;
	}
	_tmp37_ = self->priv->interfaces;
	_tmp38_ = bala_collection_get_size ((BalaCollection*) _tmp37_);
	_tmp39_ = _tmp38_;
	if (_tmp39_ > 0) {
		if (first) {
			BaladocApiSignatureBuilder* _tmp40_;
			_tmp40_ = signature;
			baladoc_api_signature_builder_append (_tmp40_, ":", TRUE);
		}
		{
			BalaArrayList* _implemented_interface_list = NULL;
			BalaArrayList* _tmp41_;
			BalaArrayList* _tmp42_;
			gint _implemented_interface_size = 0;
			BalaArrayList* _tmp43_;
			gint _tmp44_;
			gint _tmp45_;
			gint _implemented_interface_index = 0;
			_tmp41_ = self->priv->interfaces;
			_tmp42_ = _bala_iterable_ref0 (_tmp41_);
			_implemented_interface_list = _tmp42_;
			_tmp43_ = _implemented_interface_list;
			_tmp44_ = bala_collection_get_size ((BalaCollection*) _tmp43_);
			_tmp45_ = _tmp44_;
			_implemented_interface_size = _tmp45_;
			_implemented_interface_index = -1;
			while (TRUE) {
				gint _tmp46_;
				gint _tmp47_;
				BaladocApiItem* implemented_interface = NULL;
				BalaArrayList* _tmp48_;
				gpointer _tmp49_;
				BaladocApiSignatureBuilder* _tmp51_;
				BaladocApiItem* _tmp52_;
				BaladocContentInline* _tmp53_;
				BaladocContentInline* _tmp54_;
				_implemented_interface_index = _implemented_interface_index + 1;
				_tmp46_ = _implemented_interface_index;
				_tmp47_ = _implemented_interface_size;
				if (!(_tmp46_ < _tmp47_)) {
					break;
				}
				_tmp48_ = _implemented_interface_list;
				_tmp49_ = bala_list_get ((BalaList*) _tmp48_, _implemented_interface_index);
				implemented_interface = (BaladocApiItem*) ((BaladocApiTypeReference*) _tmp49_);
				if (!first) {
					BaladocApiSignatureBuilder* _tmp50_;
					_tmp50_ = signature;
					baladoc_api_signature_builder_append (_tmp50_, ",", FALSE);
				}
				_tmp51_ = signature;
				_tmp52_ = implemented_interface;
				_tmp53_ = baladoc_api_item_get_signature (_tmp52_);
				_tmp54_ = _tmp53_;
				baladoc_api_signature_builder_append_content (_tmp51_, _tmp54_, TRUE);
				first = FALSE;
				_g_object_unref0 (implemented_interface);
			}
			_bala_iterable_unref0 (_implemented_interface_list);
		}
	}
	_tmp55_ = signature;
	_tmp56_ = baladoc_api_signature_builder_get (_tmp55_);
	result = (BaladocContentInline*) _tmp56_;
	_bala_iterable_unref0 (type_parameters);
	_baladoc_api_signature_builder_unref0 (signature);
	return result;
}

static void
baladoc_api_class_class_init (BaladocApiClassClass * klass,
                              gpointer klass_data)
{
	baladoc_api_class_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &BaladocApiClass_private_offset);
	((BaladocApiNodeClass *) klass)->accept = (void (*) (BaladocApiNode*, BaladocApiVisitor*)) baladoc_api_class_real_accept;
	((BaladocApiItemClass *) klass)->build_signature = (BaladocContentInline* (*) (BaladocApiItem*)) baladoc_api_class_real_build_signature;
	BALADOC_API_NODE_CLASS (klass)->get_node_type = baladoc_api_class_real_get_node_type;
	G_OBJECT_CLASS (klass)->get_property = _bala_baladoc_api_class_get_property;
	G_OBJECT_CLASS (klass)->set_property = _bala_baladoc_api_class_set_property;
	G_OBJECT_CLASS (klass)->finalize = baladoc_api_class_finalize;
	/**
	 * Specifies the base class.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_CLASS_BASE_TYPE_PROPERTY, baladoc_api_class_properties[BALADOC_API_CLASS_BASE_TYPE_PROPERTY] = g_param_spec_object ("base-type", "base-type", "base-type", BALADOC_API_TYPE_TYPEREFERENCE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * Specifies whether this class is abstract.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_CLASS_IS_ABSTRACT_PROPERTY, baladoc_api_class_properties[BALADOC_API_CLASS_IS_ABSTRACT_PROPERTY] = g_param_spec_boolean ("is-abstract", "is-abstract", "is-abstract", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this class is sealed. Sealed classes may not be
	 * sub-classed.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_CLASS_IS_SEALED_PROPERTY, baladoc_api_class_properties[BALADOC_API_CLASS_IS_SEALED_PROPERTY] = g_param_spec_boolean ("is-sealed", "is-sealed", "is-sealed", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this class is fundamental.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY, baladoc_api_class_properties[BALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY] = g_param_spec_boolean ("is-fundamental", "is-fundamental", "is-fundamental", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_CLASS_IS_COMPACT_PROPERTY, baladoc_api_class_properties[BALADOC_API_CLASS_IS_COMPACT_PROPERTY] = g_param_spec_boolean ("is-compact", "is-compact", "is-compact", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_CLASS_NODE_TYPE_PROPERTY, baladoc_api_class_properties[BALADOC_API_CLASS_NODE_TYPE_PROPERTY] = g_param_spec_enum ("node-type", "node-type", "node-type", BALADOC_API_TYPE_NODE_TYPE, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
baladoc_api_class_instance_init (BaladocApiClass * self,
                                 gpointer klass)
{
	GHashFunc _tmp0_;
	GEqualFunc _tmp1_;
	BalaHashSet* _tmp2_;
	GHashFunc _tmp3_;
	GEqualFunc _tmp4_;
	BalaHashSet* _tmp5_;
	self->priv = baladoc_api_class_get_instance_private (self);
	self->priv->_full_implemented_interfaces = NULL;
	_tmp0_ = g_direct_hash;
	_tmp1_ = g_direct_equal;
	_tmp2_ = bala_hash_set_new (BALADOC_API_TYPE_INTERFACE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp0_, _tmp1_);
	self->priv->_known_derived_interfaces = (BalaSet*) _tmp2_;
	_tmp3_ = g_direct_hash;
	_tmp4_ = g_direct_equal;
	_tmp5_ = bala_hash_set_new (BALADOC_API_TYPE_CLASS, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp3_, _tmp4_);
	self->priv->_known_child_classes = (BalaSet*) _tmp5_;
}

static void
baladoc_api_class_finalize (GObject * obj)
{
	BaladocApiClass * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_API_TYPE_CLASS, BaladocApiClass);
	_bala_iterable_unref0 (self->priv->interfaces);
	_g_free0 (self->priv->dbus_name);
	_g_free0 (self->priv->take_value_function_cname);
	_g_free0 (self->priv->get_value_function_cname);
	_g_free0 (self->priv->set_value_function_cname);
	_g_free0 (self->priv->unref_function_name);
	_g_free0 (self->priv->ref_function_name);
	_g_free0 (self->priv->free_function_name);
	_g_free0 (self->priv->finalize_function_name);
	_g_free0 (self->priv->param_spec_function_name);
	_g_free0 (self->priv->type_id);
	_g_free0 (self->priv->is_class_type_macro_name);
	_g_free0 (self->priv->class_type_macro_name);
	_g_free0 (self->priv->class_macro_name);
	_g_free0 (self->priv->private_cname);
	_g_free0 (self->priv->cname);
	_g_object_unref0 (self->priv->_base_type);
	_bala_iterable_unref0 (self->priv->_full_implemented_interfaces);
	_bala_iterable_unref0 (self->priv->_known_derived_interfaces);
	_bala_iterable_unref0 (self->priv->_known_child_classes);
	G_OBJECT_CLASS (baladoc_api_class_parent_class)->finalize (obj);
}

/**
 * Represents a class declaration.
 */
static GType
baladoc_api_class_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BaladocApiClassClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_api_class_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BaladocApiClass), 0, (GInstanceInitFunc) baladoc_api_class_instance_init, NULL };
	GType baladoc_api_class_type_id;
	baladoc_api_class_type_id = g_type_register_static (BALADOC_API_TYPE_TYPESYMBOL, "BaladocApiClass", &g_define_type_info, 0);
	BaladocApiClass_private_offset = g_type_add_instance_private (baladoc_api_class_type_id, sizeof (BaladocApiClassPrivate));
	return baladoc_api_class_type_id;
}

GType
baladoc_api_class_get_type (void)
{
	static volatile gsize baladoc_api_class_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_api_class_type_id__volatile)) {
		GType baladoc_api_class_type_id;
		baladoc_api_class_type_id = baladoc_api_class_get_type_once ();
		g_once_init_leave (&baladoc_api_class_type_id__volatile, baladoc_api_class_type_id);
	}
	return baladoc_api_class_type_id__volatile;
}

static void
_bala_baladoc_api_class_get_property (GObject * object,
                                      guint property_id,
                                      GValue * value,
                                      GParamSpec * pspec)
{
	BaladocApiClass * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BALADOC_API_TYPE_CLASS, BaladocApiClass);
	switch (property_id) {
		case BALADOC_API_CLASS_BASE_TYPE_PROPERTY:
		g_value_set_object (value, baladoc_api_class_get_base_type (self));
		break;
		case BALADOC_API_CLASS_IS_ABSTRACT_PROPERTY:
		g_value_set_boolean (value, baladoc_api_class_get_is_abstract (self));
		break;
		case BALADOC_API_CLASS_IS_SEALED_PROPERTY:
		g_value_set_boolean (value, baladoc_api_class_get_is_sealed (self));
		break;
		case BALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY:
		g_value_set_boolean (value, baladoc_api_class_get_is_fundamental (self));
		break;
		case BALADOC_API_CLASS_IS_COMPACT_PROPERTY:
		g_value_set_boolean (value, baladoc_api_class_get_is_compact (self));
		break;
		case BALADOC_API_CLASS_NODE_TYPE_PROPERTY:
		g_value_set_enum (value, baladoc_api_node_get_node_type ((BaladocApiNode*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_bala_baladoc_api_class_set_property (GObject * object,
                                      guint property_id,
                                      const GValue * value,
                                      GParamSpec * pspec)
{
	BaladocApiClass * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BALADOC_API_TYPE_CLASS, BaladocApiClass);
	switch (property_id) {
		case BALADOC_API_CLASS_BASE_TYPE_PROPERTY:
		baladoc_api_class_set_base_type (self, g_value_get_object (value));
		break;
		case BALADOC_API_CLASS_IS_ABSTRACT_PROPERTY:
		baladoc_api_class_set_is_abstract (self, g_value_get_boolean (value));
		break;
		case BALADOC_API_CLASS_IS_SEALED_PROPERTY:
		baladoc_api_class_set_is_sealed (self, g_value_get_boolean (value));
		break;
		case BALADOC_API_CLASS_IS_FUNDAMENTAL_PROPERTY:
		baladoc_api_class_set_is_fundamental (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

