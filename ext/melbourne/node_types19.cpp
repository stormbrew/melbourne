/* This file is generated by node_types.rb. Do not edit. */

#include "node_types19.hpp"

#include <stdio.h>

namespace melbourne {
  namespace grammar19 {
    static const char node_types[] = {
      "scope\0"
      "block\0"
      "if\0"
      "case\0"
      "when\0"
      "opt_n\0"
      "while\0"
      "until\0"
      "iter\0"
      "for\0"
      "break\0"
      "next\0"
      "redo\0"
      "retry\0"
      "begin\0"
      "rescue\0"
      "resbody\0"
      "ensure\0"
      "and\0"
      "or\0"
      "masgn\0"
      "lasgn\0"
      "dasgn\0"
      "dasgn_curr\0"
      "gasgn\0"
      "iasgn\0"
      "iasgn2\0"
      "cdecl\0"
      "cvasgn\0"
      "cvdecl\0"
      "op_asgn1\0"
      "op_asgn2\0"
      "op_asgn_and\0"
      "op_asgn_or\0"
      "call\0"
      "fcall\0"
      "vcall\0"
      "super\0"
      "zsuper\0"
      "array\0"
      "zarray\0"
      "values\0"
      "hash\0"
      "return\0"
      "yield\0"
      "lvar\0"
      "dvar\0"
      "gvar\0"
      "ivar\0"
      "const\0"
      "cvar\0"
      "nth_ref\0"
      "back_ref\0"
      "match\0"
      "match2\0"
      "match3\0"
      "lit\0"
      "str\0"
      "dstr\0"
      "xstr\0"
      "dxstr\0"
      "evstr\0"
      "dregx\0"
      "dregx_once\0"
      "args\0"
      "args_aux\0"
      "opt_arg\0"
      "postarg\0"
      "argscat\0"
      "argspush\0"
      "splat\0"
      "to_ary\0"
      "block_arg\0"
      "block_pass\0"
      "defn\0"
      "defs\0"
      "alias\0"
      "valias\0"
      "undef\0"
      "class\0"
      "module\0"
      "sclass\0"
      "colon2\0"
      "colon3\0"
      "dot2\0"
      "dot3\0"
      "flip2\0"
      "flip3\0"
      "self\0"
      "nil\0"
      "true\0"
      "false\0"
      "errinfo\0"
      "defined\0"
      "postexe\0"
      "alloca\0"
      "bmethod\0"
      "memo\0"
      "ifunc\0"
      "dsym\0"
      "attrasgn\0"
      "prelude\0"
      "lambda\0"
      "optblock\0"
      "last\0"
      "file\0"
      "regex\0"
      "number\0"
      "float\0"
      "encoding\0"
    };

    static const unsigned short node_types_offsets[] = {
      0,
      6,
      12,
      15,
      20,
      25,
      31,
      37,
      43,
      48,
      52,
      58,
      63,
      68,
      74,
      80,
      87,
      95,
      102,
      106,
      109,
      115,
      121,
      127,
      138,
      144,
      150,
      157,
      163,
      170,
      177,
      186,
      195,
      207,
      218,
      223,
      229,
      235,
      241,
      248,
      254,
      261,
      268,
      273,
      280,
      286,
      291,
      296,
      301,
      306,
      312,
      317,
      325,
      334,
      340,
      347,
      354,
      358,
      362,
      367,
      372,
      378,
      384,
      390,
      401,
      406,
      415,
      423,
      431,
      439,
      448,
      454,
      461,
      471,
      482,
      487,
      492,
      498,
      505,
      511,
      517,
      524,
      531,
      538,
      545,
      550,
      555,
      561,
      567,
      572,
      576,
      581,
      587,
      595,
      603,
      611,
      618,
      626,
      631,
      637,
      642,
      651,
      659,
      666,
      675,
      680,
      685,
      691,
      698,
      704,
      713
    };

    const char *get_node_type_string(enum node_type node) {
      if(node < 110) {
        return node_types + node_types_offsets[node];
      } else {
#define NODE_STRING_MESSAGE_LEN 20
        static char msg[NODE_STRING_MESSAGE_LEN];
        snprintf(msg, NODE_STRING_MESSAGE_LEN, "unknown node type: %d", node);
        return msg;
      }
    }
  };  // namespace grammar19
};  // namespace melbourne
