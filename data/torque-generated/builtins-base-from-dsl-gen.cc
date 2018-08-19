#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/module.h"
#include "src/objects/stack-frame-info.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "torque-generated/builtins-base-from-dsl-gen.h"
#include "torque-generated/builtins-growable-fixed-array-from-dsl-gen.h"
#include "torque-generated/builtins-arguments-from-dsl-gen.h"
#include "torque-generated/builtins-array-from-dsl-gen.h"
#include "torque-generated/builtins-array-copywithin-from-dsl-gen.h"
#include "torque-generated/builtins-array-filter-from-dsl-gen.h"
#include "torque-generated/builtins-array-find-from-dsl-gen.h"
#include "torque-generated/builtins-array-findindex-from-dsl-gen.h"
#include "torque-generated/builtins-array-foreach-from-dsl-gen.h"
#include "torque-generated/builtins-array-join-from-dsl-gen.h"
#include "torque-generated/builtins-array-lastindexof-from-dsl-gen.h"
#include "torque-generated/builtins-array-of-from-dsl-gen.h"
#include "torque-generated/builtins-array-map-from-dsl-gen.h"
#include "torque-generated/builtins-array-reverse-from-dsl-gen.h"
#include "torque-generated/builtins-array-slice-from-dsl-gen.h"
#include "torque-generated/builtins-array-splice-from-dsl-gen.h"
#include "torque-generated/builtins-array-unshift-from-dsl-gen.h"
#include "torque-generated/builtins-collections-from-dsl-gen.h"
#include "torque-generated/builtins-data-view-from-dsl-gen.h"
#include "torque-generated/builtins-extras-utils-from-dsl-gen.h"
#include "torque-generated/builtins-object-from-dsl-gen.h"
#include "torque-generated/builtins-iterator-from-dsl-gen.h"
#include "torque-generated/builtins-string-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-createtypedarray-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-filter-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-foreach-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-reduce-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-reduceright-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-slice-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-subarray-from-dsl-gen.h"

namespace v8 {
namespace internal {

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::NewJSObject(compiler::TNode<Map> p_map, compiler::TNode<Object> p_properties, compiler::TNode<FixedArrayBase> p_elements) {
  compiler::CodeAssemblerParameterizedLabel<Map, Object, FixedArrayBase> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Map, Object, FixedArrayBase, JSObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Map, Object, FixedArrayBase, JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_map, p_properties, p_elements);

  if (block0.is_used()) {
    compiler::TNode<Map> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<FixedArrayBase> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 112);
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).TimesTaggedSize(CodeStubAssembler(state_).LoadMapInstanceSizeInWords((compiler::TNode<Map>{tmp0})));
    compiler::TNode<JSObject> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<JSObject>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp3}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp4, CodeStubAssembler(state_).IntPtrConstant(24), compiler::TNode<IntPtrT>{tmp3}, RootIndex::kUndefinedValue);
    CodeStubAssembler(state_).StoreMap(tmp4, tmp0);
    CodeStubAssembler(state_).StoreObjectField(tmp4, 8, tmp1);
    CodeStubAssembler(state_).StoreObjectField(tmp4, 16, tmp2);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Map> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<FixedArrayBase> tmp7;
    compiler::TNode<JSObject> tmp8;
    ca_.Bind(&block1, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 109);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8);
  }

    compiler::TNode<Map> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<FixedArrayBase> tmp11;
    compiler::TNode<JSObject> tmp12;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12);
  return compiler::TNode<JSObject>{tmp12};
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::NewJSObject(compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, HeapObject, Map> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 115);
    compiler::TNode<JSFunction> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).GetObjectFunction(compiler::TNode<Context>{tmp0}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 116);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<HeapObject>(BaseBuiltinsFromDSLAssembler(state_).LoadJSFunctionPrototypeOrInitialMap(compiler::TNode<JSFunction>{tmp1}));
    compiler::TNode<Map> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATMap(compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<JSFunction> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSFunction> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<Map> tmp10;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp7, tmp8, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSFunction> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 117);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<JSFunction> tmp14;
    compiler::TNode<Map> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 116);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 118);
    compiler::TNode<FixedArray> tmp16;
    USE(tmp16);
    tmp16 = BaseBuiltinsFromDSLAssembler(state_).kEmptyFixedArray();
    compiler::TNode<FixedArray> tmp17;
    USE(tmp17);
    tmp17 = BaseBuiltinsFromDSLAssembler(state_).kEmptyFixedArray();
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).TimesTaggedSize(CodeStubAssembler(state_).LoadMapInstanceSizeInWords((compiler::TNode<Map>{tmp15})));
    compiler::TNode<JSObject> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<JSObject>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp18}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp19, CodeStubAssembler(state_).IntPtrConstant(24), compiler::TNode<IntPtrT>{tmp18}, RootIndex::kUndefinedValue);
    CodeStubAssembler(state_).StoreMap(tmp19, tmp15);
    CodeStubAssembler(state_).StoreObjectField(tmp19, 8, tmp16);
    CodeStubAssembler(state_).StoreObjectField(tmp19, 16, tmp17);
    ca_.Goto(&block1, tmp13, tmp19);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSObject> tmp21;
    ca_.Bind(&block1, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 114);
    ca_.Goto(&block6, tmp20, tmp21);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<JSObject> tmp23;
    ca_.Bind(&block6, &tmp22, &tmp23);
  return compiler::TNode<JSObject>{tmp23};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::NewJSArray(compiler::TNode<Context> p_context, compiler::TNode<Map> p_map, compiler::TNode<FixedArrayBase> p_elements) {
  compiler::CodeAssemblerParameterizedLabel<Context, Map, FixedArrayBase> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, FixedArrayBase, JSArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, FixedArrayBase, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_elements);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Map> tmp1;
    compiler::TNode<FixedArrayBase> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 146);
    compiler::TNode<FixedArray> tmp3;
    USE(tmp3);
    tmp3 = BaseBuiltinsFromDSLAssembler(state_).kEmptyFixedArray();
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadFixedArrayBaseLength(compiler::TNode<FixedArrayBase>{tmp2}));
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).IntPtrConstant(((32)));
    compiler::TNode<JSArray> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<JSArray>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp5}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp6, CodeStubAssembler(state_).IntPtrConstant(32), compiler::TNode<IntPtrT>{tmp5}, RootIndex::kUndefinedValue);
    CodeStubAssembler(state_).StoreMap(tmp6, tmp1);
    CodeStubAssembler(state_).StoreObjectField(tmp6, 8, tmp3);
    CodeStubAssembler(state_).StoreObjectField(tmp6, 16, tmp2);
    CodeStubAssembler(state_).StoreObjectField(tmp6, 24, tmp4);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Map> tmp8;
    compiler::TNode<FixedArrayBase> tmp9;
    compiler::TNode<JSArray> tmp10;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 144);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10);
  }

    compiler::TNode<Context> tmp11;
    compiler::TNode<Map> tmp12;
    compiler::TNode<FixedArrayBase> tmp13;
    compiler::TNode<JSArray> tmp14;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14);
  return compiler::TNode<JSArray>{tmp14};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::NewJSArray(compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 151);
    compiler::TNode<Map> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).GetFastPackedSmiElementsJSArrayMap(compiler::TNode<Context>{tmp0}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 152);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).kEmptyFixedArray();
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 153);
    compiler::TNode<FixedArray> tmp3;
    USE(tmp3);
    tmp3 = BaseBuiltinsFromDSLAssembler(state_).kEmptyFixedArray();
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 150);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).IntPtrConstant(((32)));
    compiler::TNode<JSArray> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<JSArray>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp4}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp5, CodeStubAssembler(state_).IntPtrConstant(32), compiler::TNode<IntPtrT>{tmp4}, RootIndex::kUndefinedValue);
    CodeStubAssembler(state_).StoreMap(tmp5, tmp1);
    CodeStubAssembler(state_).StoreObjectField(tmp5, 8, tmp2);
    CodeStubAssembler(state_).StoreObjectField(tmp5, 16, tmp3);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    CodeStubAssembler(state_).StoreObjectField(tmp5, 24, tmp6);
    ca_.Goto(&block1, tmp0, tmp5);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSArray> tmp8;
    ca_.Bind(&block1, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 149);
    ca_.Goto(&block2, tmp7, tmp8);
  }

    compiler::TNode<Context> tmp9;
    compiler::TNode<JSArray> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
  return compiler::TNode<JSArray>{tmp10};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Hole() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 554);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).TheHoleConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Null() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 555);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).NullConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Undefined() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 556);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).UndefinedConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::True() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 557);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).TrueConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::False() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 558);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).FalseConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::kEmptyString() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 559);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).EmptyStringConstant());
return compiler::TNode<String>{tmp0};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::kLengthString() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 560);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).LengthStringConstant());
return compiler::TNode<String>{tmp0};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ElementsKindNotEqual(compiler::TNode<Int32T> p_k1, compiler::TNode<Int32T> p_k2) {
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_k1, p_k2);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 727);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp0}, compiler::TNode<Int32T>{tmp1}));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp2}));
    ca_.Goto(&block1, tmp0, tmp1, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp4;
    compiler::TNode<Int32T> tmp5;
    compiler::TNode<BoolT> tmp6;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 725);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

    compiler::TNode<Int32T> tmp7;
    compiler::TNode<Int32T> tmp8;
    compiler::TNode<BoolT> tmp9;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9);
  return compiler::TNode<BoolT>{tmp9};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::IsNumberEqual(compiler::TNode<Number> p_a, compiler::TNode<Number> p_b) {
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a, p_b);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 768);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberEqual(compiler::TNode<Number>{tmp0}, compiler::TNode<Number>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp0, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp0, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    compiler::TNode<Number> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Number> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block7, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block3, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Number> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block2, &tmp10, &tmp11);
    ca_.Goto(&block5, tmp10, tmp11);
  }

  if (block3.is_used()) {
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    ca_.Bind(&block3, &tmp12, &tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    compiler::TNode<Number> tmp15;
    compiler::TNode<Number> tmp16;
    ca_.Bind(&block5, &tmp15, &tmp16);
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp15, tmp16, tmp17);
  }

  if (block4.is_used()) {
    compiler::TNode<Number> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<BoolT> tmp20;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block1, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp21;
    compiler::TNode<Number> tmp22;
    compiler::TNode<BoolT> tmp23;
    ca_.Bind(&block1, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 767);
    ca_.Goto(&block8, tmp21, tmp22, tmp23);
  }

    compiler::TNode<Number> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<BoolT> tmp26;
    ca_.Bind(&block8, &tmp24, &tmp25, &tmp26);
  return compiler::TNode<BoolT>{tmp26};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::IsNumberNotEqual(compiler::TNode<Number> p_a, compiler::TNode<Number> p_b) {
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a, p_b);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 771);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberEqual(compiler::TNode<Number>{tmp0}, compiler::TNode<Number>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp0, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp0, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    compiler::TNode<Number> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Number> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block7, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block3, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Number> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block2, &tmp10, &tmp11);
    ca_.Goto(&block5, tmp10, tmp11);
  }

  if (block3.is_used()) {
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    ca_.Bind(&block3, &tmp12, &tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    compiler::TNode<Number> tmp15;
    compiler::TNode<Number> tmp16;
    ca_.Bind(&block5, &tmp15, &tmp16);
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp15, tmp16, tmp17);
  }

  if (block4.is_used()) {
    compiler::TNode<Number> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<BoolT> tmp20;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block1, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp21;
    compiler::TNode<Number> tmp22;
    compiler::TNode<BoolT> tmp23;
    ca_.Bind(&block1, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 770);
    ca_.Goto(&block8, tmp21, tmp22, tmp23);
  }

    compiler::TNode<Number> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<BoolT> tmp26;
    ca_.Bind(&block8, &tmp24, &tmp25, &tmp26);
  return compiler::TNode<BoolT>{tmp26};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Min(compiler::TNode<Number> p_x, compiler::TNode<Number> p_y) {
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 863);
    compiler::TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberMin(compiler::TNode<Number>{tmp0}, compiler::TNode<Number>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp3;
    compiler::TNode<Number> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 862);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Number> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Number>{tmp8};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Max(compiler::TNode<Number> p_x, compiler::TNode<Number> p_y) {
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 866);
    compiler::TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberMax(compiler::TNode<Number>{tmp0}, compiler::TNode<Number>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp3;
    compiler::TNode<Number> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 865);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Number> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Number>{tmp8};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Cast5ATSmi(compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 941);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).TaggedToSmi(compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Object> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<Smi>{tmp10};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Cast13ATPositiveSmi(compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 946);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).TaggedToPositiveSmi(compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Object> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<Smi>{tmp10};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Cast22UT12ATHeapNumber5ATSmi(compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 951);
    compiler::TNode<Number> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).TaggedToNumber(compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Object> tmp9;
    compiler::TNode<Number> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<Number>{tmp10};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::Cast10HeapObject(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 959);
    ca_.Goto(&block2, tmp0, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp1;
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block2, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block3, tmp1, tmp2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
  return compiler::TNode<HeapObject>{tmp4};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::Cast10FixedArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, FixedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 964);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToFixedArray(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<FixedArray> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<FixedArray> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<FixedArray> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<FixedArray>{tmp10};
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::Cast16FixedDoubleArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, FixedDoubleArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, FixedDoubleArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, FixedDoubleArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 969);
    compiler::TNode<FixedDoubleArray> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToFixedDoubleArray(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<FixedDoubleArray> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<FixedDoubleArray> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<FixedDoubleArray> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<FixedDoubleArray>{tmp10};
}

compiler::TNode<SloppyArgumentsElements> BaseBuiltinsFromDSLAssembler::Cast23SloppyArgumentsElements(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, SloppyArgumentsElements> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, SloppyArgumentsElements> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, SloppyArgumentsElements> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 974);
    compiler::TNode<SloppyArgumentsElements> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToSloppyArgumentsElements(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<SloppyArgumentsElements> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<SloppyArgumentsElements> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<SloppyArgumentsElements> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<SloppyArgumentsElements>{tmp10};
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::Cast12ATJSDataView(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSDataView> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSDataView> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 979);
    compiler::TNode<JSDataView> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToJSDataView(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSDataView> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<JSDataView> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<JSDataView> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<JSDataView>{tmp10};
}

compiler::TNode<JSTypedArray> BaseBuiltinsFromDSLAssembler::Cast12JSTypedArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSTypedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 984);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSTypedArray(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<JSTypedArray> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp2});
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 985);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSTypedArray> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return compiler::TNode<JSTypedArray>{tmp8};
}

compiler::TNode<JSTypedArray> BaseBuiltinsFromDSLAssembler::Cast12JSTypedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, HeapObject, JSTypedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSTypedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 990);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast10HeapObject(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 991);
    compiler::TNode<JSTypedArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast12JSTypedArray(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    compiler::TNode<HeapObject> tmp14;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<HeapObject> tmp17;
    compiler::TNode<HeapObject> tmp18;
    compiler::TNode<JSTypedArray> tmp19;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block2, tmp15, tmp16, tmp19);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<JSTypedArray> tmp22;
    ca_.Bind(&block2, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp20, tmp21, tmp22);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<JSTypedArray> tmp25;
    ca_.Bind(&block7, &tmp23, &tmp24, &tmp25);
  return compiler::TNode<JSTypedArray>{tmp25};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast39UT15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 996);
    compiler::TNode<JSReceiver> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToCallable(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<JSReceiver> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<JSReceiver>{tmp10};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::Cast52UT11ATUndefined15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1001);
    compiler::TNode<Oddball> tmp1;
    USE(tmp1);
    tmp1 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp0}, compiler::TNode<HeapObject>{tmp1}));
    ca_.Branch(tmp2, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block3, &tmp3);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block2, tmp3, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1002);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = CodeStubAssembler(state_).HeapObjectToCallable(compiler::TNode<HeapObject>{tmp5}, &label0);
    ca_.Goto(&block5, tmp5, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp5, tmp5);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<HeapObject> tmp8;
    ca_.Bind(&block6, &tmp7, &tmp8);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<HeapObject> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    ca_.Bind(&block5, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp9, tmp11);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block2, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block7, tmp12, tmp13);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp14;
    compiler::TNode<HeapObject> tmp15;
    ca_.Bind(&block7, &tmp14, &tmp15);
  return compiler::TNode<HeapObject>{tmp15};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast7JSArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1007);
    compiler::TNode<JSArray> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToJSArray(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSArray> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<JSArray> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<JSArray> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<JSArray>{tmp10};
}

compiler::TNode<JSArrayBuffer> BaseBuiltinsFromDSLAssembler::Cast13JSArrayBuffer(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSArrayBuffer> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSArrayBuffer> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSArrayBuffer> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1012);
    compiler::TNode<JSArrayBuffer> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToJSArrayBuffer(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSArrayBuffer> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<JSArrayBuffer> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<JSArrayBuffer> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<JSArrayBuffer>{tmp10};
}

compiler::TNode<Context> BaseBuiltinsFromDSLAssembler::Cast9ATContext(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1017);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsContext(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<Context> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp2});
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1018);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<Context> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<Context> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return compiler::TNode<Context>{tmp8};
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::Cast8JSObject(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1023);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSObject(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<JSObject> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp2});
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1024);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSObject> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<JSObject> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return compiler::TNode<JSObject>{tmp8};
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::Cast18ATNumberDictionary(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, NumberDictionary> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, NumberDictionary> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1029);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNumberDictionary(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<NumberDictionary> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp2});
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1030);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<NumberDictionary> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<NumberDictionary> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return compiler::TNode<NumberDictionary>{tmp8};
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::Cast19FixedTypedArrayBase(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, FixedTypedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, FixedTypedArrayBase> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1035);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsFixedTypedArray(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<FixedTypedArrayBase> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp2});
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1036);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<FixedTypedArrayBase> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<FixedTypedArrayBase> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return compiler::TNode<FixedTypedArrayBase>{tmp8};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::Cast8ATString(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1041);
    compiler::TNode<String> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToString(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<String> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<String> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<String>{tmp10};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::Cast14ATDirectString(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1046);
    compiler::TNode<String> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).TaggedToDirectString(compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<String> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<String> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<String>{tmp10};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast13ATConstructor(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1051);
    compiler::TNode<JSReceiver> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToConstructor(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<JSReceiver> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<JSReceiver>{tmp10};
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::Cast12ATHeapNumber(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapNumber> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapNumber> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1056);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsHeapNumber(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<HeapNumber> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp2});
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1057);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<HeapNumber> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<HeapNumber> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return compiler::TNode<HeapNumber>{tmp8};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::Cast5ATMap(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1062);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsMap(compiler::TNode<HeapObject>{tmp1}));
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    compiler::TNode<Map> tmp5;
    USE(tmp5);
    tmp5 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp4});
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    ca_.Bind(&block4, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1063);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<Map> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp8, tmp9, tmp10);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<Map> tmp13;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13);
  return compiler::TNode<Map>{tmp13};
}

