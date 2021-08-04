/* balaswitchlabel.c generated by balac, the Bala compiler
 * generated from balaswitchlabel.bala, do not modify */

/* balaswitchlabel.bala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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
#include <glib.h>
#include <balagee.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>

#define _bala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (bala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _bala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (bala_iterable_unref (var), NULL)))

struct _BalaSwitchLabelPrivate {
	BalaExpression* _expression;
};

static gint BalaSwitchLabel_private_offset;
static gpointer bala_switch_label_parent_class = NULL;

static void bala_switch_label_real_accept (BalaCodeNode* base,
                                    BalaCodeVisitor* visitor);
static void bala_switch_label_real_accept_children (BalaCodeNode* base,
                                             BalaCodeVisitor* visitor);
static gboolean bala_switch_label_real_check (BalaCodeNode* base,
                                       BalaCodeContext* context);
static void bala_switch_label_real_emit (BalaCodeNode* base,
                                  BalaCodeGenerator* codegen);
static void bala_switch_label_finalize (BalaCodeNode * obj);
static GType bala_switch_label_get_type_once (void);

static inline gpointer
bala_switch_label_get_instance_private (BalaSwitchLabel* self)
{
	return G_STRUCT_MEMBER_P (self, BalaSwitchLabel_private_offset);
}

BalaExpression*
bala_switch_label_get_expression (BalaSwitchLabel* self)
{
	BalaExpression* result;
	BalaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_expression;
	result = _tmp0_;
	return result;
}

static gpointer
_bala_code_node_ref0 (gpointer self)
{
	return self ? bala_code_node_ref (self) : NULL;
}

void
bala_switch_label_set_expression (BalaSwitchLabel* self,
                                  BalaExpression* value)
{
	BalaExpression* _tmp0_;
	BalaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_code_node_ref0 (value);
	_bala_code_node_unref0 (self->priv->_expression);
	self->priv->_expression = _tmp0_;
	_tmp1_ = self->priv->_expression;
	bala_code_node_set_parent_node ((BalaCodeNode*) _tmp1_, (BalaCodeNode*) self);
}

BalaSwitchSection*
bala_switch_label_get_section (BalaSwitchLabel* self)
{
	BalaSwitchSection* result;
	BalaCodeNode* _tmp0_;
	BalaCodeNode* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = bala_code_node_get_parent_node ((BalaCodeNode*) self);
	_tmp1_ = _tmp0_;
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, BALA_TYPE_SWITCH_SECTION, BalaSwitchSection);
	return result;
}

/**
 * Creates a new switch case label.
 *
 * @param expr   label expression
 * @param source reference to source code
 * @return       newly created switch case label
 */
BalaSwitchLabel*
bala_switch_label_construct (GType object_type,
                             BalaExpression* expr,
                             BalaSourceReference* source)
{
	BalaSwitchLabel* self = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	self = (BalaSwitchLabel*) bala_code_node_construct (object_type);
	bala_switch_label_set_expression (self, expr);
	bala_code_node_set_source_reference ((BalaCodeNode*) self, source);
	return self;
}

BalaSwitchLabel*
bala_switch_label_new (BalaExpression* expr,
                       BalaSourceReference* source)
{
	return bala_switch_label_construct (BALA_TYPE_SWITCH_LABEL, expr, source);
}

/**
 * Creates a new switch default label.
 *
 * @param source reference to source code
 * @return       newly created switch default label
 */
BalaSwitchLabel*
bala_switch_label_construct_with_default (GType object_type,
                                          BalaSourceReference* source)
{
	BalaSwitchLabel* self = NULL;
	self = (BalaSwitchLabel*) bala_code_node_construct (object_type);
	bala_code_node_set_source_reference ((BalaCodeNode*) self, source);
	return self;
}

BalaSwitchLabel*
bala_switch_label_new_with_default (BalaSourceReference* source)
{
	return bala_switch_label_construct_with_default (BALA_TYPE_SWITCH_LABEL, source);
}

