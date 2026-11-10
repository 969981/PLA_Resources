/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003280e4; name: FUN_003280e4
 */


void FUN_003280e4(uint *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long *__dest;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [48];
  undefined1 auStack_38 [8];
  
  uVar4 = param_1[1];
  if ((int)param_2 <= (int)uVar4) {
    return;
  }
  if ((int)uVar4 < 1) {
    if (uVar4 != 0) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 0032813c to 0032814f has its CatchHandler @ 003283bc */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00328150 to 00328157 has its CatchHandler @ 003283b8 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
      uVar4 = param_1[1];
      plVar5 = (long *)0x0;
      goto LAB_00328168;
    }
    plVar5 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 2);
    if ((int)param_2 < 4) goto LAB_0032817c;
LAB_00328198:
    if ((int)uVar4 < 0x40000000) {
      uVar1 = uVar4 * 2;
      if ((int)param_2 <= (int)uVar1) {
        lVar7 = (long)(int)uVar1;
        if ((int)uVar4 < 0) {
          FUN_0030f640(auStack_70,3,
                       "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                       ,0x613);
                    /* try { // try from 003281d0 to 003281ef has its CatchHandler @ 003283a4 */
          uVar3 = FUN_0030f3ac(auStack_70,
                               "CHECK failed: (static_cast<size_t>(new_size)) <= ((nn::npln::gnp::std::numeric_limits<size_t>::max() - kRepHeaderSize) / sizeof(Element)): "
                              );
          uVar3 = FUN_0030f3ac(uVar3,"Requested size is too large to fit into size_t.");
                    /* try { // try from 003281f0 to 003281f7 has its CatchHandler @ 003283a0 */
          FUN_0030f41c(auStack_38,uVar3);
          FUN_0030f658(auStack_70);
        }
        goto joined_r0x00328264;
      }
    }
    else {
      if ((int)param_2 < 0x40000001) {
        FUN_0030f640(auStack_70,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                     ,0x602);
                    /* try { // try from 00328230 to 00328243 has its CatchHandler @ 003283ac */
        uVar3 = FUN_0030f3ac(auStack_70,
                             "CHECK failed: (new_size) > (kRepeatedFieldUpperClampLimit): ");
                    /* try { // try from 00328244 to 0032824b has its CatchHandler @ 003283a8 */
        FUN_0030f41c(auStack_38,uVar3);
        FUN_0030f658(auStack_70);
      }
      param_2 = 0x7fffffff;
    }
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 2) + -8);
LAB_00328168:
    lVar6 = *(long *)(*(long *)(param_1 + 2) + -8);
    if (3 < (int)param_2) goto LAB_00328198;
LAB_0032817c:
    param_2 = 4;
  }
  lVar7 = (long)(int)param_2;
  uVar1 = param_2;
joined_r0x00328264:
  if (lVar6 == 0) {
    plVar2 = (long *)FUN_002ee6d0(lVar7 * 8 + 8);
  }
  else {
    lVar7 = lVar7 * 8 + 8;
    if (*(long *)(lVar6 + 0x70) != 0) {
      FUN_0032cf88(lVar6,0,lVar7);
    }
    plVar2 = (long *)FUN_0032cea0(lVar6,lVar7);
  }
  __dest = plVar2 + 1;
  *plVar2 = lVar6;
  param_1[1] = uVar1;
  *(long **)(param_1 + 2) = __dest;
  if ((int)uVar1 < 1) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00328354 to 00328367 has its CatchHandler @ 003283c4 */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00328368 to 0032836f has its CatchHandler @ 003283c0 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
    __dest = *(long **)(param_1 + 2);
    uVar4 = *param_1;
    uVar1 = param_1[1];
  }
  else {
    uVar4 = *param_1;
  }
  if (0 < (int)uVar4) {
    if ((int)uVar1 < 1) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 003282d4 to 003282e7 has its CatchHandler @ 003283b4 */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 003282e8 to 003282ef has its CatchHandler @ 003283b0 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
      __dest = *(long **)(param_1 + 2);
      uVar4 = *param_1;
    }
    memcpy(__dest,plVar5 + 1,-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
  }
  if ((plVar5 != (long *)0x0) && (*plVar5 == 0)) {
    FUN_002ee710(plVar5);
  }
  return;
}