compiler::TNode<JSArgumentsObjectWithLength> BaseBuiltinsFromDSLAssembler::Cast27JSArgumentsObjectWithLength(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSArgumentsObjectWithLength> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSArgumentsObjectWithLength> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1069);
    compiler::TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).LoadHeapObjectMap(compiler::TNode<HeapObject>{tmp1}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1071);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsFastAliasedArgumentsMap(compiler::TNode<Context>{tmp0}, compiler::TNode<Map>{tmp2}));
    ca_.Branch(tmp3, &block5, &block6, tmp0, tmp1, tmp2);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<Map> tmp6;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block4, tmp4, tmp5, tmp6);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<Map> tmp9;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1072);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsSloppyArgumentsMap(compiler::TNode<Context>{tmp7}, compiler::TNode<Map>{tmp9}));
    ca_.Branch(tmp10, &block7, &block8, tmp7, tmp8, tmp9);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<Map> tmp13;
    ca_.Bind(&block7, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block4, tmp11, tmp12, tmp13);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<HeapObject> tmp15;
    compiler::TNode<Map> tmp16;
    ca_.Bind(&block8, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1073);
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsStrictArgumentsMap(compiler::TNode<Context>{tmp14}, compiler::TNode<Map>{tmp16}));
    ca_.Branch(tmp17, &block9, &block10, tmp14, tmp15, tmp16);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<HeapObject> tmp19;
    compiler::TNode<Map> tmp20;
    ca_.Bind(&block9, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block4, tmp18, tmp19, tmp20);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<HeapObject> tmp22;
    compiler::TNode<Map> tmp23;
    ca_.Bind(&block10, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1074);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsSlowAliasedArgumentsMap(compiler::TNode<Context>{tmp21}, compiler::TNode<Map>{tmp23}));
    ca_.Branch(tmp24, &block11, &block12, tmp21, tmp22, tmp23);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<HeapObject> tmp26;
    compiler::TNode<Map> tmp27;
    ca_.Bind(&block11, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block4, tmp25, tmp26, tmp27);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<HeapObject> tmp29;
    compiler::TNode<Map> tmp30;
    ca_.Bind(&block12, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1075);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<HeapObject> tmp32;
    compiler::TNode<Map> tmp33;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1078);
    compiler::TNode<JSArgumentsObjectWithLength> tmp34;
    USE(tmp34);
    tmp34 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp32});
    ca_.Goto(&block2, tmp31, tmp32, tmp34);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<HeapObject> tmp36;
    compiler::TNode<JSArgumentsObjectWithLength> tmp37;
    ca_.Bind(&block2, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block13, tmp35, tmp36, tmp37);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp38;
    compiler::TNode<HeapObject> tmp39;
    compiler::TNode<JSArgumentsObjectWithLength> tmp40;
    ca_.Bind(&block13, &tmp38, &tmp39, &tmp40);
  return compiler::TNode<JSArgumentsObjectWithLength>{tmp40};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast13ATFastJSArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1084);
    compiler::TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).LoadHeapObjectMap(compiler::TNode<HeapObject>{tmp1}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1085);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSArrayMap(compiler::TNode<Map>{tmp2}));
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp3}));
    ca_.Branch(tmp4, &block3, &block4, tmp0, tmp1, tmp2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<HeapObject> tmp6;
    compiler::TNode<Map> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<Map> tmp10;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1088);
    compiler::TNode<Int32T> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadMapElementsKind(compiler::TNode<Map>{tmp10}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1089);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsFastElementsKind(compiler::TNode<Int32T>{tmp11}));
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp12}));
    ca_.Branch(tmp13, &block5, &block6, tmp8, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<HeapObject> tmp15;
    compiler::TNode<Map> tmp16;
    compiler::TNode<Int32T> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<HeapObject> tmp19;
    compiler::TNode<Map> tmp20;
    compiler::TNode<Int32T> tmp21;
    ca_.Bind(&block6, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1092);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsPrototypeInitialArrayPrototype(compiler::TNode<Context>{tmp18}, compiler::TNode<Map>{tmp20}));
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp22}));
    ca_.Branch(tmp23, &block7, &block8, tmp18, tmp19, tmp20, tmp21);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<HeapObject> tmp25;
    compiler::TNode<Map> tmp26;
    compiler::TNode<Int32T> tmp27;
    ca_.Bind(&block7, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<HeapObject> tmp29;
    compiler::TNode<Map> tmp30;
    compiler::TNode<Int32T> tmp31;
    ca_.Bind(&block8, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1094);
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid());
    ca_.Branch(tmp32, &block9, &block10, tmp28, tmp29, tmp30, tmp31);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<HeapObject> tmp34;
    compiler::TNode<Map> tmp35;
    compiler::TNode<Int32T> tmp36;
    ca_.Bind(&block9, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<HeapObject> tmp38;
    compiler::TNode<Map> tmp39;
    compiler::TNode<Int32T> tmp40;
    ca_.Bind(&block10, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1095);
    compiler::TNode<JSArray> tmp41;
    USE(tmp41);
    tmp41 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp38});
    ca_.Goto(&block2, tmp37, tmp38, tmp41);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<HeapObject> tmp43;
    compiler::TNode<JSArray> tmp44;
    ca_.Bind(&block2, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block11, tmp42, tmp43, tmp44);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp45;
    compiler::TNode<HeapObject> tmp46;
    compiler::TNode<JSArray> tmp47;
    ca_.Bind(&block11, &tmp45, &tmp46, &tmp47);
  return compiler::TNode<JSArray>{tmp47};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast20ATFastJSArrayForCopy(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1101);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsArraySpeciesProtectorCellInvalid());
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1102);
    compiler::TNode<JSArray> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp5}, compiler::TNode<HeapObject>{tmp6}, &label0);
    ca_.Goto(&block5, tmp5, tmp6, tmp6, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp5, tmp6, tmp6);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<HeapObject> tmp10;
    ca_.Bind(&block6, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<HeapObject> tmp13;
    compiler::TNode<JSArray> tmp14;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1103);
    compiler::TNode<JSArray> tmp15;
    USE(tmp15);
    tmp15 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp12});
    ca_.Goto(&block2, tmp11, tmp12, tmp15);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<HeapObject> tmp17;
    compiler::TNode<JSArray> tmp18;
    ca_.Bind(&block2, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block7, tmp16, tmp17, tmp18);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp19;
    compiler::TNode<HeapObject> tmp20;
    compiler::TNode<JSArray> tmp21;
    ca_.Bind(&block7, &tmp19, &tmp20, &tmp21);
  return compiler::TNode<JSArray>{tmp21};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1109);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsArrayIteratorProtectorCellInvalid());
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1110);
    compiler::TNode<JSArray> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp5}, compiler::TNode<HeapObject>{tmp6}, &label0);
    ca_.Goto(&block5, tmp5, tmp6, tmp6, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp5, tmp6, tmp6);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<HeapObject> tmp10;
    ca_.Bind(&block6, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<HeapObject> tmp13;
    compiler::TNode<JSArray> tmp14;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1111);
    compiler::TNode<JSArray> tmp15;
    USE(tmp15);
    tmp15 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp12});
    ca_.Goto(&block2, tmp11, tmp12, tmp15);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<HeapObject> tmp17;
    compiler::TNode<JSArray> tmp18;
    ca_.Bind(&block2, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block7, tmp16, tmp17, tmp18);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp19;
    compiler::TNode<HeapObject> tmp20;
    compiler::TNode<JSArray> tmp21;
    ca_.Bind(&block7, &tmp19, &tmp20, &tmp21);
  return compiler::TNode<JSArray>{tmp21};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast10JSReceiver(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1116);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSReceiver(compiler::TNode<HeapObject>{tmp1}));
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    compiler::TNode<JSReceiver> tmp5;
    USE(tmp5);
    tmp5 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp4});
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    ca_.Bind(&block4, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1117);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<JSReceiver> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp8, tmp9, tmp10);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<JSReceiver> tmp13;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13);
  return compiler::TNode<JSReceiver>{tmp13};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::Cast10JSFunction(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, JSFunction> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1122);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSFunction(compiler::TNode<HeapObject>{tmp1}));
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    compiler::TNode<JSFunction> tmp5;
    USE(tmp5);
    tmp5 = TORQUE_CAST(compiler::TNode<HeapObject>{tmp4});
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    ca_.Bind(&block4, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1123);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<JSFunction> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 954);
    ca_.Goto(&block5, tmp8, tmp9, tmp10);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<JSFunction> tmp13;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13);
  return compiler::TNode<JSFunction>{tmp13};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::TryUintPtrToPositiveSmi(compiler::TNode<UintPtrT> p_ui, compiler::CodeAssemblerLabel* label_IfOverflow) {
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<UintPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1159);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr19ATconstexpr_uintptr(kSmiMaxValue));
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).UintPtrGreaterThan(compiler::TNode<UintPtrT>{tmp0}, compiler::TNode<UintPtrT>{tmp1}));
    ca_.Branch(tmp2, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block3, &tmp3);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<UintPtrT> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1160);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).Signed(compiler::TNode<UintPtrT>{tmp4}));
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiTag(compiler::TNode<IntPtrT>{tmp5}));
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = (compiler::TNode<Smi>{tmp6});
    ca_.Goto(&block2, tmp4, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<UintPtrT> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1158);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfOverflow);
  }

    compiler::TNode<UintPtrT> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block5, &tmp10, &tmp11);
  return compiler::TNode<Smi>{tmp11};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint3117ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1190);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.Int32Constant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Int32T> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Int32T>{tmp2};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint3217ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1193);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.Int32Constant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Int32T> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Int32T>{tmp2};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint3217ATconstexpr_int32(int32_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1196);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.Int32Constant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Int32T> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Int32T>{tmp2};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1199);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.IntPtrConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<IntPtrT>{tmp2};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr17ATconstexpr_int32(int32_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1202);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.IntPtrConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<IntPtrT>{tmp2};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr18ATconstexpr_intptr(intptr_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1205);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.IntPtrConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<IntPtrT>{tmp2};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATuintptr19ATconstexpr_uintptr(uintptr_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1208);
    compiler::TNode<UintPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UintPtrConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<UintPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<UintPtrT> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<UintPtrT>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr5ATSmi17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1211);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.SmiConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Smi>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr13ATPositiveSmi17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1215);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.SmiConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Smi>{tmp2};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATString18ATconstexpr_string(const char* p_s) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1218);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.StringConstant(p_s);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<String> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<String> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<String>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi18ATconstexpr_uint32(uint32_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1221);
    compiler::TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = ca_.NumberConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Number> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Number>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int32(int32_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1224);
    compiler::TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = ca_.NumberConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Number> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Number>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi19ATconstexpr_float64(double p_f) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1227);
    compiler::TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = ca_.NumberConstant(p_f);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Number> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Number>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1230);
    compiler::TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = ca_.NumberConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Number> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Number>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi15ATconstexpr_Smi(Smi p_s) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1233);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiConstant(p_s));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Number> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Number>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr5ATSmi15ATconstexpr_Smi(Smi p_s) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1236);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiConstant(p_s));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Smi>{tmp2};
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATuint3217ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1239);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Constant(p_i));
    compiler::TNode<Uint32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp2);
  }

    compiler::TNode<Uint32T> tmp3;
    ca_.Bind(&block2, &tmp3);
  return compiler::TNode<Uint32T>{tmp3};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATuintptr17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1242);
    compiler::TNode<Uint32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(p_i));
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).ChangeUint32ToWord(compiler::TNode<Uint32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<UintPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp2);
  }

    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block2, &tmp3);
  return compiler::TNode<UintPtrT>{tmp3};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATfloat6417ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1245);
    compiler::TNode<Float64T> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Constant(p_i));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Float64T> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Float64T> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Float64T>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATfloat6419ATconstexpr_float64(double p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1248);
    compiler::TNode<Float64T> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Constant(p_i));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Float64T> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Float64T> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Float64T>{tmp2};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::FromConstexpr6ATbool16ATconstexpr_bool(bool p_b) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1251);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).BoolConstant(p_b));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<BoolT> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<BoolT>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode(LanguageMode p_m) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1255);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.SmiConstant(p_m);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = (compiler::TNode<Smi>{tmp0});
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp2);
  }

    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block2, &tmp3);
  return compiler::TNode<Smi>{tmp3};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(ElementsKind p_e) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1259);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Constant(p_e));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Int32T> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Int32T>{tmp2};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::FromConstexpr20UT5ATSmi10HeapObject18ATconstexpr_string(const char* p_s) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1262);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).StringConstant(p_s));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Object> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Object>{tmp2};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr19ATNativeContextSlot29ATconstexpr_NativeContextSlot(int32_t p_c) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1266);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrConstant(p_c));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<IntPtrT>{tmp2};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint3214ATElementsKind(compiler::TNode<Int32T> p_elementsKind) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elementsKind);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1275);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).ConvertElementsKindToInt(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Int32T> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Int32T>{tmp5};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi7ATint32(compiler::TNode<Int32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1278);
    compiler::TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ChangeInt32ToTagged(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Int32T> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Number>{tmp5};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr7ATint32(compiler::TNode<Int32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1281);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).ChangeInt32ToIntPtr(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Int32T> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<IntPtrT>{tmp5};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi7ATint32(compiler::TNode<Int32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1284);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiFromInt32(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Int32T> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi8ATuint32(compiler::TNode<Uint32T> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1287);
    compiler::TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ChangeUint32ToTagged(compiler::TNode<Uint32T>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Uint32T> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Number>{tmp5};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi8ATuint32(compiler::TNode<Uint32T> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1290);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp0}));
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiFromInt32(compiler::TNode<Int32T>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<Uint32T> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr8ATuint32(compiler::TNode<Uint32T> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1293);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).ChangeUint32ToWord(compiler::TNode<Uint32T>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Uint32T> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<UintPtrT>{tmp5};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint327ATuint8(compiler::TNode<Uint32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1296);
    compiler::TNode<Uint32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATuint327ATuint8(compiler::TNode<Uint32T>{tmp0}));
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp3;
    compiler::TNode<Int32T> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<Uint32T> tmp5;
    compiler::TNode<Int32T> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Int32T>{tmp6};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint328ATuint16(compiler::TNode<Uint32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1299);
    compiler::TNode<Uint32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATuint328ATuint16(compiler::TNode<Uint32T>{tmp0}));
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp3;
    compiler::TNode<Int32T> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<Uint32T> tmp5;
    compiler::TNode<Int32T> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Int32T>{tmp6};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint328ATuint31(compiler::TNode<Uint32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1302);
    compiler::TNode<Uint32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATuint328ATuint31(compiler::TNode<Uint32T>{tmp0}));
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp3;
    compiler::TNode<Int32T> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<Uint32T> tmp5;
    compiler::TNode<Int32T> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Int32T>{tmp6};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint328ATintptr(compiler::TNode<IntPtrT> p_i) {
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1305);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).TruncateIntPtrToInt32(compiler::TNode<IntPtrT>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<IntPtrT> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Int32T>{tmp5};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi8ATintptr(compiler::TNode<IntPtrT> p_i) {
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1308);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiTag(compiler::TNode<IntPtrT>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<IntPtrT> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::Convert8ATuint329ATuintptr(compiler::TNode<UintPtrT> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<UintPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1311);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).Signed(compiler::TNode<UintPtrT>{tmp0}));
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).TruncateIntPtrToInt32(compiler::TNode<IntPtrT>{tmp1}));
    compiler::TNode<Uint32T> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp2}));
    ca_.Goto(&block1, tmp0, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<UintPtrT> tmp4;
    compiler::TNode<Uint32T> tmp5;
    ca_.Bind(&block1, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp4, tmp5);
  }

    compiler::TNode<UintPtrT> tmp6;
    compiler::TNode<Uint32T> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
  return compiler::TNode<Uint32T>{tmp7};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr5ATSmi(compiler::TNode<Smi> p_s) {
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_s);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1314);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Smi> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<IntPtrT>{tmp5};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr13ATPositiveSmi(compiler::TNode<Smi> p_ps) {
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ps);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1317);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp0}));
    compiler::TNode<UintPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).Unsigned(compiler::TNode<IntPtrT>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp3;
    compiler::TNode<UintPtrT> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<Smi> tmp5;
    compiler::TNode<UintPtrT> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<UintPtrT>{tmp6};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr9ATuintptr(compiler::TNode<UintPtrT> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<UintPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1320);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).Signed(compiler::TNode<UintPtrT>{tmp0}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1322);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<UintPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<UintPtrT> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<IntPtrT>{tmp5};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert13ATPositiveSmi8ATintptr(compiler::TNode<IntPtrT> p_i) {
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1326);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiTag(compiler::TNode<IntPtrT>{tmp0}));
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = (compiler::TNode<Smi>{tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<IntPtrT> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<Smi>{tmp6};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint325ATSmi(compiler::TNode<Smi> p_s) {
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_s);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1329);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).SmiToInt32(compiler::TNode<Smi>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Smi> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Int32T>{tmp5};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat6412ATHeapNumber(compiler::TNode<HeapNumber> p_h) {
  compiler::CodeAssemblerParameterizedLabel<HeapNumber> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapNumber, Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapNumber, Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_h);

  if (block0.is_used()) {
    compiler::TNode<HeapNumber> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1332);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).LoadHeapNumberValue(compiler::TNode<HeapNumber>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<HeapNumber> tmp2;
    compiler::TNode<Float64T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<HeapNumber> tmp4;
    compiler::TNode<Float64T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Float64T>{tmp5};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat6422UT12ATHeapNumber5ATSmi(compiler::TNode<Number> p_n) {
  compiler::CodeAssemblerParameterizedLabel<Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_n);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1335);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).ChangeNumberToFloat64(compiler::TNode<Number>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp2;
    compiler::TNode<Float64T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Number> tmp4;
    compiler::TNode<Float64T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Float64T>{tmp5};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr22UT12ATHeapNumber5ATSmi(compiler::TNode<Number> p_n) {
  compiler::CodeAssemblerParameterizedLabel<Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_n);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1338);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).ChangeNonnegativeNumberToUintPtr(compiler::TNode<Number>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Number> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<UintPtrT>{tmp5};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat649ATfloat32(compiler::TNode<Float32T> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Float32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float32T, Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float32T, Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<Float32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1341);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).ChangeFloat32ToFloat64(compiler::TNode<Float32T>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Float32T> tmp2;
    compiler::TNode<Float64T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Float32T> tmp4;
    compiler::TNode<Float64T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Float64T>{tmp5};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi9ATfloat64(compiler::TNode<Float64T> p_d) {
  compiler::CodeAssemblerParameterizedLabel<Float64T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_d);

  if (block0.is_used()) {
    compiler::TNode<Float64T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1344);
    compiler::TNode<HeapNumber> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<HeapNumber>(CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Float64T> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Float64T> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Number>{tmp5};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat649ATuintptr(compiler::TNode<UintPtrT> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<UintPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1347);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).ChangeUintPtrToFloat64(compiler::TNode<UintPtrT>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<UintPtrT> tmp2;
    compiler::TNode<Float64T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<UintPtrT> tmp4;
    compiler::TNode<Float64T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Float64T>{tmp5};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi9ATuintptr(compiler::TNode<UintPtrT> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<UintPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1350);
    compiler::TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ChangeUintPtrToTagged(compiler::TNode<UintPtrT>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<UintPtrT> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<UintPtrT> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Number>{tmp5};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr9ATfloat64(compiler::TNode<Float64T> p_d) {
  compiler::CodeAssemblerParameterizedLabel<Float64T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_d);

  if (block0.is_used()) {
    compiler::TNode<Float64T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1353);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).ChangeFloat64ToUintPtr(compiler::TNode<Float64T>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Float64T> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Float64T> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<UintPtrT>{tmp5};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr8ATintptr(compiler::TNode<IntPtrT> p_i) {
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1356);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).Unsigned(compiler::TNode<IntPtrT>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<IntPtrT> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<UintPtrT>{tmp5};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr8ATRawPtr(compiler::TNode<RawPtrT> p_r) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_r);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1359);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).Unsigned(compiler::TNode<RawPtrT>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<RawPtrT> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<UintPtrT>{tmp5};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr8ATRawPtr(compiler::TNode<RawPtrT> p_r) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_r);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1362);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).Signed(compiler::TNode<RawPtrT>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<RawPtrT> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<IntPtrT>{tmp5};
}

