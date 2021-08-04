/* signal.c generated by balac, the Vala compiler
 * generated from signal.bala, do not modify */

/* signal.bala
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
#include <bala.h>
#include <balacodegen.h>
#include <balagee.h>
#include <glib-object.h>

enum  {
	BALADOC_API_SIGNAL_0_PROPERTY,
	BALADOC_API_SIGNAL_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY,
	BALADOC_API_SIGNAL_RETURN_TYPE_PROPERTY,
	BALADOC_API_SIGNAL_IS_VIRTUAL_PROPERTY,
	BALADOC_API_SIGNAL_IS_DBUS_VISIBLE_PROPERTY,
	BALADOC_API_SIGNAL_NODE_TYPE_PROPERTY,
	BALADOC_API_SIGNAL_NUM_PROPERTIES
};
static GParamSpec* baladoc_api_signal_properties[BALADOC_API_SIGNAL_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _bala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (bala_iterable_unref (var), NULL)))
#define _baladoc_api_signature_builder_unref0(var) ((var == NULL) ? NULL : (var = (baladoc_api_signature_builder_unref (var), NULL)))

struct _ValadocApiSignalPrivate {
	gchar* default_impl_cname;
	gchar* dbus_name;
	gchar* cname;
	gchar* _implicit_array_length_cparameter_name;
	ValadocApiTypeReference* _return_type;
	gboolean _is_virtual;
	gboolean _is_dbus_visible;
};

static gint ValadocApiSignal_private_offset;
static gpointer baladoc_api_signal_parent_class = NULL;
static ValadocApiCallableIface * baladoc_api_signal_baladoc_api_callable_parent_iface = NULL;

static void baladoc_api_signal_set_is_dbus_visible (ValadocApiSignal* self,
                                             gboolean value);
static void baladoc_api_signal_set_is_virtual (ValadocApiSignal* self,
                                        gboolean value);
static ValadocContentInline* baladoc_api_signal_real_build_signature (ValadocApiItem* base);
static void baladoc_api_signal_real_accept (ValadocApiNode* base,
                                     ValadocApiVisitor* visitor);
G_GNUC_INTERNAL const gchar* baladoc_api_callable_get_implicit_array_length_cparameter_name (ValadocApiCallable* self);
G_GNUC_INTERNAL void baladoc_api_callable_set_implicit_array_length_cparameter_name (ValadocApiCallable* self,
                                                                     const gchar* value);
static void baladoc_api_signal_finalize (GObject * obj);
static GType baladoc_api_signal_get_type_once (void);
static void _bala_baladoc_api_signal_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec);
static void _bala_baladoc_api_signal_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec);

static inline gpointer
baladoc_api_signal_get_instance_private (ValadocApiSignal* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocApiSignal_private_offset);
}

static const gchar*
baladoc_api_signal_real_get_implicit_array_length_cparameter_name (ValadocApiCallable* base)
{
	const gchar* result;
	ValadocApiSignal* self;
	const gchar* _tmp0_;
	self = (ValadocApiSignal*) base;
	_tmp0_ = self->priv->_implicit_array_length_cparameter_name;
	result = _tmp0_;
	return result;
}

static void
baladoc_api_signal_real_set_implicit_array_length_cparameter_name (ValadocApiCallable* base,
                                                                   const gchar* value)
{
	ValadocApiSignal* self;
	gchar* old_value;
	self = (ValadocApiSignal*) base;
	old_value = baladoc_api_signal_real_get_implicit_array_length_cparameter_name (base);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_implicit_array_length_cparameter_name);
		self->priv->_implicit_array_length_cparameter_name = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_signal_properties[BALADOC_API_SIGNAL_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY]);
	}
}

ValadocApiSignal*
baladoc_api_signal_construct (GType object_type,
                              ValadocApiNode* parent,
                              ValadocApiSourceFile* file,
                              const gchar* name,
                              ValaSymbolAccessibility accessibility,
                              ValadocApiSourceComment* comment,
                              ValaSignal* data)
{
	ValadocApiSignal * self = NULL;
	gchar* _tmp0_ = NULL;
	ValaMethod* _tmp1_;
	ValaMethod* _tmp2_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gboolean _tmp9_;
	gboolean _tmp10_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	self = (ValadocApiSignal*) baladoc_api_symbol_construct (object_type, parent, file, name, accessibility, comment, (ValaSymbol*) data);
	_tmp1_ = bala_signal_get_default_handler (data);
	_tmp2_ = _tmp1_;
	if (_tmp2_ != NULL) {
		ValaMethod* _tmp3_;
		ValaMethod* _tmp4_;
		gchar* _tmp5_;
		_tmp3_ = bala_signal_get_default_handler (data);
		_tmp4_ = _tmp3_;
		_tmp5_ = bala_get_ccode_name ((ValaCodeNode*) _tmp4_);
		_g_free0 (_tmp0_);
		_tmp0_ = _tmp5_;
	} else {
		_g_free0 (_tmp0_);
		_tmp0_ = NULL;
	}
	_tmp6_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->default_impl_cname);
	self->priv->default_impl_cname = _tmp6_;
	_tmp7_ = bala_gd_bus_module_get_dbus_name_for_member ((ValaSymbol*) data);
	_g_free0 (self->priv->dbus_name);
	self->priv->dbus_name = _tmp7_;
	_tmp8_ = bala_get_ccode_name ((ValaCodeNode*) data);
	_g_free0 (self->priv->cname);
	self->priv->cname = _tmp8_;
	baladoc_api_signal_set_is_dbus_visible (self, bala_gd_bus_module_is_dbus_visible ((ValaCodeNode*) data));
	_tmp9_ = bala_signal_get_is_virtual (data);
	_tmp10_ = _tmp9_;
	baladoc_api_signal_set_is_virtual (self, _tmp10_);
	_g_free0 (_tmp0_);
	return self;
}

ValadocApiSignal*
baladoc_api_signal_new (ValadocApiNode* parent,
                        ValadocApiSourceFile* file,
                        const gchar* name,
                        ValaSymbolAccessibility accessibility,
                        ValadocApiSourceComment* comment,
                        ValaSignal* data)
{
	return baladoc_api_signal_construct (BALADOC_API_TYPE_SIGNAL, parent, file, name, accessibility, comment, data);
}

/**
 * Returns the name of this signal as it is used in C.
 */
