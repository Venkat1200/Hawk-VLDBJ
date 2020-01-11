// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Take the name prefix into account.
#define yylex   CoGaDB::SQL::Scanner::lex

// First part of user declarations.

#line 39 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "sql_parser.hpp"

// User implementation prologue.

#line 53 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:412
// Unqualified %code blocks.
#line 38 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:413

#include "sql/server/sql_driver.hpp"
/* work around a bug in flex that generates code that causes a warning */
#pragma GCC diagnostic ignored "-Wsign-compare"
#line 216 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:413

#include <boost/make_shared.hpp>

using namespace CoGaDB;
using namespace query_processing;

#line 67 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif



// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 14 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:479
namespace CoGaDB { namespace SQL {
#line 134 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:479

  /// Build a parser object.
  Parser::Parser (CoGaDB::SQL::Driver &driver_yyarg, CoGaDB::SQL::Scanner::type &scanner_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg),
      scanner (scanner_yyarg)
  {}

  Parser::~Parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  Parser::syntax_error::syntax_error (const std::string& m)
    : std::runtime_error (m)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  Parser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  Parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
  {
    value = other.value;
  }


  template <typename Base>
  inline
  Parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v)
    : Base (t)
    , value (v)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  Parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t)
    : Base (t)
    , value ()
  {}

  template <typename Base>
  inline
  Parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  Parser::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  Parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  Parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
  }

  // by_type.
  inline
  Parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  Parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  Parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  Parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  Parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  Parser::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  Parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  Parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  Parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  Parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  Parser::symbol_number_type
  Parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  Parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  Parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    return *this;
  }


  template <typename Base>
  inline
  void
  Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if YYDEBUG
  template <typename Base>
  void
  Parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " (";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  Parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  Parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  Parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline Parser::state_type
  Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, scanner));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;


      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 227 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		/* first statement parsed */
		driver.result = boost::make_shared<ParseTree::Sequence>();
		/* transfer $sql ownership */
		driver.result->push_back((yystack_[1].value.statement));
	}
#line 567 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 3:
#line 234 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		driver.result->push_back((yystack_[1].value.statement));
	}
#line 575 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 13:
#line 267 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.table) = new ParseTree::Table((yystack_[3].value.table_name)->table, *(yystack_[1].value.schema));
		delete (yystack_[3].value.table_name);
		delete (yystack_[1].value.schema);
	}
#line 585 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 14:
#line 276 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.schema) = new ParseTree::TableSchema(1, *(yystack_[0].value.attribute));
		delete (yystack_[0].value.attribute);
	}
#line 594 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 15:
#line 281 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.schema) = (yystack_[2].value.schema);
		(yylhs.value.schema)->push_back(*(yystack_[0].value.attribute));
		delete (yystack_[0].value.attribute);
	}
#line 604 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 17:
#line 290 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 610 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 18:
#line 295 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.attribute) = new ParseTree::Attribute((yystack_[1].value.attribute_type), *(yystack_[2].value.string));
		delete (yystack_[2].value.string);
	}
#line 619 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 20:
#line 303 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 625 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 40:
#line 344 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.column_list) = NULL; }
#line 631 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 41:
#line 345 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 637 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 74:
#line 430 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.order_by) = NULL;
	}
#line 645 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 75:
#line 434 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.order_by) = (yystack_[0].value.order_by);
	}
#line 653 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 76:
#line 441 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.order_by) = new ParseTree::OrderBy();
		(yylhs.value.order_by)->order.push_back(*(yystack_[0].value.ordering_spec)); 
		delete (yystack_[0].value.ordering_spec);
	}
#line 663 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 77:
#line 447 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.order_by) = (yystack_[2].value.order_by);
                (yylhs.value.order_by)->order.push_back(*(yystack_[0].value.ordering_spec));
		delete (yystack_[0].value.ordering_spec);
	}
#line 673 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 78:
#line 456 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		driver.unsupported();
	}
#line 681 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 79:
#line 460 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.ordering_spec) = new SortAttribute(*(yystack_[1].value.string), (yystack_[0].value.sort_order));
		delete (yystack_[1].value.string);
	}
#line 690 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 80:
#line 467 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.sort_order) = CoGaDB::ASCENDING; }
#line 696 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 81:
#line 468 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.sort_order) = CoGaDB::ASCENDING; }
#line 702 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 82:
#line 469 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.sort_order) = CoGaDB::DESCENDING; }
#line 708 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 83:
#line 474 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.limit) = NULL;
	}
#line 716 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 84:
#line 478 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
            assert((yystack_[0].value.integer)->empty()==false);
            size_t num_rows = 0;
            try{
                num_rows = boost::any_cast<int>(*(yystack_[0].value.integer));
            }catch(boost::bad_any_cast& e){
                COGADB_FATAL_ERROR("Invalid Parameter for LIMIT, which has to be an unsigned integer!","");
            }
            (yylhs.value.limit) = new ParseTree::Limit(num_rows);
            delete (yystack_[0].value.integer);
	}
#line 732 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 95:
#line 523 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 738 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 96:
#line 524 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 744 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 97:
#line 525 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 750 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 98:
#line 526 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 756 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 99:
#line 527 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 762 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 100:
#line 528 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.statement) = (yystack_[0].value.insert_into); }
#line 768 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 101:
#line 529 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 774 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 102:
#line 530 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 780 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 103:
#line 531 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 786 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 104:
#line 532 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.statement) = (yystack_[0].value.select_from); }
#line 792 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 105:
#line 533 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 798 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 106:
#line 534 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 804 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 107:
#line 535 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.statement) = (yystack_[0].value.create_table); }
#line 810 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 113:
#line 560 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.insert_into) = new ParseTree::InsertInto(*(yystack_[2].value.table_name), *(yystack_[0].value.tuple));
		delete (yystack_[2].value.table_name);
		delete (yystack_[0].value.tuple);
	}
#line 820 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 114:
#line 569 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.tuple) = (yystack_[1].value.tuple); }
#line 826 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 115:
#line 571 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 832 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 116:
#line 576 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.tuple) = new ParseTree::Tuple(1, (yystack_[0].value.atom_expression)->atom);
		delete (yystack_[0].value.atom_expression);
	}
#line 841 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 117:
#line 581 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.tuple) = (yystack_[2].value.tuple);
		(yylhs.value.tuple)->push_back((yystack_[0].value.atom_expression)->atom);
		delete (yystack_[0].value.atom_expression);
	}
#line 851 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 119:
#line 591 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 857 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 124:
#line 614 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.create_table) = new ParseTree::CreateTable((yystack_[0].value.table));
	}
#line 865 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 138:
#line 654 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.search_condition) = NULL; }
#line 871 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 141:
#line 662 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 877 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 142:
#line 663 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 883 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 144:
#line 668 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.select_from) = (yystack_[1].value.select_from); }
#line 889 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 145:
#line 673 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionListPtr selection((yystack_[1].value.scalar_expression_list));
		(yylhs.value.select_from) = new ParseTree::SelectFrom(selection, *(yystack_[0].value.table_expression));
		delete (yystack_[0].value.table_expression);
	}