compiler::TNode<BInt> BaseBuiltinsFromDSLAssembler::Convert6ATbint7ATint32(compiler::TNode<Int32T> p_v) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, BInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_v);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1365);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr7ATint32(compiler::TNode<Int32T>{tmp0}));
    compiler::TNode<BInt> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BInt>(CodeStubAssembler(state_).IntPtrToBInt(compiler::TNode<IntPtrT>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp3;
    compiler::TNode<BInt> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<Int32T> tmp5;
    compiler::TNode<BInt> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<BInt>{tmp6};
}

compiler::TNode<BInt> BaseBuiltinsFromDSLAssembler::Convert6ATbint8ATintptr(compiler::TNode<IntPtrT> p_v) {
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_v);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1369);
    compiler::TNode<BInt> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BInt>(CodeStubAssembler(state_).IntPtrToBInt(compiler::TNode<IntPtrT>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<BInt> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<IntPtrT> tmp4;
    compiler::TNode<BInt> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<BInt>{tmp5};
}

compiler::TNode<BInt> BaseBuiltinsFromDSLAssembler::Convert6ATbint5ATSmi(compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_v);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1373);
    compiler::TNode<BInt> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BInt>(CodeStubAssembler(state_).SmiToBInt(compiler::TNode<Smi>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp2;
    compiler::TNode<BInt> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Smi> tmp4;
    compiler::TNode<BInt> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<BInt>{tmp5};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::UnsafeCast20UT5ATSmi10HeapObject(compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1398);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<Object>{tmp4};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::kCOWMap() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1401);
    compiler::TNode<Object> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadRoot(RootIndex::kFixedCOWArrayMap));
    compiler::TNode<Map> tmp1;
    USE(tmp1);
    tmp1 = TORQUE_CAST(compiler::TNode<Object>{tmp0});
return compiler::TNode<Map>{tmp1};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::kEmptyFixedArray() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1403);
    compiler::TNode<Object> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadRoot(RootIndex::kEmptyFixedArray));
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = TORQUE_CAST(compiler::TNode<Object>{tmp0});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1402);
return compiler::TNode<FixedArray>{tmp1};
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayElementSmi(compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<Smi> p_i, compiler::TNode<Number> p_n) {
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a, p_i, p_n);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Number> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1455);
    compiler::TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6422UT12ATHeapNumber5ATSmi(compiler::TNode<Number>{tmp2}));
    CodeStubAssembler(state_).StoreFixedDoubleArrayElementSmi(compiler::TNode<FixedDoubleArray>{tmp0}, compiler::TNode<Smi>{tmp1}, compiler::TNode<Float64T>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1453);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp4;
    compiler::TNode<Smi> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

    compiler::TNode<FixedDoubleArray> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9);
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayDirect(compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<Smi> p_i, compiler::TNode<Number> p_v) {
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a, p_i, p_v);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Number> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1459);
    compiler::TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6422UT12ATHeapNumber5ATSmi(compiler::TNode<Number>{tmp2}));
    CodeStubAssembler(state_).StoreFixedDoubleArrayElementSmi(compiler::TNode<FixedDoubleArray>{tmp0}, compiler::TNode<Smi>{tmp1}, compiler::TNode<Float64T>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1457);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp4;
    compiler::TNode<Smi> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

    compiler::TNode<FixedDoubleArray> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9);
}

void BaseBuiltinsFromDSLAssembler::StoreFixedArrayDirect(compiler::TNode<FixedArray> p_a, compiler::TNode<Smi> p_i, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a, p_i, p_v);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1462);
    CodeStubAssembler(state_).StoreFixedArrayElementSmi(compiler::TNode<FixedArray>{tmp0}, compiler::TNode<Smi>{tmp1}, compiler::TNode<Object>{tmp2});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1461);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<FixedArray> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FastHoleyElementsKind(compiler::TNode<Int32T> p_kind) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_kind);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1483);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_SMI_ELEMENTS));
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp0}, compiler::TNode<Int32T>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1484);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_SMI_ELEMENTS));
    ca_.Goto(&block1, tmp3, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block3, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1485);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_DOUBLE_ELEMENTS));
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp5}, compiler::TNode<Int32T>{tmp6}));
    ca_.Branch(tmp7, &block5, &block6, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Int32T> tmp8;
    ca_.Bind(&block5, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1486);
    compiler::TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_DOUBLE_ELEMENTS));
    ca_.Goto(&block1, tmp8, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<Int32T> tmp10;
    ca_.Bind(&block6, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1483);
    ca_.Goto(&block4, tmp10);
  }

  if (block4.is_used()) {
    compiler::TNode<Int32T> tmp11;
    ca_.Bind(&block4, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1489);
    compiler::TNode<Int32T> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_ELEMENTS));
    ca_.Goto(&block1, tmp11, tmp12);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp13;
    compiler::TNode<Int32T> tmp14;
    ca_.Bind(&block1, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1482);
    ca_.Goto(&block7, tmp13, tmp14);
  }

    compiler::TNode<Int32T> tmp15;
    compiler::TNode<Int32T> tmp16;
    ca_.Bind(&block7, &tmp15, &tmp16);
  return compiler::TNode<Int32T>{tmp16};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::AllowDoubleElements(compiler::TNode<Int32T> p_kind) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_kind);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1493);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_SMI_ELEMENTS));
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp0}, compiler::TNode<Int32T>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1494);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_DOUBLE_ELEMENTS));
    ca_.Goto(&block1, tmp3, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block3, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1495);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_SMI_ELEMENTS));
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp5}, compiler::TNode<Int32T>{tmp6}));
    ca_.Branch(tmp7, &block5, &block6, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Int32T> tmp8;
    ca_.Bind(&block5, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1496);
    compiler::TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_DOUBLE_ELEMENTS));
    ca_.Goto(&block1, tmp8, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<Int32T> tmp10;
    ca_.Bind(&block6, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1493);
    ca_.Goto(&block4, tmp10);
  }

  if (block4.is_used()) {
    compiler::TNode<Int32T> tmp11;
    ca_.Bind(&block4, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1498);
    ca_.Goto(&block1, tmp11, tmp11);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp12;
    compiler::TNode<Int32T> tmp13;
    ca_.Bind(&block1, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1492);
    ca_.Goto(&block7, tmp12, tmp13);
  }

    compiler::TNode<Int32T> tmp14;
    compiler::TNode<Int32T> tmp15;
    ca_.Bind(&block7, &tmp14, &tmp15);
  return compiler::TNode<Int32T>{tmp15};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::AllowNonNumberElements(compiler::TNode<Int32T> p_kind) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_kind);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1502);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_SMI_ELEMENTS));
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp0}, compiler::TNode<Int32T>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1503);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_ELEMENTS));
    ca_.Goto(&block1, tmp3, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block3, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1504);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_SMI_ELEMENTS));
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp5}, compiler::TNode<Int32T>{tmp6}));
    ca_.Branch(tmp7, &block5, &block6, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Int32T> tmp8;
    ca_.Bind(&block5, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1505);
    compiler::TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_ELEMENTS));
    ca_.Goto(&block1, tmp8, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<Int32T> tmp10;
    ca_.Bind(&block6, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1506);
    compiler::TNode<Int32T> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_DOUBLE_ELEMENTS));
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp10}, compiler::TNode<Int32T>{tmp11}));
    ca_.Branch(tmp12, &block8, &block9, tmp10);
  }

  if (block8.is_used()) {
    compiler::TNode<Int32T> tmp13;
    ca_.Bind(&block8, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1507);
    compiler::TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_ELEMENTS));
    ca_.Goto(&block1, tmp13, tmp14);
  }

  if (block9.is_used()) {
    compiler::TNode<Int32T> tmp15;
    ca_.Bind(&block9, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1508);
    compiler::TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_DOUBLE_ELEMENTS));
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp15}, compiler::TNode<Int32T>{tmp16}));
    ca_.Branch(tmp17, &block11, &block12, tmp15);
  }

  if (block11.is_used()) {
    compiler::TNode<Int32T> tmp18;
    ca_.Bind(&block11, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1509);
    compiler::TNode<Int32T> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_ELEMENTS));
    ca_.Goto(&block1, tmp18, tmp19);
  }

  if (block12.is_used()) {
    compiler::TNode<Int32T> tmp20;
    ca_.Bind(&block12, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1506);
    ca_.Goto(&block10, tmp20);
  }

  if (block10.is_used()) {
    compiler::TNode<Int32T> tmp21;
    ca_.Bind(&block10, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1504);
    ca_.Goto(&block7, tmp21);
  }

  if (block7.is_used()) {
    compiler::TNode<Int32T> tmp22;
    ca_.Bind(&block7, &tmp22);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1502);
    ca_.Goto(&block4, tmp22);
  }

  if (block4.is_used()) {
    compiler::TNode<Int32T> tmp23;
    ca_.Bind(&block4, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1511);
    ca_.Goto(&block1, tmp23, tmp23);
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp24;
    compiler::TNode<Int32T> tmp25;
    ca_.Bind(&block1, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1501);
    ca_.Goto(&block13, tmp24, tmp25);
  }

    compiler::TNode<Int32T> tmp26;
    compiler::TNode<Int32T> tmp27;
    ca_.Bind(&block13, &tmp26, &tmp27);
  return compiler::TNode<Int32T>{tmp27};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::GetObjectFunction(compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1543);
    compiler::TNode<Context> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp0}));
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr19ATNativeContextSlot29ATconstexpr_NativeContextSlot(Context::OBJECT_FUNCTION_INDEX));
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp1}, compiler::TNode<IntPtrT>{tmp2}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1542);
    compiler::TNode<JSFunction> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast10JSFunction(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}));
    ca_.Goto(&block1, tmp0, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSFunction> tmp6;
    ca_.Bind(&block1, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1541);
    ca_.Goto(&block2, tmp5, tmp6);
  }

    compiler::TNode<Context> tmp7;
    compiler::TNode<JSFunction> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
  return compiler::TNode<JSFunction>{tmp8};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::GetArrayBufferFunction(compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1547);
    compiler::TNode<Context> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp0}));
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr19ATNativeContextSlot29ATconstexpr_NativeContextSlot(Context::ARRAY_BUFFER_FUN_INDEX));
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp1}, compiler::TNode<IntPtrT>{tmp2}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1546);
    compiler::TNode<JSReceiver> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<JSReceiver>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast13ATConstructor(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}));
    ca_.Goto(&block1, tmp0, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    ca_.Bind(&block1, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1545);
    ca_.Goto(&block2, tmp5, tmp6);
  }

    compiler::TNode<Context> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
  return compiler::TNode<JSReceiver>{tmp8};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::GetArrayBufferNoInitFunction(compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1551);
    compiler::TNode<Context> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp0}));
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr19ATNativeContextSlot29ATconstexpr_NativeContextSlot(Context::ARRAY_BUFFER_NOINIT_FUN_INDEX));
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp1}, compiler::TNode<IntPtrT>{tmp2}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1550);
    compiler::TNode<JSFunction> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast10JSFunction(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}));
    ca_.Goto(&block1, tmp0, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSFunction> tmp6;
    ca_.Bind(&block1, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1549);
    ca_.Goto(&block2, tmp5, tmp6);
  }

    compiler::TNode<Context> tmp7;
    compiler::TNode<JSFunction> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
  return compiler::TNode<JSFunction>{tmp8};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::GetFastPackedSmiElementsJSArrayMap(compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1556);
    compiler::TNode<Context> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp0}));
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr19ATNativeContextSlot29ATconstexpr_NativeContextSlot(Context::JS_ARRAY_PACKED_SMI_ELEMENTS_MAP_INDEX));
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp1}, compiler::TNode<IntPtrT>{tmp2}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1555);
    compiler::TNode<Map> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast5ATMap(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}));
    ca_.Goto(&block1, tmp0, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Map> tmp6;
    ca_.Bind(&block1, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1554);
    ca_.Goto(&block2, tmp5, tmp6);
  }

    compiler::TNode<Context> tmp7;
    compiler::TNode<Map> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
  return compiler::TNode<Map>{tmp8};
}

void BaseBuiltinsFromDSLAssembler::TorqueMoveElements(compiler::TNode<FixedArray> p_elements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count) {
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1587);
    CodeStubAssembler(state_).MoveElements(HOLEY_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp0}, compiler::TNode<IntPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1584);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2, tmp4, tmp5, tmp6, tmp7);
  }

    compiler::TNode<FixedArray> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
}

void BaseBuiltinsFromDSLAssembler::TorqueMoveElements(compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count) {
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1592);
    CodeStubAssembler(state_).MoveElements(HOLEY_DOUBLE_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp0}, compiler::TNode<IntPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1589);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp4;
    compiler::TNode<IntPtrT> tmp5;
    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2, tmp4, tmp5, tmp6, tmp7);
  }

    compiler::TNode<FixedDoubleArray> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
}

void BaseBuiltinsFromDSLAssembler::TorqueCopyElements(compiler::TNode<FixedArray> p_dstElements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<FixedArray> p_srcElements, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count) {
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<FixedArray> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1602);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1601);
    CodeStubAssembler(state_).CopyElements(HOLEY_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp0}, compiler::TNode<IntPtrT>{tmp1}, compiler::TNode<FixedArrayBase>{tmp2}, compiler::TNode<IntPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1598);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp5;
    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<FixedArray> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    ca_.Bind(&block1, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

    compiler::TNode<FixedArray> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<FixedArray> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
}

void BaseBuiltinsFromDSLAssembler::TorqueCopyElements(compiler::TNode<FixedDoubleArray> p_dstElements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<FixedDoubleArray> p_srcElements, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count) {
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<FixedDoubleArray> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1608);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1609);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1607);
    CodeStubAssembler(state_).CopyElements(HOLEY_DOUBLE_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp0}, compiler::TNode<IntPtrT>{tmp1}, compiler::TNode<FixedArrayBase>{tmp2}, compiler::TNode<IntPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1604);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp5;
    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<FixedDoubleArray> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    ca_.Bind(&block1, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

    compiler::TNode<FixedDoubleArray> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<FixedDoubleArray> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole10FixedArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArray, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArray, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_a, p_index);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1620);
    compiler::TNode<FixedArrayBase> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp3}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSArray> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<FixedArrayBase> tmp8;
    ca_.Bind(&block6, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block4, tmp5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<FixedArrayBase> tmp12;
    compiler::TNode<FixedArray> tmp13;
    ca_.Bind(&block5, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1619);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1621);
    compiler::TNode<Object> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp13}, compiler::TNode<Smi>{tmp11}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1622);
    compiler::TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = BaseBuiltinsFromDSLAssembler(state_).Hole();
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp14}, compiler::TNode<HeapObject>{tmp15}));
    ca_.Branch(tmp16, &block7, &block8, tmp9, tmp10, tmp11, tmp13, tmp14);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<FixedArray> tmp20;
    compiler::TNode<Object> tmp21;
    ca_.Bind(&block7, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1623);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSArray> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<FixedArray> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1625);
    ca_.Goto(&block2, tmp22, tmp23, tmp24, tmp26);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<JSArray> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block4, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1628);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<JSArray> tmp31;
    compiler::TNode<Smi> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block2, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1612);
    ca_.Goto(&block9, tmp30, tmp31, tmp32, tmp33);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfHole);
  }

    compiler::TNode<Context> tmp34;
    compiler::TNode<JSArray> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block9, &tmp34, &tmp35, &tmp36, &tmp37);
  return compiler::TNode<Object>{tmp37};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole16FixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArrayBase, FixedDoubleArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedDoubleArray, FixedDoubleArray, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedDoubleArray, FixedDoubleArray, Smi, Float64T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_a, p_index);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1637);
    compiler::TNode<FixedArrayBase> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedDoubleArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Cast16FixedDoubleArray(compiler::TNode<HeapObject>{tmp3}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSArray> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<FixedArrayBase> tmp8;
    ca_.Bind(&block6, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block4, tmp5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<FixedArrayBase> tmp12;
    compiler::TNode<FixedDoubleArray> tmp13;
    ca_.Bind(&block5, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1636);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1638);
    compiler::TNode<Float64T> tmp14;
    USE(tmp14);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp14 = CodeStubAssembler(state_).LoadDoubleWithHoleCheck(compiler::TNode<FixedDoubleArray>{tmp13}, compiler::TNode<Smi>{tmp11}, &label0);
    ca_.Goto(&block7, tmp9, tmp10, tmp11, tmp13, tmp13, tmp11, tmp14);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp9, tmp10, tmp11, tmp13, tmp13, tmp11);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSArray> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<FixedDoubleArray> tmp18;
    compiler::TNode<FixedDoubleArray> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block8, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSArray> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<FixedDoubleArray> tmp24;
    compiler::TNode<FixedDoubleArray> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Float64T> tmp27;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1639);
    compiler::TNode<HeapNumber> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<HeapNumber>(CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp27}));
    ca_.Goto(&block2, tmp21, tmp22, tmp23, tmp28);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSArray> tmp30;
    compiler::TNode<Smi> tmp31;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1642);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<JSArray> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<Object> tmp35;
    ca_.Bind(&block2, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1612);
    ca_.Goto(&block9, tmp32, tmp33, tmp34, tmp35);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfHole);
  }

    compiler::TNode<Context> tmp36;
    compiler::TNode<JSArray> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block9, &tmp36, &tmp37, &tmp38, &tmp39);
  return compiler::TNode<Object>{tmp39};
}

