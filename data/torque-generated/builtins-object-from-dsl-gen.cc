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

compiler::TNode<JSObject> ObjectBuiltinsFromDSLAssembler::ObjectFromEntriesFastCase(compiler::TNode<Context> p_context, compiler::TNode<Object> p_iterable, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_iterable);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 9);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 10);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
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
    compiler::TNode<JSArray> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 12);
    compiler::TNode<FixedArrayBase> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<FixedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).LoadJSObjectElements(compiler::TNode<JSObject>{tmp11}));
    compiler::TNode<FixedArray> tmp13;
    USE(tmp13);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp13 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp12}, &label0);
    ca_.Goto(&block7, tmp7, tmp8, tmp9, tmp11, tmp12, tmp13);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp11, tmp12);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<JSArray> tmp17;
    compiler::TNode<FixedArrayBase> tmp18;
    ca_.Bind(&block8, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<JSArray> tmp22;
    compiler::TNode<FixedArrayBase> tmp23;
    compiler::TNode<FixedArray> tmp24;
    ca_.Bind(&block7, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 11);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 13);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp22}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 14);
    compiler::TNode<JSObject> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<JSObject>(BaseBuiltinsFromDSLAssembler(state_).NewJSObject(compiler::TNode<Context>{tmp19}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 16);
    compiler::TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.Goto(&block11, tmp19, tmp20, tmp21, tmp22, tmp24, tmp25, tmp26, tmp27);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<JSArray> tmp31;
    compiler::TNode<FixedArray> tmp32;
    compiler::TNode<Smi> tmp33;
    compiler::TNode<JSObject> tmp34;
    compiler::TNode<Smi> tmp35;
    ca_.Bind(&block11, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp35}, compiler::TNode<Smi>{tmp33}));
    ca_.Branch(tmp36, &block9, &block10, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<JSArray> tmp40;
    compiler::TNode<FixedArray> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<JSObject> tmp43;
    compiler::TNode<Smi> tmp44;
    ca_.Bind(&block9, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 17);
    compiler::TNode<Object> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<Object>(ArrayBuiltinsFromDSLAssembler(state_).LoadElementOrUndefined(compiler::TNode<FixedArray>{tmp41}, compiler::TNode<Smi>{tmp44}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 19);
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    compiler::TNode<Object> tmp47;
    USE(tmp47);
    compiler::CodeAssemblerLabel label0(&ca_);
    std::tie(tmp46, tmp47) = CollectionsBuiltinsFromDSLAssembler(state_).LoadKeyValuePairNoSideEffects(compiler::TNode<Context>{tmp37}, compiler::TNode<Object>{tmp45}, &label0).Flatten();
    ca_.Goto(&block13, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp45, tmp46, tmp47);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp45);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSArray> tmp51;
    compiler::TNode<FixedArray> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<JSObject> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    ca_.Bind(&block14, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.Goto(&block1);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSArray> tmp61;
    compiler::TNode<FixedArray> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<JSObject> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    ca_.Bind(&block13, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 18);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 24);
    compiler::TNode<BoolT> tmp70;
    USE(tmp70);
    tmp70 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is10JSReceiver20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp58}, compiler::TNode<Object>{tmp68}));
    ca_.Branch(tmp70, &block15, &block16, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp68, tmp69);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<JSArray> tmp74;
    compiler::TNode<FixedArray> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<JSObject> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    ca_.Bind(&block15, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.Goto(&block1);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<JSArray> tmp85;
    compiler::TNode<FixedArray> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<JSObject> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    ca_.Bind(&block16, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 25);
    compiler::TNode<Object> tmp93;
    tmp93 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp82, tmp88, tmp91, tmp92);
    USE(tmp93);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 16);
    ca_.Goto(&block12, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<JSArray> tmp97;
    compiler::TNode<FixedArray> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<JSObject> tmp100;
    compiler::TNode<Smi> tmp101;
    ca_.Bind(&block12, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    compiler::TNode<Smi> tmp102;
    USE(tmp102);
    tmp102 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp103;
    USE(tmp103);
    tmp103 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp101}, compiler::TNode<Smi>{tmp102}));
    ca_.Goto(&block11, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp103);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<JSArray> tmp107;
    compiler::TNode<FixedArray> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<JSObject> tmp110;
    compiler::TNode<Smi> tmp111;
    ca_.Bind(&block10, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 27);
    ca_.Goto(&block2, tmp104, tmp105, tmp110);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<Object> tmp114;
    ca_.Bind(&block4, &tmp112, &tmp113, &tmp114);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 29);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 30);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp115;
    compiler::TNode<Object> tmp116;
    compiler::TNode<JSObject> tmp117;
    ca_.Bind(&block2, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 7);
    ca_.Goto(&block17, tmp115, tmp116, tmp117);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    compiler::TNode<Context> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<JSObject> tmp120;
    ca_.Bind(&block17, &tmp118, &tmp119, &tmp120);
  return compiler::TNode<JSObject>{tmp120};
}