gchar*
baladoc_api_signal_get_cname (ValadocApiSignal* self)
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

gchar*
baladoc_api_signal_get_default_impl_cname (ValadocApiSignal* self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->default_impl_cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

/**
 * Returns the dbus-name.
 */
gchar*
baladoc_api_signal_get_dbus_name (ValadocApiSignal* self)
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

static ValadocApiTypeReference*
baladoc_api_signal_real_get_return_type (ValadocApiCallable* base)
{
	ValadocApiTypeReference* result;
	ValadocApiSignal* self;
	ValadocApiTypeReference* _tmp0_;
	self = (ValadocApiSignal*) base;
	_tmp0_ = self->priv->_return_type;
	result = _tmp0_;
	return result;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
baladoc_api_signal_real_set_return_type (ValadocApiCallable* base,
                                         ValadocApiTypeReference* value)
{
	ValadocApiSignal* self;
	ValadocApiTypeReference* old_value;
	self = (ValadocApiSignal*) base;
	old_value = baladoc_api_signal_real_get_return_type (base);
	if (old_value != value) {
		ValadocApiTypeReference* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_return_type);
		self->priv->_return_type = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_signal_properties[BALADOC_API_SIGNAL_RETURN_TYPE_PROPERTY]);
	}
}

gboolean
baladoc_api_signal_get_is_virtual (ValadocApiSignal* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_virtual;
	return result;
}

static void
baladoc_api_signal_set_is_virtual (ValadocApiSignal* self,
                                   gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = baladoc_api_signal_get_is_virtual (self);
	if (old_value != value) {
		self->priv->_is_virtual = value;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_signal_properties[BALADOC_API_SIGNAL_IS_VIRTUAL_PROPERTY]);
	}
}

gboolean
baladoc_api_signal_get_is_dbus_visible (ValadocApiSignal* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_dbus_visible;
	return result;
}

static void
baladoc_api_signal_set_is_dbus_visible (ValadocApiSignal* self,
                                        gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = baladoc_api_signal_get_is_dbus_visible (self);
	if (old_value != value) {
		self->priv->_is_dbus_visible = value;
		g_object_notify_by_pspec ((GObject *) self, baladoc_api_signal_properties[BALADOC_API_SIGNAL_IS_DBUS_VISIBLE_PROPERTY]);
	}
}

/**
 * {@inheritDoc}
 */
