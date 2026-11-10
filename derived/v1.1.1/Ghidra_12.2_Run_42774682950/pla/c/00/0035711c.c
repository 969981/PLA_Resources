/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035711c; name: FUN_0035711c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035711c(long param_1,long param_2,long param_3,undefined8 *param_4)

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
  
  uVar3 = FUN_00356fd4(param_1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_2 + 0x18));
  FUN_00350da4(param_1,*(undefined8 *)(param_2 + 0x18),uVar3,param_2);
  uVar4 = FUN_00340fec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar4;
  param_4[1] = uVar3;
  param_4[2] = param_3;
  *(undefined4 *)(param_4 + 3) = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  if ((*(uint *)(param_2 + 0x10) >> 1 & 1) != 0) {
    puVar5 = *(undefined **)(param_2 + 0x20);
    if (puVar5 == (undefined *)0x0) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x2433);
                    /* try { // try from 003571ac to 003571bf has its CatchHandler @ 00357288 */
      uVar4 = FUN_0030f3ac(&local_60,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 003571c0 to 003571c7 has its CatchHandler @ 00357284 */
      FUN_0030f41c(auStack_68,uVar4);
      FUN_0030f658(&local_60);
      puVar5 = *(undefined **)(param_2 + 0x20);
    }
    puVar1 = PTR_DAT_04373c10;
    if (puVar5 != (undefined *)0x0) {
      puVar1 = puVar5;
    }
    local_50 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar2 = s_google_protobuf_OneofOptions_0398dcc8._0_8_;
    uVar4 = CONCAT44(s_google_protobuf_OneofOptions_0398dcc8._12_4_,
                     s_google_protobuf_OneofOptions_0398dcc8._8_4_);
    uStack_58 = _UNK_0388a478;
    local_60 = _DAT_0388a470;
    uVar3 = CONCAT44(s_google_protobuf_OneofOptions_0398dcc8._16_4_,
                     s_google_protobuf_OneofOptions_0398dcc8._12_4_);
    *(undefined8 *)(local_50 + 0x14) = s_google_protobuf_OneofOptions_0398dcc8._20_8_;
    *(undefined8 *)(local_50 + 0xc) = uVar3;
    *(undefined8 *)(local_50 + 8) = uVar4;
    *(undefined8 *)local_50 = uVar2;
    local_50[0x1c] = '\0';
                    /* try { // try from 00357220 to 00357237 has its CatchHandler @ 0035729c */
    FUN_003598a8(param_1,puVar1,param_4,2,&local_60);
    if ((local_60 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
    uVar4 = *param_4;
    uVar3 = param_4[1];
  }
  FUN_0034ff4c(param_1,uVar3,param_3,uVar4,param_2,3,param_4);
  return;
}


