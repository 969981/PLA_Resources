/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003555ac; name: FUN_003555ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003555ac(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined1 auStack_38 [8];
  
  uVar4 = FUN_00356fd4(param_1,*(undefined8 *)(*(long *)(param_1 + 0x50) + 8),
                       *(undefined8 *)(param_2 + 0x30));
  FUN_00350da4(param_1,*(undefined8 *)(param_2 + 0x30),uVar4,param_2);
  uVar5 = FUN_00340fec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x30));
  *param_4 = uVar5;
  param_4[1] = uVar4;
  param_4[2] = *(undefined8 *)(param_1 + 0x50);
  iVar2 = *(int *)(param_2 + 0x20);
  *(int *)(param_4 + 5) = iVar2;
  uVar4 = FUN_003415f0(*(undefined8 *)(param_1 + 8),iVar2 * 0x68);
  param_4[4] = uVar4;
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar4 = FUN_003666a8(param_2 + 0x18,uVar7 & 0xffffffff);
      FUN_0035b0e0(param_1,uVar4,param_4,param_4[4] + lVar8);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x68;
    } while ((long)uVar7 < (long)*(int *)(param_2 + 0x20));
  }
  param_4[3] = 0;
  if ((*(uint *)(param_2 + 0x10) >> 1 & 1) != 0) {
    puVar6 = *(undefined **)(param_2 + 0x38);
    if (puVar6 == (undefined *)0x0) {
      FUN_0030f640(&local_70,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x2760);
                    /* try { // try from 003556a4 to 003556b7 has its CatchHandler @ 00355780 */
      uVar4 = FUN_0030f3ac(&local_70,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 003556b8 to 003556bf has its CatchHandler @ 0035577c */
      FUN_0030f41c(auStack_38,uVar4);
      FUN_0030f658(&local_70);
      puVar6 = *(undefined **)(param_2 + 0x38);
    }
    puVar1 = PTR_DAT_04373c08;
    if (puVar6 != (undefined *)0x0) {
      puVar1 = puVar6;
    }
    local_60 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar3 = s_google_protobuf_ServiceOptions_03979bdb._0_8_;
    uVar4 = CONCAT26(s_google_protobuf_ServiceOptions_03979bdb._14_2_,
                     s_google_protobuf_ServiceOptions_03979bdb._8_6_);
    uStack_68 = _UNK_03889aa8;
    local_70 = _DAT_03889aa0;
    uVar5 = CONCAT62(s_google_protobuf_ServiceOptions_03979bdb._16_6_,
                     s_google_protobuf_ServiceOptions_03979bdb._14_2_);
    *(undefined8 *)(local_60 + 0x16) = s_google_protobuf_ServiceOptions_03979bdb._22_8_;
    *(undefined8 *)(local_60 + 0xe) = uVar5;
    *(undefined8 *)(local_60 + 8) = uVar4;
    *(undefined8 *)local_60 = uVar3;
    local_60[0x1e] = '\0';
                    /* try { // try from 00355718 to 0035572f has its CatchHandler @ 00355794 */
    FUN_0035b29c(param_1,puVar1,param_4,3,&local_70);
    if ((local_70 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_60);
    }
  }
  FUN_0034ff4c(param_1,param_4[1],0,*param_4,param_2,6,param_4);
  return;
}


