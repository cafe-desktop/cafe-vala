/* girwriter.c generated by balac, the Vala compiler
 * generated from girwriter.bala, do not modify */

/* girwriter.bala
 *
 * Copyright (C) 2011  Florian Brosch
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

#include <balacodegen.h>
#include <glib-object.h>
#include <baladoc.h>
#include <bala.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <balagee.h>

#define BALADOC_TYPE_GIR_WRITER (baladoc_gir_writer_get_type ())
#define BALADOC_GIR_WRITER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BALADOC_TYPE_GIR_WRITER, ValadocGirWriter))
#define BALADOC_GIR_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BALADOC_TYPE_GIR_WRITER, ValadocGirWriterClass))
#define BALADOC_IS_GIR_WRITER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BALADOC_TYPE_GIR_WRITER))
#define BALADOC_IS_GIR_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BALADOC_TYPE_GIR_WRITER))
#define BALADOC_GIR_WRITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BALADOC_TYPE_GIR_WRITER, ValadocGirWriterClass))

typedef struct _ValadocGirWriter ValadocGirWriter;
typedef struct _ValadocGirWriterClass ValadocGirWriterClass;
typedef struct _ValadocGirWriterPrivate ValadocGirWriterPrivate;

#define BALADOC_TYPE_SYMBOL_RESOLVER (baladoc_symbol_resolver_get_type ())
#define BALADOC_SYMBOL_RESOLVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BALADOC_TYPE_SYMBOL_RESOLVER, ValadocSymbolResolver))
#define BALADOC_SYMBOL_RESOLVER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BALADOC_TYPE_SYMBOL_RESOLVER, ValadocSymbolResolverClass))
#define BALADOC_IS_SYMBOL_RESOLVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BALADOC_TYPE_SYMBOL_RESOLVER))
#define BALADOC_IS_SYMBOL_RESOLVER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BALADOC_TYPE_SYMBOL_RESOLVER))
#define BALADOC_SYMBOL_RESOLVER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BALADOC_TYPE_SYMBOL_RESOLVER, ValadocSymbolResolverClass))

typedef struct _ValadocSymbolResolver ValadocSymbolResolver;
typedef struct _ValadocSymbolResolverClass ValadocSymbolResolverClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _bala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (bala_iterable_unref (var), NULL)))

struct _ValadocGirWriter {
	ValaGIRWriter parent_instance;
	ValadocGirWriterPrivate * priv;
};

struct _ValadocGirWriterClass {
	ValaGIRWriterClass parent_class;
};

struct _ValadocGirWriterPrivate {
	ValadocGtkdocRenderer* renderer;
	ValadocSymbolResolver* resolver;
};

static gint ValadocGirWriter_private_offset;
static gpointer baladoc_gir_writer_parent_class = NULL;

GType baladoc_gir_writer_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValadocGirWriter, bala_code_visitor_unref)
GType baladoc_symbol_resolver_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ValadocSymbolResolver, g_object_unref)
ValadocGirWriter* baladoc_gir_writer_new (ValadocSymbolResolver* resolver);
ValadocGirWriter* baladoc_gir_writer_construct (GType object_type,
                                                ValadocSymbolResolver* resolver);
static gchar* baladoc_gir_writer_translate (ValadocGirWriter* self,
                                     ValadocContentComment* documentation);
static gchar* baladoc_gir_writer_translate_taglet (ValadocGirWriter* self,
                                            ValadocContentTaglet* taglet);
static gchar* baladoc_gir_writer_real_get_interface_comment (ValaGIRWriter* base,
                                                      ValaInterface* viface);
ValadocApiSymbol* baladoc_symbol_resolver_resolve (ValadocSymbolResolver* self,
                                                   ValaSymbol* symbol);
static gchar* baladoc_gir_writer_real_get_struct_comment (ValaGIRWriter* base,
                                                   ValaStruct* vst);
static gchar* baladoc_gir_writer_real_get_enum_comment (ValaGIRWriter* base,
                                                 ValaEnum* ven);
static gchar* baladoc_gir_writer_real_get_class_comment (ValaGIRWriter* base,
                                                  ValaClass* vc);
static gchar* baladoc_gir_writer_real_get_error_code_comment (ValaGIRWriter* base,
                                                       ValaErrorCode* vecode);
static gchar* baladoc_gir_writer_real_get_enum_value_comment (ValaGIRWriter* base,
                                                       ValaEnumValue* vev);
static gchar* baladoc_gir_writer_real_get_constant_comment (ValaGIRWriter* base,
                                                     ValaConstant* vc);
static gchar* baladoc_gir_writer_real_get_error_domain_comment (ValaGIRWriter* base,
                                                         ValaErrorDomain* vedomain);
static gchar* baladoc_gir_writer_real_get_field_comment (ValaGIRWriter* base,
                                                  ValaField* vf);
static gchar* baladoc_gir_writer_real_get_delegate_comment (ValaGIRWriter* base,
                                                     ValaDelegate* vcb);
static gchar* baladoc_gir_writer_real_get_method_comment (ValaGIRWriter* base,
                                                   ValaMethod* vm);
static gchar* baladoc_gir_writer_real_get_property_comment (ValaGIRWriter* base,
                                                     ValaProperty* vprop);
static gchar* baladoc_gir_writer_real_get_delegate_return_comment (ValaGIRWriter* base,
                                                            ValaDelegate* vcb);
static gchar* baladoc_gir_writer_real_get_signal_return_comment (ValaGIRWriter* base,
                                                          ValaSignal* vsig);
static gchar* baladoc_gir_writer_real_get_method_return_comment (ValaGIRWriter* base,
                                                          ValaMethod* vm);
static gchar* baladoc_gir_writer_real_get_signal_comment (ValaGIRWriter* base,
                                                   ValaSignal* vsig);
static gchar* baladoc_gir_writer_real_get_parameter_comment (ValaGIRWriter* base,
                                                      ValaParameter* param);
static void baladoc_gir_writer_finalize (ValaCodeVisitor * obj);
static GType baladoc_gir_writer_get_type_once (void);

static inline gpointer
baladoc_gir_writer_get_instance_private (ValadocGirWriter* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocGirWriter_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

ValadocGirWriter*
baladoc_gir_writer_construct (GType object_type,
                              ValadocSymbolResolver* resolver)
{
	ValadocGirWriter* self = NULL;
	ValadocGtkdocRenderer* _tmp0_;
	ValadocSymbolResolver* _tmp1_;
	g_return_val_if_fail (resolver != NULL, NULL);
	self = (ValadocGirWriter*) bala_gir_writer_construct (object_type);
	_tmp0_ = baladoc_gtkdoc_renderer_new ();
	_g_object_unref0 (self->priv->renderer);
	self->priv->renderer = _tmp0_;
	_tmp1_ = _g_object_ref0 (resolver);
	_g_object_unref0 (self->priv->resolver);
	self->priv->resolver = _tmp1_;
	return self;
}

ValadocGirWriter*
baladoc_gir_writer_new (ValadocSymbolResolver* resolver)
{
	return baladoc_gir_writer_construct (BALADOC_TYPE_GIR_WRITER, resolver);
}

static gchar*
baladoc_gir_writer_translate (ValadocGirWriter* self,
                              ValadocContentComment* documentation)
{
	ValadocGtkdocRenderer* _tmp0_;
	ValadocGtkdocRenderer* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	if (documentation == NULL) {
		result = NULL;
		return result;
	}
	_tmp0_ = self->priv->renderer;
	baladoc_gtkdoc_renderer_render_symbol (_tmp0_, documentation);
	_tmp1_ = self->priv->renderer;
	_tmp2_ = baladoc_gtkdoc_renderer_get_content (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = baladoc_markup_writer_escape (_tmp3_);
	result = _tmp4_;
	return result;
}

static gchar*
baladoc_gir_writer_translate_taglet (ValadocGirWriter* self,
                                     ValadocContentTaglet* taglet)
{
	ValadocGtkdocRenderer* _tmp0_;
	ValadocGtkdocRenderer* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	if (taglet == NULL) {
		result = NULL;
		return result;
	}
	_tmp0_ = self->priv->renderer;
	baladoc_content_content_renderer_render_children ((ValadocContentContentRenderer*) _tmp0_, (ValadocContentContentElement*) taglet);
	_tmp1_ = self->priv->renderer;
	_tmp2_ = baladoc_gtkdoc_renderer_get_content (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = baladoc_markup_writer_escape (_tmp3_);
	result = _tmp4_;
	return result;
}

static gchar*
baladoc_gir_writer_real_get_interface_comment (ValaGIRWriter* base,
                                               ValaInterface* viface)
{
	ValadocGirWriter * self;
	ValadocApiInterface* iface = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiInterface* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (viface != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) viface);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_INTERFACE) ? ((ValadocApiInterface*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	iface = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) iface);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (iface);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_struct_comment (ValaGIRWriter* base,
                                            ValaStruct* vst)
{
	ValadocGirWriter * self;
	ValadocApiStruct* st = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiStruct* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vst != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vst);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_STRUCT) ? ((ValadocApiStruct*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	st = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) st);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (st);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_enum_comment (ValaGIRWriter* base,
                                          ValaEnum* ven)
{
	ValadocGirWriter * self;
	ValadocApiEnum* en = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiEnum* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (ven != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) ven);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_ENUM) ? ((ValadocApiEnum*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	en = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) en);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (en);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_class_comment (ValaGIRWriter* base,
                                           ValaClass* vc)
{
	ValadocGirWriter * self;
	ValadocApiClass* c = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiClass* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vc != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vc);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_CLASS) ? ((ValadocApiClass*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	c = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) c);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (c);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_error_code_comment (ValaGIRWriter* base,
                                                ValaErrorCode* vecode)
{
	ValadocGirWriter * self;
	ValadocApiErrorCode* ecode = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiErrorCode* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vecode != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vecode);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_ERROR_CODE) ? ((ValadocApiErrorCode*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	ecode = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) ecode);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (ecode);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_enum_value_comment (ValaGIRWriter* base,
                                                ValaEnumValue* vev)
{
	ValadocGirWriter * self;
	ValadocApiEnumValue* ev = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiEnumValue* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vev != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vev);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_ENUM_VALUE) ? ((ValadocApiEnumValue*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	ev = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) ev);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (ev);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_constant_comment (ValaGIRWriter* base,
                                              ValaConstant* vc)
{
	ValadocGirWriter * self;
	ValadocApiConstant* c = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiConstant* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vc != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vc);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_CONSTANT) ? ((ValadocApiConstant*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	c = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) c);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (c);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_error_domain_comment (ValaGIRWriter* base,
                                                  ValaErrorDomain* vedomain)
{
	ValadocGirWriter * self;
	ValadocApiErrorDomain* edomain = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiErrorDomain* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vedomain != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vedomain);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_ERROR_DOMAIN) ? ((ValadocApiErrorDomain*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	edomain = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) edomain);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (edomain);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_field_comment (ValaGIRWriter* base,
                                           ValaField* vf)
{
	ValadocGirWriter * self;
	ValadocApiField* f = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiField* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vf != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vf);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_FIELD) ? ((ValadocApiField*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	f = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) f);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (f);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_delegate_comment (ValaGIRWriter* base,
                                              ValaDelegate* vcb)
{
	ValadocGirWriter * self;
	ValadocApiDelegate* cb = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiDelegate* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vcb != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vcb);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_DELEGATE) ? ((ValadocApiDelegate*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	cb = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) cb);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (cb);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_method_comment (ValaGIRWriter* base,
                                            ValaMethod* vm)
{
	ValadocGirWriter * self;
	ValadocApiMethod* m = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiMethod* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vm != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vm);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_METHOD) ? ((ValadocApiMethod*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	m = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) m);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (m);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_property_comment (ValaGIRWriter* base,
                                              ValaProperty* vprop)
{
	ValadocGirWriter * self;
	ValadocApiProperty* prop = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiProperty* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vprop != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vprop);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_PROPERTY) ? ((ValadocApiProperty*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	prop = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) prop);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (prop);
	return result;
}

static gpointer
_bala_iterable_ref0 (gpointer self)
{
	return self ? bala_iterable_ref (self) : NULL;
}

static gchar*
baladoc_gir_writer_real_get_delegate_return_comment (ValaGIRWriter* base,
                                                     ValaDelegate* vcb)
{
	ValadocGirWriter * self;
	ValadocApiDelegate* cb = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiDelegate* _tmp2_;
	ValadocApiDelegate* _tmp3_;
	ValadocContentComment* _tmp4_;
	ValadocContentComment* _tmp5_;
	ValadocContentComment* documentation = NULL;
	ValadocApiDelegate* _tmp6_;
	ValadocContentComment* _tmp7_;
	ValadocContentComment* _tmp8_;
	ValadocContentComment* _tmp9_;
	ValadocContentComment* _tmp10_;
	ValaList* taglets = NULL;
	ValadocContentComment* _tmp11_;
	ValadocApiDelegate* _tmp12_;
	ValaList* _tmp13_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vcb != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vcb);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_DELEGATE) ? ((ValadocApiDelegate*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	cb = _tmp2_;
	_tmp3_ = cb;
	_tmp4_ = baladoc_api_node_get_documentation ((ValadocApiNode*) _tmp3_);
	_tmp5_ = _tmp4_;
	if (_tmp5_ == NULL) {
		result = NULL;
		_g_object_unref0 (cb);
		return result;
	}
	_tmp6_ = cb;
	_tmp7_ = baladoc_api_node_get_documentation ((ValadocApiNode*) _tmp6_);
	_tmp8_ = _tmp7_;
	_tmp9_ = _g_object_ref0 (_tmp8_);
	documentation = _tmp9_;
	_tmp10_ = documentation;
	if (_tmp10_ == NULL) {
		result = NULL;
		_g_object_unref0 (documentation);
		_g_object_unref0 (cb);
		return result;
	}
	_tmp11_ = documentation;
	_tmp12_ = cb;
	_tmp13_ = baladoc_content_comment_find_taglets (_tmp11_, (ValadocApiNode*) _tmp12_, BALADOC_TAGLETS_TYPE_RETURN);
	taglets = _tmp13_;
	{
		ValaList* _taglet_list = NULL;
		ValaList* _tmp14_;
		ValaList* _tmp15_;
		gint _taglet_size = 0;
		ValaList* _tmp16_;
		gint _tmp17_;
		gint _tmp18_;
		gint _taglet_index = 0;
		_tmp14_ = taglets;
		_tmp15_ = _bala_iterable_ref0 (_tmp14_);
		_taglet_list = _tmp15_;
		_tmp16_ = _taglet_list;
		_tmp17_ = bala_collection_get_size ((ValaCollection*) _tmp16_);
		_tmp18_ = _tmp17_;
		_taglet_size = _tmp18_;
		_taglet_index = -1;
		while (TRUE) {
			gint _tmp19_;
			gint _tmp20_;
			ValadocContentTaglet* taglet = NULL;
			ValaList* _tmp21_;
			gpointer _tmp22_;
			ValadocContentTaglet* _tmp23_;
			gchar* _tmp24_;
			_taglet_index = _taglet_index + 1;
			_tmp19_ = _taglet_index;
			_tmp20_ = _taglet_size;
			if (!(_tmp19_ < _tmp20_)) {
				break;
			}
			_tmp21_ = _taglet_list;
			_tmp22_ = bala_list_get (_tmp21_, _taglet_index);
			taglet = (ValadocContentTaglet*) _tmp22_;
			_tmp23_ = taglet;
			_tmp24_ = baladoc_gir_writer_translate_taglet (self, _tmp23_);
			result = _tmp24_;
			_g_object_unref0 (taglet);
			_bala_iterable_unref0 (_taglet_list);
			_bala_iterable_unref0 (taglets);
			_g_object_unref0 (documentation);
			_g_object_unref0 (cb);
			return result;
		}
		_bala_iterable_unref0 (_taglet_list);
	}
	result = NULL;
	_bala_iterable_unref0 (taglets);
	_g_object_unref0 (documentation);
	_g_object_unref0 (cb);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_signal_return_comment (ValaGIRWriter* base,
                                                   ValaSignal* vsig)
{
	ValadocGirWriter * self;
	ValadocApiSignal* sig = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiSignal* _tmp2_;
	ValadocApiSignal* _tmp3_;
	ValadocContentComment* _tmp4_;
	ValadocContentComment* _tmp5_;
	ValadocContentComment* documentation = NULL;
	ValadocApiSignal* _tmp6_;
	ValadocContentComment* _tmp7_;
	ValadocContentComment* _tmp8_;
	ValadocContentComment* _tmp9_;
	ValadocContentComment* _tmp10_;
	ValaList* taglets = NULL;
	ValadocContentComment* _tmp11_;
	ValadocApiSignal* _tmp12_;
	ValaList* _tmp13_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vsig != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vsig);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_SIGNAL) ? ((ValadocApiSignal*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	sig = _tmp2_;
	_tmp3_ = sig;
	_tmp4_ = baladoc_api_node_get_documentation ((ValadocApiNode*) _tmp3_);
	_tmp5_ = _tmp4_;
	if (_tmp5_ == NULL) {
		result = NULL;
		_g_object_unref0 (sig);
		return result;
	}
	_tmp6_ = sig;
	_tmp7_ = baladoc_api_node_get_documentation ((ValadocApiNode*) _tmp6_);
	_tmp8_ = _tmp7_;
	_tmp9_ = _g_object_ref0 (_tmp8_);
	documentation = _tmp9_;
	_tmp10_ = documentation;
	if (_tmp10_ == NULL) {
		result = NULL;
		_g_object_unref0 (documentation);
		_g_object_unref0 (sig);
		return result;
	}
	_tmp11_ = documentation;
	_tmp12_ = sig;
	_tmp13_ = baladoc_content_comment_find_taglets (_tmp11_, (ValadocApiNode*) _tmp12_, BALADOC_TAGLETS_TYPE_RETURN);
	taglets = _tmp13_;
	{
		ValaList* _taglet_list = NULL;
		ValaList* _tmp14_;
		ValaList* _tmp15_;
		gint _taglet_size = 0;
		ValaList* _tmp16_;
		gint _tmp17_;
		gint _tmp18_;
		gint _taglet_index = 0;
		_tmp14_ = taglets;
		_tmp15_ = _bala_iterable_ref0 (_tmp14_);
		_taglet_list = _tmp15_;
		_tmp16_ = _taglet_list;
		_tmp17_ = bala_collection_get_size ((ValaCollection*) _tmp16_);
		_tmp18_ = _tmp17_;
		_taglet_size = _tmp18_;
		_taglet_index = -1;
		while (TRUE) {
			gint _tmp19_;
			gint _tmp20_;
			ValadocContentTaglet* taglet = NULL;
			ValaList* _tmp21_;
			gpointer _tmp22_;
			ValadocContentTaglet* _tmp23_;
			gchar* _tmp24_;
			_taglet_index = _taglet_index + 1;
			_tmp19_ = _taglet_index;
			_tmp20_ = _taglet_size;
			if (!(_tmp19_ < _tmp20_)) {
				break;
			}
			_tmp21_ = _taglet_list;
			_tmp22_ = bala_list_get (_tmp21_, _taglet_index);
			taglet = (ValadocContentTaglet*) _tmp22_;
			_tmp23_ = taglet;
			_tmp24_ = baladoc_gir_writer_translate_taglet (self, _tmp23_);
			result = _tmp24_;
			_g_object_unref0 (taglet);
			_bala_iterable_unref0 (_taglet_list);
			_bala_iterable_unref0 (taglets);
			_g_object_unref0 (documentation);
			_g_object_unref0 (sig);
			return result;
		}
		_bala_iterable_unref0 (_taglet_list);
	}
	result = NULL;
	_bala_iterable_unref0 (taglets);
	_g_object_unref0 (documentation);
	_g_object_unref0 (sig);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_method_return_comment (ValaGIRWriter* base,
                                                   ValaMethod* vm)
{
	ValadocGirWriter * self;
	ValadocApiMethod* m = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiMethod* _tmp2_;
	ValadocApiMethod* _tmp3_;
	ValadocContentComment* _tmp4_;
	ValadocContentComment* _tmp5_;
	ValadocContentComment* documentation = NULL;
	ValadocApiMethod* _tmp6_;
	ValadocContentComment* _tmp7_;
	ValadocContentComment* _tmp8_;
	ValadocContentComment* _tmp9_;
	ValadocContentComment* _tmp10_;
	ValaList* taglets = NULL;
	ValadocContentComment* _tmp11_;
	ValadocApiMethod* _tmp12_;
	ValaList* _tmp13_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vm != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vm);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_METHOD) ? ((ValadocApiMethod*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	m = _tmp2_;
	_tmp3_ = m;
	_tmp4_ = baladoc_api_node_get_documentation ((ValadocApiNode*) _tmp3_);
	_tmp5_ = _tmp4_;
	if (_tmp5_ == NULL) {
		result = NULL;
		_g_object_unref0 (m);
		return result;
	}
	_tmp6_ = m;
	_tmp7_ = baladoc_api_node_get_documentation ((ValadocApiNode*) _tmp6_);
	_tmp8_ = _tmp7_;
	_tmp9_ = _g_object_ref0 (_tmp8_);
	documentation = _tmp9_;
	_tmp10_ = documentation;
	if (_tmp10_ == NULL) {
		result = NULL;
		_g_object_unref0 (documentation);
		_g_object_unref0 (m);
		return result;
	}
	_tmp11_ = documentation;
	_tmp12_ = m;
	_tmp13_ = baladoc_content_comment_find_taglets (_tmp11_, (ValadocApiNode*) _tmp12_, BALADOC_TAGLETS_TYPE_RETURN);
	taglets = _tmp13_;
	{
		ValaList* _taglet_list = NULL;
		ValaList* _tmp14_;
		ValaList* _tmp15_;
		gint _taglet_size = 0;
		ValaList* _tmp16_;
		gint _tmp17_;
		gint _tmp18_;
		gint _taglet_index = 0;
		_tmp14_ = taglets;
		_tmp15_ = _bala_iterable_ref0 (_tmp14_);
		_taglet_list = _tmp15_;
		_tmp16_ = _taglet_list;
		_tmp17_ = bala_collection_get_size ((ValaCollection*) _tmp16_);
		_tmp18_ = _tmp17_;
		_taglet_size = _tmp18_;
		_taglet_index = -1;
		while (TRUE) {
			gint _tmp19_;
			gint _tmp20_;
			ValadocContentTaglet* taglet = NULL;
			ValaList* _tmp21_;
			gpointer _tmp22_;
			ValadocContentTaglet* _tmp23_;
			gchar* _tmp24_;
			_taglet_index = _taglet_index + 1;
			_tmp19_ = _taglet_index;
			_tmp20_ = _taglet_size;
			if (!(_tmp19_ < _tmp20_)) {
				break;
			}
			_tmp21_ = _taglet_list;
			_tmp22_ = bala_list_get (_tmp21_, _taglet_index);
			taglet = (ValadocContentTaglet*) _tmp22_;
			_tmp23_ = taglet;
			_tmp24_ = baladoc_gir_writer_translate_taglet (self, _tmp23_);
			result = _tmp24_;
			_g_object_unref0 (taglet);
			_bala_iterable_unref0 (_taglet_list);
			_bala_iterable_unref0 (taglets);
			_g_object_unref0 (documentation);
			_g_object_unref0 (m);
			return result;
		}
		_bala_iterable_unref0 (_taglet_list);
	}
	result = NULL;
	_bala_iterable_unref0 (taglets);
	_g_object_unref0 (documentation);
	_g_object_unref0 (m);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_signal_comment (ValaGIRWriter* base,
                                            ValaSignal* vsig)
{
	ValadocGirWriter * self;
	ValadocApiSignal* sig = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValadocApiSymbol* _tmp1_;
	ValadocApiSignal* _tmp2_;
	ValadocContentComment* _tmp3_;
	ValadocContentComment* _tmp4_;
	gchar* _tmp5_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (vsig != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = baladoc_symbol_resolver_resolve (_tmp0_, (ValaSymbol*) vsig);
	_tmp2_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, BALADOC_API_TYPE_SIGNAL) ? ((ValadocApiSignal*) _tmp1_) : NULL;
	if (_tmp2_ == NULL) {
		_g_object_unref0 (_tmp1_);
	}
	sig = _tmp2_;
	_tmp3_ = baladoc_api_node_get_documentation ((ValadocApiNode*) sig);
	_tmp4_ = _tmp3_;
	_tmp5_ = baladoc_gir_writer_translate (self, _tmp4_);
	result = _tmp5_;
	_g_object_unref0 (sig);
	return result;
}

static gchar*
baladoc_gir_writer_real_get_parameter_comment (ValaGIRWriter* base,
                                               ValaParameter* param)
{
	ValadocGirWriter * self;
	ValadocApiSymbol* symbol = NULL;
	ValadocSymbolResolver* _tmp0_;
	ValaSymbol* _tmp1_;
	ValaSymbol* _tmp2_;
	ValadocApiSymbol* _tmp3_;
	ValadocApiSymbol* _tmp4_;
	ValadocContentComment* documentation = NULL;
	ValadocApiSymbol* _tmp5_;
	ValadocContentComment* _tmp6_;
	ValadocContentComment* _tmp7_;
	ValadocContentComment* _tmp8_;
	ValadocContentComment* _tmp9_;
	ValaList* taglets = NULL;
	ValadocContentComment* _tmp10_;
	ValadocApiSymbol* _tmp11_;
	ValaList* _tmp12_;
	gchar* result = NULL;
	self = (ValadocGirWriter*) base;
	g_return_val_if_fail (param != NULL, NULL);
	_tmp0_ = self->priv->resolver;
	_tmp1_ = bala_symbol_get_parent_symbol ((ValaSymbol*) param);
	_tmp2_ = _tmp1_;
	_tmp3_ = baladoc_symbol_resolver_resolve (_tmp0_, G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, BALA_TYPE_SYMBOL, ValaSymbol));
	symbol = _tmp3_;
	_tmp4_ = symbol;
	if (_tmp4_ == NULL) {
		result = NULL;
		_g_object_unref0 (symbol);
		return result;
	}
	_tmp5_ = symbol;
	_tmp6_ = baladoc_api_node_get_documentation ((ValadocApiNode*) _tmp5_);
	_tmp7_ = _tmp6_;
	_tmp8_ = _g_object_ref0 (_tmp7_);
	documentation = _tmp8_;
	_tmp9_ = documentation;
	if (_tmp9_ == NULL) {
		result = NULL;
		_g_object_unref0 (documentation);
		_g_object_unref0 (symbol);
		return result;
	}
	_tmp10_ = documentation;
	_tmp11_ = symbol;
	_tmp12_ = baladoc_content_comment_find_taglets (_tmp10_, (ValadocApiNode*) _tmp11_, BALADOC_TAGLETS_TYPE_PARAM);
	taglets = _tmp12_;
	{
		ValaList* __taglet_list = NULL;
		ValaList* _tmp13_;
		ValaList* _tmp14_;
		gint __taglet_size = 0;
		ValaList* _tmp15_;
		gint _tmp16_;
		gint _tmp17_;
		gint __taglet_index = 0;
		_tmp13_ = taglets;
		_tmp14_ = _bala_iterable_ref0 (_tmp13_);
		__taglet_list = _tmp14_;
		_tmp15_ = __taglet_list;
		_tmp16_ = bala_collection_get_size ((ValaCollection*) _tmp15_);
		_tmp17_ = _tmp16_;
		__taglet_size = _tmp17_;
		__taglet_index = -1;
		while (TRUE) {
			gint _tmp18_;
			gint _tmp19_;
			ValadocContentTaglet* _taglet = NULL;
			ValaList* _tmp20_;
			gpointer _tmp21_;
			ValadocTagletsParam* taglet = NULL;
			ValadocContentTaglet* _tmp22_;
			ValadocTagletsParam* _tmp23_;
			ValadocTagletsParam* _tmp24_;
			const gchar* _tmp25_;
			const gchar* _tmp26_;
			const gchar* _tmp27_;
			const gchar* _tmp28_;
			__taglet_index = __taglet_index + 1;
			_tmp18_ = __taglet_index;
			_tmp19_ = __taglet_size;
			if (!(_tmp18_ < _tmp19_)) {
				break;
			}
			_tmp20_ = __taglet_list;
			_tmp21_ = bala_list_get (_tmp20_, __taglet_index);
			_taglet = (ValadocContentTaglet*) _tmp21_;
			_tmp22_ = _taglet;
			_tmp23_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp22_, BALADOC_TAGLETS_TYPE_PARAM, ValadocTagletsParam));
			taglet = _tmp23_;
			_tmp24_ = taglet;
			_tmp25_ = baladoc_taglets_param_get_parameter_name (_tmp24_);
			_tmp26_ = _tmp25_;
			_tmp27_ = bala_symbol_get_name ((ValaSymbol*) param);
			_tmp28_ = _tmp27_;
			if (g_strcmp0 (_tmp26_, _tmp28_) == 0) {
				ValadocTagletsParam* _tmp29_;
				gchar* _tmp30_;
				_tmp29_ = taglet;
				_tmp30_ = baladoc_gir_writer_translate_taglet (self, (ValadocContentTaglet*) _tmp29_);
				result = _tmp30_;
				_g_object_unref0 (taglet);
				_g_object_unref0 (_taglet);
				_bala_iterable_unref0 (__taglet_list);
				_bala_iterable_unref0 (taglets);
				_g_object_unref0 (documentation);
				_g_object_unref0 (symbol);
				return result;
			}
			_g_object_unref0 (taglet);
			_g_object_unref0 (_taglet);
		}
		_bala_iterable_unref0 (__taglet_list);
	}
	result = NULL;
	_bala_iterable_unref0 (taglets);
	_g_object_unref0 (documentation);
	_g_object_unref0 (symbol);
	return result;
}

static void
baladoc_gir_writer_class_init (ValadocGirWriterClass * klass,
                               gpointer klass_data)
{
	baladoc_gir_writer_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeVisitorClass *) klass)->finalize = baladoc_gir_writer_finalize;
	g_type_class_adjust_private_offset (klass, &ValadocGirWriter_private_offset);
	((ValaGIRWriterClass *) klass)->get_interface_comment = (gchar* (*) (ValaGIRWriter*, ValaInterface*)) baladoc_gir_writer_real_get_interface_comment;
	((ValaGIRWriterClass *) klass)->get_struct_comment = (gchar* (*) (ValaGIRWriter*, ValaStruct*)) baladoc_gir_writer_real_get_struct_comment;
	((ValaGIRWriterClass *) klass)->get_enum_comment = (gchar* (*) (ValaGIRWriter*, ValaEnum*)) baladoc_gir_writer_real_get_enum_comment;
	((ValaGIRWriterClass *) klass)->get_class_comment = (gchar* (*) (ValaGIRWriter*, ValaClass*)) baladoc_gir_writer_real_get_class_comment;
	((ValaGIRWriterClass *) klass)->get_error_code_comment = (gchar* (*) (ValaGIRWriter*, ValaErrorCode*)) baladoc_gir_writer_real_get_error_code_comment;
	((ValaGIRWriterClass *) klass)->get_enum_value_comment = (gchar* (*) (ValaGIRWriter*, ValaEnumValue*)) baladoc_gir_writer_real_get_enum_value_comment;
	((ValaGIRWriterClass *) klass)->get_constant_comment = (gchar* (*) (ValaGIRWriter*, ValaConstant*)) baladoc_gir_writer_real_get_constant_comment;
	((ValaGIRWriterClass *) klass)->get_error_domain_comment = (gchar* (*) (ValaGIRWriter*, ValaErrorDomain*)) baladoc_gir_writer_real_get_error_domain_comment;
	((ValaGIRWriterClass *) klass)->get_field_comment = (gchar* (*) (ValaGIRWriter*, ValaField*)) baladoc_gir_writer_real_get_field_comment;
	((ValaGIRWriterClass *) klass)->get_delegate_comment = (gchar* (*) (ValaGIRWriter*, ValaDelegate*)) baladoc_gir_writer_real_get_delegate_comment;
	((ValaGIRWriterClass *) klass)->get_method_comment = (gchar* (*) (ValaGIRWriter*, ValaMethod*)) baladoc_gir_writer_real_get_method_comment;
	((ValaGIRWriterClass *) klass)->get_property_comment = (gchar* (*) (ValaGIRWriter*, ValaProperty*)) baladoc_gir_writer_real_get_property_comment;
	((ValaGIRWriterClass *) klass)->get_delegate_return_comment = (gchar* (*) (ValaGIRWriter*, ValaDelegate*)) baladoc_gir_writer_real_get_delegate_return_comment;
	((ValaGIRWriterClass *) klass)->get_signal_return_comment = (gchar* (*) (ValaGIRWriter*, ValaSignal*)) baladoc_gir_writer_real_get_signal_return_comment;
	((ValaGIRWriterClass *) klass)->get_method_return_comment = (gchar* (*) (ValaGIRWriter*, ValaMethod*)) baladoc_gir_writer_real_get_method_return_comment;
	((ValaGIRWriterClass *) klass)->get_signal_comment = (gchar* (*) (ValaGIRWriter*, ValaSignal*)) baladoc_gir_writer_real_get_signal_comment;
	((ValaGIRWriterClass *) klass)->get_parameter_comment = (gchar* (*) (ValaGIRWriter*, ValaParameter*)) baladoc_gir_writer_real_get_parameter_comment;
}

static void
baladoc_gir_writer_instance_init (ValadocGirWriter * self,
                                  gpointer klass)
{
	self->priv = baladoc_gir_writer_get_instance_private (self);
}

static void
baladoc_gir_writer_finalize (ValaCodeVisitor * obj)
{
	ValadocGirWriter * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_TYPE_GIR_WRITER, ValadocGirWriter);
	_g_object_unref0 (self->priv->renderer);
	_g_object_unref0 (self->priv->resolver);
	BALA_CODE_VISITOR_CLASS (baladoc_gir_writer_parent_class)->finalize (obj);
}

/**
 * Code visitor generating .gir file for the public interface.
 */
static GType
baladoc_gir_writer_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocGirWriterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_gir_writer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocGirWriter), 0, (GInstanceInitFunc) baladoc_gir_writer_instance_init, NULL };
	GType baladoc_gir_writer_type_id;
	baladoc_gir_writer_type_id = g_type_register_static (BALA_TYPE_GIR_WRITER, "ValadocGirWriter", &g_define_type_info, 0);
	ValadocGirWriter_private_offset = g_type_add_instance_private (baladoc_gir_writer_type_id, sizeof (ValadocGirWriterPrivate));
	return baladoc_gir_writer_type_id;
}

GType
baladoc_gir_writer_get_type (void)
{
	static volatile gsize baladoc_gir_writer_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_gir_writer_type_id__volatile)) {
		GType baladoc_gir_writer_type_id;
		baladoc_gir_writer_type_id = baladoc_gir_writer_get_type_once ();
		g_once_init_leave (&baladoc_gir_writer_type_id__volatile, baladoc_gir_writer_type_id);
	}
	return baladoc_gir_writer_type_id__volatile;
}