BaseBuiltinsFromDSLAssembler::FastJSArrayWitness BaseBuiltinsFromDSLAssembler::NewFastJSArrayWitness(compiler::TNode<JSArray> p_array) {
  compiler::CodeAssemblerParameterizedLabel<JSArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_array);

  if (block0.is_used()) {
    compiler::TNode<JSArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1714);
    compiler::TNode<Map> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).LoadHeapObjectMap(compiler::TNode<HeapObject>{tmp0}));
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadMapElementsKind(compiler::TNode<Map>{tmp1}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1716);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1717);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1718);
    compiler::TNode<Map> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).LoadHeapObjectMap(compiler::TNode<HeapObject>{tmp0}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1719);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsElementsKindLessThanOrEqual(compiler::TNode<Int32T>{tmp2}, HOLEY_ELEMENTS));
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp4}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1720);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsElementsKindLessThanOrEqual(compiler::TNode<Int32T>{tmp2}, HOLEY_SMI_ELEMENTS));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1715);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block1, tmp0, tmp0, tmp0, tmp3, tmp5, tmp6, tmp7);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArray> tmp8;
    compiler::TNode<JSArray> tmp9;
    compiler::TNode<JSArray> tmp10;
    compiler::TNode<Map> tmp11;
    compiler::TNode<BoolT> tmp12;
    compiler::TNode<BoolT> tmp13;
    compiler::TNode<BoolT> tmp14;
    ca_.Bind(&block1, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1713);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

    compiler::TNode<JSArray> tmp15;
    compiler::TNode<JSArray> tmp16;
    compiler::TNode<JSArray> tmp17;
    compiler::TNode<Map> tmp18;
    compiler::TNode<BoolT> tmp19;
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<BoolT> tmp21;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
  return BaseBuiltinsFromDSLAssembler::FastJSArrayWitness{compiler::TNode<JSArray>{tmp16}, compiler::TNode<JSArray>{tmp17}, compiler::TNode<Map>{tmp18}, compiler::TNode<BoolT>{tmp19}, compiler::TNode<BoolT>{tmp20}, compiler::TNode<BoolT>{tmp21}};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::NumberIsNaN(compiler::TNode<Number> p_number) {
  compiler::CodeAssemblerParameterizedLabel<Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_number);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1754);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1755);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp0, tmp0);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    compiler::TNode<Number> tmp4;
    ca_.Bind(&block5, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Number> tmp5;
    compiler::TNode<Number> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1756);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block1, tmp5, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Number> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1758);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1759);
    compiler::TNode<Float64T> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6412ATHeapNumber(compiler::TNode<HeapNumber>{ca_.UncheckedCast<HeapNumber>(tmp11)}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1760);
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Float64NotEqual(compiler::TNode<Float64T>{tmp12}, compiler::TNode<Float64T>{tmp12}));
    ca_.Goto(&block1, tmp10, tmp13);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp14;
    compiler::TNode<BoolT> tmp15;
    ca_.Bind(&block1, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1753);
    ca_.Goto(&block6, tmp14, tmp15);
  }

    compiler::TNode<Number> tmp16;
    compiler::TNode<BoolT> tmp17;
    ca_.Bind(&block6, &tmp16, &tmp17);
  return compiler::TNode<BoolT>{tmp17};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ToBoolean(compiler::TNode<Object> p_obj) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_obj);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1770);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfToBooleanIsTrue(compiler::TNode<Object>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block4, &tmp1, &tmp2);
    ca_.Goto(&block2, tmp1);
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block5, &tmp3, &tmp4);
    ca_.Goto(&block3, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1771);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block1, tmp5, tmp6);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block3, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1773);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block1, tmp7, tmp8);
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp9;
    compiler::TNode<BoolT> tmp10;
    ca_.Bind(&block1, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1769);
    ca_.Goto(&block7, tmp9, tmp10);
  }

    compiler::TNode<Object> tmp11;
    compiler::TNode<BoolT> tmp12;
    ca_.Bind(&block7, &tmp11, &tmp12);
  return compiler::TNode<BoolT>{tmp12};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::ToIndex(compiler::TNode<Object> p_input, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_RangeError) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_input, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1779);
    compiler::TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp0}, compiler::TNode<HeapObject>{tmp2}));
    ca_.Branch(tmp3, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1780);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp7;
    compiler::TNode<Context> tmp8;
    ca_.Bind(&block4, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1783);
    compiler::TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp8}, compiler::TNode<Object>{tmp7}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1784);
    compiler::TNode<Number> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp9}, compiler::TNode<Number>{tmp10}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp9);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block9, tmp7, tmp8, tmp9, tmp9);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Object> tmp11;
    compiler::TNode<Context> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Number> tmp14;
    ca_.Bind(&block8, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block5, tmp11, tmp12, tmp13);
  }

  if (block9.is_used()) {
    compiler::TNode<Object> tmp15;
    compiler::TNode<Context> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<Number> tmp18;
    ca_.Bind(&block9, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block7, tmp15, tmp16, tmp17);
  }

  if (block7.is_used()) {
    compiler::TNode<Object> tmp19;
    compiler::TNode<Context> tmp20;
    compiler::TNode<Number> tmp21;
    ca_.Bind(&block7, &tmp19, &tmp20, &tmp21);
    compiler::TNode<Number> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi19ATconstexpr_float64(kMaxSafeInteger));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberGreaterThan(compiler::TNode<Number>{tmp21}, compiler::TNode<Number>{tmp22}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp19, tmp20, tmp21, tmp21);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block11, tmp19, tmp20, tmp21, tmp21);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Object> tmp23;
    compiler::TNode<Context> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block10, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block5, tmp23, tmp24, tmp25);
  }

  if (block11.is_used()) {
    compiler::TNode<Object> tmp27;
    compiler::TNode<Context> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<Number> tmp30;
    ca_.Bind(&block11, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block6, tmp27, tmp28, tmp29);
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp31;
    compiler::TNode<Context> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block5, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1785);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<Object> tmp34;
    compiler::TNode<Context> tmp35;
    compiler::TNode<Number> tmp36;
    ca_.Bind(&block6, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1788);
    ca_.Goto(&block2, tmp34, tmp35, tmp36);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp37;
    compiler::TNode<Context> tmp38;
    compiler::TNode<Number> tmp39;
    ca_.Bind(&block2, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1777);
    ca_.Goto(&block12, tmp37, tmp38, tmp39);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_RangeError);
  }

    compiler::TNode<Object> tmp40;
    compiler::TNode<Context> tmp41;
    compiler::TNode<Number> tmp42;
    ca_.Bind(&block12, &tmp40, &tmp41, &tmp42);
  return compiler::TNode<Number>{tmp42};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::GetLengthProperty(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArgumentsObjectWithLength> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1794);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1795);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast7JSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block5, tmp3, tmp4, tmp5);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSArray> tmp11;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1796);
    compiler::TNode<Number> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).LoadJSArrayLength(compiler::TNode<JSArray>{tmp11}));
    ca_.Goto(&block1, tmp7, tmp8, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1798);
    compiler::TNode<JSArgumentsObjectWithLength> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = BaseBuiltinsFromDSLAssembler(state_).Cast27JSArgumentsObjectWithLength(compiler::TNode<Context>{tmp13}, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp15)}, &label0);
    ca_.Goto(&block10, tmp13, tmp14, tmp15, ca_.UncheckedCast<Object>(tmp15), tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp13, tmp14, tmp15, ca_.UncheckedCast<Object>(tmp15));
    }
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    ca_.Bind(&block11, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block9, tmp17, tmp18, tmp19);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<JSArgumentsObjectWithLength> tmp25;
    ca_.Bind(&block10, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1799);
    compiler::TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).LoadJSArgumentsObjectWithLengthLength(compiler::TNode<JSArgumentsObjectWithLength>{tmp25}));
    ca_.Goto(&block3, tmp21, tmp22, tmp26);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Object> tmp29;
    ca_.Bind(&block9, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1801);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1802);
    compiler::TNode<String> tmp30;
    USE(tmp30);
    tmp30 = BaseBuiltinsFromDSLAssembler(state_).kLengthString();
    compiler::TNode<Object> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp27}, compiler::TNode<Object>{tmp28}, compiler::TNode<Object>{tmp30}));
    ca_.Goto(&block3, tmp27, tmp28, tmp31);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    ca_.Bind(&block3, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1807);
    compiler::TNode<Number> tmp35;
    USE(tmp35);
    tmp35 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToLength_Inline(compiler::TNode<Context>{tmp32}, compiler::TNode<Object>{tmp34}));
    ca_.Goto(&block1, tmp32, tmp33, tmp35);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Number> tmp38;
    ca_.Bind(&block1, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1791);
    ca_.Goto(&block12, tmp36, tmp37, tmp38);
  }

    compiler::TNode<Context> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Number> tmp41;
    ca_.Bind(&block12, &tmp39, &tmp40, &tmp41);
  return compiler::TNode<Number>{tmp41};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::IsFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1836);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).GotoIfForceSlowPath(&label0);
    ca_.Goto(&block4, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block5, &tmp2, &tmp3);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block4, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1838);
    ca_.Goto(&block2, tmp4, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp6;
    compiler::TNode<Context> tmp7;
    ca_.Bind(&block3, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1839);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block1, tmp6, tmp7, tmp8);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp9;
    compiler::TNode<Context> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1842);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is13ATFastJSArray20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp10}, compiler::TNode<Object>{tmp9}));
    ca_.Goto(&block1, tmp9, tmp10, tmp11);
  }

  if (block1.is_used()) {
    compiler::TNode<Object> tmp12;
    compiler::TNode<Context> tmp13;
    compiler::TNode<BoolT> tmp14;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1832);
    ca_.Goto(&block6, tmp12, tmp13, tmp14);
  }

    compiler::TNode<Object> tmp15;
    compiler::TNode<Context> tmp16;
    compiler::TNode<BoolT> tmp17;
    ca_.Bind(&block6, &tmp15, &tmp16, &tmp17);
  return compiler::TNode<BoolT>{tmp17};
}

void BaseBuiltinsFromDSLAssembler::BranchIfFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1849);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).GotoIfForceSlowPath(&label0);
    ca_.Goto(&block3, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1850);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf13ATFastJSArray20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp5}, compiler::TNode<Object>{tmp4}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp4, tmp5, tmp4);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp4, tmp5, tmp4);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp6;
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<Object> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block6, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1845);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIfNotFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1855);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIfNot13ATFastJSArray20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp1}, compiler::TNode<Object>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block3, tmp0, tmp1, tmp0);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4, tmp0, tmp1, tmp0);
    }
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp5;
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1853);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIfFastJSArrayForCopy(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1862);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).GotoIfForceSlowPath(&label0);
    ca_.Goto(&block3, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1863);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf20ATFastJSArrayForCopy20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp5}, compiler::TNode<Object>{tmp4}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp4, tmp5, tmp4);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp4, tmp5, tmp4);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp6;
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<Object> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block6, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1858);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::IsFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1867);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is34ATFastJSArrayWithNoCustomIteration20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<BoolT> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1866);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<BoolT> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<BoolT>{tmp8};
}