#line 899 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 147:
#line 682 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.scalar_expression_list) = NULL; }
#line 905 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 148:
#line 698 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::SearchConditionPtr where((yystack_[4].value.search_condition));
		ParseTree::ColumnListPtr group_by((yystack_[3].value.column_list));
		ParseTree::OrderByPtr order_by((yystack_[1].value.order_by));
		ParseTree::SearchConditionPtr having((yystack_[2].value.search_condition));
                ParseTree::LimitPtr limit((yystack_[0].value.limit));

		//$$ = new ParseTree::TableExpression(*$from, where, group_by, order_by);
		(yylhs.value.table_expression) = new ParseTree::TableExpression(*(yystack_[5].value.table_reference_list), where, group_by, order_by, having, limit);
		delete (yystack_[5].value.table_reference_list);
	}
#line 921 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 149:
#line 712 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.table_reference_list) = (yystack_[0].value.table_reference_list); }
#line 927 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 150:
#line 717 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::TableReferencePtr ptr((yystack_[0].value.table_reference));
		(yylhs.value.table_reference_list) = new ParseTree::TableReferenceList(1, ptr);
	}
#line 936 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 151:
#line 722 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::TableReferencePtr ptr((yystack_[0].value.table_reference));
		(yylhs.value.table_reference_list) = (yystack_[2].value.table_reference_list);
		(yylhs.value.table_reference_list)->push_back(ptr);
	}
#line 946 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 152:
#line 730 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.table_reference) = (yystack_[0].value.table_name); }
#line 952 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 153:
#line 731 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 958 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 154:
#line 733 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		//ParseTree::TableReferencePtr ptr(new ParseTree::SubQueryResult(ParseTree::SelectFromPtr($sub_query)));
		//$$ = new ParseTree::TableReferenceList(1, ptr);
		(yylhs.value.table_reference) = new ParseTree::SubQueryResult(ParseTree::SelectFromPtr((yystack_[0].value.select_from)));
		//$$ = new ParseTree::TableReferenceList(1, ptr);
	}
#line 969 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 155:
#line 739 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.table_reference) = (yystack_[0].value.join); }
#line 975 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 156:
#line 743 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.join) = (yystack_[0].value.cross_join); }
#line 981 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 157:
#line 744 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.join) = (yystack_[0].value.inner_join); }
#line 987 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 158:
#line 745 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.join) = (yystack_[1].value.join); }
#line 993 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 159:
#line 750 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::TableReferencePtr lvalue_ptr((yystack_[3].value.table_reference));
		ParseTree::TableReferencePtr rvalue_ptr((yystack_[0].value.table_reference));
		(yylhs.value.cross_join) = new ParseTree::CrossJoin(lvalue_ptr, rvalue_ptr);
	}
#line 1003 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 160:
#line 759 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::TableReferencePtr lvalue_ptr((yystack_[4].value.table_reference));
		ParseTree::TableReferencePtr rvalue_ptr((yystack_[1].value.table_reference));
		ParseTree::SearchConditionPtr join_ptr((yystack_[0].value.search_condition));
		(yylhs.value.inner_join) = new ParseTree::InnerJoin(lvalue_ptr, rvalue_ptr, join_ptr);
	}
#line 1014 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 161:
#line 766 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::TableReferencePtr lvalue_ptr((yystack_[3].value.table_reference));
		ParseTree::TableReferencePtr rvalue_ptr((yystack_[1].value.table_reference));
		ParseTree::SearchConditionPtr join_ptr((yystack_[0].value.search_condition));
		(yylhs.value.inner_join) = new ParseTree::InnerJoin(lvalue_ptr, rvalue_ptr, join_ptr);
	}
#line 1025 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 163:
#line 780 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1031 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 165:
#line 786 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.search_condition) = (yystack_[0].value.search_condition); }
#line 1037 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 166:
#line 790 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.search_condition) = (yystack_[0].value.search_condition); }
#line 1043 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 167:
#line 794 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.column_list) = NULL; }
#line 1049 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 168:
#line 795 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.column_list) = (yystack_[0].value.column_list); }
#line 1055 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 169:
#line 800 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.column_list) = new ParseTree::ColumnList(1, *(yystack_[0].value.string));
		delete (yystack_[0].value.string);
	}
#line 1064 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 170:
#line 805 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.column_list) = (yystack_[2].value.column_list);
		(yylhs.value.column_list)->push_back(*(yystack_[0].value.string));
		delete (yystack_[0].value.string);
	}
#line 1074 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 171:
#line 813 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.search_condition) = NULL; }
#line 1080 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 173:
#line 818 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.search_condition) = (yystack_[0].value.search_condition); }
#line 1086 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 174:
#line 825 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::SearchConditionPtr lvalue_ptr((yystack_[2].value.search_condition));
		ParseTree::SearchConditionPtr rvalue_ptr((yystack_[0].value.search_condition));
		(yylhs.value.search_condition) = new ParseTree::OrCondition(lvalue_ptr, rvalue_ptr);
	}
#line 1096 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 175:
#line 831 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::SearchConditionPtr lvalue_ptr((yystack_[2].value.search_condition));
		ParseTree::SearchConditionPtr rvalue_ptr((yystack_[0].value.search_condition));
		(yylhs.value.search_condition) = new ParseTree::AndCondition(lvalue_ptr, rvalue_ptr);
	}
#line 1106 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 176:
#line 836 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1112 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 177:
#line 837 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.search_condition) = (yystack_[1].value.search_condition); }
#line 1118 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 178:
#line 838 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.search_condition) = (yystack_[0].value.predicate); }
#line 1124 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 182:
#line 845 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1130 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 183:
#line 846 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1136 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 184:
#line 847 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1142 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 185:
#line 848 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1148 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 186:
#line 853 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr lvalue_ptr((yystack_[2].value.scalar_expression));
		ParseTree::ScalarExpressionPtr rvalue_ptr((yystack_[0].value.scalar_expression));
		(yylhs.value.predicate) = new ParseTree::ComparisonPredicate(lvalue_ptr, (yystack_[1].value.comparator), rvalue_ptr);
	}
#line 1158 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 187:
#line 859 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		driver.unsupported();
	}
#line 1166 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 188:
#line 866 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr exp((yystack_[5].value.scalar_expression));
		ParseTree::ScalarExpressionPtr lvalue((yystack_[2].value.scalar_expression));
		ParseTree::ScalarExpressionPtr rvalue((yystack_[0].value.scalar_expression));
		(yylhs.value.predicate) = new ParseTree::NotBetweenPredicate(exp, lvalue, rvalue);
	}
