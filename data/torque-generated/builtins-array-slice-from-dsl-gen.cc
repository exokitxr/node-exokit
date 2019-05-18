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

compiler::TNode<JSArray> ArraySliceBuiltinsFromDSLAssembler::HandleSimpleArgumentsSlice(compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase, FixedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArgumentsObjectWithLength> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 11);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(FixedArray::kMaxRegularLength));
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4}));
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSArgumentsObjectWithLength> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSArgumentsObjectWithLength> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 13);
    compiler::TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp12}, compiler::TNode<Smi>{tmp13}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 15);
    compiler::TNode<FixedArrayBase> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp11}));
    compiler::TNode<FixedArray> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp15}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSArgumentsObjectWithLength> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<FixedArrayBase> tmp22;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSArgumentsObjectWithLength> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<FixedArrayBase> tmp28;
    compiler::TNode<FixedArray> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 14);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 16);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadFixedArrayBaseLength(compiler::TNode<FixedArrayBase>{tmp29}));
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp27}, compiler::TNode<Smi>{tmp30}));
    ca_.Branch(tmp31, &block7, &block8, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<JSArgumentsObjectWithLength> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<FixedArray> tmp37;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<JSArgumentsObjectWithLength> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<FixedArray> tmp43;
    ca_.Bind(&block8, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 18);
    compiler::TNode<Map> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, compiler::TNode<Context>{tmp38}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 20);
    compiler::TNode<JSArray> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<JSArray>(CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, compiler::TNode<Map>{tmp44}, compiler::TNode<Smi>{tmp41}, compiler::TNode<Smi>{tmp41}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 19);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 22);
    compiler::TNode<FixedArrayBase> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp45}));
    compiler::TNode<FixedArray> tmp47;
    USE(tmp47);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp47 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp46}, &label0);
    ca_.Goto(&block9, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<JSArgumentsObjectWithLength> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Smi> tmp52;
    compiler::TNode<FixedArray> tmp53;
    compiler::TNode<Map> tmp54;
    compiler::TNode<JSArray> tmp55;
    compiler::TNode<FixedArrayBase> tmp56;
    ca_.Bind(&block10, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block1);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<JSArgumentsObjectWithLength> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Smi> tmp60;
    compiler::TNode<Smi> tmp61;
    compiler::TNode<FixedArray> tmp62;
    compiler::TNode<Map> tmp63;
    compiler::TNode<JSArray> tmp64;
    compiler::TNode<FixedArrayBase> tmp65;
    compiler::TNode<FixedArray> tmp66;
    ca_.Bind(&block9, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 21);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 24);
    compiler::TNode<IntPtrT> tmp67;
    USE(tmp67);
    tmp67 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp59}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 25);
    compiler::TNode<IntPtrT> tmp68;
    USE(tmp68);
    tmp68 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp60}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 23);
    compiler::TNode<IntPtrT> tmp69;
    USE(tmp69);
    tmp69 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp66}, compiler::TNode<IntPtrT>{tmp69}, compiler::TNode<FixedArrayBase>{tmp62}, compiler::TNode<IntPtrT>{tmp67}, compiler::TNode<IntPtrT>{tmp68});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 26);
    ca_.Goto(&block2, tmp57, tmp58, tmp59, tmp60, tmp64);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<JSArgumentsObjectWithLength> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<JSArray> tmp74;
    ca_.Bind(&block2, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 6);
    ca_.Goto(&block11, tmp70, tmp71, tmp72, tmp73, tmp74);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp75;
    compiler::TNode<JSArgumentsObjectWithLength> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<JSArray> tmp79;
    ca_.Bind(&block11, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
  return compiler::TNode<JSArray>{tmp79};
}