TF_BUILTIN(FastCreateDataProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSReceiver> parameter1 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kKey));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSReceiver, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Object, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Smi, JSArray, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Smi, JSArray, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Smi, FixedArrayBase> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Smi, FixedArrayBase, FixedArray> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Smi, FixedArray> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Object> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Object, Number> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Number> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Number, JSArray, Object> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Number, JSArray, Object> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Number> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Number, FixedArrayBase> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Number, FixedArrayBase, FixedDoubleArray> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Number> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Number, FixedDoubleArray> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, Number> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, JSArray, Object> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, JSArray, Object> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, FixedArrayBase> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, FixedArrayBase, FixedArray> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T, FixedArray> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSArray, Smi, BoolT, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1876);
    compiler::TNode<JSArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp1, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<JSArray> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1877);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp12}, &label0);
    ca_.Goto(&block7, tmp10, tmp11, tmp12, tmp13, tmp15, tmp12, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp10, tmp11, tmp12, tmp13, tmp15, tmp12);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSReceiver> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSArray> tmp21;
    compiler::TNode<Object> tmp22;
    ca_.Bind(&block8, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block6, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<JSArray> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block7, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.Goto(&block5, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSArray> tmp34;
    ca_.Bind(&block6, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block2, tmp30, tmp31, tmp32, tmp33);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<JSArray> tmp39;
    compiler::TNode<Smi> tmp40;
    ca_.Bind(&block5, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1878);
    compiler::TNode<Smi> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp40}, compiler::TNode<Smi>{tmp41}));
    ca_.Branch(tmp42, &block9, &block11, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<JSArray> tmp47;
    compiler::TNode<Smi> tmp48;
    ca_.Bind(&block11, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    compiler::TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp47}));
    compiler::TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp48}, compiler::TNode<Smi>{tmp49}));
    ca_.Branch(tmp50, &block9, &block10, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<JSArray> tmp55;
    compiler::TNode<Smi> tmp56;
    ca_.Bind(&block9, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block2, tmp51, tmp52, tmp53, tmp54);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSArray> tmp61;
    compiler::TNode<Smi> tmp62;
    ca_.Bind(&block10, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1879);
    ArrayBuiltinsFromDSLAssembler(state_).EnsureWriteableFastElements(compiler::TNode<Context>{tmp57}, compiler::TNode<JSArray>{tmp61});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1880);
    compiler::TNode<Smi> tmp63;
    USE(tmp63);
    tmp63 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp61}));
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp62}, compiler::TNode<Smi>{tmp63}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1881);
    compiler::TNode<Map> tmp65;
    USE(tmp65);
    tmp65 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).LoadHeapObjectMap(compiler::TNode<HeapObject>{tmp61}));
    compiler::TNode<Int32T> tmp66;
    USE(tmp66);
    tmp66 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadMapElementsKind(compiler::TNode<Map>{tmp65}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1884);
    compiler::TNode<BoolT> tmp67;
    USE(tmp67);
    tmp67 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsFastSmiElementsKind(compiler::TNode<Int32T>{tmp66}));
    ca_.Branch(tmp67, &block12, &block13, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp64, tmp66);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<JSReceiver> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<JSArray> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<BoolT> tmp74;
    compiler::TNode<Int32T> tmp75;
    ca_.Bind(&block12, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1885);
    compiler::TNode<Smi> tmp76;
    USE(tmp76);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp76 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp71}, &label0);
    ca_.Goto(&block15, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp71, tmp76);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp71);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<JSArray> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<BoolT> tmp83;
    compiler::TNode<Int32T> tmp84;
    compiler::TNode<Object> tmp85;
    ca_.Bind(&block16, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.Goto(&block2, tmp77, tmp78, tmp79, tmp80);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<JSReceiver> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<JSArray> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<BoolT> tmp92;
    compiler::TNode<Int32T> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Smi> tmp95;
    ca_.Bind(&block15, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1886);
    ca_.Branch(tmp92, &block17, &block18, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp95);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<JSReceiver> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<JSArray> tmp100;
    compiler::TNode<Smi> tmp101;
    compiler::TNode<BoolT> tmp102;
    compiler::TNode<Int32T> tmp103;
    compiler::TNode<Smi> tmp104;
    ca_.Bind(&block17, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1887);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).BuildAppendJSArray(HOLEY_SMI_ELEMENTS, compiler::TNode<JSArray>{tmp100}, compiler::TNode<Object>{tmp99}, &label0);
    ca_.Goto(&block20, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100, tmp99);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100, tmp99);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<JSArray> tmp109;
    compiler::TNode<Smi> tmp110;
    compiler::TNode<BoolT> tmp111;
    compiler::TNode<Int32T> tmp112;
    compiler::TNode<Smi> tmp113;
    compiler::TNode<JSArray> tmp114;
    compiler::TNode<Object> tmp115;
    ca_.Bind(&block21, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block2, tmp105, tmp106, tmp107, tmp108);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<JSReceiver> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<JSArray> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<BoolT> tmp122;
    compiler::TNode<Int32T> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<JSArray> tmp125;
    compiler::TNode<Object> tmp126;
    ca_.Bind(&block20, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1886);
    ca_.Goto(&block19, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp127;
    compiler::TNode<JSReceiver> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<JSArray> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<BoolT> tmp133;
    compiler::TNode<Int32T> tmp134;
    compiler::TNode<Smi> tmp135;
    ca_.Bind(&block18, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1889);
    compiler::TNode<FixedArrayBase> tmp136;
    USE(tmp136);
    tmp136 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp131}));
    compiler::TNode<FixedArray> tmp137;
    USE(tmp137);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp137 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp136}, &label0);
    ca_.Goto(&block24, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block25, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136);
    }
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<JSArray> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<BoolT> tmp144;
    compiler::TNode<Int32T> tmp145;
    compiler::TNode<Smi> tmp146;
    compiler::TNode<FixedArrayBase> tmp147;
    ca_.Bind(&block25, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    ca_.Goto(&block23, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp148;
    compiler::TNode<JSReceiver> tmp149;
    compiler::TNode<Object> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<JSArray> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<BoolT> tmp154;
    compiler::TNode<Int32T> tmp155;
    compiler::TNode<Smi> tmp156;
    compiler::TNode<FixedArrayBase> tmp157;
    compiler::TNode<FixedArray> tmp158;
    ca_.Bind(&block24, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.Goto(&block22, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp158);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp159;
    compiler::TNode<JSReceiver> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<JSArray> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<BoolT> tmp165;
    compiler::TNode<Int32T> tmp166;
    compiler::TNode<Smi> tmp167;
    ca_.Bind(&block23, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp168;
    compiler::TNode<JSReceiver> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<JSArray> tmp172;
    compiler::TNode<Smi> tmp173;
    compiler::TNode<BoolT> tmp174;
    compiler::TNode<Int32T> tmp175;
    compiler::TNode<Smi> tmp176;
    compiler::TNode<FixedArray> tmp177;
    ca_.Bind(&block22, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1890);
    BaseBuiltinsFromDSLAssembler(state_).StoreFixedArrayDirect(compiler::TNode<FixedArray>{tmp177}, compiler::TNode<Smi>{tmp173}, compiler::TNode<Object>{tmp176});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1888);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1886);
    ca_.Goto(&block19, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp178;
    compiler::TNode<JSReceiver> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<Object> tmp181;
    compiler::TNode<JSArray> tmp182;
    compiler::TNode<Smi> tmp183;
    compiler::TNode<BoolT> tmp184;
    compiler::TNode<Int32T> tmp185;
    compiler::TNode<Smi> tmp186;
    ca_.Bind(&block19, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1884);
    ca_.Goto(&block14, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp187;
    compiler::TNode<JSReceiver> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<JSArray> tmp191;
    compiler::TNode<Smi> tmp192;
    compiler::TNode<BoolT> tmp193;
    compiler::TNode<Int32T> tmp194;
    ca_.Bind(&block13, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1892);
    compiler::TNode<BoolT> tmp195;
    USE(tmp195);
    tmp195 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDoubleElementsKind(compiler::TNode<Int32T>{tmp194}));
    ca_.Branch(tmp195, &block26, &block27, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<JSArray> tmp200;
    compiler::TNode<Smi> tmp201;
    compiler::TNode<BoolT> tmp202;
    compiler::TNode<Int32T> tmp203;
    ca_.Bind(&block26, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1893);
    compiler::TNode<Number> tmp204;
    USE(tmp204);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp204 = BaseBuiltinsFromDSLAssembler(state_).Cast22UT12ATHeapNumber5ATSmi(compiler::TNode<Object>{tmp199}, &label0);
    ca_.Goto(&block29, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp199, tmp204);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block30, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp199);
    }
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp205;
    compiler::TNode<JSReceiver> tmp206;
    compiler::TNode<Object> tmp207;
    compiler::TNode<Object> tmp208;
    compiler::TNode<JSArray> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<BoolT> tmp211;
    compiler::TNode<Int32T> tmp212;
    compiler::TNode<Object> tmp213;
    ca_.Bind(&block30, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213);
    ca_.Goto(&block2, tmp205, tmp206, tmp207, tmp208);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp214;
    compiler::TNode<JSReceiver> tmp215;
    compiler::TNode<Object> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<JSArray> tmp218;
    compiler::TNode<Smi> tmp219;
    compiler::TNode<BoolT> tmp220;
    compiler::TNode<Int32T> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<Number> tmp223;
    ca_.Bind(&block29, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1894);
    ca_.Branch(tmp220, &block31, &block32, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp223);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp224;
    compiler::TNode<JSReceiver> tmp225;
    compiler::TNode<Object> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<JSArray> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<BoolT> tmp230;
    compiler::TNode<Int32T> tmp231;
    compiler::TNode<Number> tmp232;
    ca_.Bind(&block31, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1895);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).BuildAppendJSArray(HOLEY_DOUBLE_ELEMENTS, compiler::TNode<JSArray>{tmp228}, compiler::TNode<Object>{tmp227}, &label0);
    ca_.Goto(&block34, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp228, tmp227);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block35, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp228, tmp227);
    }
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp233;
    compiler::TNode<JSReceiver> tmp234;
    compiler::TNode<Object> tmp235;
    compiler::TNode<Object> tmp236;
    compiler::TNode<JSArray> tmp237;
    compiler::TNode<Smi> tmp238;
    compiler::TNode<BoolT> tmp239;
    compiler::TNode<Int32T> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<JSArray> tmp242;
    compiler::TNode<Object> tmp243;
    ca_.Bind(&block35, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    ca_.Goto(&block2, tmp233, tmp234, tmp235, tmp236);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp244;
    compiler::TNode<JSReceiver> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<Object> tmp247;
    compiler::TNode<JSArray> tmp248;
    compiler::TNode<Smi> tmp249;
    compiler::TNode<BoolT> tmp250;
    compiler::TNode<Int32T> tmp251;
    compiler::TNode<Number> tmp252;
    compiler::TNode<JSArray> tmp253;
    compiler::TNode<Object> tmp254;
    ca_.Bind(&block34, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1894);
    ca_.Goto(&block33, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp255;
    compiler::TNode<JSReceiver> tmp256;
    compiler::TNode<Object> tmp257;
    compiler::TNode<Object> tmp258;
    compiler::TNode<JSArray> tmp259;
    compiler::TNode<Smi> tmp260;
    compiler::TNode<BoolT> tmp261;
    compiler::TNode<Int32T> tmp262;
    compiler::TNode<Number> tmp263;
    ca_.Bind(&block32, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1898);
    compiler::TNode<FixedArrayBase> tmp264;
    USE(tmp264);
    tmp264 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp259}));
    compiler::TNode<FixedDoubleArray> tmp265;
    USE(tmp265);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp265 = BaseBuiltinsFromDSLAssembler(state_).Cast16FixedDoubleArray(compiler::TNode<HeapObject>{tmp264}, &label0);
    ca_.Goto(&block38, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block39, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264);
    }
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp266;
    compiler::TNode<JSReceiver> tmp267;
    compiler::TNode<Object> tmp268;
    compiler::TNode<Object> tmp269;
    compiler::TNode<JSArray> tmp270;
    compiler::TNode<Smi> tmp271;
    compiler::TNode<BoolT> tmp272;
    compiler::TNode<Int32T> tmp273;
    compiler::TNode<Number> tmp274;
    compiler::TNode<FixedArrayBase> tmp275;
    ca_.Bind(&block39, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275);
    ca_.Goto(&block37, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp276;
    compiler::TNode<JSReceiver> tmp277;
    compiler::TNode<Object> tmp278;
    compiler::TNode<Object> tmp279;
    compiler::TNode<JSArray> tmp280;
    compiler::TNode<Smi> tmp281;
    compiler::TNode<BoolT> tmp282;
    compiler::TNode<Int32T> tmp283;
    compiler::TNode<Number> tmp284;
    compiler::TNode<FixedArrayBase> tmp285;
    compiler::TNode<FixedDoubleArray> tmp286;
    ca_.Bind(&block38, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286);
    ca_.Goto(&block36, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp286);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp287;
    compiler::TNode<JSReceiver> tmp288;
    compiler::TNode<Object> tmp289;
    compiler::TNode<Object> tmp290;
    compiler::TNode<JSArray> tmp291;
    compiler::TNode<Smi> tmp292;
    compiler::TNode<BoolT> tmp293;
    compiler::TNode<Int32T> tmp294;
    compiler::TNode<Number> tmp295;
    ca_.Bind(&block37, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1899);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp296;
    compiler::TNode<JSReceiver> tmp297;
    compiler::TNode<Object> tmp298;
    compiler::TNode<Object> tmp299;
    compiler::TNode<JSArray> tmp300;
    compiler::TNode<Smi> tmp301;
    compiler::TNode<BoolT> tmp302;
    compiler::TNode<Int32T> tmp303;
    compiler::TNode<Number> tmp304;
    compiler::TNode<FixedDoubleArray> tmp305;
    ca_.Bind(&block36, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1900);
    BaseBuiltinsFromDSLAssembler(state_).StoreFixedDoubleArrayDirect(compiler::TNode<FixedDoubleArray>{tmp305}, compiler::TNode<Smi>{tmp301}, compiler::TNode<Number>{tmp304});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1897);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1894);
    ca_.Goto(&block33, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp306;
    compiler::TNode<JSReceiver> tmp307;
    compiler::TNode<Object> tmp308;
    compiler::TNode<Object> tmp309;
    compiler::TNode<JSArray> tmp310;
    compiler::TNode<Smi> tmp311;
    compiler::TNode<BoolT> tmp312;
    compiler::TNode<Int32T> tmp313;
    compiler::TNode<Number> tmp314;
    ca_.Bind(&block33, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1892);
    ca_.Goto(&block28, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp315;
    compiler::TNode<JSReceiver> tmp316;
    compiler::TNode<Object> tmp317;
    compiler::TNode<Object> tmp318;
    compiler::TNode<JSArray> tmp319;
    compiler::TNode<Smi> tmp320;
    compiler::TNode<BoolT> tmp321;
    compiler::TNode<Int32T> tmp322;
    ca_.Bind(&block27, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1904);
    ca_.Branch(tmp321, &block40, &block41, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp323;
    compiler::TNode<JSReceiver> tmp324;
    compiler::TNode<Object> tmp325;
    compiler::TNode<Object> tmp326;
    compiler::TNode<JSArray> tmp327;
    compiler::TNode<Smi> tmp328;
    compiler::TNode<BoolT> tmp329;
    compiler::TNode<Int32T> tmp330;
    ca_.Bind(&block40, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1905);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).BuildAppendJSArray(HOLEY_ELEMENTS, compiler::TNode<JSArray>{tmp327}, compiler::TNode<Object>{tmp326}, &label0);
    ca_.Goto(&block43, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp327, tmp326);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block44, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp327, tmp326);
    }
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp331;
    compiler::TNode<JSReceiver> tmp332;
    compiler::TNode<Object> tmp333;
    compiler::TNode<Object> tmp334;
    compiler::TNode<JSArray> tmp335;
    compiler::TNode<Smi> tmp336;
    compiler::TNode<BoolT> tmp337;
    compiler::TNode<Int32T> tmp338;
    compiler::TNode<JSArray> tmp339;
    compiler::TNode<Object> tmp340;
    ca_.Bind(&block44, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340);
    ca_.Goto(&block2, tmp331, tmp332, tmp333, tmp334);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp341;
    compiler::TNode<JSReceiver> tmp342;
    compiler::TNode<Object> tmp343;
    compiler::TNode<Object> tmp344;
    compiler::TNode<JSArray> tmp345;
    compiler::TNode<Smi> tmp346;
    compiler::TNode<BoolT> tmp347;
    compiler::TNode<Int32T> tmp348;
    compiler::TNode<JSArray> tmp349;
    compiler::TNode<Object> tmp350;
    ca_.Bind(&block43, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1904);
    ca_.Goto(&block42, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp351;
    compiler::TNode<JSReceiver> tmp352;
    compiler::TNode<Object> tmp353;
    compiler::TNode<Object> tmp354;
    compiler::TNode<JSArray> tmp355;
    compiler::TNode<Smi> tmp356;
    compiler::TNode<BoolT> tmp357;
    compiler::TNode<Int32T> tmp358;
    ca_.Bind(&block41, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1907);
    compiler::TNode<FixedArrayBase> tmp359;
    USE(tmp359);
    tmp359 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp355}));
    compiler::TNode<FixedArray> tmp360;
    USE(tmp360);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp360 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp359}, &label0);
    ca_.Goto(&block47, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block48, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359);
    }
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp361;
    compiler::TNode<JSReceiver> tmp362;
    compiler::TNode<Object> tmp363;
    compiler::TNode<Object> tmp364;
    compiler::TNode<JSArray> tmp365;
    compiler::TNode<Smi> tmp366;
    compiler::TNode<BoolT> tmp367;
    compiler::TNode<Int32T> tmp368;
    compiler::TNode<FixedArrayBase> tmp369;
    ca_.Bind(&block48, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369);
    ca_.Goto(&block46, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368);
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp370;
    compiler::TNode<JSReceiver> tmp371;
    compiler::TNode<Object> tmp372;
    compiler::TNode<Object> tmp373;
    compiler::TNode<JSArray> tmp374;
    compiler::TNode<Smi> tmp375;
    compiler::TNode<BoolT> tmp376;
    compiler::TNode<Int32T> tmp377;
    compiler::TNode<FixedArrayBase> tmp378;
    compiler::TNode<FixedArray> tmp379;
    ca_.Bind(&block47, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379);
    ca_.Goto(&block45, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp379);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp380;
    compiler::TNode<JSReceiver> tmp381;
    compiler::TNode<Object> tmp382;
    compiler::TNode<Object> tmp383;
    compiler::TNode<JSArray> tmp384;
    compiler::TNode<Smi> tmp385;
    compiler::TNode<BoolT> tmp386;
    compiler::TNode<Int32T> tmp387;
    ca_.Bind(&block46, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp388;
    compiler::TNode<JSReceiver> tmp389;
    compiler::TNode<Object> tmp390;
    compiler::TNode<Object> tmp391;
    compiler::TNode<JSArray> tmp392;
    compiler::TNode<Smi> tmp393;
    compiler::TNode<BoolT> tmp394;
    compiler::TNode<Int32T> tmp395;
    compiler::TNode<FixedArray> tmp396;
    ca_.Bind(&block45, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1908);
    BaseBuiltinsFromDSLAssembler(state_).StoreFixedArrayDirect(compiler::TNode<FixedArray>{tmp396}, compiler::TNode<Smi>{tmp393}, compiler::TNode<Object>{tmp391});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1906);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1904);
    ca_.Goto(&block42, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp397;
    compiler::TNode<JSReceiver> tmp398;
    compiler::TNode<Object> tmp399;
    compiler::TNode<Object> tmp400;
    compiler::TNode<JSArray> tmp401;
    compiler::TNode<Smi> tmp402;
    compiler::TNode<BoolT> tmp403;
    compiler::TNode<Int32T> tmp404;
    ca_.Bind(&block42, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1892);
    ca_.Goto(&block28, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp405;
    compiler::TNode<JSReceiver> tmp406;
    compiler::TNode<Object> tmp407;
    compiler::TNode<Object> tmp408;
    compiler::TNode<JSArray> tmp409;
    compiler::TNode<Smi> tmp410;
    compiler::TNode<BoolT> tmp411;
    compiler::TNode<Int32T> tmp412;
    ca_.Bind(&block28, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1884);
    ca_.Goto(&block14, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp413;
    compiler::TNode<JSReceiver> tmp414;
    compiler::TNode<Object> tmp415;
    compiler::TNode<Object> tmp416;
    compiler::TNode<JSArray> tmp417;
    compiler::TNode<Smi> tmp418;
    compiler::TNode<BoolT> tmp419;
    compiler::TNode<Int32T> tmp420;
    ca_.Bind(&block14, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1875);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1912);
    ca_.Goto(&block1, tmp413, tmp414, tmp415, tmp416);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp421;
    compiler::TNode<JSReceiver> tmp422;
    compiler::TNode<Object> tmp423;
    compiler::TNode<Object> tmp424;
    ca_.Bind(&block2, &tmp421, &tmp422, &tmp423, &tmp424);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1913);
    CodeStubAssembler(state_).CallRuntime(Runtime::kCreateDataProperty, tmp421, tmp422, tmp423, tmp424);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1875);
    ca_.Goto(&block1, tmp421, tmp422, tmp423, tmp424);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp426;
    compiler::TNode<JSReceiver> tmp427;
    compiler::TNode<Object> tmp428;
    compiler::TNode<Object> tmp429;
    ca_.Bind(&block1, &tmp426, &tmp427, &tmp428, &tmp429);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1915);
    compiler::TNode<Oddball> tmp430;
    USE(tmp430);
    tmp430 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp430);
  }
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr11ATFrameType21ATconstexpr_FrameType(StackFrame::Type p_t) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 21);
    compiler::TNode<UintPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr19ATconstexpr_uintptr((CodeStubAssembler(state_).ConstexprUintPtrShl(static_cast<uintptr_t>(p_t), kSmiTagSize))));
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).BitcastWordToTaggedSigned(compiler::TNode<UintPtrT>{tmp0}));
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = (compiler::TNode<Smi>{tmp1});
    ca_.Goto(&block1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1188);
    ca_.Goto(&block2, tmp3);
  }

    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block2, &tmp4);
  return compiler::TNode<Smi>{tmp4};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Cast11ATFrameType(compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 25);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).TaggedIsNotSmi(compiler::TNode<Object>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block3, &tmp2);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 29);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = TORQUE_CAST(compiler::TNode<Object>{tmp3});
    ca_.Goto(&block2, tmp3, tmp4);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Object> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return compiler::TNode<Smi>{tmp8};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadObjectFromFrame(compiler::TNode<RawPtrT> p_f, int32_t p_o) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 43);
    compiler::TNode<Object> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadBufferObject(compiler::TNode<RawPtrT>{tmp0}, p_o));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 42);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<RawPtrT> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::LoadPointerFromFrame(compiler::TNode<RawPtrT> p_f, int32_t p_o) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 46);
    compiler::TNode<RawPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadBufferPointer(compiler::TNode<RawPtrT>{tmp0}, p_o));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 45);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<RawPtrT> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<RawPtrT>{tmp5};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadSmiFromFrame(compiler::TNode<RawPtrT> p_f, int32_t p_o) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 49);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadBufferSmi(compiler::TNode<RawPtrT>{tmp0}, p_o));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 48);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<RawPtrT> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::LoadFunctionFromFrame(compiler::TNode<RawPtrT> p_f) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 58);
    compiler::TNode<Object> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).LoadObjectFromFrame(compiler::TNode<RawPtrT>{tmp0}, StandardFrameConstants::kFunctionOffset));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 59);
    compiler::TNode<JSFunction> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<JSFunction> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 54);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<RawPtrT> tmp5;
    compiler::TNode<JSFunction> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<JSFunction>{tmp6};
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::LoadCallerFromFrame(compiler::TNode<RawPtrT> p_f) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 65);
    compiler::TNode<RawPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<RawPtrT>(BaseBuiltinsFromDSLAssembler(state_).LoadPointerFromFrame(compiler::TNode<RawPtrT>{tmp0}, StandardFrameConstants::kCallerFPOffset));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 66);
    compiler::TNode<RawPtrT> tmp2;
    USE(tmp2);
    tmp2 = (compiler::TNode<RawPtrT>{tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<RawPtrT> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 64);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    compiler::TNode<RawPtrT> tmp5;
    compiler::TNode<RawPtrT> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return compiler::TNode<RawPtrT>{tmp6};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::Cast25UT9ATContext11ATFrameType(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 73);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 74);
    compiler::TNode<Context> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast9ATContext(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block4, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Context> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 75);
    ca_.Goto(&block2, tmp7, tmp8, tmp11);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 77);
    compiler::TNode<Smi> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = BaseBuiltinsFromDSLAssembler(state_).Cast11ATFrameType(compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp14)}, &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, ca_.UncheckedCast<Object>(tmp14), tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, ca_.UncheckedCast<Object>(tmp14));
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block10, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block8, tmp16, tmp17, tmp18);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block9, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 78);
    ca_.Goto(&block2, tmp20, tmp21, tmp24);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block8, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 80);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 81);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    ca_.Bind(&block2, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block11, tmp28, tmp29, tmp30);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block11, &tmp31, &tmp32, &tmp33);
  return compiler::TNode<Object>{tmp33};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadContextOrFrameTypeFromFrame(compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 92);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).LoadObjectFromFrame(compiler::TNode<RawPtrT>{tmp1}, StandardFrameConstants::kContextOrFrameTypeOffset));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 91);
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast25UT9ATContext11ATFrameType(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    ca_.Goto(&block1, tmp0, tmp1, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 88);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

    compiler::TNode<Context> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9);
  return compiler::TNode<Object>{tmp9};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadLengthFromAdapterFrame(compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 100);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadSmiFromFrame(compiler::TNode<RawPtrT>{tmp1}, ArgumentsAdaptorFrameConstants::kLengthOffset));
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<RawPtrT> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 97);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Smi>{tmp8};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::FrameTypeEquals(compiler::TNode<Smi> p_f1, compiler::TNode<Smi> p_f2) {
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f1, p_f2);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 104);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<BoolT> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 103);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Smi> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<BoolT> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<BoolT>{tmp8};
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::Cast15ATStandardFrame(compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 111);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).LoadContextOrFrameTypeFromFrame(compiler::TNode<Context>{tmp0}, compiler::TNode<RawPtrT>{tmp1}));
    compiler::TNode<HeapObject> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = BaseBuiltinsFromDSLAssembler(state_).Cast10HeapObject(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<HeapObject> tmp10;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 110);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 121);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsContext(compiler::TNode<HeapObject>{tmp10}));
    ca_.Branch(tmp11, &block5, &block6, tmp7, tmp8, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<HeapObject> tmp14;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 122);
    compiler::TNode<RawPtrT> tmp15;
    USE(tmp15);
    tmp15 = (compiler::TNode<RawPtrT>{tmp13});
    ca_.Goto(&block2, tmp12, tmp13, tmp15);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<HeapObject> tmp18;
    ca_.Bind(&block6, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 124);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    ca_.Bind(&block2, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 107);
    ca_.Goto(&block7, tmp19, tmp20, tmp21);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    ca_.Bind(&block7, &tmp22, &tmp23, &tmp24);
  return compiler::TNode<RawPtrT>{tmp24};
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::Cast23ATArgumentsAdaptorFrame(compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 130);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).LoadContextOrFrameTypeFromFrame(compiler::TNode<Context>{tmp0}, compiler::TNode<RawPtrT>{tmp1}));
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = BaseBuiltinsFromDSLAssembler(state_).Cast11ATFrameType(compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 129);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 131);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr11ATFrameType21ATconstexpr_FrameType(StackFrame::ARGUMENTS_ADAPTOR));
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FrameTypeEquals(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11}));
    ca_.Branch(tmp12, &block5, &block6, tmp7, tmp8, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 132);
    compiler::TNode<RawPtrT> tmp16;
    USE(tmp16);
    tmp16 = (compiler::TNode<RawPtrT>{tmp14});
    ca_.Goto(&block2, tmp13, tmp14, tmp16);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<Smi> tmp19;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 134);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    ca_.Bind(&block2, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 107);
    ca_.Goto(&block7, tmp20, tmp21, tmp22);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    ca_.Bind(&block7, &tmp23, &tmp24, &tmp25);
  return compiler::TNode<RawPtrT>{tmp25};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::LoadTargetFromFrame() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 144);
    compiler::TNode<RawPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadFramePointer());
    compiler::TNode<JSFunction> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).LoadFunctionFromFrame(compiler::TNode<RawPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/frames.tq", 143);
    ca_.Goto(&block2, tmp2);
  }

    compiler::TNode<JSFunction> tmp3;
    ca_.Bind(&block2, &tmp3);
  return compiler::TNode<JSFunction>{tmp3};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::LoadHeapObjectMap(compiler::TNode<HeapObject> p_o) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Map> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 31);