TF_BUILTIN(ObjectFromEntries, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Object, Map> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, Object> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object, Object, Map, Object> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object, Object, Object, Object> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object, Object, Object, Object, JSObject, Object, Object, Object> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject, Map, JSReceiver, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 38);
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp2}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 40);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNullOrUndefined(compiler::TNode<Object>{tmp3}));
    ca_.Branch(tmp4, &block5, &block6, tmp0, tmp1, tmp3);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block5, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2, tmp5, tmp6, tmp7);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block6, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 41);
    compiler::TNode<JSObject> tmp11;
    USE(tmp11);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp11 = ObjectBuiltinsFromDSLAssembler(state_).ObjectFromEntriesFastCase(compiler::TNode<Context>{tmp8}, compiler::TNode<Object>{tmp10}, &label0);
    ca_.Goto(&block7, tmp8, tmp9, tmp10, tmp10, tmp11);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp8, tmp9, tmp10, tmp10);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    ca_.Bind(&block8, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block4, tmp12, tmp13, tmp14);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSObject> tmp20;
    ca_.Bind(&block7, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    arguments->PopAndReturn(tmp20);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block4, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 44);
    compiler::TNode<JSObject> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<JSObject>(BaseBuiltinsFromDSLAssembler(state_).NewJSObject(compiler::TNode<Context>{tmp21}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 46);
    compiler::TNode<Context> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp21}));
    compiler::TNode<IntPtrT> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr19ATNativeContextSlot29ATconstexpr_NativeContextSlot(Context::ITERATOR_RESULT_MAP_INDEX));
    compiler::TNode<Object> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp25}, compiler::TNode<IntPtrT>{tmp26}));
    compiler::TNode<Map> tmp28;
    USE(tmp28);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp28 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATMap(compiler::TNode<Context>{tmp21}, compiler::TNode<Object>{tmp27}, &label0);
    ca_.Goto(&block11, tmp21, tmp22, tmp23, tmp24, tmp27, tmp28);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp21, tmp22, tmp23, tmp24, tmp27);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSObject> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block12, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block10, tmp29, tmp30, tmp31, tmp32);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<JSObject> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Map> tmp39;
    ca_.Bind(&block11, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block9, tmp34, tmp35, tmp36, tmp37, tmp39);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSObject> tmp43;
    ca_.Bind(&block10, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 47);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<JSObject> tmp47;
    compiler::TNode<Map> tmp48;
    ca_.Bind(&block9, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 45);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 48);
    compiler::TNode<JSReceiver> tmp49;
    USE(tmp49);
    compiler::TNode<Object> tmp50;
    USE(tmp50);
    std::tie(tmp49, tmp50) = IteratorBuiltinsAssembler(state_).GetIterator(compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp46}).Flatten();
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 51);
    ca_.Goto(&block17, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<JSObject> tmp54;
    compiler::TNode<Map> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<Object> tmp57;
    ca_.Bind(&block17, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    compiler::TNode<BoolT> tmp58;
    USE(tmp58);
    compiler::CodeAssemblerExceptionHandlerLabel catch59_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch59_label);
    tmp58 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    }
    if (catch59_label.is_used()) {
      compiler::CodeAssemblerLabel catch59_skip(&ca_);
      ca_.Goto(&catch59_skip);
      compiler::TNode<Object> catch59_exception_object;
      ca_.Bind(&catch59_label, &catch59_exception_object);
      ca_.Goto(&block18, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, catch59_exception_object);
      ca_.Bind(&catch59_skip);
    }
    ca_.Branch(tmp58, &block15, &block16, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<JSObject> tmp63;
    compiler::TNode<Map> tmp64;
    compiler::TNode<JSReceiver> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    ca_.Bind(&block18, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block14, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<JSObject> tmp71;
    compiler::TNode<Map> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<Object> tmp74;
    ca_.Bind(&block15, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 52);
    compiler::TNode<Object> tmp75;
    USE(tmp75);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch76_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch76_label);
    tmp75 = IteratorBuiltinsAssembler(state_).IteratorStep(compiler::TNode<Context>{tmp68}, IteratorBuiltinsFromDSLAssembler::IteratorRecord{compiler::TNode<JSReceiver>{tmp73}, compiler::TNode<Object>{tmp74}}, compiler::TNode<Map>{tmp72}, &label0);
    }
    if (catch76_label.is_used()) {
      compiler::CodeAssemblerLabel catch76_skip(&ca_);
      ca_.Goto(&catch76_skip);
      compiler::TNode<Object> catch76_exception_object;
      ca_.Bind(&catch76_label, &catch76_exception_object);
      ca_.Goto(&block23, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp73, tmp74, tmp72, catch76_exception_object);
      ca_.Bind(&catch76_skip);
    }
    ca_.Goto(&block21, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp73, tmp74, tmp72, tmp75);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp73, tmp74, tmp72);
    }
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<JSObject> tmp80;
    compiler::TNode<Map> tmp81;
    compiler::TNode<JSReceiver> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<Map> tmp86;
    compiler::TNode<Object> tmp87;
    ca_.Bind(&block23, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block14, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp87);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<JSObject> tmp91;
    compiler::TNode<Map> tmp92;
    compiler::TNode<JSReceiver> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Map> tmp97;
    ca_.Bind(&block22, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.Goto(&block20, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<JSObject> tmp101;
    compiler::TNode<Map> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<JSReceiver> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<Map> tmp107;
    compiler::TNode<Object> tmp108;
    ca_.Bind(&block21, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.Goto(&block19, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp108);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSObject> tmp112;
    compiler::TNode<Map> tmp113;
    compiler::TNode<JSReceiver> tmp114;
    compiler::TNode<Object> tmp115;
    ca_.Bind(&block20, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 53);
    arguments->PopAndReturn(tmp112);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<JSObject> tmp119;
    compiler::TNode<Map> tmp120;
    compiler::TNode<JSReceiver> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Object> tmp123;
    ca_.Bind(&block19, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 52);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 55);
    compiler::TNode<Object> tmp124;
    USE(tmp124);
    compiler::CodeAssemblerExceptionHandlerLabel catch125_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch125_label);
    tmp124 = ca_.UncheckedCast<Object>(IteratorBuiltinsAssembler(state_).IteratorValue(compiler::TNode<Context>{tmp116}, compiler::TNode<Object>{tmp123}, compiler::TNode<Map>{tmp120}));
    }
    if (catch125_label.is_used()) {
      compiler::CodeAssemblerLabel catch125_skip(&ca_);
      ca_.Goto(&catch125_skip);
      compiler::TNode<Object> catch125_exception_object;
      ca_.Bind(&catch125_label, &catch125_exception_object);
      ca_.Goto(&block24, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp123, tmp120, catch125_exception_object);
      ca_.Bind(&catch125_skip);
    }
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 54);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 57);
    compiler::TNode<Object> tmp126;
    USE(tmp126);
    compiler::TNode<Object> tmp127;
    USE(tmp127);
    compiler::CodeAssemblerExceptionHandlerLabel catch128_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch128_label);
    std::tie(tmp126, tmp127) = CollectionsBuiltinsFromDSLAssembler(state_).LoadKeyValuePair(compiler::TNode<Context>{tmp116}, compiler::TNode<Object>{tmp124}).Flatten();
    }
    if (catch128_label.is_used()) {
      compiler::CodeAssemblerLabel catch128_skip(&ca_);
      ca_.Goto(&catch128_skip);
      compiler::TNode<Object> catch128_exception_object;
      ca_.Bind(&catch128_label, &catch128_exception_object);
      ca_.Goto(&block25, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp124, catch128_exception_object);
      ca_.Bind(&catch128_skip);
    }
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 56);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 58);
    compiler::TNode<Object> tmp129;
    compiler::CodeAssemblerExceptionHandlerLabel catch130_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch130_label);
    tmp129 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp116, tmp119, tmp126, tmp127);
    USE(tmp129);
    }
    if (catch130_label.is_used()) {
      compiler::CodeAssemblerLabel catch130_skip(&ca_);
      ca_.Goto(&catch130_skip);
      compiler::TNode<Object> catch130_exception_object;
      ca_.Bind(&catch130_label, &catch130_exception_object);
      ca_.Goto(&block26, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp126, tmp127, tmp119, tmp126, tmp127, catch130_exception_object);
      ca_.Bind(&catch130_skip);
    }
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 51);
    ca_.Goto(&block17, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<JSObject> tmp134;
    compiler::TNode<Map> tmp135;
    compiler::TNode<JSReceiver> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Map> tmp140;
    compiler::TNode<Object> tmp141;
    ca_.Bind(&block24, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 55);
    ca_.Goto(&block14, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp141);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<JSObject> tmp145;
    compiler::TNode<Map> tmp146;
    compiler::TNode<JSReceiver> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<Object> tmp149;
    compiler::TNode<Object> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<Object> tmp152;
    ca_.Bind(&block25, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 57);
    ca_.Goto(&block14, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp152);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<JSObject> tmp156;
    compiler::TNode<Map> tmp157;
    compiler::TNode<JSReceiver> tmp158;
    compiler::TNode<Object> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<JSObject> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Object> tmp167;
    ca_.Bind(&block26, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 58);
    ca_.Goto(&block14, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp167);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<JSObject> tmp171;
    compiler::TNode<Map> tmp172;
    compiler::TNode<JSReceiver> tmp173;
    compiler::TNode<Object> tmp174;
    ca_.Bind(&block16, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 60);
    arguments->PopAndReturn(tmp171);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<JSObject> tmp178;
    compiler::TNode<Map> tmp179;
    compiler::TNode<JSReceiver> tmp180;
    compiler::TNode<Object> tmp181;
    compiler::TNode<Object> tmp182;
    ca_.Bind(&block14, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 62);
    IteratorBuiltinsAssembler(state_).IteratorCloseOnException(compiler::TNode<Context>{tmp175}, IteratorBuiltinsFromDSLAssembler::IteratorRecord{compiler::TNode<JSReceiver>{tmp180}, compiler::TNode<Object>{tmp181}}, compiler::TNode<Object>{tmp182});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp183;
    compiler::TNode<Object> tmp184;
    compiler::TNode<Object> tmp185;
    ca_.Bind(&block2, &tmp183, &tmp184, &tmp185);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/object-fromentries.tq", 66);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp183}, MessageTemplate::kNotIterable);
  }
}

}  // namespace internal
}  // namespace v8