static void
bala_switch_label_real_accept (BalaCodeNode* base,
                               BalaCodeVisitor* visitor)
{
	BalaSwitchLabel * self;
	self = (BalaSwitchLabel*) base;
	g_return_if_fail (visitor != NULL);
	bala_code_visitor_visit_switch_label (visitor, self);
}

static void
bala_switch_label_real_accept_children (BalaCodeNode* base,
                                        BalaCodeVisitor* visitor)
{
	BalaSwitchLabel * self;
	BalaExpression* _tmp0_;
	BalaExpression* _tmp1_;
	self = (BalaSwitchLabel*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = bala_switch_label_get_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		BalaExpression* _tmp2_;
		BalaExpression* _tmp3_;
		BalaExpression* _tmp4_;
		BalaExpression* _tmp5_;
		_tmp2_ = bala_switch_label_get_expression (self);
		_tmp3_ = _tmp2_;
		bala_code_node_accept ((BalaCodeNode*) _tmp3_, visitor);
		_tmp4_ = bala_switch_label_get_expression (self);
		_tmp5_ = _tmp4_;
		bala_code_visitor_visit_end_full_expression (visitor, _tmp5_);
	}
}

static gpointer
_bala_iterable_ref0 (gpointer self)
{
	return self ? bala_iterable_ref (self) : NULL;
}