compiler::TNode<Map> tmp1 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadObjectField(tmp0, HeapObject::kMapOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<Map> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<Map> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Map>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreHeapObjectMap(compiler::TNode<HeapObject> p_o, compiler::TNode<Map> p_v) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Map> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Map> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    compiler::TNode<Map> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 31);
    CodeStubAssembler(state_).StoreMap(tmp0, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<Map> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<Map> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadTuple2Value1(compiler::TNode<Tuple2> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Tuple2> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Tuple2> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 72);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, Tuple2::kValue1Offset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Tuple2> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Tuple2> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreTuple2Value1(compiler::TNode<Tuple2> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<Tuple2> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 72);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Tuple2> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Tuple2> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadTuple2Value2(compiler::TNode<Tuple2> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Tuple2> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Tuple2> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 73);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, Tuple2::kValue2Offset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Tuple2> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Tuple2> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreTuple2Value2(compiler::TNode<Tuple2> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple2, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<Tuple2> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 73);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Tuple2> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Tuple2> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadTuple3Value3(compiler::TNode<Tuple3> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Tuple3> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple3, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple3, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Tuple3> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 76);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, Tuple3::kValue3Offset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Tuple3> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Tuple3> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreTuple3Value3(compiler::TNode<Tuple3> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<Tuple3, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple3, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Tuple3, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<Tuple3> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 76);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Tuple3> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Tuple3> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadFixedArrayBaseLength(compiler::TNode<FixedArrayBase> p_o) {
  compiler::CodeAssemblerParameterizedLabel<FixedArrayBase> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArrayBase, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArrayBase, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<FixedArrayBase> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 86);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, FixedArrayBase::kLengthOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArrayBase> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<FixedArrayBase> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreFixedArrayBaseLength(compiler::TNode<FixedArrayBase> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<FixedArrayBase, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArrayBase, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArrayBase, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<FixedArrayBase> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 86);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArrayBase> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<FixedArrayBase> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSReceiverPropertiesOrHash(compiler::TNode<JSReceiver> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSReceiver> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 102);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSReceiver::kPropertiesOrHashOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSReceiverPropertiesOrHash(compiler::TNode<JSReceiver> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSReceiver> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 102);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::LoadJSObjectElements(compiler::TNode<JSObject> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSObject, FixedArrayBase> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSObject, FixedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 107);
compiler::TNode<FixedArrayBase> tmp1 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSObject::kElementsOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSObject> tmp2;
    compiler::TNode<FixedArrayBase> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSObject> tmp4;
    compiler::TNode<FixedArrayBase> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<FixedArrayBase>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSObjectElements(compiler::TNode<JSObject> p_o, compiler::TNode<FixedArrayBase> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSObject, FixedArrayBase> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSObject, FixedArrayBase> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSObject, FixedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSObject> tmp0;
    compiler::TNode<FixedArrayBase> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 107);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSObject> tmp2;
    compiler::TNode<FixedArrayBase> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSObject> tmp4;
    compiler::TNode<FixedArrayBase> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSProxyTarget(compiler::TNode<JSProxy> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSProxy> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSProxy> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 122);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSProxy::kTargetOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSProxy> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSProxy> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSProxyTarget(compiler::TNode<JSProxy> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSProxy> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 122);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSProxy> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSProxy> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSProxyHandler(compiler::TNode<JSProxy> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSProxy> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSProxy> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 123);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSProxy::kHandlerOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSProxy> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSProxy> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSProxyHandler(compiler::TNode<JSProxy> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxy, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSProxy> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 123);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSProxy> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSProxy> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSProxyRevocableResultProxy(compiler::TNode<JSProxyRevocableResult> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSProxyRevocableResult> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 127);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSProxyRevocableResult::kProxyOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSProxyRevocableResult> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSProxyRevocableResult> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSProxyRevocableResultProxy(compiler::TNode<JSProxyRevocableResult> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSProxyRevocableResult> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 127);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSProxyRevocableResult> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSProxyRevocableResult> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSProxyRevocableResultRevoke(compiler::TNode<JSProxyRevocableResult> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSProxyRevocableResult> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 128);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSProxyRevocableResult::kRevokeOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSProxyRevocableResult> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSProxyRevocableResult> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSProxyRevocableResultRevoke(compiler::TNode<JSProxyRevocableResult> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSProxyRevocableResult, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSProxyRevocableResult> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 128);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSProxyRevocableResult> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSProxyRevocableResult> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSGlobalProxyNativeContext(compiler::TNode<JSGlobalProxy> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSGlobalProxy> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSGlobalProxy, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSGlobalProxy, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSGlobalProxy> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 131);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSGlobalProxy::kNativeContextOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSGlobalProxy> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSGlobalProxy> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSGlobalProxyNativeContext(compiler::TNode<JSGlobalProxy> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSGlobalProxy, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSGlobalProxy, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSGlobalProxy, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSGlobalProxy> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 131);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSGlobalProxy> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSGlobalProxy> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSValueValue(compiler::TNode<JSValue> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSValue> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSValue, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSValue, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSValue> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 133);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSValue::kValueOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSValue> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSValue> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSValueValue(compiler::TNode<JSValue> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSValue, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSValue, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSValue, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSValue> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 133);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSValue> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSValue> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSArgumentsObjectWithLengthLength(compiler::TNode<JSArgumentsObjectWithLength> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSArgumentsObjectWithLength> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArgumentsObjectWithLength, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArgumentsObjectWithLength, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSArgumentsObjectWithLength> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 135);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSArgumentsObjectWithLength::kLengthOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArgumentsObjectWithLength> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArgumentsObjectWithLength> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSArgumentsObjectWithLengthLength(compiler::TNode<JSArgumentsObjectWithLength> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSArgumentsObjectWithLength, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArgumentsObjectWithLength, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArgumentsObjectWithLength, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSArgumentsObjectWithLength> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 135);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArgumentsObjectWithLength> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArgumentsObjectWithLength> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::LoadJSArrayLength(compiler::TNode<JSArray> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 141);
compiler::TNode<Number> tmp1 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSArray::kLengthOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArray> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArray> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Number>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSArrayLength(compiler::TNode<JSArray> p_o, compiler::TNode<Number> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSArray, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSArray> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 141);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArray> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArray> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::_method_JSArray_IsEmpty(compiler::TNode<JSArray> p_this) {
  compiler::CodeAssemblerParameterizedLabel<JSArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_this);

  if (block0.is_used()) {
    compiler::TNode<JSArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 139);
    compiler::TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).LoadJSArrayLength(compiler::TNode<JSArray>{tmp0}));
    compiler::TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).IsNumberEqual(compiler::TNode<Number>{tmp1}, compiler::TNode<Number>{tmp2}));
    ca_.Goto(&block1, tmp0, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArray> tmp4;
    compiler::TNode<BoolT> tmp5;
    ca_.Bind(&block1, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 138);
    ca_.Goto(&block2, tmp4, tmp5);
  }

    compiler::TNode<JSArray> tmp6;
    compiler::TNode<BoolT> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
  return compiler::TNode<BoolT>{tmp7};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoFunctionData(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 175);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kFunctionDataOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoFunctionData(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 175);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoNameOrScopeInfo(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 176);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kNameOrScopeInfoOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoNameOrScopeInfo(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 176);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 177);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kOuterScopeInfoOrFeedbackMetadataOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 177);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoScriptOrDebugInfo(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 178);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kScriptOrDebugInfoOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoScriptOrDebugInfo(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 178);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoLength(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 179);
compiler::TNode<Int32T> tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kLengthOffset, MachineType::Int16()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Int32T>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoLength(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int32T> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 179);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 40, tmp1, MachineType::Int16().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoFormalParameterCount(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 180);
compiler::TNode<Uint32T> tmp1 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kFormalParameterCountOffset, MachineType::Uint16()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Uint32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Uint32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Uint32T>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoFormalParameterCount(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Uint32T> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<Uint32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 180);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 42, tmp1, MachineType::Uint16().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Uint32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Uint32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoExpectedNofProperties(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 181);
compiler::TNode<Int32T> tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kExpectedNofPropertiesOffset, MachineType::Int8()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Int32T>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoExpectedNofProperties(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int32T> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 181);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 44, tmp1, MachineType::Int8().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoBuiltinFunctionId(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 182);
compiler::TNode<Int32T> tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kBuiltinFunctionIdOffset, MachineType::Int8()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Int32T>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoBuiltinFunctionId(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int32T> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 182);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 45, tmp1, MachineType::Int8().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoFunctionTokenOffset(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 183);
compiler::TNode<Int32T> tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kFunctionTokenOffsetOffset, MachineType::Int16()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Int32T>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoFunctionTokenOffset(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int32T> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 183);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 46, tmp1, MachineType::Int16().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoFlags(compiler::TNode<SharedFunctionInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 184);
compiler::TNode<Int32T> tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfo::kFlagsOffset, MachineType::Int32()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Int32T>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoFlags(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int32T> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfo, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp0;
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 184);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 48, tmp1, MachineType::Int32().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfo> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfo> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::LoadSharedFunctionInfoWithIDUniqueId(compiler::TNode<SharedFunctionInfoWithID> p_o) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfoWithID> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfoWithID, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfoWithID, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfoWithID> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 188);
compiler::TNode<Int32T> tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadObjectField(tmp0, SharedFunctionInfoWithID::kUniqueIdOffset, MachineType::Int32()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfoWithID> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfoWithID> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Int32T>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreSharedFunctionInfoWithIDUniqueId(compiler::TNode<SharedFunctionInfoWithID> p_o, compiler::TNode<Int32T> p_v) {
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfoWithID, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfoWithID, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SharedFunctionInfoWithID, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<SharedFunctionInfoWithID> tmp0;
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 188);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 52, tmp1, MachineType::Int32().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<SharedFunctionInfoWithID> tmp2;
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<SharedFunctionInfoWithID> tmp4;
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<SharedFunctionInfo> BaseBuiltinsFromDSLAssembler::LoadJSFunctionSharedFunctionInfo(compiler::TNode<JSFunction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, SharedFunctionInfo> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, SharedFunctionInfo> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 192);
compiler::TNode<SharedFunctionInfo> tmp1 = ca_.UncheckedCast<SharedFunctionInfo>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSFunction::kSharedFunctionInfoOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<SharedFunctionInfo> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<SharedFunctionInfo> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<SharedFunctionInfo>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSFunctionSharedFunctionInfo(compiler::TNode<JSFunction> p_o, compiler::TNode<SharedFunctionInfo> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction, SharedFunctionInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, SharedFunctionInfo> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, SharedFunctionInfo> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    compiler::TNode<SharedFunctionInfo> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 192);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<SharedFunctionInfo> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<SharedFunctionInfo> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Context> BaseBuiltinsFromDSLAssembler::LoadJSFunctionContext(compiler::TNode<JSFunction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 193);
compiler::TNode<Context> tmp1 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSFunction::kContextOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Context>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSFunctionContext(compiler::TNode<JSFunction> p_o, compiler::TNode<Context> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 193);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadJSFunctionFeedbackCell(compiler::TNode<JSFunction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 194);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSFunction::kFeedbackCellOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSFunctionFeedbackCell(compiler::TNode<JSFunction> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 194);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 40, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Code> BaseBuiltinsFromDSLAssembler::LoadJSFunctionCode(compiler::TNode<JSFunction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Code> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Code> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 195);
compiler::TNode<Code> tmp1 = ca_.UncheckedCast<Code>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSFunction::kCodeOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<Code> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<Code> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Code>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSFunctionCode(compiler::TNode<JSFunction> p_o, compiler::TNode<Code> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Code> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Code> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, Code> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    compiler::TNode<Code> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 195);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 48, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<Code> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<Code> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadJSFunctionPrototypeOrInitialMap(compiler::TNode<JSFunction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 196);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSFunction::kPrototypeOrInitialMapOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSFunctionPrototypeOrInitialMap(compiler::TNode<JSFunction> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSFunction, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSFunction> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 196);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 56, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSFunction> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSFunction> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::LoadJSBoundFunctionBoundTargetFunction(compiler::TNode<JSBoundFunction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSBoundFunction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 200);
compiler::TNode<JSReceiver> tmp1 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSBoundFunction::kBoundTargetFunctionOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSBoundFunction> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSBoundFunction> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<JSReceiver>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSBoundFunctionBoundTargetFunction(compiler::TNode<JSBoundFunction> p_o, compiler::TNode<JSReceiver> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSBoundFunction> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 200);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSBoundFunction> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSBoundFunction> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSBoundFunctionBoundThis(compiler::TNode<JSBoundFunction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSBoundFunction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 201);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSBoundFunction::kBoundThisOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSBoundFunction> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSBoundFunction> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSBoundFunctionBoundThis(compiler::TNode<JSBoundFunction> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSBoundFunction> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 201);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSBoundFunction> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSBoundFunction> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::LoadJSBoundFunctionBoundArguments(compiler::TNode<JSBoundFunction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSBoundFunction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 202);
compiler::TNode<FixedArray> tmp1 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSBoundFunction::kBoundArgumentsOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSBoundFunction> tmp2;
    compiler::TNode<FixedArray> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSBoundFunction> tmp4;
    compiler::TNode<FixedArray> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<FixedArray>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSBoundFunctionBoundArguments(compiler::TNode<JSBoundFunction> p_o, compiler::TNode<FixedArray> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, FixedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSBoundFunction, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSBoundFunction> tmp0;
    compiler::TNode<FixedArray> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 202);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 40, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSBoundFunction> tmp2;
    compiler::TNode<FixedArray> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSBoundFunction> tmp4;
    compiler::TNode<FixedArray> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadFixedTypedArrayBaseBasePointer(compiler::TNode<FixedTypedArrayBase> p_o) {
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<FixedTypedArrayBase> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 208);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, FixedTypedArrayBase::kBasePointerOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedTypedArrayBase> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<FixedTypedArrayBase> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreFixedTypedArrayBaseBasePointer(compiler::TNode<FixedTypedArrayBase> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<FixedTypedArrayBase> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 208);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedTypedArrayBase> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<FixedTypedArrayBase> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::LoadFixedTypedArrayBaseExternalPointer(compiler::TNode<FixedTypedArrayBase> p_o) {
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<FixedTypedArrayBase> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 209);
compiler::TNode<RawPtrT> tmp1 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadObjectField(tmp0, FixedTypedArrayBase::kExternalPointerOffset, MachineType::Pointer()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedTypedArrayBase> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<FixedTypedArrayBase> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<RawPtrT>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreFixedTypedArrayBaseExternalPointer(compiler::TNode<FixedTypedArrayBase> p_o, compiler::TNode<RawPtrT> p_v) {
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<FixedTypedArrayBase> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 209);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 24, tmp1, MachineType::Pointer().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedTypedArrayBase> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<FixedTypedArrayBase> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::LoadJSArrayBufferByteLength(compiler::TNode<JSArrayBuffer> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 251);
compiler::TNode<UintPtrT> tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSArrayBuffer::kByteLengthOffset, MachineType::IntPtr()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBuffer> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<UintPtrT>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSArrayBufferByteLength(compiler::TNode<JSArrayBuffer> p_o, compiler::TNode<UintPtrT> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 251);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 24, tmp1, MachineType::IntPtr().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBuffer> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 252);
compiler::TNode<RawPtrT> tmp1 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSArrayBuffer::kBackingStoreOffset, MachineType::Pointer()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBuffer> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<RawPtrT>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer> p_o, compiler::TNode<RawPtrT> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 252);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 32, tmp1, MachineType::Pointer().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBuffer> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<JSArrayBuffer> BaseBuiltinsFromDSLAssembler::LoadJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, JSArrayBuffer> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, JSArrayBuffer> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 256);
compiler::TNode<JSArrayBuffer> tmp1 = ca_.UncheckedCast<JSArrayBuffer>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSArrayBufferView::kBufferOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp2;
    compiler::TNode<JSArrayBuffer> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBufferView> tmp4;
    compiler::TNode<JSArrayBuffer> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<JSArrayBuffer>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView> p_o, compiler::TNode<JSArrayBuffer> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, JSArrayBuffer> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, JSArrayBuffer> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, JSArrayBuffer> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp0;
    compiler::TNode<JSArrayBuffer> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 256);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp2;
    compiler::TNode<JSArrayBuffer> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBufferView> tmp4;
    compiler::TNode<JSArrayBuffer> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::LoadJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 257);
