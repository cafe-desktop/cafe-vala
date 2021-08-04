/* balaccodebreakstatement.c generated by balac, the Vala compiler
 * generated from balaccodebreakstatement.bala, do not modify */

/* balaccodebreakstatement.bala
 *
 * Copyright (C) 2006-2007  Jürg Billeter
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

#include "balaccode.h"
#include <glib.h>

static gpointer bala_ccode_break_statement_parent_class = NULL;

static void bala_ccode_break_statement_real_write (ValaCCodeNode* base,
                                            ValaCCodeWriter* writer);
static GType bala_ccode_break_statement_get_type_once (void);

static void
bala_ccode_break_statement_real_write (ValaCCodeNode* base,
                                       ValaCCodeWriter* writer)
{
	ValaCCodeBreakStatement * self;
	ValaCCodeLineDirective* _tmp0_;
	ValaCCodeLineDirective* _tmp1_;
	self = (ValaCCodeBreakStatement*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = bala_ccode_node_get_line ((ValaCCodeNode*) self);
	_tmp1_ = _tmp0_;
	bala_ccode_writer_write_indent (writer, _tmp1_);
	bala_ccode_writer_write_string (writer, "break;");
	bala_ccode_writer_write_newline (writer);
}

ValaCCodeBreakStatement*
bala_ccode_break_statement_construct (GType object_type)
{
	ValaCCodeBreakStatement* self = NULL;
	self = (ValaCCodeBreakStatement*) bala_ccode_statement_construct (object_type);
	return self;
}

ValaCCodeBreakStatement*
bala_ccode_break_statement_new (void)
{
	return bala_ccode_break_statement_construct (BALA_TYPE_CCODE_BREAK_STATEMENT);
}

static void
bala_ccode_break_statement_class_init (ValaCCodeBreakStatementClass * klass,
                                       gpointer klass_data)
{
	bala_ccode_break_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) bala_ccode_break_statement_real_write;
}

static void
bala_ccode_break_statement_instance_init (ValaCCodeBreakStatement * self,
                                          gpointer klass)
{
}

/**
 * Represents a break statement in the C code.
 */
static GType
bala_ccode_break_statement_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeBreakStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_ccode_break_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeBreakStatement), 0, (GInstanceInitFunc) bala_ccode_break_statement_instance_init, NULL };
	GType bala_ccode_break_statement_type_id;
	bala_ccode_break_statement_type_id = g_type_register_static (BALA_TYPE_CCODE_STATEMENT, "ValaCCodeBreakStatement", &g_define_type_info, 0);
	return bala_ccode_break_statement_type_id;
}

GType
bala_ccode_break_statement_get_type (void)
{
	static volatile gsize bala_ccode_break_statement_type_id__volatile = 0;
	if (g_once_init_enter (&bala_ccode_break_statement_type_id__volatile)) {
		GType bala_ccode_break_statement_type_id;
		bala_ccode_break_statement_type_id = bala_ccode_break_statement_get_type_once ();
		g_once_init_leave (&bala_ccode_break_statement_type_id__volatile, bala_ccode_break_statement_type_id);
	}
	return bala_ccode_break_statement_type_id__volatile;
}

