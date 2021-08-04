/* contentvisitor.c generated by balac, the Vala compiler
 * generated from contentvisitor.bala, do not modify */

/* contentvisitor.bala
 *
 * Copyright (C) 2008-2009 Didier Villevalois
 * Copyright (C) 2008-2012 Florian Brosch
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
#include <glib-object.h>

enum  {
	BALADOC_CONTENT_CONTENT_VISITOR_0_PROPERTY,
	BALADOC_CONTENT_CONTENT_VISITOR_NUM_PROPERTIES
};
static GParamSpec* baladoc_content_content_visitor_properties[BALADOC_CONTENT_CONTENT_VISITOR_NUM_PROPERTIES];

static gpointer baladoc_content_content_visitor_parent_class = NULL;

static void baladoc_content_content_visitor_real_visit_comment (ValadocContentContentVisitor* self,
                                                         ValadocContentComment* element);
static void baladoc_content_content_visitor_real_visit_embedded (ValadocContentContentVisitor* self,
                                                          ValadocContentEmbedded* element);
static void baladoc_content_content_visitor_real_visit_headline (ValadocContentContentVisitor* self,
                                                          ValadocContentHeadline* element);
static void baladoc_content_content_visitor_real_visit_link (ValadocContentContentVisitor* self,
                                                      ValadocContentLink* element);
static void baladoc_content_content_visitor_real_visit_wiki_link (ValadocContentContentVisitor* self,
                                                           ValadocContentWikiLink* element);
static void baladoc_content_content_visitor_real_visit_symbol_link (ValadocContentContentVisitor* self,
                                                             ValadocContentSymbolLink* element);
static void baladoc_content_content_visitor_real_visit_list (ValadocContentContentVisitor* self,
                                                      ValadocContentList* element);
static void baladoc_content_content_visitor_real_visit_list_item (ValadocContentContentVisitor* self,
                                                           ValadocContentListItem* element);
static void baladoc_content_content_visitor_real_visit_paragraph (ValadocContentContentVisitor* self,
                                                           ValadocContentParagraph* element);
static void baladoc_content_content_visitor_real_visit_warning (ValadocContentContentVisitor* self,
                                                         ValadocContentWarning* element);
static void baladoc_content_content_visitor_real_visit_note (ValadocContentContentVisitor* self,
                                                      ValadocContentNote* element);
static void baladoc_content_content_visitor_real_visit_page (ValadocContentContentVisitor* self,
                                                      ValadocContentPage* element);
static void baladoc_content_content_visitor_real_visit_run (ValadocContentContentVisitor* self,
                                                     ValadocContentRun* element);
static void baladoc_content_content_visitor_real_visit_source_code (ValadocContentContentVisitor* self,
                                                             ValadocContentSourceCode* element);
static void baladoc_content_content_visitor_real_visit_table (ValadocContentContentVisitor* self,
                                                       ValadocContentTable* element);
static void baladoc_content_content_visitor_real_visit_table_cell (ValadocContentContentVisitor* self,
                                                            ValadocContentTableCell* element);
static void baladoc_content_content_visitor_real_visit_table_row (ValadocContentContentVisitor* self,
                                                           ValadocContentTableRow* element);
static void baladoc_content_content_visitor_real_visit_taglet (ValadocContentContentVisitor* self,
                                                        ValadocContentTaglet* element);
static void baladoc_content_content_visitor_real_visit_text (ValadocContentContentVisitor* self,
                                                      ValadocContentText* element);
static GType baladoc_content_content_visitor_get_type_once (void);

static void
baladoc_content_content_visitor_real_visit_comment (ValadocContentContentVisitor* self,
                                                    ValadocContentComment* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_comment (ValadocContentContentVisitor* self,
                                               ValadocContentComment* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_comment (self, element);
}

static void
baladoc_content_content_visitor_real_visit_embedded (ValadocContentContentVisitor* self,
                                                     ValadocContentEmbedded* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_embedded (ValadocContentContentVisitor* self,
                                                ValadocContentEmbedded* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_embedded (self, element);
}

static void
baladoc_content_content_visitor_real_visit_headline (ValadocContentContentVisitor* self,
                                                     ValadocContentHeadline* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_headline (ValadocContentContentVisitor* self,
                                                ValadocContentHeadline* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_headline (self, element);
}

static void
baladoc_content_content_visitor_real_visit_link (ValadocContentContentVisitor* self,
                                                 ValadocContentLink* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_link (ValadocContentContentVisitor* self,
                                            ValadocContentLink* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_link (self, element);
}

static void
baladoc_content_content_visitor_real_visit_wiki_link (ValadocContentContentVisitor* self,
                                                      ValadocContentWikiLink* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_wiki_link (ValadocContentContentVisitor* self,
                                                 ValadocContentWikiLink* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_wiki_link (self, element);
}

static void
baladoc_content_content_visitor_real_visit_symbol_link (ValadocContentContentVisitor* self,
                                                        ValadocContentSymbolLink* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_symbol_link (ValadocContentContentVisitor* self,
                                                   ValadocContentSymbolLink* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_symbol_link (self, element);
}

static void
baladoc_content_content_visitor_real_visit_list (ValadocContentContentVisitor* self,
                                                 ValadocContentList* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_list (ValadocContentContentVisitor* self,
                                            ValadocContentList* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_list (self, element);
}

static void
baladoc_content_content_visitor_real_visit_list_item (ValadocContentContentVisitor* self,
                                                      ValadocContentListItem* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_list_item (ValadocContentContentVisitor* self,
                                                 ValadocContentListItem* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_list_item (self, element);
}

static void
baladoc_content_content_visitor_real_visit_paragraph (ValadocContentContentVisitor* self,
                                                      ValadocContentParagraph* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_paragraph (ValadocContentContentVisitor* self,
                                                 ValadocContentParagraph* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_paragraph (self, element);
}

static void
baladoc_content_content_visitor_real_visit_warning (ValadocContentContentVisitor* self,
                                                    ValadocContentWarning* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_warning (ValadocContentContentVisitor* self,
                                               ValadocContentWarning* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_warning (self, element);
}

static void
baladoc_content_content_visitor_real_visit_note (ValadocContentContentVisitor* self,
                                                 ValadocContentNote* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_note (ValadocContentContentVisitor* self,
                                            ValadocContentNote* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_note (self, element);
}

static void
baladoc_content_content_visitor_real_visit_page (ValadocContentContentVisitor* self,
                                                 ValadocContentPage* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_page (ValadocContentContentVisitor* self,
                                            ValadocContentPage* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_page (self, element);
}

static void
baladoc_content_content_visitor_real_visit_run (ValadocContentContentVisitor* self,
                                                ValadocContentRun* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_run (ValadocContentContentVisitor* self,
                                           ValadocContentRun* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_run (self, element);
}

static void
baladoc_content_content_visitor_real_visit_source_code (ValadocContentContentVisitor* self,
                                                        ValadocContentSourceCode* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_source_code (ValadocContentContentVisitor* self,
                                                   ValadocContentSourceCode* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_source_code (self, element);
}

static void
baladoc_content_content_visitor_real_visit_table (ValadocContentContentVisitor* self,
                                                  ValadocContentTable* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_table (ValadocContentContentVisitor* self,
                                             ValadocContentTable* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_table (self, element);
}

static void
baladoc_content_content_visitor_real_visit_table_cell (ValadocContentContentVisitor* self,
                                                       ValadocContentTableCell* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_table_cell (ValadocContentContentVisitor* self,
                                                  ValadocContentTableCell* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_table_cell (self, element);
}

static void
baladoc_content_content_visitor_real_visit_table_row (ValadocContentContentVisitor* self,
                                                      ValadocContentTableRow* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_table_row (ValadocContentContentVisitor* self,
                                                 ValadocContentTableRow* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_table_row (self, element);
}

static void
baladoc_content_content_visitor_real_visit_taglet (ValadocContentContentVisitor* self,
                                                   ValadocContentTaglet* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_taglet (ValadocContentContentVisitor* self,
                                              ValadocContentTaglet* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_taglet (self, element);
}

static void
baladoc_content_content_visitor_real_visit_text (ValadocContentContentVisitor* self,
                                                 ValadocContentText* element)
{
	g_return_if_fail (element != NULL);
}

void
baladoc_content_content_visitor_visit_text (ValadocContentContentVisitor* self,
                                            ValadocContentText* element)
{
	g_return_if_fail (self != NULL);
	BALADOC_CONTENT_CONTENT_VISITOR_GET_CLASS (self)->visit_text (self, element);
}

ValadocContentContentVisitor*
baladoc_content_content_visitor_construct (GType object_type)
{
	ValadocContentContentVisitor * self = NULL;
	self = (ValadocContentContentVisitor*) g_object_new (object_type, NULL);
	return self;
}

static void
baladoc_content_content_visitor_class_init (ValadocContentContentVisitorClass * klass,
                                            gpointer klass_data)
{
	baladoc_content_content_visitor_parent_class = g_type_class_peek_parent (klass);
	((ValadocContentContentVisitorClass *) klass)->visit_comment = (void (*) (ValadocContentContentVisitor*, ValadocContentComment*)) baladoc_content_content_visitor_real_visit_comment;
	((ValadocContentContentVisitorClass *) klass)->visit_embedded = (void (*) (ValadocContentContentVisitor*, ValadocContentEmbedded*)) baladoc_content_content_visitor_real_visit_embedded;
	((ValadocContentContentVisitorClass *) klass)->visit_headline = (void (*) (ValadocContentContentVisitor*, ValadocContentHeadline*)) baladoc_content_content_visitor_real_visit_headline;
	((ValadocContentContentVisitorClass *) klass)->visit_link = (void (*) (ValadocContentContentVisitor*, ValadocContentLink*)) baladoc_content_content_visitor_real_visit_link;
	((ValadocContentContentVisitorClass *) klass)->visit_wiki_link = (void (*) (ValadocContentContentVisitor*, ValadocContentWikiLink*)) baladoc_content_content_visitor_real_visit_wiki_link;
	((ValadocContentContentVisitorClass *) klass)->visit_symbol_link = (void (*) (ValadocContentContentVisitor*, ValadocContentSymbolLink*)) baladoc_content_content_visitor_real_visit_symbol_link;
	((ValadocContentContentVisitorClass *) klass)->visit_list = (void (*) (ValadocContentContentVisitor*, ValadocContentList*)) baladoc_content_content_visitor_real_visit_list;
	((ValadocContentContentVisitorClass *) klass)->visit_list_item = (void (*) (ValadocContentContentVisitor*, ValadocContentListItem*)) baladoc_content_content_visitor_real_visit_list_item;
	((ValadocContentContentVisitorClass *) klass)->visit_paragraph = (void (*) (ValadocContentContentVisitor*, ValadocContentParagraph*)) baladoc_content_content_visitor_real_visit_paragraph;
	((ValadocContentContentVisitorClass *) klass)->visit_warning = (void (*) (ValadocContentContentVisitor*, ValadocContentWarning*)) baladoc_content_content_visitor_real_visit_warning;
	((ValadocContentContentVisitorClass *) klass)->visit_note = (void (*) (ValadocContentContentVisitor*, ValadocContentNote*)) baladoc_content_content_visitor_real_visit_note;
	((ValadocContentContentVisitorClass *) klass)->visit_page = (void (*) (ValadocContentContentVisitor*, ValadocContentPage*)) baladoc_content_content_visitor_real_visit_page;
	((ValadocContentContentVisitorClass *) klass)->visit_run = (void (*) (ValadocContentContentVisitor*, ValadocContentRun*)) baladoc_content_content_visitor_real_visit_run;
	((ValadocContentContentVisitorClass *) klass)->visit_source_code = (void (*) (ValadocContentContentVisitor*, ValadocContentSourceCode*)) baladoc_content_content_visitor_real_visit_source_code;
	((ValadocContentContentVisitorClass *) klass)->visit_table = (void (*) (ValadocContentContentVisitor*, ValadocContentTable*)) baladoc_content_content_visitor_real_visit_table;
	((ValadocContentContentVisitorClass *) klass)->visit_table_cell = (void (*) (ValadocContentContentVisitor*, ValadocContentTableCell*)) baladoc_content_content_visitor_real_visit_table_cell;
	((ValadocContentContentVisitorClass *) klass)->visit_table_row = (void (*) (ValadocContentContentVisitor*, ValadocContentTableRow*)) baladoc_content_content_visitor_real_visit_table_row;
	((ValadocContentContentVisitorClass *) klass)->visit_taglet = (void (*) (ValadocContentContentVisitor*, ValadocContentTaglet*)) baladoc_content_content_visitor_real_visit_taglet;
	((ValadocContentContentVisitorClass *) klass)->visit_text = (void (*) (ValadocContentContentVisitor*, ValadocContentText*)) baladoc_content_content_visitor_real_visit_text;
}

static void
baladoc_content_content_visitor_instance_init (ValadocContentContentVisitor * self,
                                               gpointer klass)
{
}

static GType
baladoc_content_content_visitor_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocContentContentVisitorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_content_content_visitor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentContentVisitor), 0, (GInstanceInitFunc) baladoc_content_content_visitor_instance_init, NULL };
	GType baladoc_content_content_visitor_type_id;
	baladoc_content_content_visitor_type_id = g_type_register_static (G_TYPE_OBJECT, "ValadocContentContentVisitor", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	return baladoc_content_content_visitor_type_id;
}

GType
baladoc_content_content_visitor_get_type (void)
{
	static volatile gsize baladoc_content_content_visitor_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_content_content_visitor_type_id__volatile)) {
		GType baladoc_content_content_visitor_type_id;
		baladoc_content_content_visitor_type_id = baladoc_content_content_visitor_get_type_once ();
		g_once_init_leave (&baladoc_content_content_visitor_type_id__volatile, baladoc_content_content_visitor_type_id);
	}
	return baladoc_content_content_visitor_type_id__volatile;
}

