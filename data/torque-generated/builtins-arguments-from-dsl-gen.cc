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

ArgumentsBuiltinsFromDSLAssembler::ArgumentsInfo ArgumentsBuiltinsFromDSLAssembler::GetArgumentsFrameAndCount(compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT, RawPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, BInt, BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, BInt, BInt> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSFunction> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 26);
    compiler::TNode<RawPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadParentFramePointer());
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 29);
    compiler::TNode<SharedFunctionInfo> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<SharedFunctionInfo>(BaseBuiltinsFromDSLAssembler(state_).LoadJSFunctionSharedFunctionInfo(compiler::TNode<JSFunction>{tmp1}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 31);
    compiler::TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).LoadSharedFunctionInfoFormalParameterCount(compiler::TNode<SharedFunctionInfo>{tmp3}));
    compiler::TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).Convert7ATint328ATuint16(compiler::TNode<Uint32T>{tmp4}));
    compiler::TNode<BInt> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BInt>(BaseBuiltinsFromDSLAssembler(state_).Convert6ATbint7ATint32(compiler::TNode<Int32T>{tmp5}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 30);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 32);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 35);
    compiler::TNode<RawPtrT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<RawPtrT>(BaseBuiltinsFromDSLAssembler(state_).LoadCallerFromFrame(compiler::TNode<RawPtrT>{tmp2}));
    compiler::TNode<RawPtrT> tmp8;
    USE(tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp8 = BaseBuiltinsFromDSLAssembler(state_).Cast23ATArgumentsAdaptorFrame(compiler::TNode<Context>{tmp0}, compiler::TNode<RawPtrT>{tmp7}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp6, tmp6, tmp7, tmp8);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp6, tmp6, tmp7);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSFunction> tmp10;
    compiler::TNode<RawPtrT> tmp11;
    compiler::TNode<SharedFunctionInfo> tmp12;
    compiler::TNode<BInt> tmp13;
    compiler::TNode<BInt> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    ca_.Bind(&block5, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block3, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSFunction> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<SharedFunctionInfo> tmp19;
    compiler::TNode<BInt> tmp20;
    compiler::TNode<BInt> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block2, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp23);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<JSFunction> tmp25;
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<SharedFunctionInfo> tmp27;
    compiler::TNode<BInt> tmp28;
    compiler::TNode<BInt> tmp29;
    ca_.Bind(&block3, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 36);
    ca_.Goto(&block1, tmp24, tmp25, tmp26, tmp29, tmp28);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<JSFunction> tmp31;
    compiler::TNode<RawPtrT> tmp32;
    compiler::TNode<SharedFunctionInfo> tmp33;
    compiler::TNode<BInt> tmp34;
    compiler::TNode<BInt> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    ca_.Bind(&block2, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 34);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 39);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 40);
    compiler::TNode<Smi> tmp37;
    USE(tmp37);
    tmp37 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadLengthFromAdapterFrame(compiler::TNode<Context>{tmp30}, compiler::TNode<RawPtrT>{tmp36}));
    compiler::TNode<BInt> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<BInt>(BaseBuiltinsFromDSLAssembler(state_).Convert6ATbint5ATSmi(compiler::TNode<Smi>{tmp37}));
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 41);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 38);
    ca_.Goto(&block1, tmp30, tmp31, tmp36, tmp38, tmp34);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<JSFunction> tmp40;
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<BInt> tmp42;
    compiler::TNode<BInt> tmp43;
    ca_.Bind(&block1, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../deps/v8/src/builtins/arguments.tq", 24);
    ca_.Goto(&block6, tmp39, tmp40, tmp41, tmp42, tmp43);
  }

    compiler::TNode<Context> tmp44;
    compiler::TNode<JSFunction> tmp45;
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<BInt> tmp47;
    compiler::TNode<BInt> tmp48;
    ca_.Bind(&block6, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
  return ArgumentsBuiltinsFromDSLAssembler::ArgumentsInfo{compiler::TNode<RawPtrT>{tmp46}, compiler::TNode<BInt>{tmp47}, compiler::TNode<BInt>{tmp48}};
}

}  // namespace internal
}  // namespace v8