compiler::TNode<UintPtrT> tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSArrayBufferView::kByteOffsetOffset, MachineType::IntPtr()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBufferView> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<UintPtrT>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView> p_o, compiler::TNode<UintPtrT> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 257);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 32, tmp1, MachineType::IntPtr().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBufferView> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::LoadJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 258);
compiler::TNode<UintPtrT> tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSArrayBufferView::kByteLengthOffset, MachineType::IntPtr()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBufferView> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<UintPtrT>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView> p_o, compiler::TNode<UintPtrT> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 258);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 40, tmp1, MachineType::IntPtr().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSArrayBufferView> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadJSTypedArrayLength(compiler::TNode<JSTypedArray> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSTypedArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 287);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSTypedArray::kLengthOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSTypedArray> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSTypedArray> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSTypedArrayLength(compiler::TNode<JSTypedArray> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSTypedArray> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 287);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 48, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSTypedArray> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSTypedArray> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

void BaseBuiltinsFromDSLAssembler::_method_JSTypedArray_AttachOffHeapBuffer(compiler::TNode<JSTypedArray> p_this, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<Map> p_map, compiler::TNode<Smi> p_length, compiler::TNode<UintPtrT> p_byteOffset) {
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSArrayBuffer, Map, Smi, UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSArrayBuffer, Map, Smi, UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSArrayBuffer, Map, Smi, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_this, p_buffer, p_map, p_length, p_byteOffset);

  if (block0.is_used()) {
    compiler::TNode<JSTypedArray> tmp0;
    compiler::TNode<JSArrayBuffer> tmp1;
    compiler::TNode<Map> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<UintPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 265);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 271);
    compiler::TNode<RawPtrT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<RawPtrT>(BaseBuiltinsFromDSLAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp1}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 272);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr9ATuintptr(compiler::TNode<UintPtrT>{tmp4}));
    compiler::TNode<RawPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).RawPtrAdd(compiler::TNode<RawPtrT>{tmp6}, compiler::TNode<IntPtrT>{tmp7}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 282);
    BaseBuiltinsFromDSLAssembler(state_).StoreJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView>{tmp0}, compiler::TNode<JSArrayBuffer>{tmp1});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 283);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 284);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 283);
    compiler::TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).IntPtrConstant(((32)));
    compiler::TNode<FixedTypedArrayBase> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<FixedTypedArrayBase>(CodeStubAssembler(state_).Allocate(compiler::TNode<IntPtrT>{tmp9}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp10, CodeStubAssembler(state_).IntPtrConstant(32), compiler::TNode<IntPtrT>{tmp9}, RootIndex::kUndefinedValue);
    CodeStubAssembler(state_).StoreMap(tmp10, tmp2);
    CodeStubAssembler(state_).StoreObjectField(tmp10, 8, tmp3);
    CodeStubAssembler(state_).StoreObjectField(tmp10, 16, tmp5);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp10, 24, tmp8, MachineType::Pointer().representation());
    BaseBuiltinsFromDSLAssembler(state_).StoreJSObjectElements(compiler::TNode<JSObject>{tmp0}, compiler::TNode<FixedArrayBase>{tmp10});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 264);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 262);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<JSArrayBuffer> tmp12;
    compiler::TNode<Map> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<UintPtrT> tmp15;
    ca_.Bind(&block1, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block2, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

    compiler::TNode<JSTypedArray> tmp16;
    compiler::TNode<JSArrayBuffer> tmp17;
    compiler::TNode<Map> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<UintPtrT> tmp20;
    ca_.Bind(&block2, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSAccessorPropertyDescriptorGet(compiler::TNode<JSAccessorPropertyDescriptor> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 291);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSAccessorPropertyDescriptor::kGetOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSAccessorPropertyDescriptor> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSAccessorPropertyDescriptorGet(compiler::TNode<JSAccessorPropertyDescriptor> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 291);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSAccessorPropertyDescriptor> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSAccessorPropertyDescriptorSet(compiler::TNode<JSAccessorPropertyDescriptor> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 292);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSAccessorPropertyDescriptor::kSetOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSAccessorPropertyDescriptor> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSAccessorPropertyDescriptorSet(compiler::TNode<JSAccessorPropertyDescriptor> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 292);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSAccessorPropertyDescriptor> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSAccessorPropertyDescriptorEnumerable(compiler::TNode<JSAccessorPropertyDescriptor> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 293);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSAccessorPropertyDescriptor::kEnumerableOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSAccessorPropertyDescriptor> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSAccessorPropertyDescriptorEnumerable(compiler::TNode<JSAccessorPropertyDescriptor> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 293);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 40, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSAccessorPropertyDescriptor> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSAccessorPropertyDescriptorConfigurable(compiler::TNode<JSAccessorPropertyDescriptor> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 294);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSAccessorPropertyDescriptor::kConfigurableOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSAccessorPropertyDescriptor> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSAccessorPropertyDescriptorConfigurable(compiler::TNode<JSAccessorPropertyDescriptor> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAccessorPropertyDescriptor, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 294);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 48, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSAccessorPropertyDescriptor> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSAccessorPropertyDescriptor> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSCollectionTable(compiler::TNode<JSCollection> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSCollection> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollection, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollection, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSCollection> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 297);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSCollection::kTableOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSCollection> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSCollection> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSCollectionTable(compiler::TNode<JSCollection> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSCollection, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollection, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSCollection, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSCollection> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 297);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSCollection> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSCollection> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::LoadForeignForeignAddress(compiler::TNode<Foreign> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Foreign, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Foreign, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Foreign> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 317);
compiler::TNode<RawPtrT> tmp1 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadObjectField(tmp0, Foreign::kForeignAddressOffset, MachineType::Pointer()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Foreign> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Foreign> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<RawPtrT>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreForeignForeignAddress(compiler::TNode<Foreign> p_o, compiler::TNode<RawPtrT> p_v) {
  compiler::CodeAssemblerParameterizedLabel<Foreign, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Foreign, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Foreign, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<Foreign> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 317);
    CodeStubAssembler(state_).StoreObjectFieldNoWriteBarrier(tmp0, 8, tmp1, MachineType::Pointer().representation());
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Foreign> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Foreign> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadInterceptorInfoGetter(compiler::TNode<InterceptorInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 320);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, InterceptorInfo::kGetterOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreInterceptorInfoGetter(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 320);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadInterceptorInfoSetter(compiler::TNode<InterceptorInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 321);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, InterceptorInfo::kSetterOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreInterceptorInfoSetter(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 321);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadInterceptorInfoQuery(compiler::TNode<InterceptorInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 322);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, InterceptorInfo::kQueryOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreInterceptorInfoQuery(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 322);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadInterceptorInfoDescriptor(compiler::TNode<InterceptorInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 323);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, InterceptorInfo::kDescriptorOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreInterceptorInfoDescriptor(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 323);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadInterceptorInfoDeleter(compiler::TNode<InterceptorInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 324);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, InterceptorInfo::kDeleterOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreInterceptorInfoDeleter(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 324);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 40, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadInterceptorInfoEnumerator(compiler::TNode<InterceptorInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 325);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, InterceptorInfo::kEnumeratorOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreInterceptorInfoEnumerator(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 325);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 48, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadInterceptorInfoDefiner(compiler::TNode<InterceptorInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 326);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, InterceptorInfo::kDefinerOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreInterceptorInfoDefiner(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 326);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 56, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadInterceptorInfoData(compiler::TNode<InterceptorInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 327);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, InterceptorInfo::kDataOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreInterceptorInfoData(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 327);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 64, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadInterceptorInfoFlags(compiler::TNode<InterceptorInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 328);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, InterceptorInfo::kFlagsOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreInterceptorInfoFlags(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InterceptorInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<InterceptorInfo> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 328);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 72, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<InterceptorInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<InterceptorInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadAccessCheckInfoCallback(compiler::TNode<AccessCheckInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 332);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, AccessCheckInfo::kCallbackOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AccessCheckInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreAccessCheckInfoCallback(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 332);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AccessCheckInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadAccessCheckInfoNamedInterceptor(compiler::TNode<AccessCheckInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 333);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, AccessCheckInfo::kNamedInterceptorOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AccessCheckInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreAccessCheckInfoNamedInterceptor(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 333);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AccessCheckInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadAccessCheckInfoIndexedInterceptor(compiler::TNode<AccessCheckInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 334);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, AccessCheckInfo::kIndexedInterceptorOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AccessCheckInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreAccessCheckInfoIndexedInterceptor(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 334);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AccessCheckInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadAccessCheckInfoData(compiler::TNode<AccessCheckInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 335);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, AccessCheckInfo::kDataOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AccessCheckInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreAccessCheckInfoData(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AccessCheckInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 335);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AccessCheckInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AccessCheckInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadArrayBoilerplateDescriptionFlags(compiler::TNode<ArrayBoilerplateDescription> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ArrayBoilerplateDescription> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 339);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, ArrayBoilerplateDescription::kFlagsOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ArrayBoilerplateDescription> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ArrayBoilerplateDescription> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreArrayBoilerplateDescriptionFlags(compiler::TNode<ArrayBoilerplateDescription> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ArrayBoilerplateDescription> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 339);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ArrayBoilerplateDescription> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ArrayBoilerplateDescription> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::LoadArrayBoilerplateDescriptionConstantElements(compiler::TNode<ArrayBoilerplateDescription> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, FixedArrayBase> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, FixedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ArrayBoilerplateDescription> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 340);
compiler::TNode<FixedArrayBase> tmp1 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadObjectField(tmp0, ArrayBoilerplateDescription::kConstantElementsOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ArrayBoilerplateDescription> tmp2;
    compiler::TNode<FixedArrayBase> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ArrayBoilerplateDescription> tmp4;
    compiler::TNode<FixedArrayBase> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<FixedArrayBase>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreArrayBoilerplateDescriptionConstantElements(compiler::TNode<ArrayBoilerplateDescription> p_o, compiler::TNode<FixedArrayBase> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, FixedArrayBase> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, FixedArrayBase> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ArrayBoilerplateDescription, FixedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ArrayBoilerplateDescription> tmp0;
    compiler::TNode<FixedArrayBase> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 340);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ArrayBoilerplateDescription> tmp2;
    compiler::TNode<FixedArrayBase> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ArrayBoilerplateDescription> tmp4;
    compiler::TNode<FixedArrayBase> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadAliasedArgumentsEntryAliasedContextSlot(compiler::TNode<AliasedArgumentsEntry> p_o) {
  compiler::CodeAssemblerParameterizedLabel<AliasedArgumentsEntry> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AliasedArgumentsEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AliasedArgumentsEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<AliasedArgumentsEntry> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 343);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, AliasedArgumentsEntry::kAliasedContextSlotOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AliasedArgumentsEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AliasedArgumentsEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreAliasedArgumentsEntryAliasedContextSlot(compiler::TNode<AliasedArgumentsEntry> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<AliasedArgumentsEntry, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AliasedArgumentsEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AliasedArgumentsEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<AliasedArgumentsEntry> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 343);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AliasedArgumentsEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AliasedArgumentsEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadCellValue(compiler::TNode<Cell> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Cell> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Cell, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Cell, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Cell> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 345);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, Cell::kValueOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Cell> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Cell> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreCellValue(compiler::TNode<Cell> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<Cell, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Cell, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Cell, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<Cell> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 345);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Cell> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<Cell> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadDataHandlerSmiHandler(compiler::TNode<DataHandler> p_o) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 348);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, DataHandler::kSmiHandlerOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreDataHandlerSmiHandler(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 348);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadDataHandlerValidityCell(compiler::TNode<DataHandler> p_o) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 349);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, DataHandler::kValidityCellOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreDataHandlerValidityCell(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 349);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadDataHandlerData1(compiler::TNode<DataHandler> p_o) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 350);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, DataHandler::kData1Offset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreDataHandlerData1(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 350);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadDataHandlerData2(compiler::TNode<DataHandler> p_o) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 351);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, DataHandler::kData2Offset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreDataHandlerData2(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 351);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadDataHandlerData3(compiler::TNode<DataHandler> p_o) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 352);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, DataHandler::kData3Offset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreDataHandlerData3(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<DataHandler, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<DataHandler> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 352);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 40, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<DataHandler> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<DataHandler> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadJSPromiseReactionsOrResult(compiler::TNode<JSPromise> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSPromise> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSPromise> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 356);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSPromise::kReactionsOrResultOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPromise> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSPromise> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSPromiseReactionsOrResult(compiler::TNode<JSPromise> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSPromise> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 356);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPromise> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSPromise> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadJSPromiseFlags(compiler::TNode<JSPromise> p_o) {
  compiler::CodeAssemblerParameterizedLabel<JSPromise> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<JSPromise> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 357);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, JSPromise::kFlagsOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPromise> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSPromise> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreJSPromiseFlags(compiler::TNode<JSPromise> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSPromise, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<JSPromise> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 357);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<JSPromise> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<JSPromise> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Foreign> BaseBuiltinsFromDSLAssembler::LoadCallbackTaskCallback(compiler::TNode<CallbackTask> p_o) {
  compiler::CodeAssemblerParameterizedLabel<CallbackTask> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<CallbackTask> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 363);
