/* interface.c generated by balac, the Vala compiler
 * generated from interface.bala, do not modify */

/* interface.bala
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
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <balagee.h>
#include <glib-object.h>
#include <bala.h>
#include <balacodegen.h>

enum  {
	BALADOC_API_INTERFACE_0_PROPERTY,
	BALADOC_API_INTERFACE_BASE_TYPE_PROPERTY,
	BALADOC_API_INTERFACE_NODE_TYPE_PROPERTY,
	BALADOC_API_INTERFACE_NUM_PROPERTIES
};
static GParamSpec* baladoc_api_interface_properties[BALADOC_API_INTERFACE_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _bala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (bala_iterable_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _baladoc_api_signature_builder_unref0(var) ((var == NULL) ? NULL : (var = (baladoc_api_signature_builder_unref (var), NULL)))

struct _ValadocApiInterfacePrivate {
	gchar* interface_macro_name;
	gchar* dbus_name;
	gchar* cname;
	gchar* type_id;
	ValaArrayList* interfaces;
	ValaCollection* _full_implemented_interfaces;
	ValadocApiTypeReference* _base_type;
	ValaSet* _known_related_interfaces;
	ValaSet* _known_implementations;
};

static gint ValadocApiInterface_private_offset;
static gpointer baladoc_api_interface_parent_class = NULL;

static void baladoc_api_interface_real_accept (ValadocApiNode* base,
                                        ValadocApiVisitor* visitor);
static ValadocContentInline* baladoc_api_interface_real_build_signature (ValadocApiItem* base);
static void baladoc_api_interface_finalize (GObject * obj);
static GType baladoc_api_interface_get_type_once (void);
static void _bala_baladoc_api_interface_get_property (GObject * object,
                                               guint property_id,
                                               GValue * value,
                                               GParamSpec * pspec);
static void _bala_baladoc_api_interface_set_property (GObject * object,
                                               guint property_id,
                                               const GValue * value,
                                               GParamSpec * pspec);

static inline gpointer
baladoc_api_interface_get_instance_private (ValadocApiInterface* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocApiInterface_private_offset);
}

ValadocApiInterface*
baladoc_api_interface_construct (GType object_type,
                                 ValadocApiNode* parent,
                                 ValadocApiSourceFile* file,
                                 const gchar* name,
                                 ValaSymbolAccessibility accessibility,
                                 ValadocApiSourceComment* comment,
                                 ValaInterface* data)
{
	ValadocApiInterface * self = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	self = (ValadocApiInterface*) baladoc_api_typesymbol_construct (object_type, parent, file, name, accessibility, comment, FALSE, (ValaTypeSymbol*) data);
	_tmp0_ = bala_get_ccode_type_get_function ((ValaObjectTypeSymbol*) data);
	_g_free0 (self->priv->interface_macro_name);
	self->priv->interface_macro_name = _tmp0_;
	_tmp1_ = bala_gd_bus_module_get_dbus_name ((ValaTypeSymbol*) data);
	_g_free0 (self->priv->dbus_name);
	self->priv->dbus_name = _tmp1_;
	_tmp2_ = bala_get_ccode_name ((ValaCodeNode*) data);
	_g_free0 (self->priv->cname);
	self->priv->cname = _tmp2_;
	_tmp3_ = bala_get_ccode_type_id ((ValaCodeNode*) data);
	_g_free0 (self->priv->type_id);
	self->priv->type_id = _tmp3_;
	return self;
}

ValadocApiInterface*
baladoc_api_interface_new (ValadocApiNode* parent,
                           ValadocApiSourceFile* file,
                           const gchar* name,
                           ValaSymbolAccessibility accessibility,
                           ValadocApiSourceComment* comment,
                           ValaInterface* data)
{
	return baladoc_api_interface_construct (BALADOC_API_TYPE_INTERFACE, parent, file, name, accessibility, comment, data);
}

/**
 * Add a newpreconditioned interface to the list
 */
