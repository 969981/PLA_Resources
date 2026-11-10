/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00325870; name: FUN_00325870
 */


void FUN_00325870(int *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *__dest;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_70 [48];
  undefined1 auStack_38 [8];
  
  iVar4 = param_1[1];
  if ((int)param_2 <= iVar4) {
    return;
  }
  if (iVar4 < 1) {
    if (iVar4 != 0) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 003258c8 to 003258db has its CatchHandler @ 00325b44 */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 003258dc to 003258e3 has its CatchHandler @ 00325b40 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
      iVar4 = param_1[1];
      plVar5 = (long *)0x0;
      goto LAB_003258f4;
    }
    plVar5 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 2);
    if ((int)param_2 < 4) goto LAB_00325908;
LAB_00325924:
    if (iVar4 < 0x40000000) {
      uVar1 = iVar4 * 2;
      if ((int)param_2 <= (int)uVar1) {
        lVar8 = (long)(int)uVar1;
        if (0xfffffff7 < uVar1) {
          FUN_0030f640(auStack_70,3,
                       "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                       ,0x613);
                    /* try { // try from 00325960 to 0032597f has its CatchHandler @ 00325b34 */
          uVar3 = FUN_0030f3ac(auStack_70,
                               "CHECK failed: (static_cast<size_t>(new_size)) <= ((nn::npln::gnp::std::numeric_limits<size_t>::max() - kRepHeaderSize) / sizeof(Element)): "
                              );
          uVar3 = FUN_0030f3ac(uVar3,"Requested size is too large to fit into size_t.");
                    /* try { // try from 00325980 to 00325987 has its CatchHandler @ 00325b28 */
          FUN_0030f41c(auStack_38,uVar3);
          FUN_0030f658(auStack_70);
        }
        goto joined_r0x003259ec;
      }
    }
    else {
      if ((int)param_2 < 0x40000001) {
        FUN_0030f640(auStack_70,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                     ,0x602);
                    /* try { // try from 003259bc to 003259cf has its CatchHandler @ 00325b30 */
        uVar3 = FUN_0030f3ac(auStack_70,
                             "CHECK failed: (new_size) > (kRepeatedFieldUpperClampLimit): ");
                    /* try { // try from 003259d0 to 003259d7 has its CatchHandler @ 00325b2c */
        FUN_0030f41c(auStack_38,uVar3);
        FUN_0030f658(auStack_70);
      }
      param_2 = 0x7fffffff;
    }
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 2) + -8);
LAB_003258f4:
    lVar6 = *(long *)(*(long *)(param_1 + 2) + -8);
    if (3 < (int)param_2) goto LAB_00325924;
LAB_00325908:
    param_2 = 4;
  }
  lVar8 = (long)(int)param_2;
  uVar1 = param_2;
joined_r0x003259ec:
  if (lVar6 == 0) {
    plVar2 = (long *)FUN_002ee6d0(lVar8 + 8);
  }
  else {
    uVar7 = lVar8 + 0xfU & 0xfffffffffffffff8;
    if (*(long *)(lVar6 + 0x70) != 0) {
      FUN_0032cf88(lVar6,0,uVar7);
    }
    plVar2 = (long *)FUN_0032cea0(lVar6,uVar7);
  }
  __dest = plVar2 + 1;
  *plVar2 = lVar6;
  param_1[1] = uVar1;
  *(long **)(param_1 + 2) = __dest;
  if ((int)uVar1 < 1) {
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x161);
                    /* try { // try from 00325adc to 00325aef has its CatchHandler @ 00325b4c */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00325af0 to 00325af7 has its CatchHandler @ 00325b48 */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
    __dest = *(long **)(param_1 + 2);
    iVar4 = *param_1;
    uVar1 = param_1[1];
  }
  else {
    iVar4 = *param_1;
  }
  if (0 < iVar4) {
    if ((int)uVar1 < 1) {
      FUN_0030f640(auStack_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x161);
                    /* try { // try from 00325a5c to 00325a6f has its CatchHandler @ 00325b3c */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00325a70 to 00325a77 has its CatchHandler @ 00325b38 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
      __dest = *(long **)(param_1 + 2);
      iVar4 = *param_1;
    }
    memcpy(__dest,plVar5 + 1,(long)iVar4);
  }
  if ((plVar5 != (long *)0x0) && (*plVar5 == 0)) {
    FUN_002ee710(plVar5);
  }
  return;
}