compiler::TNode<JSArray> ArraySliceBuiltinsFromDSLAssembler::HandleFastAliasedSloppyArgumentsSlice(compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase, SloppyArgumentsElements> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, Object, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArgumentsObjectWithLength> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 34);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(FixedArray::kMaxRegularLength));
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4}));
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSArgumentsObjectWithLength> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSArgumentsObjectWithLength> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 37);
    compiler::TNode<FixedArrayBase> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp11}));
    compiler::TNode<SloppyArgumentsElements> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = BaseBuiltinsFromDSLAssembler(state_).Cast23SloppyArgumentsElements(compiler::TNode<HeapObject>{tmp14}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp14);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSArgumentsObjectWithLength> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<FixedArrayBase> tmp20;
    ca_.Bind(&block6, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSArgumentsObjectWithLength> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<FixedArrayBase> tmp25;
    compiler::TNode<SloppyArgumentsElements> tmp26;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 36);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 38);
    compiler::TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadFixedArrayBaseLength(compiler::TNode<FixedArrayBase>{tmp26}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 40);
    compiler::TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(SloppyArgumentsElements::kParameterMapStart));
    compiler::TNode<Smi> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp27}, compiler::TNode<Smi>{tmp28}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 39);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 44);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp23}, compiler::TNode<Smi>{tmp24}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 46);
    compiler::TNode<Object> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp26}, SloppyArgumentsElements::kArgumentsIndex));
    compiler::TNode<FixedArray> tmp32;
    USE(tmp32);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp32 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<Context>{tmp21}, compiler::TNode<Object>{tmp31}, &label0);
    ca_.Goto(&block7, tmp21, tmp22, tmp23, tmp24, tmp26, tmp27, tmp29, tmp30, tmp31, tmp32);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp24, tmp26, tmp27, tmp29, tmp30, tmp31);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSArgumentsObjectWithLength> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<SloppyArgumentsElements> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<Smi> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Object> tmp41;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<JSArgumentsObjectWithLength> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<Smi> tmp45;
    compiler::TNode<SloppyArgumentsElements> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<Smi> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<FixedArray> tmp51;
    ca_.Bind(&block7, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 45);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 48);
    compiler::TNode<Smi> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadFixedArrayBaseLength(compiler::TNode<FixedArrayBase>{tmp51}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 49);
    compiler::TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp49}, compiler::TNode<Smi>{tmp52}));
    ca_.Branch(tmp53, &block9, &block10, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp51, tmp52);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<JSArgumentsObjectWithLength> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<Smi> tmp57;
    compiler::TNode<SloppyArgumentsElements> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Smi> tmp60;
    compiler::TNode<Smi> tmp61;
    compiler::TNode<FixedArray> tmp62;
    compiler::TNode<Smi> tmp63;
    ca_.Bind(&block9, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<JSArgumentsObjectWithLength> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<SloppyArgumentsElements> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<FixedArray> tmp72;
    compiler::TNode<Smi> tmp73;
    ca_.Bind(&block10, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 52);
    compiler::TNode<Object> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp68}, SloppyArgumentsElements::kContextIndex));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 51);
    compiler::TNode<Context> tmp75;
    USE(tmp75);
    tmp75 = ca_.UncheckedCast<Context>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast9ATContext(compiler::TNode<Context>{tmp64}, compiler::TNode<Object>{tmp74}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 54);
    compiler::TNode<Map> tmp76;
    USE(tmp76);
    tmp76 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, compiler::TNode<Context>{tmp64}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 56);
    compiler::TNode<JSArray> tmp77;
    USE(tmp77);
    tmp77 = ca_.UncheckedCast<JSArray>(CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, compiler::TNode<Map>{tmp76}, compiler::TNode<Smi>{tmp67}, compiler::TNode<Smi>{tmp67}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 55);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 58);
    compiler::TNode<Smi> tmp78;
    USE(tmp78);
    tmp78 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 59);
    compiler::TNode<FixedArrayBase> tmp79;
    USE(tmp79);
    tmp79 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp77}));
    compiler::TNode<FixedArray> tmp80;
    USE(tmp80);
    tmp80 = ca_.UncheckedCast<FixedArray>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast10FixedArray(compiler::TNode<Context>{tmp64}, compiler::TNode<Object>{tmp79}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 60);
    compiler::TNode<Smi> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiMin(compiler::TNode<Smi>{tmp70}, compiler::TNode<Smi>{tmp71}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 63);
    ca_.Goto(&block13, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp75, tmp76, tmp77, tmp78, tmp80, tmp81, tmp66);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<JSArgumentsObjectWithLength> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<Smi> tmp85;
    compiler::TNode<SloppyArgumentsElements> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<FixedArray> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<Context> tmp92;
    compiler::TNode<Map> tmp93;
    compiler::TNode<JSArray> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<FixedArray> tmp96;
    compiler::TNode<Smi> tmp97;
    compiler::TNode<Smi> tmp98;
    ca_.Bind(&block13, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    compiler::TNode<BoolT> tmp99;
    USE(tmp99);
    tmp99 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp98}, compiler::TNode<Smi>{tmp97}));
    ca_.Branch(tmp99, &block11, &block12, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<JSArgumentsObjectWithLength> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<SloppyArgumentsElements> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<Smi> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<FixedArray> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Context> tmp110;
    compiler::TNode<Map> tmp111;
    compiler::TNode<JSArray> tmp112;
    compiler::TNode<Smi> tmp113;
    compiler::TNode<FixedArray> tmp114;
    compiler::TNode<Smi> tmp115;
    compiler::TNode<Smi> tmp116;
    ca_.Bind(&block11, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 65);
    compiler::TNode<Smi> tmp117;
    USE(tmp117);
    tmp117 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(SloppyArgumentsElements::kParameterMapStart));
    compiler::TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp116}, compiler::TNode<Smi>{tmp117}));
    compiler::TNode<Object> tmp119;
    USE(tmp119);
    tmp119 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp104}, compiler::TNode<Smi>{tmp118}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 64);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 66);
    compiler::TNode<Oddball> tmp120;
    USE(tmp120);
    tmp120 = BaseBuiltinsFromDSLAssembler(state_).Hole();
    compiler::TNode<BoolT> tmp121;
    USE(tmp121);
    tmp121 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp119}, compiler::TNode<HeapObject>{tmp120}));
    ca_.Branch(tmp121, &block15, &block16, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp119);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp122;
    compiler::TNode<JSArgumentsObjectWithLength> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<Smi> tmp125;
    compiler::TNode<SloppyArgumentsElements> tmp126;
    compiler::TNode<Smi> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<FixedArray> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<Context> tmp132;
    compiler::TNode<Map> tmp133;
    compiler::TNode<JSArray> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<FixedArray> tmp136;
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Object> tmp139;
    ca_.Bind(&block15, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 67);
    compiler::TNode<Smi> tmp140;
    USE(tmp140);
    tmp140 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast5ATSmi(compiler::TNode<Context>{tmp122}, compiler::TNode<Object>{tmp139}));
    compiler::TNode<Object> tmp141;
    USE(tmp141);
    tmp141 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp132}, compiler::TNode<Smi>{tmp140}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 66);
    ca_.Goto(&block18, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp141);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp142;
    compiler::TNode<JSArgumentsObjectWithLength> tmp143;
    compiler::TNode<Smi> tmp144;
    compiler::TNode<Smi> tmp145;
    compiler::TNode<SloppyArgumentsElements> tmp146;
    compiler::TNode<Smi> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<FixedArray> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Context> tmp152;
    compiler::TNode<Map> tmp153;
    compiler::TNode<JSArray> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<FixedArray> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Object> tmp159;
    ca_.Bind(&block16, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 68);
    compiler::TNode<Object> tmp160;
    USE(tmp160);
    tmp160 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp150}, compiler::TNode<Smi>{tmp158}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 66);
    ca_.Goto(&block17, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp161;
    compiler::TNode<JSArgumentsObjectWithLength> tmp162;
    compiler::TNode<Smi> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<SloppyArgumentsElements> tmp165;
    compiler::TNode<Smi> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<FixedArray> tmp169;
    compiler::TNode<Smi> tmp170;
    compiler::TNode<Context> tmp171;
    compiler::TNode<Map> tmp172;
    compiler::TNode<JSArray> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<FixedArray> tmp175;
    compiler::TNode<Smi> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<Object> tmp179;
    ca_.Bind(&block18, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179);
    ca_.Goto(&block17, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp180;
    compiler::TNode<JSArgumentsObjectWithLength> tmp181;
    compiler::TNode<Smi> tmp182;
    compiler::TNode<Smi> tmp183;
    compiler::TNode<SloppyArgumentsElements> tmp184;
    compiler::TNode<Smi> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<FixedArray> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Context> tmp190;
    compiler::TNode<Map> tmp191;
    compiler::TNode<JSArray> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<FixedArray> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Object> tmp197;
    compiler::TNode<Object> tmp198;
    ca_.Bind(&block17, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 70);
    compiler::TNode<Smi> tmp199;
    USE(tmp199);
    tmp199 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp200;
    USE(tmp200);
    tmp200 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp193}, compiler::TNode<Smi>{tmp199}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 69);
    CodeStubAssembler(state_).StoreFixedArrayElementSmi(compiler::TNode<FixedArray>{tmp194}, compiler::TNode<Smi>{tmp193}, compiler::TNode<Object>{tmp198}, SKIP_WRITE_BARRIER);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 63);
    ca_.Goto(&block14, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp200, tmp194, tmp195, tmp196);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp201;
    compiler::TNode<JSArgumentsObjectWithLength> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Smi> tmp204;
    compiler::TNode<SloppyArgumentsElements> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<FixedArray> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Context> tmp211;
    compiler::TNode<Map> tmp212;
    compiler::TNode<JSArray> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<FixedArray> tmp215;
    compiler::TNode<Smi> tmp216;
    compiler::TNode<Smi> tmp217;
    ca_.Bind(&block14, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217);
    compiler::TNode<Smi> tmp218;
    USE(tmp218);
    tmp218 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp219;
    USE(tmp219);
    tmp219 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp217}, compiler::TNode<Smi>{tmp218}));
    ca_.Goto(&block13, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp219);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp220;
    compiler::TNode<JSArgumentsObjectWithLength> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<SloppyArgumentsElements> tmp224;
    compiler::TNode<Smi> tmp225;
    compiler::TNode<Smi> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<FixedArray> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<Context> tmp230;
    compiler::TNode<Map> tmp231;
    compiler::TNode<JSArray> tmp232;
    compiler::TNode<Smi> tmp233;
    compiler::TNode<FixedArray> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    ca_.Bind(&block12, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 75);
    compiler::TNode<Smi> tmp237;
    USE(tmp237);
    tmp237 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiMax(compiler::TNode<Smi>{tmp226}, compiler::TNode<Smi>{tmp222}));
    compiler::TNode<Smi> tmp238;
    USE(tmp238);
    tmp238 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiMin(compiler::TNode<Smi>{tmp237}, compiler::TNode<Smi>{tmp227}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 76);
    compiler::TNode<Smi> tmp239;
    USE(tmp239);
    tmp239 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp227}, compiler::TNode<Smi>{tmp238}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 78);
    compiler::TNode<IntPtrT> tmp240;
    USE(tmp240);
    tmp240 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp233}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 79);
    compiler::TNode<IntPtrT> tmp241;
    USE(tmp241);
    tmp241 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp238}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 80);
    compiler::TNode<IntPtrT> tmp242;
    USE(tmp242);
    tmp242 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp239}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 77);
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp234}, compiler::TNode<IntPtrT>{tmp240}, compiler::TNode<FixedArrayBase>{tmp228}, compiler::TNode<IntPtrT>{tmp241}, compiler::TNode<IntPtrT>{tmp242});
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 81);
    ca_.Goto(&block2, tmp220, tmp221, tmp222, tmp223, tmp232);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp243;
    compiler::TNode<JSArgumentsObjectWithLength> tmp244;
    compiler::TNode<Smi> tmp245;
    compiler::TNode<Smi> tmp246;
    compiler::TNode<JSArray> tmp247;
    ca_.Bind(&block2, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 29);
    ca_.Goto(&block19, tmp243, tmp244, tmp245, tmp246, tmp247);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp248;
    compiler::TNode<JSArgumentsObjectWithLength> tmp249;
    compiler::TNode<Smi> tmp250;
    compiler::TNode<Smi> tmp251;
    compiler::TNode<JSArray> tmp252;
    ca_.Bind(&block19, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
  return compiler::TNode<JSArray>{tmp252};
}