#line 1177 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 189:
#line 873 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr exp((yystack_[4].value.scalar_expression));
		ParseTree::ScalarExpressionPtr lvalue((yystack_[2].value.scalar_expression));
		ParseTree::ScalarExpressionPtr rvalue((yystack_[0].value.scalar_expression));
		(yylhs.value.predicate) = new ParseTree::BetweenPredicate(exp, lvalue, rvalue);
	}
#line 1188 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 190:
#line 883 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
            ParseTree::ScalarExpressionPtr exp((yystack_[4].value.scalar_expression));
            ParseTree::AtomExpressionPtr atom((yystack_[1].value.atom_expression));
            (yylhs.value.predicate) = new ParseTree::LikePredicate(exp, CoGaDB::UNEQUAL, atom);
        }
#line 1198 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 191:
#line 889 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
            ParseTree::ScalarExpressionPtr exp((yystack_[3].value.scalar_expression));
            ParseTree::AtomExpressionPtr atom((yystack_[1].value.atom_expression));
            (yylhs.value.predicate) = new ParseTree::LikePredicate(exp, CoGaDB::EQUAL, atom);
        }
#line 1208 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 208:
#line 940 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr lvalue((yystack_[2].value.scalar_expression));
		ParseTree::ScalarExpressionPtr rvalue((yystack_[0].value.scalar_expression));
		(yylhs.value.scalar_expression) = new ParseTree::AlgebraExpression(lvalue, CoGaDB::ADD, rvalue);
	}
#line 1218 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 209:
#line 946 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr lvalue((yystack_[2].value.scalar_expression));
		ParseTree::ScalarExpressionPtr rvalue((yystack_[0].value.scalar_expression));
		(yylhs.value.scalar_expression) = new ParseTree::AlgebraExpression(lvalue, CoGaDB::SUB, rvalue);
	}
#line 1228 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 210:
#line 952 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr lvalue((yystack_[2].value.scalar_expression));
		ParseTree::ScalarExpressionPtr rvalue((yystack_[0].value.scalar_expression));
		(yylhs.value.scalar_expression) = new ParseTree::AlgebraExpression(lvalue, CoGaDB::MUL, rvalue);
	}
#line 1238 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 211:
#line 958 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr lvalue((yystack_[2].value.scalar_expression));
		ParseTree::ScalarExpressionPtr rvalue((yystack_[0].value.scalar_expression));
		(yylhs.value.scalar_expression) = new ParseTree::AlgebraExpression(lvalue, CoGaDB::DIV, rvalue);
	}
#line 1248 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 212:
#line 964 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.scalar_expression) = (yystack_[0].value.scalar_expression);
	}
#line 1256 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 213:
#line 968 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::AtomExpressionPtr zero;
		ParseTree::ScalarExpressionPtr exp((yystack_[0].value.scalar_expression));

		/* FIXME: this will fail if the type of $exp is not integer */
		zero = boost::make_shared<ParseTree::AtomExpression>(boost::any(0), CoGaDB::INT);
		(yylhs.value.scalar_expression) = new ParseTree::AlgebraExpression(zero, CoGaDB::SUB, exp);
	}
#line 1269 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 214:
#line 977 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.scalar_expression) = (yystack_[0].value.atom_expression);
	}
#line 1277 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 215:
#line 981 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.scalar_expression) = new ParseTree::ColumnExpression(*(yystack_[0].value.string));
		delete (yystack_[0].value.string);
	}
#line 1286 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 216:
#line 986 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.scalar_expression) = (yystack_[0].value.function_expression);
	}
#line 1294 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 217:
#line 990 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.scalar_expression) = (yystack_[1].value.scalar_expression);
	}
#line 1302 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 219:
#line 998 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.scalar_expression) = (yystack_[2].value.scalar_expression);
		(yylhs.value.scalar_expression)->setColumnName(*(yystack_[0].value.string));
                
		delete (yystack_[0].value.string);
	}
#line 1313 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 220:
#line 1008 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr ptr((yystack_[0].value.scalar_expression));
		(yylhs.value.scalar_expression_list) = new ParseTree::ScalarExpressionList(1, ptr);
	}
#line 1322 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 221:
#line 1013 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr ptr((yystack_[0].value.scalar_expression));
		/* transfer ownership */
		(yylhs.value.scalar_expression_list) = (yystack_[2].value.scalar_expression_list);
		(yylhs.value.scalar_expression_list)->push_back(ptr);
	}
#line 1333 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 222:
#line 1022 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1339 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 224:
#line 1024 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1345 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 228:
#line 1034 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1351 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 229:
#line 1035 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1357 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 230:
#line 1036 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1363 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 231:
#line 1038 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr scalar_exp((yystack_[1].value.scalar_expression));
		(yylhs.value.function_expression) = new ParseTree::FunctionExpression((yystack_[3].value.aggregation_function), scalar_exp);
	}
#line 1372 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 232:
#line 1043 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		ParseTree::ScalarExpressionPtr scalar_exp((yystack_[3].value.scalar_expression));
		(yylhs.value.function_expression) = new ParseTree::FunctionExpression((yystack_[5].value.aggregation_function), scalar_exp, *(yystack_[0].value.string));
		//$$->setColumnName(*$column_ref);
        }
#line 1382 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 233:
#line 1052 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.atom_expression) = new ParseTree::AtomExpression(boost::any(*(yystack_[0].value.string)), CoGaDB::VARCHAR);
		delete (yystack_[0].value.string);
	}
#line 1391 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 234:
#line 1057 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.atom_expression) = new ParseTree::AtomExpression(*(yystack_[0].value.integer), CoGaDB::INT);
		delete (yystack_[0].value.integer);
	}
#line 1400 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 235:
#line 1062 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.atom_expression) = new ParseTree::AtomExpression(*(yystack_[0].value.integer), CoGaDB::DOUBLE);
		delete (yystack_[0].value.integer);
	}
#line 1409 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 236:
#line 1072 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		(yylhs.value.table_name) = new ParseTree::TableName(*(yystack_[0].value.string));
		delete (yystack_[0].value.string);
	}
#line 1418 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 237:
#line 1077 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    {
		driver.unsupported();
	}
#line 1426 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 239:
#line 1084 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1432 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 240:
#line 1085 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1438 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 241:
#line 1092 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::CHAR; /* single character */ }
#line 1444 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 242:
#line 1094 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::VARCHAR; delete (yystack_[1].value.integer); /* FIXME: fixed-length string */ }
#line 1450 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 243:
#line 1096 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::VARCHAR; }
#line 1456 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 244:
#line 1098 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::VARCHAR; delete (yystack_[1].value.integer); /* FIXME: maximum-length string */ }
#line 1462 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 245:
#line 1100 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::DATE; /* FIXME: maximum-length string */ }
#line 1468 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 246:
#line 1102 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1474 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 247:
#line 1104 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1480 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 248:
#line 1106 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1486 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 249:
#line 1108 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1492 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 250:
#line 1110 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1498 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 251:
#line 1112 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { driver.unsupported(); }
#line 1504 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 252:
#line 1114 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::INT; }
#line 1510 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 253:
#line 1116 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::UINT32; }
#line 1516 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 254:
#line 1118 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::INT; }
#line 1522 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 255:
#line 1120 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::OID; }
#line 1528 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 256:
#line 1122 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::FLOAT; }
#line 1534 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 257:
#line 1124 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::FLOAT; delete (yystack_[1].value.integer); /* FIXME: precision */ }
#line 1540 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 258:
#line 1126 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::DOUBLE; /* FIXME: precision */ }
#line 1546 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;

  case 259:
