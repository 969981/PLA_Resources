/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00361a8c; name: FUN_00361a8c
 */


/* WARNING: Removing unreachable block (ram,0x00361b14) */

void FUN_00361a8c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auStack_58 [8];
  byte local_50;
  undefined7 uStack_4f;
  char cStack_48;
  undefined7 uStack_47;
  char cStack_40;
  undefined4 uStack_3f;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  
  lVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  local_50 = 0x28;
  uStack_3a = 0;
  uStack_3f = 0x6e6f6974;
  uStack_3b = 0;
  uStack_47 = s_uninterpreted_option_038a0a3a._8_7_;
  cStack_40 = s_uninterpreted_option_038a0a3a[0xf];
  uStack_4f = s_uninterpreted_option_038a0a3a._0_7_;
  cStack_48 = s_uninterpreted_option_038a0a3a[7];
                    /* try { // try from 00361aec to 00361af3 has its CatchHandler @ 00361bd8 */
  iVar1 = FUN_00364cf4(*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x90),lVar2,&local_50);
  if (iVar1 == 2) {
    lVar2 = extraout_x1;
    if (*(char *)(extraout_x1 + 0x43) != '\0') {
      lVar2 = 0;
    }
  }
  else {
    lVar2 = 0;
  }
  if ((local_50 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,
                 CONCAT26(uStack_3a,CONCAT15(uStack_3b,CONCAT41(uStack_3f,cStack_40))));
  }
  if (lVar2 == 0) {
    FUN_0030f640(&local_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1a83);
                    /* try { // try from 00361b58 to 00361b6b has its CatchHandler @ 00361bc4 */
    uVar3 = FUN_0030f3ac(&local_50,"CHECK failed: field != nullptr: ");
                    /* try { // try from 00361b6c to 00361b73 has its CatchHandler @ 00361bc0 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(&local_50);
  }
  (**(code **)(*param_3 + 0x98))(param_3);
  plVar4 = (long *)FUN_0038d598(extraout_x1_00,param_3,lVar2,0);
  (**(code **)(*plVar4 + 0x70))(plVar4,param_2);
  return;
}


