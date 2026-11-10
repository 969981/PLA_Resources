/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032a964; name: FUN_0032a964
 */


void FUN_0032a964(uint *param_1,uint param_2)

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
                    /* try { // try from 0032a9bc to 0032a9cf has its CatchHandler @ 0032ac3c */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032a9d0 to 0032a9d7 has its CatchHandler @ 0032ac38 */
      FUN_0030f41c(auStack_38,uVar3);
      FUN_0030f658(auStack_70);
      uVar4 = param_1[1];
      plVar5 = (long *)0x0;
      goto LAB_0032a9e8;
    }
    plVar5 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 2);
    if ((int)param_2 < 4) goto LAB_0032a9fc;
LAB_0032aa18:
    if ((int)uVar4 < 0x40000000) {
      uVar1 = uVar4 * 2;
      if ((int)param_2 <= (int)uVar1) {
        lVar7 = (long)(int)uVar1;
        if ((int)uVar4 < 0) {
          FUN_0030f640(auStack_70,3,
                       "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                       ,0x613);
                    /* try { // try from 0032aa50 to 0032aa6f has its CatchHandler @ 0032ac24 */
          uVar3 = FUN_0030f3ac(auStack_70,
                               "CHECK failed: (static_cast<size_t>(new_size)) <= ((nn::npln::gnp::std::numeric_limits<size_t>::max() - kRepHeaderSize) / sizeof(Element)): "
                              );
          uVar3 = FUN_0030f3ac(uVar3,"Requested size is too large to fit into size_t.");
                    /* try { // try from 0032aa70 to 0032aa77 has its CatchHandler @ 0032ac20 */
          FUN_0030f41c(auStack_38,uVar3);
          FUN_0030f658(auStack_70);
        }
        goto joined_r0x0032aae4;
      }
    }
    else {
      if ((int)param_2 < 0x40000001) {
        FUN_0030f640(auStack_70,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                     ,0x602);
                    /* try { // try from 0032aab0 to 0032aac3 has its CatchHandler @ 0032ac2c */
        uVar3 = FUN_0030f3ac(auStack_70,
                             "CHECK failed: (new_size) > (kRepeatedFieldUpperClampLimit): ");
                    /* try { // try from 0032aac4 to 0032aacb has its CatchHandler @ 0032ac28 */
        FUN_0030f41c(auStack_38,uVar3);
        FUN_0030f658(auStack_70);
      }
      param_2 = 0x7fffffff;
    }
  }
  else {
    plVar5 = (long *)(*(long *)(param_1 + 2) + -8);
LAB_0032a9e8:
    lVar6 = *(long *)(*(long *)(param_1 + 2) + -8);
    if (3 < (int)param_2) goto LAB_0032aa18;
LAB_0032a9fc:
    param_2 = 4;
  }
  lVar7 = (long)(int)param_2;
  uVar1 = param_2;
joined_r0x0032aae4:
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
                    /* try { // try from 0032abd4 to 0032abe7 has its CatchHandler @ 0032ac44 */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032abe8 to 0032abef has its CatchHandler @ 0032ac40 */
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
                    /* try { // try from 0032ab54 to 0032ab67 has its CatchHandler @ 0032ac34 */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 0032ab68 to 0032ab6f has its CatchHandler @ 0032ac30 */
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