#line 1128 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:859
    { (yylhs.value.attribute_type) = CoGaDB::DOUBLE; /* FIXME: precision */ }
#line 1552 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
    break;


#line 1556 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yysyntax_error_ (yystack_[0].state, yyla));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }


      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what());
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const short int Parser::yypact_ninf_ = -299;

  const short int Parser::yytable_ninf_ = -141;

  const short int
  Parser::yypact_[] =
  {
     438,    73,   -21,   136,    36,    73,    98,   194,    73,    99,
     114,   239,    24,   -54,   370,   140,  -299,  -299,  -299,  -299,
    -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,  -299,  -299,   154,  -299,  -299,  -299,  -299,  -299,   252,
     239,   239,   216,   239,  -299,   203,  -299,  -299,  -299,  -299,
    -299,   248,   176,   212,   261,   144,   114,    65,  -299,   250,
    -299,     3,   335,   232,   266,   264,   238,   484,   292,  -299,
    -299,  -299,   259,   378,   378,  -299,  -299,   378,   393,   229,
     380,  -299,   291,  -299,  -299,  -299,  -299,  -299,    12,   410,
     416,   144,  -299,   429,  -299,   248,  -299,  -299,   -54,  -299,
    -299,    17,   255,    48,  -299,  -299,   322,  -299,  -299,   416,
     125,  -299,  -299,  -299,  -299,  -299,  -299,   418,   437,   179,
    -299,  -299,    92,  -299,    43,   264,  -299,   342,   378,   378,
     378,   378,   449,   378,   264,  -299,  -299,  -299,   135,  -299,
     341,  -299,  -299,   406,  -299,   128,   350,  -299,    17,  -299,
    -299,  -299,  -299,   346,   397,   398,   351,   -76,  -299,  -299,
    -299,   477,   226,   401,   352,   226,   277,  -299,  -299,  -299,
    -299,  -299,  -299,  -299,  -299,   571,   407,   264,   181,  -299,
     361,  -299,  -299,   335,   358,   363,   378,   449,   152,  -299,
      43,  -299,   365,    14,  -299,  -299,  -299,   472,   -23,   226,
     426,   289,   289,  -299,  -299,  -299,  -299,  -299,   112,   416,
    -299,   310,   239,   405,  -299,  -299,   238,  -299,   238,   413,
     367,  -299,  -299,   226,   374,   375,   416,  -299,   255,   376,
    -299,   377,   417,   382,  -299,   384,  -299,  -299,    40,   386,
    -299,  -299,    73,   420,  -299,     9,   435,   226,   226,   124,
     294,   378,   391,   155,    47,  -299,  -299,   416,   105,   454,
     502,  -299,   197,   395,   488,    79,    14,   399,    43,   452,
    -299,    43,   455,  -299,  -299,  -299,   491,   464,   451,  -299,
    -299,   409,   238,  -299,  -299,  -299,   239,   282,    31,   416,
     416,   207,  -299,   518,   519,  -299,   520,   521,  -299,  -299,
     523,   254,  -299,   114,  -299,   522,  -299,   378,   419,   155,
    -299,  -299,  -299,   348,   352,  -299,   409,   359,   133,   492,
     463,  -299,  -299,  -299,   213,  -299,  -299,    73,   456,   454,
    -299,  -299,  -299,  -299,   449,  -299,    14,    43,   279,    43,
     449,   226,   465,  -299,    73,   517,   450,  -299,  -299,   221,
     233,  -299,   428,   245,   431,   275,   432,   480,   434,   200,
     239,  -299,   248,   403,   133,   492,  -299,   378,   290,   439,
    -299,   155,  -299,  -299,  -299,   105,   516,   549,   456,  -299,
    -299,  -299,    14,   226,  -299,  -299,   279,   442,  -299,   277,
     531,   493,  -299,   474,    18,   479,  -299,  -299,  -299,   555,
    -299,  -299,   556,  -299,    -2,   226,  -299,  -299,  -299,   453,
     406,   378,   299,   457,  -299,   409,  -299,   155,  -299,  -299,
    -299,   525,  -299,    34,  -299,   277,  -299,   449,    39,   560,
    -299,   466,  -299,   145,  -299,  -299,   239,   458,   461,   504,
    -299,    41,   416,   462,   409,  -299,  -299,  -299,   -54,  -299,
      53,  -299,   477,  -299,   159,   467,  -299,   159,  -299,   550,
    -299,   524,    18,  -299,   468,  -299,  -299,  -299,  -299,   317,
    -299,   108,   470,  -299,  -299,  -299,  -299,  -299,    39,  -299,
     505,   526,  -299,   416,  -299,  -299,   506,   470,  -299,  -299,
    -299,  -299,   326,  -299,  -299
  };

  const unsigned short int
  Parser::yydefact_[] =
  {
       0,     0,     0,     0,     0,     0,     0,    61,     0,     0,
     125,     0,     0,     0,     0,     0,     4,   124,    59,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     107,   105,   106,   123,   140,   143,   261,   108,   109,     0,
       0,     0,     0,     0,   262,     0,    62,   120,   121,   126,
     127,     0,   236,     0,     0,     0,   125,     0,     1,     0,
       2,     0,     0,     0,   138,     0,    40,     0,   238,   233,
     234,   235,     0,     0,     0,   147,   224,     0,     0,     0,
     218,   220,   146,   214,   222,   216,   223,   215,   225,     0,
     129,     0,   270,     0,   268,     0,   144,     3,     0,   141,
     266,     6,     0,     0,   111,   139,   112,   135,   137,     0,
       0,    63,    64,    65,    66,    67,    68,     0,     0,     0,
     212,   213,     0,   263,     0,     0,   145,   138,     0,     0,
       0,     0,     0,     0,     0,   226,   237,   260,   138,   130,
       0,   267,   269,     0,   142,     0,     0,     5,     7,     8,
      10,    11,    12,     0,     0,     0,     0,     0,    14,    16,
      17,     0,     0,     0,     0,     0,   166,   178,   179,   180,
     181,   182,   183,   184,   185,     0,   215,     0,     0,    35,
       0,   113,   115,     0,   239,     0,     0,     0,     0,   217,
       0,   154,   149,   150,   155,   156,   157,   152,     0,     0,
     167,   208,   209,   210,   211,   219,   221,   227,     0,     0,
     134,     0,     0,    46,    52,    51,    40,    50,    40,     0,
      47,    48,     9,     0,     0,     0,     0,    13,     0,   241,
     245,   249,     0,   256,   252,   246,   258,   254,     0,   243,
      19,   176,     0,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,    41,     0,     0,    69,
       0,   228,     0,     0,   231,   154,     0,   155,     0,     0,
     162,     0,     0,   265,   153,   122,     0,   171,     0,   131,
     133,   132,    40,    45,    54,    53,     0,     0,     0,     0,
       0,     0,    15,     0,     0,   259,     0,     0,   255,   253,
       0,    18,   110,   125,   177,   174,   175,     0,     0,     0,
     204,   203,   205,     0,     0,   187,   186,     0,     0,   192,
       0,   195,    36,   119,     0,   116,   118,     0,     0,    70,
      71,   240,   230,   229,     0,   158,   151,     0,   163,     0,
       0,     0,    74,   172,     0,     0,     0,    49,    34,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,   192,   202,     0,     0,     0,
     200,     0,   191,   194,   114,     0,     0,     0,    60,    85,
      72,   232,   159,     0,   161,   164,   163,   168,   169,   173,
       0,    83,   128,     0,     0,     0,    31,   242,   250,     0,
     257,   247,     0,   244,    21,     0,    25,    26,    24,    28,
       0,     0,     0,     0,   190,   189,   199,     0,   197,   193,
     117,     0,   264,     0,    86,   165,   160,     0,     0,     0,
     148,    38,    57,    43,    55,    58,     0,     0,     0,     0,
      22,     0,     0,     0,   188,   198,   196,   201,     0,    93,
       0,    90,     0,   170,    80,    75,    76,    80,    84,     0,
      37,     0,     0,    42,    32,   251,   248,    23,    27,     0,
     207,    74,     0,    91,    92,    81,    82,    78,     0,    79,
       0,     0,    56,     0,    29,    73,     0,    87,    88,    77,
      39,    44,     0,    89,    33
  };

  const short int
  Parser::yypgoto_[] =
  {
    -299,  -299,   580,  -299,  -299,  -299,   448,   -74,  -299,   369,
    -299,  -299,  -299,  -299,  -218,  -299,  -299,  -152,  -299,  -299,
    -299,  -299,   312,  -299,   138,  -299,  -299,  -299,  -299,  -299,
     272,   131,  -299,   126,   146,  -299,  -299,   227,  -299,  -299,
     156,  -298,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
     234,  -299,  -299,  -299,  -299,  -299,   -47,  -299,  -299,   402,
    -299,   482,   433,   141,   -13,   -55,  -106,   -90,  -187,  -299,
    -299,  -168,   422,  -299,  -299,  -299,   222,  -299,  -299,  -299,
    -299,  -299,  -299,  -146,  -299,  -299,  -299,  -299,   249,  -299,
    -299,   251,  -299,  -299,  -299,  -236,   -36,   483,  -299,  -230,
     -41,  -299,   258,   -10,  -100,   161,   -77,     2,  -299,   -86,
    -299,  -299,   -50,   527
  };

  const short int
  Parser::yydefgoto_[] =
  {
      -1,    14,    15,    16,   147,   148,   149,    17,   157,   158,
     159,   301,   361,   160,   178,   151,   460,   110,   152,   463,
     219,   220,   221,   433,   434,    18,    45,   117,   328,   329,
     330,   391,   455,   456,   477,   430,   378,   379,   487,   450,
     451,    19,    20,    21,    22,    23,    24,    25,   181,   324,
     325,    26,    27,    28,    29,    30,    51,    31,   138,   139,
      32,   106,   107,   104,    33,    34,    35,    79,   126,   127,
     192,   193,   194,   195,   196,   272,   384,   385,   105,   277,
     387,   342,   343,   166,   167,   168,   169,   170,   372,   171,
     172,   368,   173,   314,   174,   244,   175,    81,    82,    83,
      84,    85,    86,   197,    87,   240,   179,    37,    46,    88,
     423,   274,   435,    94
  };

  const short int
  Parser::yytable_[] =
  {
      57,    53,   135,   176,   182,   143,    99,    42,   291,    95,
      47,   275,   101,   140,   315,    80,   241,   247,   248,   245,
      98,   100,   266,   319,   108,   161,   124,   150,   326,    56,
      63,    64,   205,    66,    54,   227,   228,   120,   121,   247,
     248,   122,    68,   144,   454,   269,    52,   145,   207,   247,
     248,    68,    69,    70,    71,    72,    13,   320,   162,    80,
      73,    74,   176,   298,   284,   176,   285,   134,   146,   191,
     270,   349,   350,   439,   150,   271,    36,   288,   366,   365,
     163,    38,   369,   188,   108,    41,    56,   263,   370,   177,
     440,   164,   201,   202,   203,   204,   432,    80,   299,   176,
     336,   305,   306,   338,   128,   129,   130,   131,   176,    69,
      70,    71,    55,    13,   321,    68,    69,    70,    71,    72,
     304,   449,   162,   176,    73,    74,    56,    78,   413,   246,
     345,    49,   140,   259,   370,   265,   108,    69,    70,    71,
     449,   419,   348,    76,   278,   326,   307,   176,   176,    78,
     262,   161,   468,   190,    50,   164,    61,    43,   165,    69,
      70,    71,   472,    78,   128,   129,   130,   131,    78,   382,
    -140,   386,   323,    92,   488,   281,    96,    57,   308,   475,
     322,   390,    68,    69,    70,    71,    72,   447,   309,   493,
    -140,    73,    74,   185,    93,   389,   186,    44,   476,    61,
      76,    48,   282,   189,    69,    70,    71,    76,    56,   128,
     129,   130,   131,   191,   316,   317,   191,    40,    39,   187,
      78,   180,   165,   443,   469,    40,   212,    78,    76,    68,
      69,    70,    71,    72,   381,   208,   162,   425,    73,    74,
     388,   176,    52,   243,   302,    61,   461,   209,    78,    60,
      76,    68,    69,    70,    71,    72,   362,   462,   137,   441,
      73,    74,    75,   264,   357,   492,    67,   406,   200,   164,
      78,   363,   410,    62,    76,    65,   346,   122,   124,   210,
     358,   153,   191,   176,   191,   247,   248,   431,   125,    77,
      89,   359,   256,   257,    78,   407,    90,    68,    69,    70,
      71,    72,   154,   130,   131,   176,    73,    74,   332,    91,
     269,   310,   311,    68,    69,    70,    71,    72,   351,   257,
     214,    76,    73,    74,   374,   375,    80,   453,   457,   376,
     155,   415,   395,   257,   360,   270,   165,   452,   100,   215,
     271,    78,   102,    76,   396,   257,   392,   156,   109,   383,
     409,    68,    69,    70,    71,    72,   398,   399,    77,    97,
      73,    74,   216,    78,   452,   217,   103,   213,   367,   119,
      58,   128,   129,   130,   131,   444,   218,   280,   457,    78,
     312,    68,    69,    70,    71,    72,   401,   402,   214,    76,
      73,    74,   128,   129,   130,   131,   123,     1,     2,   132,
       3,   416,   417,   133,   313,    76,   118,   215,     4,    78,
     445,   417,   411,   136,     5,   128,   129,   130,   131,   137,
      77,   128,   129,   130,   131,    78,   464,     6,   484,   257,
     216,   303,   142,   217,   177,   471,     7,   494,   257,   183,
     184,     8,   199,    76,   218,   249,   250,   128,   129,   130,
     131,     9,    68,    10,   211,   124,   223,   251,    77,   224,
     225,   226,   243,    78,    11,     1,     2,   254,     3,    12,
     242,   258,   260,    76,   261,   273,     4,   268,   276,   287,
      13,   283,     5,   286,   289,   290,   293,   294,    77,   252,
     327,   295,   296,    78,   297,     6,   300,     1,     2,   253,
     486,   318,   229,   303,     7,   331,   333,   334,     4,     8,
     335,   230,   231,   337,     5,   340,   339,   341,   232,     9,
     344,    10,   233,   352,   353,   354,   355,     6,   356,   364,
     373,   248,    11,   377,   371,   234,   393,    12,   390,   397,
     394,     8,   400,   403,   405,   235,   189,   404,    13,   421,
     418,     9,   422,    10,   427,   428,   236,    56,   429,   436,
     437,   438,   237,   442,    11,   458,   467,   459,   446,   465,
     238,   448,   466,   470,   239,   481,   480,   490,   483,   478,
      13,   249,   250,   128,   129,   130,   131,   111,   112,   113,
     114,   115,   116,   251,    59,    40,   222,   292,   491,   347,
     482,   380,   485,   479,   489,   424,   473,   198,   426,   420,
     255,   279,   267,   474,   414,   412,   206,   408,   141,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   253
  };

  const short int
  Parser::yycheck_[] =
  {
      13,    11,    88,   103,   110,    95,    61,     5,   226,    56,
       8,   198,    62,    90,   250,    51,   162,     8,     9,   165,
      17,     3,   190,   253,    65,   102,    49,   101,   258,    83,
      40,    41,   132,    43,    10,   111,   112,    73,    74,     8,
       9,    77,     3,    98,     5,    31,     3,    30,   134,     8,
       9,     3,     4,     5,     6,     7,   110,    10,    10,    95,
      12,    13,   162,    23,   216,   165,   218,    55,    51,   124,
      56,   289,   290,    75,   148,    61,     3,   223,   314,   309,
      32,   102,   318,   119,   125,    49,    83,   187,   318,   112,
      92,    43,   128,   129,   130,   131,    78,   133,    58,   199,
     268,   247,   248,   271,    12,    13,    14,    15,   208,     4,
       5,     6,    88,   110,    67,     3,     4,     5,     6,     7,
     111,    87,    10,   223,    12,    13,    83,   115,   364,   165,
     282,    17,   209,   183,   364,   190,   177,     4,     5,     6,
      87,   371,   111,    95,    32,   375,    22,   247,   248,   115,
     186,   228,   111,   110,    40,    43,    91,    59,   110,     4,
       5,     6,   109,   115,    12,    13,    14,    15,   115,   337,
      91,   339,    67,    29,   472,   211,   111,   190,    54,    20,
     257,    73,     3,     4,     5,     6,     7,   417,    64,   487,
     111,    12,    13,    14,    50,   341,    17,     3,    39,    91,
      95,   102,   212,   111,     4,     5,     6,    95,    83,    12,
      13,    14,    15,   268,   250,   251,   271,    89,    82,    40,
     115,    96,   110,   410,   442,    89,    98,   115,    95,     3,
       4,     5,     6,     7,   334,   100,    10,   383,    12,    13,
     340,   341,     3,   110,   242,    91,   101,   112,   115,   109,
      95,     3,     4,     5,     6,     7,   303,   112,     3,   405,
      12,    13,    14,   111,    10,   483,    63,    67,   127,    43,
     115,   307,   362,    21,    95,    59,   286,   313,    49,   138,
      26,    26,   337,   383,   339,     8,     9,   393,    59,   110,
     114,    37,   111,   112,   115,    95,    84,     3,     4,     5,
       6,     7,    47,    14,    15,   405,    12,    13,   111,    48,
      31,    17,    18,     3,     4,     5,     6,     7,   111,   112,
      38,    95,    12,    13,   111,   112,   362,   427,   428,   327,
      75,   367,   111,   112,    80,    56,   110,   423,     3,    57,
      61,   115,   110,    95,   111,   112,   344,    92,   110,    70,
     360,     3,     4,     5,     6,     7,   111,   112,   110,   109,
      12,    13,    80,   115,   450,    83,   100,    17,     9,   110,
       0,    12,    13,    14,    15,   411,    94,    67,   478,   115,
      86,     3,     4,     5,     6,     7,   111,   112,    38,    95,
      12,    13,    12,    13,    14,    15,     3,    27,    28,    19,
      30,   111,   112,   112,   110,    95,   114,    57,    38,   115,
     111,   112,     9,     3,    44,    12,    13,    14,    15,     3,
     110,    12,    13,    14,    15,   115,   436,    57,   111,   112,
      80,    83,     3,    83,   112,   448,    66,   111,   112,    21,
       3,    71,   100,    95,    94,    10,    11,    12,    13,    14,
      15,    81,     3,    83,   113,    49,   110,    22,   110,    62,
      62,   110,   110,   115,    94,    27,    28,    60,    30,    99,
      69,   110,   114,    95,   111,     3,    38,   112,    52,   112,
     110,    76,    44,    70,   110,   110,   110,   110,   110,    54,
      36,    74,   110,   115,   110,    57,   110,    27,    28,    64,
      30,   110,    25,    83,    66,     3,   111,    19,    38,    71,
     111,    34,    35,    61,    44,    24,    61,    53,    41,    81,
      69,    83,    45,     5,     5,     5,     5,    57,     5,   110,
      67,     9,    94,    77,    42,    58,    19,    99,    73,   111,
      90,    71,   111,   111,   110,    68,   111,    67,   110,    33,
     111,    81,     3,    83,   112,    24,    79,    83,    65,    80,
       5,     5,    85,   110,    94,     5,    62,   101,   111,   111,
      93,    46,   111,   111,    97,    51,    26,    72,   110,   112,
     110,    10,    11,    12,    13,    14,    15,   103,   104,   105,
     106,   107,   108,    22,    14,    89,   148,   228,    72,   287,
     462,   329,   471,   457,   478,   378,   450,   125,   386,   375,
     177,   209,   190,   452,   365,   364,   133,   359,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64
  };

  const unsigned char
  Parser::yystos_[] =
  {
       0,    27,    28,    30,    38,    44,    57,    66,    71,    81,
      83,    94,    99,   110,   117,   118,   119,   123,   141,   157,
     158,   159,   160,   161,   162,   163,   167,   168,   169,   170,
     171,   173,   176,   180,   181,   182,     3,   223,   102,    82,
      89,    49,   223,    59,     3,   142,   224,   223,   102,    17,
      40,   172,     3,   219,    10,    88,    83,   180,     0,   118,
     109,    91,    21,   219,   219,    59,   219,    63,     3,     4,
       5,     6,     7,    12,    13,    14,    95,   110,   115,   183,
     212,   213,   214,   215,   216,   217,   218,   220,   225,   114,
      84,    48,    29,    50,   229,   172,   111,   109,    17,   181,
       3,   228,   110,   100,   179,   194,   177,   178,   216,   110,
     133,   103,   104,   105,   106,   107,   108,   143,   114,   110,
     212,   212,   212,     3,    49,    59,   184,   185,    12,    13,
      14,    15,    19,   112,    55,   225,     3,     3,   174,   175,
     222,   229,     3,   183,   181,    30,    51,   120,   121,   122,
     123,   131,   134,    26,    47,    75,    92,   124,   125,   126,
     129,   222,    10,    32,    43,   110,   199,   200,   201,   202,
     203,   205,   206,   208,   210,   212,   220,   112,   130,   222,
      96,   164,   182,    21,     3,    14,    17,    40,   212,   111,
     110,   181,   186,   187,   188,   189,   190,   219,   177,   100,
     179,   212,   212,   212,   212,   220,   213,   225,   100,   112,
     179,   113,    98,    17,    38,    57,    80,    83,    94,   136,
     137,   138,   122,   110,    62,    62,   110,   111,   112,    25,
      34,    35,    41,    45,    58,    68,    79,    85,    93,    97,
     221,   199,    69,   110,   211,   199,   212,     8,     9,    10,
      11,    22,    54,    64,    60,   178,   111,   112,   110,   228,
     114,   111,   212,   220,   111,   181,   187,   188,   112,    31,
      56,    61,   191,     3,   227,   184,    52,   195,    32,   175,
      67,   212,   219,    76,   133,   133,    70,   112,   199,   110,
     110,   130,   125,   110,   110,    74,   110,   110,    23,    58,
     110,   127,   223,    83,   111,   199,   199,    22,    54,    64,
      17,    18,    86,   110,   209,   211,   212,   212,   110,   215,
      10,    67,   222,    67,   165,   166,   215,    36,   144,   145,
     146,     3,   111,   111,    19,   111,   187,    61,   187,    61,
      24,    53,   197,   198,    69,   133,   219,   138,   111,   130,
     130,   111,     5,     5,     5,     5,     5,    10,    26,    37,
      80,   128,   172,   212,   110,   215,   211,     9,   207,   211,
     215,    42,   204,    67,   111,   112,   223,    77,   152,   153,
     146,   220,   187,    70,   192,   193,   187,   196,   220,   199,
      73,   147,   223,    19,    90,   111,   111,   111,   111,   112,
     111,   111,   112,   111,    67,   110,    67,    95,   218,   219,
     183,     9,   207,   211,   204,   212,   111,   112,   111,   215,
     166,    33,     3,   226,   153,   199,   192,   112,    24,    65,
     151,   182,    78,   139,   140,   228,    80,     5,     5,    75,
      92,   199,   110,   184,   212,   111,   111,   215,    46,    87,
     155,   156,   225,   220,     5,   148,   149,   220,     5,   101,
     132,   101,   112,   135,   219,   111,   111,    62,   111,   130,
     111,   180,   109,   156,   221,    20,    39,   150,   112,   150,
      26,    51,   140,   110,   111,   147,    30,   154,   157,   149,
      72,    72,   130,   157,   111
  };

  const unsigned char
  Parser::yyr1_[] =
  {
       0,   116,   117,   117,   118,   119,   120,   120,   121,   121,
     122,   122,   122,   123,   124,   124,   125,   125,   126,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   129,   129,   129,   130,   130,   131,   132,   132,
     133,   133,   134,   135,   135,   136,   136,   136,   137,   137,
     138,   138,   138,   138,   138,   139,   139,   140,   140,   118,
     141,   142,   142,   143,   143,   143,   143,   143,   143,   144,
     144,   145,   145,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   150,   151,   151,   152,   152,   153,   154,   154,
     155,   155,   156,   156,   118,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   158,   159,
     160,   161,   162,   163,   164,   164,   165,   165,   166,   166,
     167,   168,   169,   170,   171,   172,   172,   172,   173,   174,
     174,   174,   175,   175,   176,   177,   177,   178,   179,   179,
     180,   180,   180,   181,   181,   182,   183,   183,   184,   185,
     186,   186,   187,   187,   187,   187,   188,   188,   188,   189,
     190,   190,   191,   192,   192,   193,   194,   195,   195,   196,
     196,   197,   197,   198,   199,   199,   199,   199,   199,   200,
     200,   200,   200,   200,   200,   200,   201,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   206,   206,
     207,   207,   208,   209,   209,   209,   210,   211,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   213,   213,
     214,   214,   215,   215,   215,   216,   216,   216,   217,   217,
     217,   217,   217,   218,   218,   218,   219,   219,   220,   220,
     220,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     222,   223,   224,   225,   226,   227,   228,   118,   118,   229,
     229
  };

  const unsigned char
  Parser::yyr2_[] =
  {
       0,     2,     2,     3,     1,     5,     0,     1,     1,     2,
       1,     1,     1,     6,     1,     3,     1,     1,     3,     0,
       2,     2,     3,     4,     2,     2,     2,     4,     2,     5,
       4,     5,     7,    10,     4,     1,     3,     7,     0,     3,
       0,     3,     7,     0,     3,     2,     1,     1,     1,     3,
       1,     1,     1,     2,     2,     1,     3,     1,     1,     1,
       8,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     2,     6,     0,     3,     1,     3,     2,     2,
       0,     1,     1,     0,     2,     1,     2,     5,     1,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       7,     4,     4,     5,     4,     1,     1,     3,     1,     1,
       2,     2,     6,     1,     1,     0,     1,     1,     8,     0,
       1,     3,     3,     3,     5,     1,     3,     1,     0,     1,
       1,     3,     4,     1,     3,     4,     1,     1,     6,     2,
       1,     3,     1,     2,     1,     1,     1,     1,     3,     4,
       5,     4,     1,     0,     1,     2,     2,     0,     3,     1,
       3,     0,     1,     2,     3,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     6,     5,
       5,     4,     0,     2,     4,     3,     6,     5,     6,     5,
       1,     3,     4,     1,     1,     1,     2,     6,     3,     3,
       3,     3,     2,     2,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     3,     4,     5,
       5,     4,     6,     1,     1,     1,     1,     3,     1,     3,
       5,     1,     4,     1,     4,     1,     1,     4,     6,     1,
       4,     6,     1,     2,     1,     2,     1,     4,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     4,     3,     2,
       1
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const Parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "NAME", "STRING", "INTNUM",
  "APPROXNUM", "AMMSC", "OR", "AND", "NOT", "COMPARISON", "'+'", "'-'",
  "'*'", "'/'", "UMINUS", "ALL", "ANY", "AS", "ASC", "AUTHORIZATION",
  "BETWEEN", "BIGINT", "BY", "CHARACTER", "CHECK", "CLOSE", "COMMIT",
  "CONTINUE", "CREATE", "CROSS", "CURRENT", "CURSOR", "DATE", "DECIMAL",
  "DECLARE", "DEFAULT", "DELETE", "DESC", "DISTINCT", "DOUBLE", "ESCAPE",
  "EXISTS", "FETCH", "FLOAT", "FOR", "FOREIGN", "FOUND", "FROM", "GOTO",
  "GRANT", "GROUP", "HAVING", "IN", "INDICATOR", "INNER", "INSERT",
  "INTEGER", "INTO", "IS", "JOIN", "KEY", "LANGUAGE", "LIKE", "LIMIT",
  "MODULE", "NULLX", "NUMERIC", "OF", "ON", "OPEN", "OPTION", "ORDER",
  "PRECISION", "PRIMARY", "PRIVILEGES", "PROCEDURE", "PUBLIC", "REAL",
  "REFERENCES", "ROLLBACK", "SCHEMA", "SELECT", "SET", "SMALLINT", "SOME",
  "SQLCODE", "SQLERROR", "TABLE", "TO", "UNION", "UNIQUE", "UNSIGNED",
  "UPDATE", "USER", "VALUES", "VARCHAR", "VIEW", "WHENEVER", "WHERE",
  "WITH", "WORK", "COBOL", "FORTRAN", "PASCAL", "PLI", "C", "ADA", "';'",
  "'('", "')'", "','", "'='", "'.'", "':'", "$accept", "sql_list", "sql",
  "schema", "opt_schema_element_list", "schema_element_list",
  "schema_element", "base_table_def", "base_table_element_commalist",
  "base_table_element", "column_def", "column_def_opt_list",
  "column_def_opt", "table_constraint_def", "column_commalist", "view_def",
  "opt_with_check_option", "opt_column_commalist", "privilege_def",
  "opt_with_grant_option", "privileges", "operation_commalist",
  "operation", "grantee_commalist", "grantee", "module_def", "opt_module",
  "lang", "opt_cursor_def_list", "cursor_def_list", "cursor_def",
  "opt_order_by_clause", "ordering_spec_commalist", "ordering_spec",
  "opt_asc_desc", "opt_limit_exp", "procedure_def_list", "procedure_def",
  "manipulative_statement_list", "parameter_def_list", "parameter_def",
  "manipulative_statement", "close_statement", "commit_statement",
  "delete_statement_positioned", "delete_statement_searched",
  "fetch_statement", "insert_statement", "values_or_query_spec",
  "insert_atom_commalist", "insert_atom", "open_statement",
  "rollback_statement", "select_statement", "query_statement",
  "create_statement", "opt_all_distinct", "update_statement_positioned",
  "assignment_commalist", "assignment", "update_statement_searched",
  "target_commalist", "target", "opt_where_clause", "query_exp",
  "query_term", "query_spec", "selection", "table_exp", "from_clause",
  "table_ref_commalist", "table_ref", "joined_table", "cross_join",
  "qualified_join", "join_type", "join_spec", "join_condition",
  "where_clause", "opt_group_by_clause", "column_ref_commalist",
  "opt_having_clause", "having_clause", "search_condition", "predicate",
  "comparison_predicate", "between_predicate", "like_predicate",
  "opt_escape", "test_for_null", "in_predicate", "atom_commalist",
  "all_or_any_predicate", "any_all_some", "existence_test", "subquery",
  "scalar_exp", "derived_column", "scalar_exp_commalist", "atom",
  "parameter_ref", "function_ref", "literal", "table", "column_ref",
  "data_type", "column", "cursor", "module", "parameter", "procedure",
  "range_variable", "user", "when_action", YY_NULLPTR
  };


  const unsigned short int
  Parser::yyrline_[] =
  {
       0,   226,   226,   233,   242,   246,   249,   251,   255,   256,
     260,   261,   262,   266,   275,   280,   289,   290,   294,   301,
     303,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     319,   320,   321,   323,   325,   329,   330,   334,   338,   340,
     344,   345,   349,   353,   355,   359,   360,   361,   365,   366,
     370,   371,   372,   373,   374,   379,   380,   384,   385,   389,
     393,   400,   402,   406,   407,   408,   409,   410,   411,   414,
     416,   420,   421,   425,   430,   433,   440,   446,   455,   459,
     467,   468,   469,   474,   477,   492,   493,   497,   502,   503,
     507,   508,   512,   513,   519,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   539,   543,
     547,   551,   555,   559,   568,   570,   575,   580,   589,   590,
     595,   599,   603,   609,   613,   619,   621,   622,   626,   630,
     631,   632,   636,   637,   641,   645,   646,   650,   654,   655,
     661,   662,   663,   667,   668,   672,   681,   682,   692,   712,
     716,   721,   730,   731,   732,   739,   743,   744,   745,   749,
     758,   765,   776,   780,   781,   786,   790,   794,   795,   799,
     804,   813,   814,   818,   824,   830,   836,   837,   838,   842,
     843,   844,   845,   846,   847,   848,   852,   858,   865,   872,
     882,   888,   896,   898,   902,   903,   907,   908,   909,   910,
     914,   915,   919,   923,   924,   925,   929,   933,   939,   945,
     951,   957,   963,   967,   976,   980,   985,   989,   996,   997,
    1007,  1012,  1022,  1023,  1024,  1028,  1029,  1030,  1034,  1035,
    1036,  1037,  1042,  1051,  1056,  1061,  1071,  1076,  1083,  1084,
    1085,  1091,  1093,  1095,  1097,  1099,  1101,  1103,  1105,  1107,
    1109,  1111,  1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,
    1133,  1136,  1139,  1143,  1146,  1149,  1152,  1156,  1157,  1160,
    1161
  };

  // Print the state stack on the debug stream.
  void
  Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  Parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
  Parser::token_number_type
  Parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     110,   111,    14,    12,   112,    13,   114,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   115,   109,
       2,   113,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108
    };
    const unsigned int user_token_number_max_ = 359;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 14 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:1167
} } // CoGaDB::SQL
#line 2302 "/home/gurumurt/Hawk-VLDBJ/source/src/sql/server/sql_parser.cpp" // lalr1.cc:1167
#line 1167 "lib/cogadb/src/sql/server/sql_parser.ypp" // lalr1.cc:1168


namespace CoGaDB {

#ifdef BISON_VERSION_3_OR_HIGHER
void SQL::Parser::error(const std::string &m)
{
	driver.error(m);
}
//#else
//void SQL::Parser::error(const location_type &l, const std::string &m)
//{
//	driver.error(m);
//}
#endif

} /* namespace CoGaDB */