static gboolean
bala_switch_label_real_check (BalaCodeNode* base,
                              BalaCodeContext* context)
{
	BalaSwitchLabel * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	BalaExpression* _tmp4_;
	BalaExpression* _tmp5_;
	gboolean result = FALSE;
	self = (BalaSwitchLabel*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = bala_code_node_get_checked ((BalaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = bala_code_node_get_error ((BalaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	bala_code_node_set_checked ((BalaCodeNode*) self, TRUE);
	_tmp4_ = bala_switch_label_get_expression (self);
	_tmp5_ = _tmp4_;
	if (_tmp5_ != NULL) {
		BalaSwitchStatement* switch_statement = NULL;
		BalaSwitchSection* _tmp6_;
		BalaSwitchSection* _tmp7_;
		BalaCodeNode* _tmp8_;
		BalaCodeNode* _tmp9_;
		BalaSwitchStatement* _tmp10_;
		BalaDataType* condition_target_type = NULL;
		BalaSwitchStatement* _tmp11_;
		BalaExpression* _tmp12_;
		BalaExpression* _tmp13_;
		BalaDataType* _tmp14_;
		BalaDataType* _tmp15_;
		BalaDataType* _tmp16_;
		gboolean _tmp17_ = FALSE;
		gboolean _tmp18_ = FALSE;
		BalaExpression* _tmp19_;
		BalaExpression* _tmp20_;
		BalaSymbol* _tmp21_;
		BalaSymbol* _tmp22_;
		BalaExpression* _tmp57_;
		BalaExpression* _tmp58_;
		BalaExpression* _tmp59_;
		BalaExpression* _tmp60_;
		BalaExpression* _tmp65_;
		BalaExpression* _tmp66_;
		BalaDataType* _tmp67_;
		BalaDataType* _tmp68_;
		BalaSwitchStatement* _tmp69_;
		BalaExpression* _tmp70_;
		BalaExpression* _tmp71_;
		BalaDataType* _tmp72_;
		BalaDataType* _tmp73_;
		_tmp6_ = bala_switch_label_get_section (self);
		_tmp7_ = _tmp6_;
		_tmp8_ = bala_code_node_get_parent_node ((BalaCodeNode*) _tmp7_);
		_tmp9_ = _tmp8_;
		_tmp10_ = _bala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp9_, BALA_TYPE_SWITCH_STATEMENT, BalaSwitchStatement));
		switch_statement = _tmp10_;
		_tmp11_ = switch_statement;
		_tmp12_ = bala_switch_statement_get_expression (_tmp11_);
		_tmp13_ = _tmp12_;
		_tmp14_ = bala_expression_get_target_type (_tmp13_);
		_tmp15_ = _tmp14_;
		_tmp16_ = _bala_code_node_ref0 (_tmp15_);
		condition_target_type = _tmp16_;
		_tmp19_ = bala_switch_label_get_expression (self);
		_tmp20_ = _tmp19_;
		_tmp21_ = bala_expression_get_symbol_reference (_tmp20_);
		_tmp22_ = _tmp21_;
		if (_tmp22_ == NULL) {
			BalaDataType* _tmp23_;
			_tmp23_ = condition_target_type;
			_tmp18_ = _tmp23_ != NULL;
		} else {
			_tmp18_ = FALSE;
		}
		if (_tmp18_) {
			BalaDataType* _tmp24_;
			BalaTypeSymbol* _tmp25_;
			BalaTypeSymbol* _tmp26_;
			_tmp24_ = condition_target_type;
			_tmp25_ = bala_data_type_get_type_symbol (_tmp24_);
			_tmp26_ = _tmp25_;
			_tmp17_ = BALA_IS_ENUM (_tmp26_);
		} else {
			_tmp17_ = FALSE;
		}
		if (_tmp17_) {
			BalaEnum* enum_type = NULL;
			BalaDataType* _tmp27_;
			BalaTypeSymbol* _tmp28_;
			BalaTypeSymbol* _tmp29_;
			BalaEnum* _tmp30_;
			_tmp27_ = condition_target_type;
			_tmp28_ = bala_data_type_get_type_symbol (_tmp27_);
			_tmp29_ = _tmp28_;
			_tmp30_ = _bala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp29_, BALA_TYPE_ENUM, BalaEnum));
			enum_type = _tmp30_;
			{
				BalaList* _val_list = NULL;
				BalaEnum* _tmp31_;
				BalaList* _tmp32_;
				BalaList* _tmp33_;
				gint _val_size = 0;
				BalaList* _tmp34_;
				gint _tmp35_;
				gint _tmp36_;
				gint _val_index = 0;
				_tmp31_ = enum_type;
				_tmp32_ = bala_enum_get_values (_tmp31_);
				_tmp33_ = _bala_iterable_ref0 (_tmp32_);
				_val_list = _tmp33_;
				_tmp34_ = _val_list;
				_tmp35_ = bala_collection_get_size ((BalaCollection*) _tmp34_);
				_tmp36_ = _tmp35_;
				_val_size = _tmp36_;
				_val_index = -1;
				while (TRUE) {
					gint _tmp37_;
					gint _tmp38_;
					BalaEnumValue* val = NULL;
					BalaList* _tmp39_;
					gpointer _tmp40_;
					BalaExpression* _tmp41_;
					BalaExpression* _tmp42_;
					gchar* _tmp43_;
					gchar* _tmp44_;
					BalaEnumValue* _tmp45_;
					const gchar* _tmp46_;
					const gchar* _tmp47_;
					gboolean _tmp48_;
					_val_index = _val_index + 1;
					_tmp37_ = _val_index;
					_tmp38_ = _val_size;
					if (!(_tmp37_ < _tmp38_)) {
						break;
					}
					_tmp39_ = _val_list;
					_tmp40_ = bala_list_get (_tmp39_, _val_index);
					val = (BalaEnumValue*) _tmp40_;
					_tmp41_ = bala_switch_label_get_expression (self);
					_tmp42_ = _tmp41_;
					_tmp43_ = bala_code_node_to_string ((BalaCodeNode*) _tmp42_);
					_tmp44_ = _tmp43_;
					_tmp45_ = val;
					_tmp46_ = bala_symbol_get_name ((BalaSymbol*) _tmp45_);
					_tmp47_ = _tmp46_;
					_tmp48_ = g_strcmp0 (_tmp44_, _tmp47_) == 0;
					_g_free0 (_tmp44_);
					if (_tmp48_) {
						BalaExpression* _tmp49_;
						BalaExpression* _tmp50_;
						BalaDataType* _tmp51_;
						BalaDataType* _tmp52_;
						BalaDataType* _tmp53_;
						BalaExpression* _tmp54_;
						BalaExpression* _tmp55_;
						BalaEnumValue* _tmp56_;
						_tmp49_ = bala_switch_label_get_expression (self);
						_tmp50_ = _tmp49_;
						_tmp51_ = condition_target_type;
						_tmp52_ = bala_data_type_copy (_tmp51_);
						_tmp53_ = _tmp52_;
						bala_expression_set_target_type (_tmp50_, _tmp53_);
						_bala_code_node_unref0 (_tmp53_);
						_tmp54_ = bala_switch_label_get_expression (self);
						_tmp55_ = _tmp54_;
						_tmp56_ = val;
						bala_expression_set_symbol_reference (_tmp55_, (BalaSymbol*) _tmp56_);
						_bala_code_node_unref0 (val);
						break;
					}
					_bala_code_node_unref0 (val);
				}
				_bala_iterable_unref0 (_val_list);
			}
			_bala_code_node_unref0 (enum_type);
		}
		_tmp57_ = bala_switch_label_get_expression (self);
		_tmp58_ = _tmp57_;
		if (!bala_code_node_check ((BalaCodeNode*) _tmp58_, context)) {
			bala_code_node_set_error ((BalaCodeNode*) self, TRUE);
			result = FALSE;
			_bala_code_node_unref0 (condition_target_type);
			_bala_code_node_unref0 (switch_statement);
			return result;
		}
		_tmp59_ = bala_switch_label_get_expression (self);
		_tmp60_ = _tmp59_;
		if (!bala_expression_is_constant (_tmp60_)) {
			BalaExpression* _tmp61_;
			BalaExpression* _tmp62_;
			BalaSourceReference* _tmp63_;
			BalaSourceReference* _tmp64_;
			bala_code_node_set_error ((BalaCodeNode*) self, TRUE);
			_tmp61_ = bala_switch_label_get_expression (self);
			_tmp62_ = _tmp61_;
			_tmp63_ = bala_code_node_get_source_reference ((BalaCodeNode*) _tmp62_);
			_tmp64_ = _tmp63_;
			bala_report_error (_tmp64_, "Expression must be constant");
			result = FALSE;
			_bala_code_node_unref0 (condition_target_type);
			_bala_code_node_unref0 (switch_statement);
			return result;
		}
		_tmp65_ = bala_switch_label_get_expression (self);
		_tmp66_ = _tmp65_;
		_tmp67_ = bala_expression_get_value_type (_tmp66_);
		_tmp68_ = _tmp67_;
		_tmp69_ = switch_statement;
		_tmp70_ = bala_switch_statement_get_expression (_tmp69_);
		_tmp71_ = _tmp70_;
		_tmp72_ = bala_expression_get_value_type (_tmp71_);
		_tmp73_ = _tmp72_;
		if (!bala_data_type_compatible (_tmp68_, _tmp73_)) {
			BalaExpression* _tmp74_;
			BalaExpression* _tmp75_;
			BalaSourceReference* _tmp76_;
			BalaSourceReference* _tmp77_;
			BalaExpression* _tmp78_;
			BalaExpression* _tmp79_;
			BalaDataType* _tmp80_;
			BalaDataType* _tmp81_;
			gchar* _tmp82_;
			gchar* _tmp83_;
			BalaSwitchStatement* _tmp84_;
			BalaExpression* _tmp85_;
			BalaExpression* _tmp86_;
			BalaDataType* _tmp87_;
			BalaDataType* _tmp88_;
			gchar* _tmp89_;
			gchar* _tmp90_;
			gchar* _tmp91_;
			gchar* _tmp92_;
			bala_code_node_set_error ((BalaCodeNode*) self, TRUE);
			_tmp74_ = bala_switch_label_get_expression (self);
			_tmp75_ = _tmp74_;
			_tmp76_ = bala_code_node_get_source_reference ((BalaCodeNode*) _tmp75_);
			_tmp77_ = _tmp76_;
			_tmp78_ = bala_switch_label_get_expression (self);
			_tmp79_ = _tmp78_;
			_tmp80_ = bala_expression_get_value_type (_tmp79_);
			_tmp81_ = _tmp80_;
			_tmp82_ = bala_code_node_to_string ((BalaCodeNode*) _tmp81_);
			_tmp83_ = _tmp82_;
			_tmp84_ = switch_statement;
			_tmp85_ = bala_switch_statement_get_expression (_tmp84_);
			_tmp86_ = _tmp85_;
			_tmp87_ = bala_expression_get_value_type (_tmp86_);
			_tmp88_ = _tmp87_;
			_tmp89_ = bala_code_node_to_string ((BalaCodeNode*) _tmp88_);
			_tmp90_ = _tmp89_;
			_tmp91_ = g_strdup_printf ("Cannot convert from `%s' to `%s'", _tmp83_, _tmp90_);
			_tmp92_ = _tmp91_;
			bala_report_error (_tmp77_, _tmp92_);
			_g_free0 (_tmp92_);
			_g_free0 (_tmp90_);
			_g_free0 (_tmp83_);
			result = FALSE;
			_bala_code_node_unref0 (condition_target_type);
			_bala_code_node_unref0 (switch_statement);
			return result;
		}
		_bala_code_node_unref0 (condition_target_type);
		_bala_code_node_unref0 (switch_statement);
	}
	result = TRUE;
	return result;
}

static void
bala_switch_label_real_emit (BalaCodeNode* base,
                             BalaCodeGenerator* codegen)
{
	BalaSwitchLabel * self;
	self = (BalaSwitchLabel*) base;
	g_return_if_fail (codegen != NULL);
	bala_code_visitor_visit_switch_label ((BalaCodeVisitor*) codegen, self);
}

static void
bala_switch_label_class_init (BalaSwitchLabelClass * klass,
                              gpointer klass_data)
{
	bala_switch_label_parent_class = g_type_class_peek_parent (klass);
	((BalaCodeNodeClass *) klass)->finalize = bala_switch_label_finalize;
	g_type_class_adjust_private_offset (klass, &BalaSwitchLabel_private_offset);
	((BalaCodeNodeClass *) klass)->accept = (void (*) (BalaCodeNode*, BalaCodeVisitor*)) bala_switch_label_real_accept;
	((BalaCodeNodeClass *) klass)->accept_children = (void (*) (BalaCodeNode*, BalaCodeVisitor*)) bala_switch_label_real_accept_children;
	((BalaCodeNodeClass *) klass)->check = (gboolean (*) (BalaCodeNode*, BalaCodeContext*)) bala_switch_label_real_check;
	((BalaCodeNodeClass *) klass)->emit = (void (*) (BalaCodeNode*, BalaCodeGenerator*)) bala_switch_label_real_emit;
}

static void
bala_switch_label_instance_init (BalaSwitchLabel * self,
                                 gpointer klass)
{
	self->priv = bala_switch_label_get_instance_private (self);
}

static void
bala_switch_label_finalize (BalaCodeNode * obj)
{
	BalaSwitchLabel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_SWITCH_LABEL, BalaSwitchLabel);
	_bala_code_node_unref0 (self->priv->_expression);
	BALA_CODE_NODE_CLASS (bala_switch_label_parent_class)->finalize (obj);
}

/**
 * Represents a switch label in the source code.
 */
static GType
bala_switch_label_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BalaSwitchLabelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_switch_label_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BalaSwitchLabel), 0, (GInstanceInitFunc) bala_switch_label_instance_init, NULL };
	GType bala_switch_label_type_id;
	bala_switch_label_type_id = g_type_register_static (BALA_TYPE_CODE_NODE, "BalaSwitchLabel", &g_define_type_info, 0);
	BalaSwitchLabel_private_offset = g_type_add_instance_private (bala_switch_label_type_id, sizeof (BalaSwitchLabelPrivate));
	return bala_switch_label_type_id;
}

GType
bala_switch_label_get_type (void)
{
	static volatile gsize bala_switch_label_type_id__volatile = 0;
	if (g_once_init_enter (&bala_switch_label_type_id__volatile)) {
		GType bala_switch_label_type_id;
		bala_switch_label_type_id = bala_switch_label_get_type_once ();
		g_once_init_leave (&bala_switch_label_type_id__volatile, bala_switch_label_type_id);
	}
	return bala_switch_label_type_id__volatile;
}