static ValadocContentInline*
baladoc_api_signal_real_build_signature (ValadocApiItem* base)
{
	ValadocApiSignal * self;
	ValadocApiSignatureBuilder* signature = NULL;
	ValadocApiSignatureBuilder* _tmp0_;
	ValadocApiSignatureBuilder* _tmp1_;
	ValaSymbolAccessibility _tmp2_;
	ValaSymbolAccessibility _tmp3_;
	const gchar* _tmp4_;
	gboolean _tmp5_;
	ValadocApiSignatureBuilder* _tmp7_;
	ValadocApiSignatureBuilder* _tmp8_;
	ValadocApiTypeReference* _tmp9_;
	ValadocApiTypeReference* _tmp10_;
	ValadocContentInline* _tmp11_;
	ValadocContentInline* _tmp12_;
	ValadocApiSignatureBuilder* _tmp13_;
	ValadocApiSignatureBuilder* _tmp14_;
	gboolean first = FALSE;
	ValadocApiSignatureBuilder* _tmp28_;
	ValadocApiSignatureBuilder* _tmp29_;
	ValadocContentRun* _tmp30_;
	ValadocContentInline* result = NULL;
	self = (ValadocApiSignal*) base;
	_tmp0_ = baladoc_api_signature_builder_new ();
	signature = _tmp0_;
	_tmp1_ = signature;
	_tmp2_ = baladoc_api_symbol_get_accessibility ((ValadocApiSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = bala_symbol_accessibility_to_string (_tmp3_);
	baladoc_api_signature_builder_append_keyword (_tmp1_, _tmp4_, TRUE);
	_tmp5_ = self->priv->_is_virtual;
	if (_tmp5_) {
		ValadocApiSignatureBuilder* _tmp6_;
		_tmp6_ = signature;
		baladoc_api_signature_builder_append_keyword (_tmp6_, "virtual", TRUE);
	}
	_tmp7_ = signature;
	baladoc_api_signature_builder_append_keyword (_tmp7_, "signal", TRUE);
	_tmp8_ = signature;
	_tmp9_ = baladoc_api_callable_get_return_type ((ValadocApiCallable*) self);
	_tmp10_ = _tmp9_;
	_tmp11_ = baladoc_api_item_get_signature ((ValadocApiItem*) _tmp10_);
	_tmp12_ = _tmp11_;
	baladoc_api_signature_builder_append_content (_tmp8_, _tmp12_, TRUE);
	_tmp13_ = signature;
	baladoc_api_signature_builder_append_symbol (_tmp13_, (ValadocApiNode*) self, TRUE);
	_tmp14_ = signature;
	baladoc_api_signature_builder_append (_tmp14_, "(", TRUE);
	first = TRUE;
	{
		ValaList* _param_list = NULL;
		ValaList* _tmp15_;
		gint _param_size = 0;
		ValaList* _tmp16_;
		gint _tmp17_;
		gint _tmp18_;
		gint _param_index = 0;
		_tmp15_ = baladoc_api_node_get_children_by_type ((ValadocApiNode*) self, BALADOC_API_NODE_TYPE_FORMAL_PARAMETER, FALSE);
		_param_list = _tmp15_;
		_tmp16_ = _param_list;
		_tmp17_ = bala_collection_get_size ((ValaCollection*) _tmp16_);
		_tmp18_ = _tmp17_;
		_param_size = _tmp18_;
		_param_index = -1;
		while (TRUE) {
			gint _tmp19_;
			gint _tmp20_;
			ValadocApiNode* param = NULL;
			ValaList* _tmp21_;
			gpointer _tmp22_;
			ValadocApiSignatureBuilder* _tmp24_;
			ValadocApiNode* _tmp25_;
			ValadocContentInline* _tmp26_;
			ValadocContentInline* _tmp27_;
			_param_index = _param_index + 1;
			_tmp19_ = _param_index;
			_tmp20_ = _param_size;
			if (!(_tmp19_ < _tmp20_)) {
				break;
			}
			_tmp21_ = _param_list;
			_tmp22_ = bala_list_get (_tmp21_, _param_index);
			param = (ValadocApiNode*) _tmp22_;
			if (!first) {
				ValadocApiSignatureBuilder* _tmp23_;
				_tmp23_ = signature;
				baladoc_api_signature_builder_append (_tmp23_, ",", FALSE);
			}
			_tmp24_ = signature;
			_tmp25_ = param;
			_tmp26_ = baladoc_api_item_get_signature ((ValadocApiItem*) _tmp25_);
			_tmp27_ = _tmp26_;
			baladoc_api_signature_builder_append_content (_tmp24_, _tmp27_, !first);
			first = FALSE;
			_g_object_unref0 (param);
		}
		_bala_iterable_unref0 (_param_list);
	}
	_tmp28_ = signature;
	baladoc_api_signature_builder_append (_tmp28_, ")", FALSE);
	_tmp29_ = signature;
	_tmp30_ = baladoc_api_signature_builder_get (_tmp29_);
	result = (ValadocContentInline*) _tmp30_;
	_baladoc_api_signature_builder_unref0 (signature);
	return result;
}

static ValadocApiNodeType
baladoc_api_signal_real_get_node_type (ValadocApiNode* base)
{
	ValadocApiNodeType result;
	ValadocApiSignal* self;
	self = (ValadocApiSignal*) base;
	result = BALADOC_API_NODE_TYPE_SIGNAL;
	return result;
}

/**
 * {@inheritDoc}
 */
static void
baladoc_api_signal_real_accept (ValadocApiNode* base,
                                ValadocApiVisitor* visitor)
{
	ValadocApiSignal * self;
	self = (ValadocApiSignal*) base;
	g_return_if_fail (visitor != NULL);
	baladoc_api_visitor_visit_signal (visitor, self);
}

static void
baladoc_api_signal_class_init (ValadocApiSignalClass * klass,
                               gpointer klass_data)
{
	baladoc_api_signal_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocApiSignal_private_offset);
	((ValadocApiItemClass *) klass)->build_signature = (ValadocContentInline* (*) (ValadocApiItem*)) baladoc_api_signal_real_build_signature;
	((ValadocApiNodeClass *) klass)->accept = (void (*) (ValadocApiNode*, ValadocApiVisitor*)) baladoc_api_signal_real_accept;
	BALADOC_API_NODE_CLASS (klass)->get_node_type = baladoc_api_signal_real_get_node_type;
	G_OBJECT_CLASS (klass)->get_property = _bala_baladoc_api_signal_get_property;
	G_OBJECT_CLASS (klass)->set_property = _bala_baladoc_api_signal_set_property;
	G_OBJECT_CLASS (klass)->finalize = baladoc_api_signal_finalize;
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_SIGNAL_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY, baladoc_api_signal_properties[BALADOC_API_SIGNAL_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY] = g_param_spec_string ("implicit-array-length-cparameter-name", "implicit-array-length-cparameter-name", "implicit-array-length-cparameter-name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_SIGNAL_RETURN_TYPE_PROPERTY, baladoc_api_signal_properties[BALADOC_API_SIGNAL_RETURN_TYPE_PROPERTY] = g_param_spec_object ("return-type", "return-type", "return-type", BALADOC_API_TYPE_TYPEREFERENCE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * Specifies whether this signal is virtual
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_SIGNAL_IS_VIRTUAL_PROPERTY, baladoc_api_signal_properties[BALADOC_API_SIGNAL_IS_VIRTUAL_PROPERTY] = g_param_spec_boolean ("is-virtual", "is-virtual", "is-virtual", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this signal is visible for dbus
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_SIGNAL_IS_DBUS_VISIBLE_PROPERTY, baladoc_api_signal_properties[BALADOC_API_SIGNAL_IS_DBUS_VISIBLE_PROPERTY] = g_param_spec_boolean ("is-dbus-visible", "is-dbus-visible", "is-dbus-visible", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_API_SIGNAL_NODE_TYPE_PROPERTY, baladoc_api_signal_properties[BALADOC_API_SIGNAL_NODE_TYPE_PROPERTY] = g_param_spec_enum ("node-type", "node-type", "node-type", BALADOC_API_TYPE_NODE_TYPE, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
baladoc_api_signal_baladoc_api_callable_interface_init (ValadocApiCallableIface * iface,
                                                        gpointer iface_data)
{
	baladoc_api_signal_baladoc_api_callable_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_implicit_array_length_cparameter_name = baladoc_api_signal_real_get_implicit_array_length_cparameter_name;
	iface->set_implicit_array_length_cparameter_name = baladoc_api_signal_real_set_implicit_array_length_cparameter_name;
	iface->get_return_type = baladoc_api_signal_real_get_return_type;
	iface->set_return_type = baladoc_api_signal_real_set_return_type;
}

static void
baladoc_api_signal_instance_init (ValadocApiSignal * self,
                                  gpointer klass)
{
	self->priv = baladoc_api_signal_get_instance_private (self);
}

static void
baladoc_api_signal_finalize (GObject * obj)
{
	ValadocApiSignal * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_API_TYPE_SIGNAL, ValadocApiSignal);
	_g_free0 (self->priv->default_impl_cname);
	_g_free0 (self->priv->dbus_name);
	_g_free0 (self->priv->cname);
	_g_free0 (self->priv->_implicit_array_length_cparameter_name);
	_g_object_unref0 (self->priv->_return_type);
	G_OBJECT_CLASS (baladoc_api_signal_parent_class)->finalize (obj);
}

/**
 * Represents an signal.
 */
static GType
baladoc_api_signal_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocApiSignalClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_api_signal_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiSignal), 0, (GInstanceInitFunc) baladoc_api_signal_instance_init, NULL };
	static const GInterfaceInfo baladoc_api_callable_info = { (GInterfaceInitFunc) baladoc_api_signal_baladoc_api_callable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType baladoc_api_signal_type_id;
	baladoc_api_signal_type_id = g_type_register_static (BALADOC_API_TYPE_SYMBOL, "ValadocApiSignal", &g_define_type_info, 0);
	g_type_add_interface_static (baladoc_api_signal_type_id, BALADOC_API_TYPE_CALLABLE, &baladoc_api_callable_info);
	ValadocApiSignal_private_offset = g_type_add_instance_private (baladoc_api_signal_type_id, sizeof (ValadocApiSignalPrivate));
	return baladoc_api_signal_type_id;
}

GType
baladoc_api_signal_get_type (void)
{
	static volatile gsize baladoc_api_signal_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_api_signal_type_id__volatile)) {
		GType baladoc_api_signal_type_id;
		baladoc_api_signal_type_id = baladoc_api_signal_get_type_once ();
		g_once_init_leave (&baladoc_api_signal_type_id__volatile, baladoc_api_signal_type_id);
	}
	return baladoc_api_signal_type_id__volatile;
}

static void
_bala_baladoc_api_signal_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec)
{
	ValadocApiSignal * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BALADOC_API_TYPE_SIGNAL, ValadocApiSignal);
	switch (property_id) {
		case BALADOC_API_SIGNAL_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY:
		g_value_set_string (value, baladoc_api_callable_get_implicit_array_length_cparameter_name ((ValadocApiCallable*) self));
		break;
		case BALADOC_API_SIGNAL_RETURN_TYPE_PROPERTY:
		g_value_set_object (value, baladoc_api_callable_get_return_type ((ValadocApiCallable*) self));
		break;
		case BALADOC_API_SIGNAL_IS_VIRTUAL_PROPERTY:
		g_value_set_boolean (value, baladoc_api_signal_get_is_virtual (self));
		break;
		case BALADOC_API_SIGNAL_IS_DBUS_VISIBLE_PROPERTY:
		g_value_set_boolean (value, baladoc_api_signal_get_is_dbus_visible (self));
		break;
		case BALADOC_API_SIGNAL_NODE_TYPE_PROPERTY:
		g_value_set_enum (value, baladoc_api_node_get_node_type ((ValadocApiNode*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_bala_baladoc_api_signal_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec)
{
	ValadocApiSignal * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BALADOC_API_TYPE_SIGNAL, ValadocApiSignal);
	switch (property_id) {
		case BALADOC_API_SIGNAL_IMPLICIT_ARRAY_LENGTH_CPARAMETER_NAME_PROPERTY:
		baladoc_api_callable_set_implicit_array_length_cparameter_name ((ValadocApiCallable*) self, g_value_get_string (value));
		break;
		case BALADOC_API_SIGNAL_RETURN_TYPE_PROPERTY:
		baladoc_api_callable_set_return_type ((ValadocApiCallable*) self, g_value_get_object (value));
		break;
		case BALADOC_API_SIGNAL_IS_VIRTUAL_PROPERTY:
		baladoc_api_signal_set_is_virtual (self, g_value_get_boolean (value));
		break;
		case BALADOC_API_SIGNAL_IS_DBUS_VISIBLE_PROPERTY:
		baladoc_api_signal_set_is_dbus_visible (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