void
baladoc_api_interface_add_interface (ValadocApiInterface* self,
                                     ValadocApiTypeReference* iface)
{
	ValaArrayList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (iface != NULL);
	_tmp0_ = self->priv->interfaces;
	bala_collection_add ((ValaCollection*) _tmp0_, iface);
}

/**
 * Returns a list of newly preconditioned interfaces
 */
static gpointer
_bala_iterable_ref0 (gpointer self)
{
	return self ? bala_iterable_ref (self) : NULL;
}

ValaCollection*
baladoc_api_interface_get_implemented_interface_list (ValadocApiInterface* self)
{
	ValaArrayList* _tmp0_;
	ValaCollection* _tmp1_;
	ValaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->interfaces;
	_tmp1_ = _bala_iterable_ref0 ((ValaCollection*) _tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns a list of all preconditioned interfaces
 */
ValaCollection*
baladoc_api_interface_get_full_implemented_interface_list (ValadocApiInterface* self)
{
	ValaCollection* _tmp0_;
	ValaCollection* _tmp12_;
	ValaCollection* _tmp13_;
	ValaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_full_implemented_interfaces;
	if (_tmp0_ == NULL) {
		GEqualFunc _tmp1_;
		ValaArrayList* _tmp2_;
		ValaCollection* _tmp3_;
		ValaArrayList* _tmp4_;
		ValadocApiTypeReference* _tmp5_;
		_tmp1_ = g_direct_equal;
		_tmp2_ = bala_array_list_new (BALADOC_API_TYPE_TYPEREFERENCE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp1_);
		_bala_iterable_unref0 (self->priv->_full_implemented_interfaces);
		self->priv->_full_implemented_interfaces = (ValaCollection*) _tmp2_;
		_tmp3_ = self->priv->_full_implemented_interfaces;
		_tmp4_ = self->priv->interfaces;
		bala_collection_add_all (_tmp3_, (ValaCollection*) _tmp4_);
		_tmp5_ = self->priv->_base_type;
		if (_tmp5_ != NULL) {
			ValaCollection* _tmp6_;
			ValadocApiTypeReference* _tmp7_;
			ValadocApiItem* _tmp8_;
			ValadocApiItem* _tmp9_;
			ValaCollection* _tmp10_;
			ValaCollection* _tmp11_;
			_tmp6_ = self->priv->_full_implemented_interfaces;
			_tmp7_ = self->priv->_base_type;
			_tmp8_ = baladoc_api_typereference_get_data_type (_tmp7_);
			_tmp9_ = _tmp8_;
			_tmp10_ = baladoc_api_class_get_full_implemented_interface_list (G_TYPE_CHECK_INSTANCE_CAST (_tmp9_, BALADOC_API_TYPE_CLASS, ValadocApiClass));
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

/**
 * Returns the name of this interface as it is used in C.
 */
gchar*
baladoc_api_interface_get_cname (ValadocApiInterface* self)
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
 * Returns the C symbol representing the runtime type id for this data type.
 */
gchar*
baladoc_api_interface_get_type_id (ValadocApiInterface* self)
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
 * Returns the dbus-name.
 */
gchar*
baladoc_api_interface_get_dbus_name (ValadocApiInterface* self)
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
 * Gets the name of the GType macro which returns the interface struct.
 */
gchar*
baladoc_api_interface_get_interface_macro_name (ValadocApiInterface* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->interface_macro_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

ValadocApiTypeReference*
baladoc_api_interface_get_base_type (ValadocApiInterface* self)
{
	ValadocApiTypeReference* result;
	ValadocApiTypeReference* _tmp0_;
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
baladoc_api_interface_set_base_type (ValadocApiInterface* self,
                                     ValadocApiTypeReference* value)
{
	ValadocApiTypeReference* old_value;
	g_return_if_fail (self != NULL);
	old_value = baladoc_api_interface_get_base_type (self);
	if (old_value != value) {
		ValadocApiTypeReference* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_base_type);
		self->priv->_base_type = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_interface_properties[BALADOC_API_INTERFACE_BASE_TYPE_PROPERTY]);
	}
}

static ValadocApiNodeType
baladoc_api_interface_real_get_node_type (ValadocApiNode* base)
{
	ValadocApiNodeType result;
	ValadocApiInterface* self;
	self = (ValadocApiInterface*) base;
	result = BALADOC_API_NODE_TYPE_INTERFACE;
	return result;
}

/**
 * {@inheritDoc}
 */
static void
baladoc_api_interface_real_accept (ValadocApiNode* base,
                                   ValadocApiVisitor* visitor)
{
	ValadocApiInterface * self;
	self = (ValadocApiInterface*) base;
	g_return_if_fail (visitor != NULL);
	baladoc_api_visitor_visit_interface (visitor, self);
}

/**
 * Returns a list of all known implementations of this interface
 */
ValaCollection*
baladoc_api_interface_get_known_implementations (ValadocApiInterface* self)
{
	ValaSet* _tmp0_;
	ValaCollection* _tmp1_;
	ValaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_known_implementations;
	_tmp1_ = _bala_iterable_ref0 ((ValaCollection*) _tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns a list of all known related (sub-)interfaces
 */
ValaCollection*
baladoc_api_interface_get_known_related_interfaces (ValadocApiInterface* self)
{
	ValaSet* _tmp0_;
	ValaCollection* _tmp1_;
	ValaCollection* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_known_related_interfaces;
	_tmp1_ = _bala_iterable_ref0 ((ValaCollection*) _tmp0_);
	result = _tmp1_;
	return result;
}

void
baladoc_api_interface_register_related_interface (ValadocApiInterface* self,
                                                  ValadocApiInterface* iface)
{
	ValaSet* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (iface != NULL);
	_tmp0_ = self->priv->_known_related_interfaces;
	bala_collection_add ((ValaCollection*) _tmp0_, iface);
}

void
baladoc_api_interface_register_implementation (ValadocApiInterface* self,
                                               ValadocApiClass* cl)
{
	ValaSet* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (cl != NULL);
	_tmp0_ = self->priv->_known_implementations;
	bala_collection_add ((ValaCollection*) _tmp0_, cl);
}

/**
 * {@inheritDoc}
 */
static ValadocContentInline*
baladoc_api_interface_real_build_signature (ValadocApiItem* base)
{
	ValadocApiInterface * self;
	ValadocApiSignatureBuilder* signature = NULL;
	ValadocApiSignatureBuilder* _tmp0_;
	ValadocApiSignatureBuilder* _tmp1_;
	ValaSymbolAccessibility _tmp2_;
	ValaSymbolAccessibility _tmp3_;
	const gchar* _tmp4_;
	ValadocApiSignatureBuilder* _tmp5_;
	ValadocApiSignatureBuilder* _tmp6_;
	ValaList* type_parameters = NULL;
	ValaList* _tmp7_;
	ValaList* _tmp8_;
	gint _tmp9_;
	gint _tmp10_;
	gboolean first = FALSE;
	ValadocApiTypeReference* _tmp27_;
	ValaArrayList* _tmp33_;
	gint _tmp34_;
	gint _tmp35_;
	ValadocApiSignatureBuilder* _tmp51_;
	ValadocContentRun* _tmp52_;
	ValadocContentInline* result = NULL;
	self = (ValadocApiInterface*) base;
	_tmp0_ = baladoc_api_signature_builder_new ();
	signature = _tmp0_;
	_tmp1_ = signature;
	_tmp2_ = baladoc_api_symbol_get_accessibility ((ValadocApiSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = bala_symbol_accessibility_to_string (_tmp3_);
	baladoc_api_signature_builder_append_keyword (_tmp1_, _tmp4_, TRUE);
	_tmp5_ = signature;
	baladoc_api_signature_builder_append_keyword (_tmp5_, "interface", TRUE);
	_tmp6_ = signature;
	baladoc_api_signature_builder_append_symbol (_tmp6_, (ValadocApiNode*) self, TRUE);
	_tmp7_ = baladoc_api_node_get_children_by_type ((ValadocApiNode*) self, BALADOC_API_NODE_TYPE_TYPE_PARAMETER, FALSE);
	type_parameters = _tmp7_;
	_tmp8_ = type_parameters;
	_tmp9_ = bala_collection_get_size ((ValaCollection*) _tmp8_);
	_tmp10_ = _tmp9_;
	if (_tmp10_ > 0) {
		ValadocApiSignatureBuilder* _tmp11_;
		gboolean first = FALSE;
		ValadocApiSignatureBuilder* _tmp26_;
		_tmp11_ = signature;
		baladoc_api_signature_builder_append (_tmp11_, "<", FALSE);
		first = TRUE;
		{
			ValaList* _param_list = NULL;
			ValaList* _tmp12_;
			ValaList* _tmp13_;
			gint _param_size = 0;
			ValaList* _tmp14_;
			gint _tmp15_;
			gint _tmp16_;
			gint _param_index = 0;
			_tmp12_ = type_parameters;
			_tmp13_ = _bala_iterable_ref0 (_tmp12_);
			_param_list = _tmp13_;
			_tmp14_ = _param_list;
			_tmp15_ = bala_collection_get_size ((ValaCollection*) _tmp14_);
			_tmp16_ = _tmp15_;
			_param_size = _tmp16_;
			_param_index = -1;
			while (TRUE) {
				gint _tmp17_;
				gint _tmp18_;
				ValadocApiItem* param = NULL;
				ValaList* _tmp19_;
				gpointer _tmp20_;
				ValadocApiSignatureBuilder* _tmp22_;
				ValadocApiItem* _tmp23_;
				ValadocContentInline* _tmp24_;
				ValadocContentInline* _tmp25_;
				_param_index = _param_index + 1;
				_tmp17_ = _param_index;
				_tmp18_ = _param_size;
				if (!(_tmp17_ < _tmp18_)) {
					break;
				}
				_tmp19_ = _param_list;
				_tmp20_ = bala_list_get (_tmp19_, _param_index);
				param = (ValadocApiItem*) ((ValadocApiNode*) _tmp20_);
				if (!first) {
					ValadocApiSignatureBuilder* _tmp21_;
					_tmp21_ = signature;
					baladoc_api_signature_builder_append (_tmp21_, ",", FALSE);
				}
				_tmp22_ = signature;
				_tmp23_ = param;
				_tmp24_ = baladoc_api_item_get_signature (_tmp23_);
				_tmp25_ = _tmp24_;
				baladoc_api_signature_builder_append_content (_tmp22_, _tmp25_, FALSE);
				first = FALSE;
				_g_object_unref0 (param);
			}
			_bala_iterable_unref0 (_param_list);
		}
		_tmp26_ = signature;
		baladoc_api_signature_builder_append (_tmp26_, ">", FALSE);
	}
	first = TRUE;
	_tmp27_ = self->priv->_base_type;
	if (_tmp27_ != NULL) {
		ValadocApiSignatureBuilder* _tmp28_;
		ValadocApiSignatureBuilder* _tmp29_;
		ValadocApiTypeReference* _tmp30_;
		ValadocContentInline* _tmp31_;
		ValadocContentInline* _tmp32_;
		_tmp28_ = signature;
		baladoc_api_signature_builder_append (_tmp28_, ":", TRUE);
		_tmp29_ = signature;
		_tmp30_ = self->priv->_base_type;
		_tmp31_ = baladoc_api_item_get_signature ((ValadocApiItem*) _tmp30_);
		_tmp32_ = _tmp31_;
		baladoc_api_signature_builder_append_content (_tmp29_, _tmp32_, TRUE);
		first = FALSE;
	}
	_tmp33_ = self->priv->interfaces;
	_tmp34_ = bala_collection_get_size ((ValaCollection*) _tmp33_);
	_tmp35_ = _tmp34_;
	if (_tmp35_ > 0) {
		if (first) {
			ValadocApiSignatureBuilder* _tmp36_;
			_tmp36_ = signature;
			baladoc_api_signature_builder_append (_tmp36_, ":", TRUE);
		}
		{
			ValaArrayList* _implemented_interface_list = NULL;
			ValaArrayList* _tmp37_;
			ValaArrayList* _tmp38_;
			gint _implemented_interface_size = 0;
			ValaArrayList* _tmp39_;
			gint _tmp40_;
			gint _tmp41_;
			gint _implemented_interface_index = 0;
			_tmp37_ = self->priv->interfaces;
			_tmp38_ = _bala_iterable_ref0 (_tmp37_);
			_implemented_interface_list = _tmp38_;
			_tmp39_ = _implemented_interface_list;
			_tmp40_ = bala_collection_get_size ((ValaCollection*) _tmp39_);
			_tmp41_ = _tmp40_;
			_implemented_interface_size = _tmp41_;
			_implemented_interface_index = -1;
			while (TRUE) {
				gint _tmp42_;
				gint _tmp43_;
				ValadocApiItem* implemented_interface = NULL;
				ValaArrayList* _tmp44_;
				gpointer _tmp45_;
				ValadocApiSignatureBuilder* _tmp47_;
				ValadocApiItem* _tmp48_;
				ValadocContentInline* _tmp49_;
				ValadocContentInline* _tmp50_;
				_implemented_interface_index = _implemented_interface_index + 1;
				_tmp42_ = _implemented_interface_index;
				_tmp43_ = _implemented_interface_size;
				if (!(_tmp42_ < _tmp43_)) {
					break;
				}
				_tmp44_ = _implemented_interface_list;
				_tmp45_ = bala_list_get ((ValaList*) _tmp44_, _implemented_interface_index);
				implemented_interface = (ValadocApiItem*) ((ValadocApiTypeReference*) _tmp45_);
				if (!first) {
					ValadocApiSignatureBuilder* _tmp46_;
					_tmp46_ = signature;
					baladoc_api_signature_builder_append (_tmp46_, ",", FALSE);
				}
				_tmp47_ = signature;
				_tmp48_ = implemented_interface;
				_tmp49_ = baladoc_api_item_get_signature (_tmp48_);
				_tmp50_ = _tmp49_;
				baladoc_api_signature_builder_append_content (_tmp47_, _tmp50_, TRUE);
				first = FALSE;
				_g_object_unref0 (implemented_interface);
			}
			_bala_iterable_unref0 (_implemented_interface_list);
		}
	}
	_tmp51_ = signature;
	_tmp52_ = baladoc_api_signature_builder_get (_tmp51_);
	result = (ValadocContentInline*) _tmp52_;
	_bala_iterable_unref0 (type_parameters);
	_baladoc_api_signature_builder_unref0 (signature);
	return result;
}

static void
baladoc_api_interface_class_init (ValadocApiInterfaceClass * klass,
                                  gpointer klass_data)
{
	baladoc_api_interface_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocApiInterface_private_offset);
	((ValadocApiNodeClass *) klass)->accept = (void (*) (ValadocApiNode*, ValadocApiVisitor*)) baladoc_api_interface_real_accept;
	((ValadocApiItemClass *) klass)->build_signature = (ValadocContentInline* (*) (ValadocApiItem*)) baladoc_api_interface_real_build_signature;
	BALADOC_API_NODE_CLASS (klass)->get_node_type = baladoc_api_interface_real_get_node_type;
	G_OBJECT_CLASS (klass)->get_property = _bala_baladoc_api_interface_get_property;
	G_OBJECT_CLASS (klass)->set_property = _bala_baladoc_api_interface_set_property;
	G_OBJECT_CLASS (klass)->finalize = baladoc_api_interface_finalize;
	/**
	 * A preconditioned class or null
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_INTERFACE_BASE_TYPE_PROPERTY, baladoc_api_interface_properties[BALADOC_API_INTERFACE_BASE_TYPE_PROPERTY] = g_param_spec_object ("base-type", "base-type", "base-type", BALADOC_API_TYPE_TYPEREFERENCE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_INTERFACE_NODE_TYPE_PROPERTY, baladoc_api_interface_properties[BALADOC_API_INTERFACE_NODE_TYPE_PROPERTY] = g_param_spec_enum ("node-type", "node-type", "node-type", BALADOC_API_TYPE_NODE_TYPE, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
baladoc_api_interface_instance_init (ValadocApiInterface * self,
                                     gpointer klass)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	GHashFunc _tmp2_;
	GEqualFunc _tmp3_;
	ValaHashSet* _tmp4_;
	GHashFunc _tmp5_;
	GEqualFunc _tmp6_;
	ValaHashSet* _tmp7_;
	self->priv = baladoc_api_interface_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = bala_array_list_new (BALADOC_API_TYPE_TYPEREFERENCE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp0_);
	self->priv->interfaces = _tmp1_;
	self->priv->_full_implemented_interfaces = NULL;
	_tmp2_ = g_direct_hash;
	_tmp3_ = g_direct_equal;
	_tmp4_ = bala_hash_set_new (BALADOC_API_TYPE_INTERFACE, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp2_, _tmp3_);
	self->priv->_known_related_interfaces = (ValaSet*) _tmp4_;
	_tmp5_ = g_direct_hash;
	_tmp6_ = g_direct_equal;
	_tmp7_ = bala_hash_set_new (BALADOC_API_TYPE_CLASS, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp5_, _tmp6_);
	self->priv->_known_implementations = (ValaSet*) _tmp7_;
}

static void
baladoc_api_interface_finalize (GObject * obj)
{
	ValadocApiInterface * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_API_TYPE_INTERFACE, ValadocApiInterface);
	_g_free0 (self->priv->interface_macro_name);
	_g_free0 (self->priv->dbus_name);
	_g_free0 (self->priv->cname);
	_g_free0 (self->priv->type_id);
	_bala_iterable_unref0 (self->priv->interfaces);
	_bala_iterable_unref0 (self->priv->_full_implemented_interfaces);
	_g_object_unref0 (self->priv->_base_type);
	_bala_iterable_unref0 (self->priv->_known_related_interfaces);
	_bala_iterable_unref0 (self->priv->_known_implementations);
	G_OBJECT_CLASS (baladoc_api_interface_parent_class)->finalize (obj);
}

/**
 * Represents a interface declaration in the source code.
 */
static GType
baladoc_api_interface_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocApiInterfaceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_api_interface_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiInterface), 0, (GInstanceInitFunc) baladoc_api_interface_instance_init, NULL };
	GType baladoc_api_interface_type_id;
	baladoc_api_interface_type_id = g_type_register_static (BALADOC_API_TYPE_TYPESYMBOL, "ValadocApiInterface", &g_define_type_info, 0);
	ValadocApiInterface_private_offset = g_type_add_instance_private (baladoc_api_interface_type_id, sizeof (ValadocApiInterfacePrivate));
	return baladoc_api_interface_type_id;
}

GType
baladoc_api_interface_get_type (void)
{
	static volatile gsize baladoc_api_interface_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_api_interface_type_id__volatile)) {
		GType baladoc_api_interface_type_id;
		baladoc_api_interface_type_id = baladoc_api_interface_get_type_once ();
		g_once_init_leave (&baladoc_api_interface_type_id__volatile, baladoc_api_interface_type_id);
	}
	return baladoc_api_interface_type_id__volatile;
}

static void
_bala_baladoc_api_interface_get_property (GObject * object,
                                          guint property_id,
                                          GValue * value,
                                          GParamSpec * pspec)
{
	ValadocApiInterface * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BALADOC_API_TYPE_INTERFACE, ValadocApiInterface);
	switch (property_id) {
		case BALADOC_API_INTERFACE_BASE_TYPE_PROPERTY:
		g_value_set_object (value, baladoc_api_interface_get_base_type (self));
		break;
		case BALADOC_API_INTERFACE_NODE_TYPE_PROPERTY:
		g_value_set_enum (value, baladoc_api_node_get_node_type ((ValadocApiNode*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_bala_baladoc_api_interface_set_property (GObject * object,
                                          guint property_id,
                                          const GValue * value,
                                          GParamSpec * pspec)
{
	ValadocApiInterface * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BALADOC_API_TYPE_INTERFACE, ValadocApiInterface);
	switch (property_id) {
		case BALADOC_API_INTERFACE_BASE_TYPE_PROPERTY:
		baladoc_api_interface_set_base_type (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