compiler::TNode<Foreign> tmp1 = ca_.UncheckedCast<Foreign>(CodeStubAssembler(state_).LoadObjectField(tmp0, CallbackTask::kCallbackOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<CallbackTask> tmp2;
    compiler::TNode<Foreign> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<CallbackTask> tmp4;
    compiler::TNode<Foreign> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Foreign>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreCallbackTaskCallback(compiler::TNode<CallbackTask> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<CallbackTask> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 363);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<CallbackTask> tmp2;
    compiler::TNode<Foreign> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<CallbackTask> tmp4;
    compiler::TNode<Foreign> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Foreign> BaseBuiltinsFromDSLAssembler::LoadCallbackTaskData(compiler::TNode<CallbackTask> p_o) {
  compiler::CodeAssemblerParameterizedLabel<CallbackTask> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<CallbackTask> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 364);
compiler::TNode<Foreign> tmp1 = ca_.UncheckedCast<Foreign>(CodeStubAssembler(state_).LoadObjectField(tmp0, CallbackTask::kDataOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<CallbackTask> tmp2;
    compiler::TNode<Foreign> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<CallbackTask> tmp4;
    compiler::TNode<Foreign> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Foreign>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreCallbackTaskData(compiler::TNode<CallbackTask> p_o, compiler::TNode<Foreign> p_v) {
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallbackTask, Foreign> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<CallbackTask> tmp0;
    compiler::TNode<Foreign> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 364);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<CallbackTask> tmp2;
    compiler::TNode<Foreign> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<CallbackTask> tmp4;
    compiler::TNode<Foreign> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::LoadCallableTaskCallable(compiler::TNode<CallableTask> p_o) {
  compiler::CodeAssemblerParameterizedLabel<CallableTask> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallableTask, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallableTask, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<CallableTask> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 368);
compiler::TNode<JSReceiver> tmp1 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).LoadObjectField(tmp0, CallableTask::kCallableOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<CallableTask> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<CallableTask> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<JSReceiver>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreCallableTaskCallable(compiler::TNode<CallableTask> p_o, compiler::TNode<JSReceiver> p_v) {
  compiler::CodeAssemblerParameterizedLabel<CallableTask, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallableTask, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallableTask, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<CallableTask> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 368);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<CallableTask> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<CallableTask> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Context> BaseBuiltinsFromDSLAssembler::LoadCallableTaskContext(compiler::TNode<CallableTask> p_o) {
  compiler::CodeAssemblerParameterizedLabel<CallableTask> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallableTask, Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallableTask, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<CallableTask> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 369);
compiler::TNode<Context> tmp1 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadObjectField(tmp0, CallableTask::kContextOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<CallableTask> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<CallableTask> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Context>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreCallableTaskContext(compiler::TNode<CallableTask> p_o, compiler::TNode<Context> p_v) {
  compiler::CodeAssemblerParameterizedLabel<CallableTask, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallableTask, Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<CallableTask, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<CallableTask> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 369);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<CallableTask> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<CallableTask> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadStackFrameInfoLineNumber(compiler::TNode<StackFrameInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 373);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, StackFrameInfo::kLineNumberOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreStackFrameInfoLineNumber(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 373);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadStackFrameInfoColumnNumber(compiler::TNode<StackFrameInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 374);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, StackFrameInfo::kColumnNumberOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreStackFrameInfoColumnNumber(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 374);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadStackFrameInfoScriptId(compiler::TNode<StackFrameInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 375);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, StackFrameInfo::kScriptIdOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreStackFrameInfoScriptId(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 375);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadStackFrameInfoScriptName(compiler::TNode<StackFrameInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 376);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, StackFrameInfo::kScriptNameOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreStackFrameInfoScriptName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 376);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadStackFrameInfoScriptNameOrSourceUrl(compiler::TNode<StackFrameInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 377);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, StackFrameInfo::kScriptNameOrSourceUrlOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreStackFrameInfoScriptNameOrSourceUrl(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 377);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 40, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadStackFrameInfoFunctionName(compiler::TNode<StackFrameInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 378);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, StackFrameInfo::kFunctionNameOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreStackFrameInfoFunctionName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 378);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 48, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadStackFrameInfoFlag(compiler::TNode<StackFrameInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 379);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, StackFrameInfo::kFlagOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreStackFrameInfoFlag(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 379);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 56, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadStackFrameInfoId(compiler::TNode<StackFrameInfo> p_o) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 380);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, StackFrameInfo::kIdOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreStackFrameInfoId(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<StackFrameInfo, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<StackFrameInfo> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 380);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 64, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<StackFrameInfo> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<StackFrameInfo> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadClassPositionsStart(compiler::TNode<ClassPositions> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ClassPositions> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ClassPositions> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 384);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, ClassPositions::kStartOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ClassPositions> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ClassPositions> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreClassPositionsStart(compiler::TNode<ClassPositions> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ClassPositions> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 384);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ClassPositions> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ClassPositions> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadClassPositionsEnd(compiler::TNode<ClassPositions> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ClassPositions> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ClassPositions> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 385);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, ClassPositions::kEndOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ClassPositions> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ClassPositions> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreClassPositionsEnd(compiler::TNode<ClassPositions> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ClassPositions, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ClassPositions> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 385);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ClassPositions> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ClassPositions> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadWasmExceptionTagIndex(compiler::TNode<WasmExceptionTag> p_o) {
  compiler::CodeAssemblerParameterizedLabel<WasmExceptionTag> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<WasmExceptionTag, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<WasmExceptionTag, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<WasmExceptionTag> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 388);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, WasmExceptionTag::kIndexOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<WasmExceptionTag> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<WasmExceptionTag> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreWasmExceptionTagIndex(compiler::TNode<WasmExceptionTag> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<WasmExceptionTag, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<WasmExceptionTag, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<WasmExceptionTag, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<WasmExceptionTag> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 388);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<WasmExceptionTag> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<WasmExceptionTag> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadAsyncGeneratorRequestNext(compiler::TNode<AsyncGeneratorRequest> p_o) {
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 577);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, AsyncGeneratorRequest::kNextOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AsyncGeneratorRequest> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreAsyncGeneratorRequestNext(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 577);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AsyncGeneratorRequest> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadAsyncGeneratorRequestResumeMode(compiler::TNode<AsyncGeneratorRequest> p_o) {
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 578);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, AsyncGeneratorRequest::kResumeModeOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AsyncGeneratorRequest> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreAsyncGeneratorRequestResumeMode(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 578);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AsyncGeneratorRequest> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadAsyncGeneratorRequestValue(compiler::TNode<AsyncGeneratorRequest> p_o) {
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 579);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, AsyncGeneratorRequest::kValueOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AsyncGeneratorRequest> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreAsyncGeneratorRequestValue(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 579);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AsyncGeneratorRequest> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<JSPromise> BaseBuiltinsFromDSLAssembler::LoadAsyncGeneratorRequestPromise(compiler::TNode<AsyncGeneratorRequest> p_o) {
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, JSPromise> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, JSPromise> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 580);
compiler::TNode<JSPromise> tmp1 = ca_.UncheckedCast<JSPromise>(CodeStubAssembler(state_).LoadObjectField(tmp0, AsyncGeneratorRequest::kPromiseOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp2;
    compiler::TNode<JSPromise> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AsyncGeneratorRequest> tmp4;
    compiler::TNode<JSPromise> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<JSPromise>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreAsyncGeneratorRequestPromise(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<JSPromise> p_v) {
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, JSPromise> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, JSPromise> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<AsyncGeneratorRequest, JSPromise> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp0;
    compiler::TNode<JSPromise> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 580);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<AsyncGeneratorRequest> tmp2;
    compiler::TNode<JSPromise> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<AsyncGeneratorRequest> tmp4;
    compiler::TNode<JSPromise> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadModuleInfoEntryExportName(compiler::TNode<ModuleInfoEntry> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 584);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, ModuleInfoEntry::kExportNameOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreModuleInfoEntryExportName(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 584);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadModuleInfoEntryLocalName(compiler::TNode<ModuleInfoEntry> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 585);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, ModuleInfoEntry::kLocalNameOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreModuleInfoEntryLocalName(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 585);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadModuleInfoEntryImportName(compiler::TNode<ModuleInfoEntry> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 586);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, ModuleInfoEntry::kImportNameOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreModuleInfoEntryImportName(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 586);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadModuleInfoEntryModuleRequest(compiler::TNode<ModuleInfoEntry> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 587);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, ModuleInfoEntry::kModuleRequestOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreModuleInfoEntryModuleRequest(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 587);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadModuleInfoEntryCellIndex(compiler::TNode<ModuleInfoEntry> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 588);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, ModuleInfoEntry::kCellIndexOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreModuleInfoEntryCellIndex(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 588);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 40, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadModuleInfoEntryBegPos(compiler::TNode<ModuleInfoEntry> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 589);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, ModuleInfoEntry::kBegPosOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreModuleInfoEntryBegPos(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 589);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 48, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadModuleInfoEntryEndPos(compiler::TNode<ModuleInfoEntry> p_o) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 590);
compiler::TNode<Smi> tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadObjectField(tmp0, ModuleInfoEntry::kEndPosOffset, MachineType::TaggedSigned()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Smi>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StoreModuleInfoEntryEndPos(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<ModuleInfoEntry, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 590);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 56, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<ModuleInfoEntry> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<ModuleInfoEntry> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadPromiseCapabilityPromise(compiler::TNode<PromiseCapability> p_o) {
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<PromiseCapability> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 594);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, PromiseCapability::kPromiseOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseCapability> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseCapability> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StorePromiseCapabilityPromise(compiler::TNode<PromiseCapability> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<PromiseCapability> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 594);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseCapability> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseCapability> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadPromiseCapabilityResolve(compiler::TNode<PromiseCapability> p_o) {
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<PromiseCapability> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 595);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, PromiseCapability::kResolveOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseCapability> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseCapability> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StorePromiseCapabilityResolve(compiler::TNode<PromiseCapability> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<PromiseCapability> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 595);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseCapability> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseCapability> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadPromiseCapabilityReject(compiler::TNode<PromiseCapability> p_o) {
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<PromiseCapability> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 596);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, PromiseCapability::kRejectOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseCapability> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseCapability> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StorePromiseCapabilityReject(compiler::TNode<PromiseCapability> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseCapability, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<PromiseCapability> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 596);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseCapability> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseCapability> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadPromiseReactionNext(compiler::TNode<PromiseReaction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<PromiseReaction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 600);
compiler::TNode<Object> tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadObjectField(tmp0, PromiseReaction::kNextOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseReaction> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseReaction> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<Object>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StorePromiseReactionNext(compiler::TNode<PromiseReaction> p_o, compiler::TNode<Object> p_v) {
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<PromiseReaction> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 600);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 8, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseReaction> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseReaction> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadPromiseReactionRejectHandler(compiler::TNode<PromiseReaction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<PromiseReaction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 601);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, PromiseReaction::kRejectHandlerOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseReaction> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseReaction> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StorePromiseReactionRejectHandler(compiler::TNode<PromiseReaction> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<PromiseReaction> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 601);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 16, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseReaction> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseReaction> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadPromiseReactionFulfillHandler(compiler::TNode<PromiseReaction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<PromiseReaction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 602);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, PromiseReaction::kFulfillHandlerOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseReaction> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseReaction> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StorePromiseReactionFulfillHandler(compiler::TNode<PromiseReaction> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<PromiseReaction> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 602);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 24, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseReaction> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseReaction> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::LoadPromiseReactionPromiseOrCapability(compiler::TNode<PromiseReaction> p_o) {
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<PromiseReaction> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 603);
compiler::TNode<HeapObject> tmp1 = ca_.UncheckedCast<HeapObject>(CodeStubAssembler(state_).LoadObjectField(tmp0, PromiseReaction::kPromiseOrCapabilityOffset, MachineType::AnyTagged()));
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseReaction> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseReaction> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return compiler::TNode<HeapObject>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::StorePromiseReactionPromiseOrCapability(compiler::TNode<PromiseReaction> p_o, compiler::TNode<HeapObject> p_v) {
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<PromiseReaction, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    compiler::TNode<PromiseReaction> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 603);
    CodeStubAssembler(state_).StoreObjectField(tmp0, 32, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<PromiseReaction> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<PromiseReaction> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::Cast10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<HeapObject> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast10HeapObject(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<HeapObject> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<HeapObject> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<HeapObject> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<HeapObject>{tmp23};
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::Convert8ATuint327ATuint8(compiler::TNode<Uint32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1270);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp1;
    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<Uint32T> tmp3;
    compiler::TNode<Uint32T> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<Uint32T>{tmp4};
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::Convert8ATuint328ATuint16(compiler::TNode<Uint32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1270);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp1;
    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<Uint32T> tmp3;
    compiler::TNode<Uint32T> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<Uint32T>{tmp4};
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::Convert8ATuint328ATuint31(compiler::TNode<Uint32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1270);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Uint32T> tmp1;
    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<Uint32T> tmp3;
    compiler::TNode<Uint32T> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<Uint32T>{tmp4};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::UnsafeCast10JSFunction(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<JSFunction> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<JSFunction> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<JSFunction> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<JSFunction>{tmp8};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::UnsafeCast13ATConstructor(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<JSReceiver> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<JSReceiver>{tmp8};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::UnsafeCast5ATMap(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Map> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Map> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Map> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Map>{tmp8};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast7JSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast7JSArray(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArray>{tmp23};
}

compiler::TNode<JSArgumentsObjectWithLength> BaseBuiltinsFromDSLAssembler::Cast27JSArgumentsObjectWithLength(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArgumentsObjectWithLength> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArgumentsObjectWithLength> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArgumentsObjectWithLength> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArgumentsObjectWithLength> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast27JSArgumentsObjectWithLength(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArgumentsObjectWithLength> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArgumentsObjectWithLength> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArgumentsObjectWithLength> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArgumentsObjectWithLength>{tmp23};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is13ATFastJSArray20UT5ATSmi10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1389);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf13ATFastJSArray20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp16, tmp17, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<BoolT> tmp21;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1388);
    ca_.Goto(&block8, tmp19, tmp20, tmp21);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<BoolT> tmp24;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24);
  return compiler::TNode<BoolT>{tmp24};
}

void BaseBuiltinsFromDSLAssembler::BranchIf13ATFastJSArray20UT5ATSmi10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1378);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1379);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1376);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIfNot13ATFastJSArray20UT5ATSmi10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1384);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1385);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1382);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf20ATFastJSArrayForCopy20UT5ATSmi10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1378);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast20ATFastJSArrayForCopy(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1379);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1376);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is34ATFastJSArrayWithNoCustomIteration20UT5ATSmi10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1389);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf34ATFastJSArrayWithNoCustomIteration20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp16, tmp17, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<BoolT> tmp21;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1388);
    ca_.Goto(&block8, tmp19, tmp20, tmp21);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<BoolT> tmp24;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24);
  return compiler::TNode<BoolT>{tmp24};
}

compiler::TNode<Context> BaseBuiltinsFromDSLAssembler::Cast9ATContext(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<Context> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast9ATContext(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<Context> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Context> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Context> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<Context>{tmp23};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::UnsafeCast25UT9ATContext11ATFrameType(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = (compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Object>{tmp8};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast10JSReceiver(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSReceiver> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast10JSReceiver(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSReceiver> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSReceiver>{tmp23};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast39UT15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSReceiver> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast39UT15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSReceiver> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSReceiver>{tmp23};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1270);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(p_i));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<Smi>{tmp2};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::UnsafeCast7JSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<JSArray> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<JSArray> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<JSArray>{tmp8};
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::UnsafeCast18ATNumberDictionary(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, NumberDictionary> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, NumberDictionary> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<NumberDictionary> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<NumberDictionary> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<NumberDictionary> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<NumberDictionary>{tmp8};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::UnsafeCast10FixedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<FixedArray> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<FixedArray> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<FixedArray>{tmp8};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::UnsafeCast5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Smi>{tmp8};
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::UnsafeCast16FixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedDoubleArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedDoubleArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<FixedDoubleArray> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<FixedDoubleArray> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<FixedDoubleArray> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<FixedDoubleArray>{tmp8};
}

compiler::TNode<JSTypedArray> BaseBuiltinsFromDSLAssembler::UnsafeCast12JSTypedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<JSTypedArray> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<JSTypedArray> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<JSTypedArray>{tmp8};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::Cast8ATString(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<String> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast8ATString(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<String> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<String> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<String> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<String>{tmp23};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::UnsafeCast10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<HeapObject> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<HeapObject>{tmp8};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast13ATConstructor(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSReceiver> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATConstructor(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSReceiver> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSReceiver>{tmp23};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast13ATFastJSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArray>{tmp23};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::Cast10FixedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<FixedArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<FixedArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<FixedArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<FixedArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<FixedArray>{tmp23};
}

compiler::TNode<Context> BaseBuiltinsFromDSLAssembler::UnsafeCast9ATContext(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<Context> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Context> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Context>{tmp8};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast20ATFastJSArrayForCopy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast20ATFastJSArrayForCopy(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArray>{tmp23};
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::Cast12ATJSDataView(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSDataView> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSDataView> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATJSDataView(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSDataView> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSDataView> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSDataView> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSDataView>{tmp23};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArray>{tmp23};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is10JSReceiver20UT5ATSmi10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1389);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf10JSReceiver20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp16, tmp17, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<BoolT> tmp21;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1388);
    ca_.Goto(&block8, tmp19, tmp20, tmp21);
  }

    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<BoolT> tmp24;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24);
  return compiler::TNode<BoolT>{tmp24};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::Cast5ATMap(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Map> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Map> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<Map> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATMap(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<Map> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Map> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Map> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<Map>{tmp23};
}

compiler::TNode<JSArrayBuffer> BaseBuiltinsFromDSLAssembler::Cast13JSArrayBuffer(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArrayBuffer> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArrayBuffer> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArrayBuffer> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArrayBuffer> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast13JSArrayBuffer(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArrayBuffer> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArrayBuffer> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArrayBuffer> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArrayBuffer>{tmp23};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi5ATSmi(compiler::TNode<Smi> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1270);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    compiler::TNode<Smi> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return compiler::TNode<Smi>{tmp4};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1270);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(p_i));
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1269);
    ca_.Goto(&block2, tmp1);
  }

    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block2, &tmp2);
  return compiler::TNode<IntPtrT>{tmp2};
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::UnsafeCast8JSObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<JSObject> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<JSObject> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<JSObject> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<JSObject>{tmp8};
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATHeapNumber(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapNumber> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapNumber> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<HeapNumber> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<HeapNumber> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<HeapNumber> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<HeapNumber>{tmp8};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::UnsafeCast39UT15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<JSReceiver> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<JSReceiver>{tmp8};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::UnsafeCast10JSReceiver(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<JSReceiver> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<JSReceiver>{tmp8};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::Cast52UT11ATUndefined15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 935);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<HeapObject> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast52UT11ATUndefined15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<HeapObject> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<HeapObject> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 933);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<HeapObject> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<HeapObject>{tmp23};
}

void BaseBuiltinsFromDSLAssembler::BranchIf34ATFastJSArrayWithNoCustomIteration20UT5ATSmi10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1378);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1379);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1376);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::UnsafeCast22UT12ATHeapNumber5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Number>{tmp8};
}

void BaseBuiltinsFromDSLAssembler::BranchIf10JSReceiver20UT5ATSmi10HeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1378);
    compiler::TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast10JSReceiver(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1379);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1376);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::UnsafeCast19FixedTypedArrayBase(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedTypedArrayBase> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedTypedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1394);
    compiler::TNode<FixedTypedArrayBase> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<FixedTypedArrayBase> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/base.tq", 1392);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<FixedTypedArrayBase> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<FixedTypedArrayBase>{tmp8};
}

}  // namespace internal
}  // namespace v8