compiler::TNode<JSArray> ArraySliceBuiltinsFromDSLAssembler::HandleFastSlice(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<Number> p_startNumber, compiler::TNode<Number> p_countNumber, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object, JSArgumentsObjectWithLength> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map, Context, JSArgumentsObjectWithLength, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map, Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map, Context, JSArgumentsObjectWithLength, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map, Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, JSArray> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_startNumber, p_countNumber);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 88);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp2, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Number> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 89);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp13}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Number> tmp22;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Number> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 92);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 93);
    compiler::TNode<JSArray> tmp30;
    USE(tmp30);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp30 = BaseBuiltinsFromDSLAssembler(state_).Cast20ATFastJSArrayForCopy(compiler::TNode<Context>{tmp23}, compiler::TNode<Object>{tmp24}, &label0);
    ca_.Goto(&block9, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp24, tmp24, tmp30);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp24, tmp24);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    ca_.Bind(&block10, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block8, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<JSArray> tmp47;
    ca_.Bind(&block9, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 100);
    compiler::TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp43}, compiler::TNode<Smi>{tmp44}));
    compiler::TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp47}));
    compiler::TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp48}, compiler::TNode<Smi>{tmp49}));
    ca_.Branch(tmp50, &block11, &block12, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp47);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<Number> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<JSArray> tmp58;
    ca_.Bind(&block11, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSArray> tmp66;
    ca_.Bind(&block12, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 101);
    compiler::TNode<JSArray> tmp67;
    tmp67 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kExtractFastJSArray, tmp59, tmp66, tmp63, tmp64));
    USE(tmp67);
    ca_.Goto(&block2, tmp59, tmp60, tmp61, tmp62, tmp67);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Number> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Object> tmp74;
    ca_.Bind(&block8, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 103);
    compiler::TNode<JSArgumentsObjectWithLength> tmp75;
    USE(tmp75);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp75 = BaseBuiltinsFromDSLAssembler(state_).Cast27JSArgumentsObjectWithLength(compiler::TNode<Context>{tmp68}, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp74)}, &label0);
    ca_.Goto(&block15, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, ca_.UncheckedCast<Object>(tmp74), tmp75);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, ca_.UncheckedCast<Object>(tmp74));
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<Number> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.Goto(&block14, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<Number> tmp86;
    compiler::TNode<Number> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<JSArgumentsObjectWithLength> tmp92;
    ca_.Bind(&block15, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 104);
    compiler::TNode<Context> tmp93;
    USE(tmp93);
    tmp93 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp84}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 105);
    compiler::TNode<Map> tmp94;
    USE(tmp94);
    tmp94 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).LoadHeapObjectMap(compiler::TNode<HeapObject>{tmp92}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 106);
    compiler::TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsFastAliasedArgumentsMap(compiler::TNode<Context>{tmp84}, compiler::TNode<Map>{tmp94}));
    ca_.Branch(tmp95, &block17, &block18, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp92, tmp93, tmp94);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Number> tmp98;
    compiler::TNode<Number> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<Smi> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<JSArgumentsObjectWithLength> tmp103;
    compiler::TNode<Context> tmp104;
    compiler::TNode<Map> tmp105;
    ca_.Bind(&block17, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 107);
    compiler::TNode<JSArray> tmp106;
    USE(tmp106);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp106 = ArraySliceBuiltinsFromDSLAssembler(state_).HandleFastAliasedSloppyArgumentsSlice(compiler::TNode<Context>{tmp96}, compiler::TNode<JSArgumentsObjectWithLength>{tmp103}, compiler::TNode<Smi>{tmp100}, compiler::TNode<Smi>{tmp101}, &label0);
    ca_.Goto(&block20, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp96, tmp103, tmp100, tmp101, tmp106);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp96, tmp103, tmp100, tmp101);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Number> tmp109;
    compiler::TNode<Number> tmp110;
    compiler::TNode<Smi> tmp111;
    compiler::TNode<Smi> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<JSArgumentsObjectWithLength> tmp114;
    compiler::TNode<Context> tmp115;
    compiler::TNode<Map> tmp116;
    compiler::TNode<Context> tmp117;
    compiler::TNode<JSArgumentsObjectWithLength> tmp118;
    compiler::TNode<Smi> tmp119;
    compiler::TNode<Smi> tmp120;
    ca_.Bind(&block21, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.Goto(&block1);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Number> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Smi> tmp125;
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<JSArgumentsObjectWithLength> tmp128;
    compiler::TNode<Context> tmp129;
    compiler::TNode<Map> tmp130;
    compiler::TNode<Context> tmp131;
    compiler::TNode<JSArgumentsObjectWithLength> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<JSArray> tmp135;
    ca_.Bind(&block20, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    ca_.Goto(&block2, tmp121, tmp122, tmp123, tmp124, tmp135);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Number> tmp138;
    compiler::TNode<Number> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<JSArgumentsObjectWithLength> tmp143;
    compiler::TNode<Context> tmp144;
    compiler::TNode<Map> tmp145;
    ca_.Bind(&block18, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 109);
    compiler::TNode<BoolT> tmp146;
    USE(tmp146);
    tmp146 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsStrictArgumentsMap(compiler::TNode<Context>{tmp136}, compiler::TNode<Map>{tmp145}));
    ca_.Branch(tmp146, &block22, &block24, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<Number> tmp149;
    compiler::TNode<Number> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<JSArgumentsObjectWithLength> tmp154;
    compiler::TNode<Context> tmp155;
    compiler::TNode<Map> tmp156;
    ca_.Bind(&block24, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156);
    compiler::TNode<BoolT> tmp157;
    USE(tmp157);
    tmp157 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsSloppyArgumentsMap(compiler::TNode<Context>{tmp147}, compiler::TNode<Map>{tmp156}));
    ca_.Branch(tmp157, &block22, &block23, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp158;
    compiler::TNode<Object> tmp159;
    compiler::TNode<Number> tmp160;
    compiler::TNode<Number> tmp161;
    compiler::TNode<Smi> tmp162;
    compiler::TNode<Smi> tmp163;
    compiler::TNode<Object> tmp164;
    compiler::TNode<JSArgumentsObjectWithLength> tmp165;
    compiler::TNode<Context> tmp166;
    compiler::TNode<Map> tmp167;
    ca_.Bind(&block22, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 110);
    compiler::TNode<JSArray> tmp168;
    USE(tmp168);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp168 = ArraySliceBuiltinsFromDSLAssembler(state_).HandleSimpleArgumentsSlice(compiler::TNode<Context>{tmp158}, compiler::TNode<JSArgumentsObjectWithLength>{tmp165}, compiler::TNode<Smi>{tmp162}, compiler::TNode<Smi>{tmp163}, &label0);
    ca_.Goto(&block25, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp158, tmp165, tmp162, tmp163, tmp168);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block26, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp158, tmp165, tmp162, tmp163);
    }
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<Number> tmp171;
    compiler::TNode<Number> tmp172;
    compiler::TNode<Smi> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<JSArgumentsObjectWithLength> tmp176;
    compiler::TNode<Context> tmp177;
    compiler::TNode<Map> tmp178;
    compiler::TNode<Context> tmp179;
    compiler::TNode<JSArgumentsObjectWithLength> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<Smi> tmp182;
    ca_.Bind(&block26, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.Goto(&block1);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp183;
    compiler::TNode<Object> tmp184;
    compiler::TNode<Number> tmp185;
    compiler::TNode<Number> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<JSArgumentsObjectWithLength> tmp190;
    compiler::TNode<Context> tmp191;
    compiler::TNode<Map> tmp192;
    compiler::TNode<Context> tmp193;
    compiler::TNode<JSArgumentsObjectWithLength> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<JSArray> tmp197;
    ca_.Bind(&block25, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197);
    ca_.Goto(&block2, tmp183, tmp184, tmp185, tmp186, tmp197);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<Number> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<Smi> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<JSArgumentsObjectWithLength> tmp205;
    compiler::TNode<Context> tmp206;
    compiler::TNode<Map> tmp207;
    ca_.Bind(&block23, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 106);
    ca_.Goto(&block19, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp208;
    compiler::TNode<Object> tmp209;
    compiler::TNode<Number> tmp210;
    compiler::TNode<Number> tmp211;
    compiler::TNode<Smi> tmp212;
    compiler::TNode<Smi> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<JSArgumentsObjectWithLength> tmp215;
    compiler::TNode<Context> tmp216;
    compiler::TNode<Map> tmp217;
    ca_.Bind(&block19, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 103);
    ca_.Goto(&block13, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp218;
    compiler::TNode<Object> tmp219;
    compiler::TNode<Number> tmp220;
    compiler::TNode<Number> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<Object> tmp224;
    ca_.Bind(&block14, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 114);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 103);
    ca_.Goto(&block13, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp225;
    compiler::TNode<Object> tmp226;
    compiler::TNode<Number> tmp227;
    compiler::TNode<Number> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Object> tmp231;
    ca_.Bind(&block13, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 93);
    ca_.Goto(&block7, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp232;
    compiler::TNode<Object> tmp233;
    compiler::TNode<Number> tmp234;
    compiler::TNode<Number> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Object> tmp238;
    ca_.Bind(&block7, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 92);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 117);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp239;
    compiler::TNode<Object> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<Number> tmp242;
    compiler::TNode<JSArray> tmp243;
    ca_.Bind(&block2, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 84);
    ca_.Goto(&block27, tmp239, tmp240, tmp241, tmp242, tmp243);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<Number> tmp246;
    compiler::TNode<Number> tmp247;
    compiler::TNode<JSArray> tmp248;
    ca_.Bind(&block27, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248);
  return compiler::TNode<JSArray>{tmp248};
}

TF_BUILTIN(ArrayPrototypeSlice, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Context, JSReceiver, Number, Number> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Context, JSReceiver, Number, Number, JSArray> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Number> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Number> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 125);
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3}));
    ca_.Branch(tmp4, &block1, &block2, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block1, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 126);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 127);
    compiler::TNode<JSArray> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = BaseBuiltinsFromDSLAssembler(state_).Cast20ATFastJSArrayForCopy(compiler::TNode<Context>{tmp5}, compiler::TNode<Object>{tmp6}, &label0);
    ca_.Goto(&block5, tmp5, tmp6, tmp6, tmp6, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp5, tmp6, tmp6, tmp6);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block6, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block4, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<JSArray> tmp16;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 128);
    compiler::TNode<JSArray> tmp17;
    tmp17 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCloneFastJSArray, tmp12, tmp16));
    USE(tmp17);
    arguments->PopAndReturn(tmp17);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 130);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 127);
    ca_.Goto(&block3, tmp18, tmp19, tmp20);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 126);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 125);
    ca_.Goto(&block2, tmp21, tmp22);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block2, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 136);
    compiler::TNode<JSReceiver> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp24}, compiler::TNode<Object>{tmp25}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 139);
    compiler::TNode<Number> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).GetLengthProperty(compiler::TNode<Context>{tmp24}, compiler::TNode<Object>{tmp26}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 142);
    compiler::TNode<IntPtrT> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp28}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 143);
    compiler::TNode<Number> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp24}, compiler::TNode<Object>{tmp29}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 147);
    compiler::TNode<Number> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp30}, compiler::TNode<Number>{tmp31}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp24, tmp25, tmp26, tmp27, tmp29, tmp30, tmp30);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block12, tmp24, tmp25, tmp26, tmp27, tmp29, tmp30, tmp30);
    }
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Number> tmp37;
    compiler::TNode<Number> tmp38;
    ca_.Bind(&block11, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block7, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Number> tmp44;
    compiler::TNode<Number> tmp45;
    ca_.Bind(&block12, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.Goto(&block8, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Number> tmp51;
    ca_.Bind(&block7, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    compiler::TNode<Number> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp49}, compiler::TNode<Number>{tmp51}));
    compiler::TNode<Number> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<Number> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Max(compiler::TNode<Number>{tmp52}, compiler::TNode<Number>{tmp53}));
    ca_.Goto(&block10, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp54);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Number> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Number> tmp60;
    ca_.Bind(&block8, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 148);
    compiler::TNode<Number> tmp61;
    USE(tmp61);
    tmp61 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Min(compiler::TNode<Number>{tmp60}, compiler::TNode<Number>{tmp58}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 147);
    ca_.Goto(&block9, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    compiler::TNode<Number> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Number> tmp67;
    compiler::TNode<Number> tmp68;
    ca_.Bind(&block10, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block9, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Number> tmp74;
    compiler::TNode<Number> tmp75;
    ca_.Bind(&block9, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 152);
    compiler::TNode<IntPtrT> tmp76;
    USE(tmp76);
    tmp76 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp77;
    USE(tmp77);
    tmp77 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp76}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 154);
    compiler::TNode<Oddball> tmp78;
    USE(tmp78);
    tmp78 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp79;
    USE(tmp79);
    tmp79 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp77}, compiler::TNode<HeapObject>{tmp78}));
    ca_.Branch(tmp79, &block13, &block14, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp77);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<JSReceiver> tmp82;
    compiler::TNode<Number> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Number> tmp85;
    compiler::TNode<Number> tmp86;
    compiler::TNode<Object> tmp87;
    ca_.Bind(&block13, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block16, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp83);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<JSReceiver> tmp90;
    compiler::TNode<Number> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Number> tmp93;
    compiler::TNode<Number> tmp94;
    compiler::TNode<Object> tmp95;
    ca_.Bind(&block14, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    compiler::TNode<Number> tmp96;
    USE(tmp96);
    tmp96 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp88}, compiler::TNode<Object>{tmp95}));
    ca_.Goto(&block15, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<Number> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Number> tmp102;
    compiler::TNode<Number> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<Number> tmp105;
    ca_.Bind(&block16, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.Goto(&block15, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<JSReceiver> tmp108;
    compiler::TNode<Number> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Number> tmp111;
    compiler::TNode<Number> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<Number> tmp114;
    ca_.Bind(&block15, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 153);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 159);
    compiler::TNode<Number> tmp115;
    USE(tmp115);
    tmp115 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp114}, compiler::TNode<Number>{tmp115}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp114);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block22, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp114);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSReceiver> tmp118;
    compiler::TNode<Number> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Number> tmp121;
    compiler::TNode<Number> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Number> tmp125;
    ca_.Bind(&block21, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.Goto(&block17, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<JSReceiver> tmp128;
    compiler::TNode<Number> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Number> tmp131;
    compiler::TNode<Number> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Number> tmp134;
    compiler::TNode<Number> tmp135;
    ca_.Bind(&block22, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    ca_.Goto(&block18, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<JSReceiver> tmp138;
    compiler::TNode<Number> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Number> tmp141;
    compiler::TNode<Number> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Number> tmp144;
    ca_.Bind(&block17, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144);
    compiler::TNode<Number> tmp145;
    USE(tmp145);
    tmp145 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp139}, compiler::TNode<Number>{tmp144}));
    compiler::TNode<Number> tmp146;
    USE(tmp146);
    tmp146 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<Number> tmp147;
    USE(tmp147);
    tmp147 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Max(compiler::TNode<Number>{tmp145}, compiler::TNode<Number>{tmp146}));
    ca_.Goto(&block20, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp147);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp148;
    compiler::TNode<Object> tmp149;
    compiler::TNode<JSReceiver> tmp150;
    compiler::TNode<Number> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<Number> tmp153;
    compiler::TNode<Number> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<Number> tmp156;
    ca_.Bind(&block18, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156);
    compiler::TNode<Number> tmp157;
    USE(tmp157);
    tmp157 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Min(compiler::TNode<Number>{tmp156}, compiler::TNode<Number>{tmp151}));
    ca_.Goto(&block19, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp158;
    compiler::TNode<Object> tmp159;
    compiler::TNode<JSReceiver> tmp160;
    compiler::TNode<Number> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<Number> tmp163;
    compiler::TNode<Number> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<Number> tmp166;
    compiler::TNode<Number> tmp167;
    ca_.Bind(&block20, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    ca_.Goto(&block19, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<JSReceiver> tmp170;
    compiler::TNode<Number> tmp171;
    compiler::TNode<Object> tmp172;
    compiler::TNode<Number> tmp173;
    compiler::TNode<Number> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<Number> tmp176;
    compiler::TNode<Number> tmp177;
    ca_.Bind(&block19, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 158);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 162);
    compiler::TNode<Number> tmp178;
    USE(tmp178);
    tmp178 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp177}, compiler::TNode<Number>{tmp174}));
    compiler::TNode<Number> tmp179;
    USE(tmp179);
    tmp179 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<Number> tmp180;
    USE(tmp180);
    tmp180 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Max(compiler::TNode<Number>{tmp178}, compiler::TNode<Number>{tmp179}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 172);
    compiler::TNode<JSArray> tmp181;
    USE(tmp181);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp181 = ArraySliceBuiltinsFromDSLAssembler(state_).HandleFastSlice(compiler::TNode<Context>{tmp168}, compiler::TNode<Object>{tmp170}, compiler::TNode<Number>{tmp174}, compiler::TNode<Number>{tmp180}, &label0);
    ca_.Goto(&block25, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp180, tmp168, tmp170, tmp174, tmp180, tmp181);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block26, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp180, tmp168, tmp170, tmp174, tmp180);
    }
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<JSReceiver> tmp184;
    compiler::TNode<Number> tmp185;
    compiler::TNode<Object> tmp186;
    compiler::TNode<Number> tmp187;
    compiler::TNode<Number> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<Number> tmp190;
    compiler::TNode<Number> tmp191;
    compiler::TNode<Number> tmp192;
    compiler::TNode<Context> tmp193;
    compiler::TNode<JSReceiver> tmp194;
    compiler::TNode<Number> tmp195;
    compiler::TNode<Number> tmp196;
    ca_.Bind(&block26, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196);
    ca_.Goto(&block24, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<JSReceiver> tmp199;
    compiler::TNode<Number> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<Number> tmp202;
    compiler::TNode<Number> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<Number> tmp205;
    compiler::TNode<Number> tmp206;
    compiler::TNode<Number> tmp207;
    compiler::TNode<Context> tmp208;
    compiler::TNode<JSReceiver> tmp209;
    compiler::TNode<Number> tmp210;
    compiler::TNode<Number> tmp211;
    compiler::TNode<JSArray> tmp212;
    ca_.Bind(&block25, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    arguments->PopAndReturn(tmp212);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<JSReceiver> tmp215;
    compiler::TNode<Number> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<Number> tmp218;
    compiler::TNode<Number> tmp219;
    compiler::TNode<Object> tmp220;
    compiler::TNode<Number> tmp221;
    compiler::TNode<Number> tmp222;
    compiler::TNode<Number> tmp223;
    ca_.Bind(&block24, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 171);
    ca_.Goto(&block23, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp224;
    compiler::TNode<Object> tmp225;
    compiler::TNode<JSReceiver> tmp226;
    compiler::TNode<Number> tmp227;
    compiler::TNode<Object> tmp228;
    compiler::TNode<Number> tmp229;
    compiler::TNode<Number> tmp230;
    compiler::TNode<Object> tmp231;
    compiler::TNode<Number> tmp232;
    compiler::TNode<Number> tmp233;
    compiler::TNode<Number> tmp234;
    ca_.Bind(&block23, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 177);
    compiler::TNode<JSReceiver> tmp235;
    USE(tmp235);
    tmp235 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).ArraySpeciesCreate(compiler::TNode<Context>{tmp224}, compiler::TNode<Object>{tmp226}, compiler::TNode<Number>{tmp234}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 180);
    compiler::TNode<Number> tmp236;
    USE(tmp236);
    tmp236 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 183);
    ca_.Goto(&block29, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp237;
    compiler::TNode<Object> tmp238;
    compiler::TNode<JSReceiver> tmp239;
    compiler::TNode<Number> tmp240;
    compiler::TNode<Object> tmp241;
    compiler::TNode<Number> tmp242;
    compiler::TNode<Number> tmp243;
    compiler::TNode<Object> tmp244;
    compiler::TNode<Number> tmp245;
    compiler::TNode<Number> tmp246;
    compiler::TNode<Number> tmp247;
    compiler::TNode<JSReceiver> tmp248;
    compiler::TNode<Number> tmp249;
    ca_.Bind(&block29, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp243}, compiler::TNode<Number>{tmp246}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block30, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp243, tmp246);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block31, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp243, tmp246);
    }
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp250;
    compiler::TNode<Object> tmp251;
    compiler::TNode<JSReceiver> tmp252;
    compiler::TNode<Number> tmp253;
    compiler::TNode<Object> tmp254;
    compiler::TNode<Number> tmp255;
    compiler::TNode<Number> tmp256;
    compiler::TNode<Object> tmp257;
    compiler::TNode<Number> tmp258;
    compiler::TNode<Number> tmp259;
    compiler::TNode<Number> tmp260;
    compiler::TNode<JSReceiver> tmp261;
    compiler::TNode<Number> tmp262;
    compiler::TNode<Number> tmp263;
    compiler::TNode<Number> tmp264;
    ca_.Bind(&block30, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264);
    ca_.Goto(&block27, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp265;
    compiler::TNode<Object> tmp266;
    compiler::TNode<JSReceiver> tmp267;
    compiler::TNode<Number> tmp268;
    compiler::TNode<Object> tmp269;
    compiler::TNode<Number> tmp270;
    compiler::TNode<Number> tmp271;
    compiler::TNode<Object> tmp272;
    compiler::TNode<Number> tmp273;
    compiler::TNode<Number> tmp274;
    compiler::TNode<Number> tmp275;
    compiler::TNode<JSReceiver> tmp276;
    compiler::TNode<Number> tmp277;
    compiler::TNode<Number> tmp278;
    compiler::TNode<Number> tmp279;
    ca_.Bind(&block31, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279);
    ca_.Goto(&block28, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp280;
    compiler::TNode<Object> tmp281;
    compiler::TNode<JSReceiver> tmp282;
    compiler::TNode<Number> tmp283;
    compiler::TNode<Object> tmp284;
    compiler::TNode<Number> tmp285;
    compiler::TNode<Number> tmp286;
    compiler::TNode<Object> tmp287;
    compiler::TNode<Number> tmp288;
    compiler::TNode<Number> tmp289;
    compiler::TNode<Number> tmp290;
    compiler::TNode<JSReceiver> tmp291;
    compiler::TNode<Number> tmp292;
    ca_.Bind(&block27, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 185);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 188);
    compiler::TNode<Oddball> tmp293;
    tmp293 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp280, tmp282, tmp286));
    USE(tmp293);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 191);
    compiler::TNode<Oddball> tmp294;
    USE(tmp294);
    tmp294 = BaseBuiltinsFromDSLAssembler(state_).True();
    compiler::TNode<BoolT> tmp295;
    USE(tmp295);
    tmp295 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp293}, compiler::TNode<HeapObject>{tmp294}));
    ca_.Branch(tmp295, &block32, &block33, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp286, tmp293);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp296;
    compiler::TNode<Object> tmp297;
    compiler::TNode<JSReceiver> tmp298;
    compiler::TNode<Number> tmp299;
    compiler::TNode<Object> tmp300;
    compiler::TNode<Number> tmp301;
    compiler::TNode<Number> tmp302;
    compiler::TNode<Object> tmp303;
    compiler::TNode<Number> tmp304;
    compiler::TNode<Number> tmp305;
    compiler::TNode<Number> tmp306;
    compiler::TNode<JSReceiver> tmp307;
    compiler::TNode<Number> tmp308;
    compiler::TNode<Number> tmp309;
    compiler::TNode<Oddball> tmp310;
    ca_.Bind(&block32, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 193);
    compiler::TNode<Object> tmp311;
    USE(tmp311);
    tmp311 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp296}, compiler::TNode<Object>{tmp298}, compiler::TNode<Object>{tmp309}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 196);
    compiler::TNode<Object> tmp312;
    tmp312 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp296, tmp307, tmp308, tmp311);
    USE(tmp312);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 191);
    ca_.Goto(&block33, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp313;
    compiler::TNode<Object> tmp314;
    compiler::TNode<JSReceiver> tmp315;
    compiler::TNode<Number> tmp316;
    compiler::TNode<Object> tmp317;
    compiler::TNode<Number> tmp318;
    compiler::TNode<Number> tmp319;
    compiler::TNode<Object> tmp320;
    compiler::TNode<Number> tmp321;
    compiler::TNode<Number> tmp322;
    compiler::TNode<Number> tmp323;
    compiler::TNode<JSReceiver> tmp324;
    compiler::TNode<Number> tmp325;
    compiler::TNode<Number> tmp326;
    compiler::TNode<Oddball> tmp327;
    ca_.Bind(&block33, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 200);
    compiler::TNode<Number> tmp328;
    USE(tmp328);
    tmp328 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp329;
    USE(tmp329);
    tmp329 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp319}, compiler::TNode<Number>{tmp328}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 203);
    compiler::TNode<Number> tmp330;
    USE(tmp330);
    tmp330 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp331;
    USE(tmp331);
    tmp331 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp325}, compiler::TNode<Number>{tmp330}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 183);
    ca_.Goto(&block29, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp329, tmp320, tmp321, tmp322, tmp323, tmp324, tmp331);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp332;
    compiler::TNode<Object> tmp333;
    compiler::TNode<JSReceiver> tmp334;
    compiler::TNode<Number> tmp335;
    compiler::TNode<Object> tmp336;
    compiler::TNode<Number> tmp337;
    compiler::TNode<Number> tmp338;
    compiler::TNode<Object> tmp339;
    compiler::TNode<Number> tmp340;
    compiler::TNode<Number> tmp341;
    compiler::TNode<Number> tmp342;
    compiler::TNode<JSReceiver> tmp343;
    compiler::TNode<Number> tmp344;
    ca_.Bind(&block28, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 207);
    compiler::TNode<String> tmp345;
    USE(tmp345);
    tmp345 = BaseBuiltinsFromDSLAssembler(state_).kLengthString();
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp332, tmp343, tmp345, tmp344);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/array-slice.tq", 210);
    arguments->PopAndReturn(tmp343);
  }
}

}  // namespace internal
}  // namespace v8

