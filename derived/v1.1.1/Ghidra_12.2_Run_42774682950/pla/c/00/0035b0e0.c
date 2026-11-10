/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035b0e0; name: FUN_0035b0e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035b0e0(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_68 [8];
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  
  uVar4 = FUN_00340fec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar4;
  param_4[2] = param_3;
  uVar4 = FUN_00356fd4(param_1,*(undefined8 *)(param_3 + 8),uVar4);
  param_4[1] = uVar4;
  FUN_00350da4(param_1,*(undefined8 *)(param_2 + 0x18),uVar4,param_2);
  param_4[10] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  param_4[7] = 0;
  param_4[0xb] = 0;
  param_4[6] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[3] = 0;
  if ((*(uint *)(param_2 + 0x10) >> 3 & 1) != 0) {
    puVar5 = *(undefined **)(param_2 + 0x30);
    if (puVar5 == (undefined *)0x0) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x28cc);
                    /* try { // try from 0035b17c to 0035b18f has its CatchHandler @ 0035b264 */
      uVar4 = FUN_0030f3ac(&local_60,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 0035b190 to 0035b197 has its CatchHandler @ 0035b260 */
      FUN_0030f41c(auStack_68,uVar4);
      FUN_0030f658(&local_60);
      puVar5 = *(undefined **)(param_2 + 0x30);
    }
    puVar1 = PTR_DAT_04373c30;
    if (puVar5 != (undefined *)0x0) {
      puVar1 = puVar5;
    }
    local_50 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar3 = s_google_protobuf_MethodOptions_038b36b2._0_8_;
    uVar4 = CONCAT35(s_google_protobuf_MethodOptions_038b36b2._13_3_,
                     s_google_protobuf_MethodOptions_038b36b2._8_5_);
    uStack_58 = _UNK_03889f78;
    local_60 = _DAT_03889f70;
    uVar2 = CONCAT53(s_google_protobuf_MethodOptions_038b36b2._16_5_,
                     s_google_protobuf_MethodOptions_038b36b2._13_3_);
    *(undefined8 *)(local_50 + 0x15) = s_google_protobuf_MethodOptions_038b36b2._21_8_;
    *(undefined8 *)(local_50 + 0xd) = uVar2;
    *(undefined8 *)(local_50 + 8) = uVar4;
    *(undefined8 *)local_50 = uVar3;
    local_50[0x1d] = '\0';
                    /* try { // try from 0035b1f0 to 0035b207 has its CatchHandler @ 0035b278 */
    FUN_0035b408(param_1,puVar1,param_4,4,&local_60);
    if ((local_60 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
  }
  *(undefined1 *)(param_4 + 0xc) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)((long)param_4 + 0x61) = *(undefined1 *)(param_2 + 0x39);
  FUN_0034ff4c(param_1,param_4[1],param_3,*param_4,param_2,7,param_4);
  return;
}


