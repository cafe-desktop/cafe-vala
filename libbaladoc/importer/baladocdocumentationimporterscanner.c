/* valadocdocumentationimporterscanner.c generated by valac, the Vala compiler
 * generated from valadocdocumentationimporterscanner.vala, do not modify */

/* valadodocumentationscanner.vala
 *
 * Copyright (C) 2010 Florian Brosch
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

#include "valadoc.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <glib-object.h>
#include <vala.h>

enum  {
	BALADOC_IMPORTER_BALADOC_DOCUMENTATION_SCANNER_0_PROPERTY,
	BALADOC_IMPORTER_BALADOC_DOCUMENTATION_SCANNER_NUM_PROPERTIES
};
static GParamSpec* valadoc_importer_valadoc_documentation_scanner_properties[BALADOC_IMPORTER_BALADOC_DOCUMENTATION_SCANNER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _valadoc_parser_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_parser_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

struct _ValadocImporterValadocDocumentationScannerPrivate {
	ValadocSettings* _settings;
	ValadocParser* _parser;
	gchar* _content;
	const gchar* _index;
	gboolean _stop;
	gint _last_line;
	gint _last_column;
	gint _line;
	gint _column;
	gunichar _last_char;
	gint _skip;
	GString* _current_string;
};

static gint ValadocImporterValadocDocumentationScanner_private_offset;
static gpointer valadoc_importer_valadoc_documentation_scanner_parent_class = NULL;
static ValadocScannerIface * valadoc_importer_valadoc_documentation_scanner_valadoc_scanner_parent_iface = NULL;

static void valadoc_importer_valadoc_documentation_scanner_real_set_parser (ValadocScanner* base,
                                                                     ValadocParser* parser);
static void valadoc_importer_valadoc_documentation_scanner_real_reset (ValadocImporterValadocDocumentationScanner* self);
static void valadoc_importer_valadoc_documentation_scanner_real_scan (ValadocScanner* base,
                                                               const gchar* content,
                                                               GError** error);
static void valadoc_importer_valadoc_documentation_scanner_real_end (ValadocScanner* base,
                                                              GError** error);
static void valadoc_importer_valadoc_documentation_scanner_emit_token (ValadocImporterValadocDocumentationScanner* self,
                                                                ValadocTokenType* type,
                                                                GError** error);
static void valadoc_importer_valadoc_documentation_scanner_real_stop (ValadocImporterValadocDocumentationScanner* self);
static gchar* valadoc_importer_valadoc_documentation_scanner_real_get_line_content (ValadocImporterValadocDocumentationScanner* self);
static void valadoc_importer_valadoc_documentation_scanner_append_char (ValadocImporterValadocDocumentationScanner* self,
                                                                 gunichar c);
static gint valadoc_importer_valadoc_documentation_scanner_real_get_line_start_column (ValadocImporterValadocDocumentationScanner* self);
static void valadoc_importer_valadoc_documentation_scanner_get_begin (ValadocImporterValadocDocumentationScanner* self,
                                                               ValaSourceLocation* result);
static void valadoc_importer_valadoc_documentation_scanner_get_end (ValadocImporterValadocDocumentationScanner* self,
                                                             gint offset,
                                                             ValaSourceLocation* result);
static void valadoc_importer_valadoc_documentation_scanner_emit_current_word (ValadocImporterValadocDocumentationScanner* self,
                                                                       GError** error);
static void valadoc_importer_valadoc_documentation_scanner_finalize (GObject * obj);
static GType valadoc_importer_valadoc_documentation_scanner_get_type_once (void);

static inline gpointer
valadoc_importer_valadoc_documentation_scanner_get_instance_private (ValadocImporterValadocDocumentationScanner* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocImporterValadocDocumentationScanner_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

ValadocImporterValadocDocumentationScanner*
valadoc_importer_valadoc_documentation_scanner_construct (GType object_type,
                                                          ValadocSettings* settings)
{
	ValadocImporterValadocDocumentationScanner * self = NULL;
	ValadocSettings* _tmp0_;
	g_return_val_if_fail (settings != NULL, NULL);
	self = (ValadocImporterValadocDocumentationScanner*) g_object_new (object_type, NULL);
	_tmp0_ = _g_object_ref0 (settings);
	_g_object_unref0 (self->priv->_settings);
	self->priv->_settings = _tmp0_;
	return self;
}

ValadocImporterValadocDocumentationScanner*
valadoc_importer_valadoc_documentation_scanner_new (ValadocSettings* settings)
{
	return valadoc_importer_valadoc_documentation_scanner_construct (BALADOC_IMPORTER_TYPE_BALADOC_DOCUMENTATION_SCANNER, settings);
}

static gpointer
_valadoc_parser_ref0 (gpointer self)
{
	return self ? valadoc_parser_ref (self) : NULL;
}

static void
valadoc_importer_valadoc_documentation_scanner_real_set_parser (ValadocScanner* base,
                                                                ValadocParser* parser)
{
	ValadocImporterValadocDocumentationScanner * self;
	ValadocParser* _tmp0_;
	self = (ValadocImporterValadocDocumentationScanner*) base;
	g_return_if_fail (parser != NULL);
	_tmp0_ = _valadoc_parser_ref0 (parser);
	_valadoc_parser_unref0 (self->priv->_parser);
	self->priv->_parser = _tmp0_;
}

static void
valadoc_importer_valadoc_documentation_scanner_real_reset (ValadocImporterValadocDocumentationScanner* self)
{
	GString* _tmp0_;
	self->priv->_stop = FALSE;
	self->priv->_last_line = 0;
	self->priv->_last_column = 0;
	self->priv->_line = 0;
	self->priv->_column = 0;
	self->priv->_last_char = (gunichar) 0;
	self->priv->_skip = 0;
	_tmp0_ = self->priv->_current_string;
	g_string_erase (_tmp0_, (gssize) 0, (gssize) -1);
}

void
valadoc_importer_valadoc_documentation_scanner_reset (ValadocImporterValadocDocumentationScanner* self)
{
	g_return_if_fail (self != NULL);
	BALADOC_IMPORTER_BALADOC_DOCUMENTATION_SCANNER_GET_CLASS (self)->reset (self);
}

static gunichar
string_get_char (const gchar* self,
                 glong index)
{
	gunichar result = 0U;
	g_return_val_if_fail (self != NULL, 0U);
	result = g_utf8_get_char (((gchar*) self) + index);
	return result;
}

static void
valadoc_importer_valadoc_documentation_scanner_real_scan (ValadocScanner* base,
                                                          const gchar* content,
                                                          GError** error)
{
	ValadocImporterValadocDocumentationScanner * self;
	gchar* _tmp0_;
	GError* _inner_error0_ = NULL;
	self = (ValadocImporterValadocDocumentationScanner*) base;
	g_return_if_fail (content != NULL);
	_tmp0_ = g_strdup (content);
	_g_free0 (self->priv->_content);
	self->priv->_content = _tmp0_;
	{
		const gchar* _tmp1_;
		gboolean _tmp2_ = FALSE;
		_tmp1_ = self->priv->_content;
		self->priv->_index = _tmp1_;
		_tmp2_ = TRUE;
		while (TRUE) {
			gboolean _tmp5_ = FALSE;
			gunichar c = 0U;
			const gchar* _tmp7_;
			if (!_tmp2_) {
				const gchar* _tmp3_;
				const gchar* _tmp4_;
				_tmp3_ = self->priv->_index;
				_tmp4_ = g_utf8_next_char (_tmp3_);
				self->priv->_index = _tmp4_;
			}
			_tmp2_ = FALSE;
			if (!self->priv->_stop) {
				const gchar* _tmp6_;
				_tmp6_ = self->priv->_index;
				_tmp5_ = string_get_char (_tmp6_, (glong) 0) != ((gunichar) 0);
			} else {
				_tmp5_ = FALSE;
			}
			if (!_tmp5_) {
				break;
			}
			_tmp7_ = self->priv->_index;
			c = string_get_char (_tmp7_, (glong) 0);
			valadoc_importer_valadoc_documentation_scanner_accept (self, c, &_inner_error0_);
			if (G_UNLIKELY (_inner_error0_ != NULL)) {
				if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
					g_propagate_error (error, _inner_error0_);
					return;
				} else {
					g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
					g_clear_error (&_inner_error0_);
					return;
				}
			}
		}
	}
}

static void
valadoc_importer_valadoc_documentation_scanner_real_end (ValadocScanner* base,
                                                         GError** error)
{
	ValadocImporterValadocDocumentationScanner * self;
	ValadocTokenType* _tmp0_;
	GError* _inner_error0_ = NULL;
	self = (ValadocImporterValadocDocumentationScanner*) base;
	_tmp0_ = valadoc_token_type_EOF;
	valadoc_importer_valadoc_documentation_scanner_emit_token (self, _tmp0_, &_inner_error0_);
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
			g_propagate_error (error, _inner_error0_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return;
		}
	}
}

static void
valadoc_importer_valadoc_documentation_scanner_real_stop (ValadocImporterValadocDocumentationScanner* self)
{
	self->priv->_stop = TRUE;
}

void
valadoc_importer_valadoc_documentation_scanner_stop (ValadocImporterValadocDocumentationScanner* self)
{
	g_return_if_fail (self != NULL);
	BALADOC_IMPORTER_BALADOC_DOCUMENTATION_SCANNER_GET_CLASS (self)->stop (self);
}

gint
valadoc_importer_valadoc_documentation_scanner_get_line (ValadocImporterValadocDocumentationScanner* self)
{
	gint result = 0;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_line;
	return result;
}

static gchar*
valadoc_importer_valadoc_documentation_scanner_real_get_line_content (ValadocImporterValadocDocumentationScanner* self)
{
	GString* builder = NULL;
	GString* _tmp0_;
	const gchar* line_start = NULL;
	const gchar* _tmp1_;
	gunichar c = 0U;
	GString* _tmp15_;
	const gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* result = NULL;
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	_tmp1_ = self->priv->_index;
	line_start = _tmp1_;
	while (TRUE) {
		gboolean _tmp2_ = FALSE;
		const gchar* _tmp3_;
		const gchar* _tmp4_;
		const gchar* _tmp7_;
		const gchar* _tmp8_;
		_tmp3_ = line_start;
		_tmp4_ = self->priv->_content;
		if (((gchar*) _tmp3_) > ((gchar*) _tmp4_)) {
			const gchar* _tmp5_;
			const gchar* _tmp6_;
			_tmp5_ = line_start;
			_tmp6_ = g_utf8_prev_char (_tmp5_);
			_tmp2_ = string_get_char (_tmp6_, (glong) 0) != ((gunichar) '\n');
		} else {
			_tmp2_ = FALSE;
		}
		if (!_tmp2_) {
			break;
		}
		_tmp7_ = line_start;
		_tmp8_ = g_utf8_prev_char (_tmp7_);
		line_start = _tmp8_;
	}
	while (TRUE) {
		gboolean _tmp9_ = FALSE;
		const gchar* _tmp10_;
		const gchar* _tmp13_;
		const gchar* _tmp14_;
		_tmp10_ = line_start;
		c = string_get_char (_tmp10_, (glong) 0);
		if (c != ((gunichar) '\n')) {
			_tmp9_ = c != ((gunichar) '\0');
		} else {
			_tmp9_ = FALSE;
		}
		if (!_tmp9_) {
			break;
		}
		if (c == ((gunichar) '\t')) {
			GString* _tmp11_;
			_tmp11_ = builder;
			g_string_append_c (_tmp11_, ' ');
		} else {
			GString* _tmp12_;
			_tmp12_ = builder;
			g_string_append_unichar (_tmp12_, c);
		}
		_tmp13_ = line_start;
		_tmp14_ = g_utf8_next_char (_tmp13_);
		line_start = _tmp14_;
	}
	_tmp15_ = builder;
	_tmp16_ = _tmp15_->str;
	_tmp17_ = g_strdup (_tmp16_);
	result = _tmp17_;
	_g_string_free0 (builder);
	return result;
}

gchar*
valadoc_importer_valadoc_documentation_scanner_get_line_content (ValadocImporterValadocDocumentationScanner* self)
{
	g_return_val_if_fail (self != NULL, NULL);
	return BALADOC_IMPORTER_BALADOC_DOCUMENTATION_SCANNER_GET_CLASS (self)->get_line_content (self);
}

static gint
string_index_of_nth_char (const gchar* self,
                          glong c)
{
	gchar* _tmp0_;
	gint result = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = g_utf8_offset_to_pointer (self, c);
	result = (gint) (_tmp0_ - ((gchar*) self));
	return result;
}

gunichar
valadoc_importer_valadoc_documentation_scanner_get_next_char (ValadocImporterValadocDocumentationScanner* self,
                                                              gint offset)
{
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	gunichar result = 0U;
	g_return_val_if_fail (self != NULL, 0U);
	_tmp0_ = self->priv->_index;
	_tmp1_ = self->priv->_index;
	result = string_get_char (_tmp0_, (glong) string_index_of_nth_char (_tmp1_, (glong) offset));
	return result;
}

void
valadoc_importer_valadoc_documentation_scanner_accept (ValadocImporterValadocDocumentationScanner* self,
                                                       gunichar c,
                                                       GError** error)
{
	gint _tmp0_;
	GError* _inner_error0_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_column;
	self->priv->_column = _tmp0_ + 1;
	if (self->priv->_skip == 0) {
		switch (c) {
			case '/':
			{
				if (valadoc_importer_valadoc_documentation_scanner_get_next_char (self, 1) == ((gunichar) '*')) {
					ValadocTokenType* _tmp1_;
					_tmp1_ = valadoc_token_type_BALADOC_COMMENT_START;
					valadoc_importer_valadoc_documentation_scanner_emit_token (self, _tmp1_, &_inner_error0_);
					if (G_UNLIKELY (_inner_error0_ != NULL)) {
						if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
							g_propagate_error (error, _inner_error0_);
							return;
						} else {
							g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
							g_clear_error (&_inner_error0_);
							return;
						}
					}
					self->priv->_skip = 1;
				} else {
					valadoc_importer_valadoc_documentation_scanner_append_char (self, c);
				}
				break;
			}
			case '*':
			{
				if (valadoc_importer_valadoc_documentation_scanner_get_next_char (self, 1) == ((gunichar) '/')) {
					ValadocTokenType* _tmp2_;
					_tmp2_ = valadoc_token_type_BALADOC_COMMENT_END;
					valadoc_importer_valadoc_documentation_scanner_emit_token (self, _tmp2_, &_inner_error0_);
					if (G_UNLIKELY (_inner_error0_ != NULL)) {
						if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
							g_propagate_error (error, _inner_error0_);
							return;
						} else {
							g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
							g_clear_error (&_inner_error0_);
							return;
						}
					}
					self->priv->_skip = 1;
				} else {
					valadoc_importer_valadoc_documentation_scanner_append_char (self, c);
				}
				break;
			}
			case '\t':
			{
				ValadocTokenType* _tmp3_;
				_tmp3_ = valadoc_token_type_BALADOC_TAB;
				valadoc_importer_valadoc_documentation_scanner_emit_token (self, _tmp3_, &_inner_error0_);
				if (G_UNLIKELY (_inner_error0_ != NULL)) {
					if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
						g_propagate_error (error, _inner_error0_);
						return;
					} else {
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
						g_clear_error (&_inner_error0_);
						return;
					}
				}
				break;
			}
			case ' ':
			{
				ValadocTokenType* _tmp4_;
				_tmp4_ = valadoc_token_type_BALADOC_SPACE;
				valadoc_importer_valadoc_documentation_scanner_emit_token (self, _tmp4_, &_inner_error0_);
				if (G_UNLIKELY (_inner_error0_ != NULL)) {
					if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
						g_propagate_error (error, _inner_error0_);
						return;
					} else {
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
						g_clear_error (&_inner_error0_);
						return;
					}
				}
				break;
			}
			case '\n':
			{
				ValadocTokenType* _tmp5_;
				gint _tmp6_;
				_tmp5_ = valadoc_token_type_BALADOC_EOL;
				valadoc_importer_valadoc_documentation_scanner_emit_token (self, _tmp5_, &_inner_error0_);
				if (G_UNLIKELY (_inner_error0_ != NULL)) {
					if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
						g_propagate_error (error, _inner_error0_);
						return;
					} else {
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
						g_clear_error (&_inner_error0_);
						return;
					}
				}
				_tmp6_ = self->priv->_line;
				self->priv->_line = _tmp6_ + 1;
				self->priv->_column = 0;
				self->priv->_last_column = 0;
				break;
			}
			default:
			{
				valadoc_importer_valadoc_documentation_scanner_append_char (self, c);
				break;
			}
		}
	} else {
		gint _tmp7_;
		_tmp7_ = self->priv->_skip;
		self->priv->_skip = _tmp7_ - 1;
	}
	self->priv->_last_char = c;
}

static void
valadoc_importer_valadoc_documentation_scanner_append_char (ValadocImporterValadocDocumentationScanner* self,
                                                            gunichar c)
{
	GString* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_current_string;
	g_string_append_unichar (_tmp0_, c);
}

static gint
valadoc_importer_valadoc_documentation_scanner_real_get_line_start_column (ValadocImporterValadocDocumentationScanner* self)
{
	gint result = 0;
	result = 0;
	return result;
}

gint
valadoc_importer_valadoc_documentation_scanner_get_line_start_column (ValadocImporterValadocDocumentationScanner* self)
{
	g_return_val_if_fail (self != NULL, 0);
	return BALADOC_IMPORTER_BALADOC_DOCUMENTATION_SCANNER_GET_CLASS (self)->get_line_start_column (self);
}

static void
valadoc_importer_valadoc_documentation_scanner_get_begin (ValadocImporterValadocDocumentationScanner* self,
                                                          ValaSourceLocation* result)
{
	const gchar* _tmp0_;
	ValaSourceLocation _tmp1_ = {0};
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_index;
	vala_source_location_init (&_tmp1_, _tmp0_, self->priv->_last_line, valadoc_importer_valadoc_documentation_scanner_get_line_start_column (self) + self->priv->_last_column);
	*result = _tmp1_;
	return;
}

static void
valadoc_importer_valadoc_documentation_scanner_get_end (ValadocImporterValadocDocumentationScanner* self,
                                                        gint offset,
                                                        ValaSourceLocation* result)
{
	const gchar* _tmp0_;
	ValaSourceLocation _tmp1_ = {0};
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_index;
	vala_source_location_init (&_tmp1_, _tmp0_, self->priv->_line, (valadoc_importer_valadoc_documentation_scanner_get_line_start_column (self) + self->priv->_column) + offset);
	*result = _tmp1_;
	return;
}

static void
valadoc_importer_valadoc_documentation_scanner_emit_current_word (ValadocImporterValadocDocumentationScanner* self,
                                                                  GError** error)
{
	GString* _tmp0_;
	GError* _inner_error0_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_current_string;
	if (_tmp0_->len > ((gssize) 0)) {
		ValadocParser* _tmp1_;
		GString* _tmp2_;
		const gchar* _tmp3_;
		ValaSourceLocation _tmp4_ = {0};
		ValaSourceLocation _tmp5_ = {0};
		ValadocToken* _tmp6_;
		ValadocToken* _tmp7_;
		GString* _tmp8_;
		_tmp1_ = self->priv->_parser;
		_tmp2_ = self->priv->_current_string;
		_tmp3_ = _tmp2_->str;
		valadoc_importer_valadoc_documentation_scanner_get_begin (self, &_tmp4_);
		valadoc_importer_valadoc_documentation_scanner_get_end (self, -1, &_tmp5_);
		_tmp6_ = valadoc_token_new_from_word (_tmp3_, &_tmp4_, &_tmp5_);
		_tmp7_ = _tmp6_;
		valadoc_parser_accept_token (_tmp1_, _tmp7_, &_inner_error0_);
		_g_object_unref0 (_tmp7_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
				g_propagate_error (error, _inner_error0_);
				return;
			} else {
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
				g_clear_error (&_inner_error0_);
				return;
			}
		}
		_tmp8_ = self->priv->_current_string;
		g_string_erase (_tmp8_, (gssize) 0, (gssize) -1);
		self->priv->_last_line = self->priv->_line;
		self->priv->_last_column = self->priv->_column - 1;
	}
}

static void
valadoc_importer_valadoc_documentation_scanner_emit_token (ValadocImporterValadocDocumentationScanner* self,
                                                           ValadocTokenType* type,
                                                           GError** error)
{
	ValadocParser* _tmp0_;
	ValaSourceLocation _tmp1_ = {0};
	ValaSourceLocation _tmp2_ = {0};
	ValadocToken* _tmp3_;
	ValadocToken* _tmp4_;
	GError* _inner_error0_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (type != NULL);
	valadoc_importer_valadoc_documentation_scanner_emit_current_word (self, &_inner_error0_);
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
			g_propagate_error (error, _inner_error0_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return;
		}
	}
	_tmp0_ = self->priv->_parser;
	valadoc_importer_valadoc_documentation_scanner_get_begin (self, &_tmp1_);
	valadoc_importer_valadoc_documentation_scanner_get_end (self, self->priv->_skip, &_tmp2_);
	_tmp3_ = valadoc_token_new_from_type (type, &_tmp1_, &_tmp2_, NULL);
	_tmp4_ = _tmp3_;
	valadoc_parser_accept_token (_tmp0_, _tmp4_, &_inner_error0_);
	_g_object_unref0 (_tmp4_);
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
			g_propagate_error (error, _inner_error0_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return;
		}
	}
	self->priv->_last_line = self->priv->_line;
	self->priv->_last_column = self->priv->_column;
}

static void
valadoc_importer_valadoc_documentation_scanner_class_init (ValadocImporterValadocDocumentationScannerClass * klass,
                                                           gpointer klass_data)
{
	valadoc_importer_valadoc_documentation_scanner_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocImporterValadocDocumentationScanner_private_offset);
	((ValadocImporterValadocDocumentationScannerClass *) klass)->reset = (void (*) (ValadocImporterValadocDocumentationScanner*)) valadoc_importer_valadoc_documentation_scanner_real_reset;
	((ValadocImporterValadocDocumentationScannerClass *) klass)->stop = (void (*) (ValadocImporterValadocDocumentationScanner*)) valadoc_importer_valadoc_documentation_scanner_real_stop;
	((ValadocImporterValadocDocumentationScannerClass *) klass)->get_line_content = (gchar* (*) (ValadocImporterValadocDocumentationScanner*)) valadoc_importer_valadoc_documentation_scanner_real_get_line_content;
	((ValadocImporterValadocDocumentationScannerClass *) klass)->get_line_start_column = (gint (*) (ValadocImporterValadocDocumentationScanner*)) valadoc_importer_valadoc_documentation_scanner_real_get_line_start_column;
	G_OBJECT_CLASS (klass)->finalize = valadoc_importer_valadoc_documentation_scanner_finalize;
}

static void
valadoc_importer_valadoc_documentation_scanner_valadoc_scanner_interface_init (ValadocScannerIface * iface,
                                                                               gpointer iface_data)
{
	valadoc_importer_valadoc_documentation_scanner_valadoc_scanner_parent_iface = g_type_interface_peek_parent (iface);
	iface->set_parser = (void (*) (ValadocScanner*, ValadocParser*)) valadoc_importer_valadoc_documentation_scanner_real_set_parser;
	iface->reset = (void (*) (ValadocScanner*)) valadoc_importer_valadoc_documentation_scanner_reset;
	iface->scan = (void (*) (ValadocScanner*, const gchar*, GError**)) valadoc_importer_valadoc_documentation_scanner_real_scan;
	iface->end = (void (*) (ValadocScanner*, GError**)) valadoc_importer_valadoc_documentation_scanner_real_end;
	iface->stop = (void (*) (ValadocScanner*)) valadoc_importer_valadoc_documentation_scanner_stop;
	iface->get_line_content = (gchar* (*) (ValadocScanner*)) valadoc_importer_valadoc_documentation_scanner_get_line_content;
}

static void
valadoc_importer_valadoc_documentation_scanner_instance_init (ValadocImporterValadocDocumentationScanner * self,
                                                              gpointer klass)
{
	GString* _tmp0_;
	self->priv = valadoc_importer_valadoc_documentation_scanner_get_instance_private (self);
	_tmp0_ = g_string_new ("");
	self->priv->_current_string = _tmp0_;
}

static void
valadoc_importer_valadoc_documentation_scanner_finalize (GObject * obj)
{
	ValadocImporterValadocDocumentationScanner * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_IMPORTER_TYPE_BALADOC_DOCUMENTATION_SCANNER, ValadocImporterValadocDocumentationScanner);
	_g_object_unref0 (self->priv->_settings);
	_valadoc_parser_unref0 (self->priv->_parser);
	_g_free0 (self->priv->_content);
	_g_string_free0 (self->priv->_current_string);
	G_OBJECT_CLASS (valadoc_importer_valadoc_documentation_scanner_parent_class)->finalize (obj);
}

static GType
valadoc_importer_valadoc_documentation_scanner_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocImporterValadocDocumentationScannerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_importer_valadoc_documentation_scanner_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocImporterValadocDocumentationScanner), 0, (GInstanceInitFunc) valadoc_importer_valadoc_documentation_scanner_instance_init, NULL };
	static const GInterfaceInfo valadoc_scanner_info = { (GInterfaceInitFunc) valadoc_importer_valadoc_documentation_scanner_valadoc_scanner_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType valadoc_importer_valadoc_documentation_scanner_type_id;
	valadoc_importer_valadoc_documentation_scanner_type_id = g_type_register_static (G_TYPE_OBJECT, "ValadocImporterValadocDocumentationScanner", &g_define_type_info, 0);
	g_type_add_interface_static (valadoc_importer_valadoc_documentation_scanner_type_id, BALADOC_TYPE_SCANNER, &valadoc_scanner_info);
	ValadocImporterValadocDocumentationScanner_private_offset = g_type_add_instance_private (valadoc_importer_valadoc_documentation_scanner_type_id, sizeof (ValadocImporterValadocDocumentationScannerPrivate));
	return valadoc_importer_valadoc_documentation_scanner_type_id;
}

GType
valadoc_importer_valadoc_documentation_scanner_get_type (void)
{
	static volatile gsize valadoc_importer_valadoc_documentation_scanner_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_importer_valadoc_documentation_scanner_type_id__volatile)) {
		GType valadoc_importer_valadoc_documentation_scanner_type_id;
		valadoc_importer_valadoc_documentation_scanner_type_id = valadoc_importer_valadoc_documentation_scanner_get_type_once ();
		g_once_init_leave (&valadoc_importer_valadoc_documentation_scanner_type_id__volatile, valadoc_importer_valadoc_documentation_scanner_type_id);
	}
	return valadoc_importer_valadoc_documentation_scanner_type_id__volatile;
}

