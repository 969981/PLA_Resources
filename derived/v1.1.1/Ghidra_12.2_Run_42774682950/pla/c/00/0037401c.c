/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037401c; name: FUN_0037401c
 */


void FUN_0037401c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 byte *param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long local_80 [2];
  undefined *local_70;
  long *local_68;
  undefined8 local_60;
  int local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  if (param_5 == (byte *)0x0) {
    FUN_0030f640(&local_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                 ,0x7ea);
                    /* try { // try from 00374070 to 0037408f has its CatchHandler @ 00374164 */
    uVar3 = FUN_0030f3ac(&local_70,"CHECK failed: output: ");
    uVar3 = FUN_0030f3ac(uVar3,"output specified is nullptr");
                    /* try { // try from 00374090 to 00374097 has its CatchHandler @ 00374160 */
    FUN_0030f41c(local_80,uVar3);
    FUN_0030f658(&local_70);
    bVar1 = bRam0000000000000000;
  }
  else {
    bVar1 = *param_5;
  }
  if ((bVar1 & 1) == 0) {
    param_5[0] = 0;
    param_5[1] = 0;
  }
  else {
    **(undefined1 **)(param_5 + 0x10) = 0;
    param_5[8] = 0;
    param_5[9] = 0;
    param_5[10] = 0;
    param_5[0xb] = 0;
    param_5[0xc] = 0;
    param_5[0xd] = 0;
    param_5[0xe] = 0;
    param_5[0xf] = 0;
  }
  FUN_0030e55c(local_80,param_5);
  puVar2 = PTR_DAT_04373c68;
  local_50 = *param_1;
  local_60 = 0;
  local_58 = 0;
  local_70 = PTR_DAT_04373c68 + 0x10;
  local_54 = 1;
  local_68 = local_80;
  uStack_4c = local_50;
                    /* try { // try from 003740f4 to 00374117 has its CatchHandler @ 00374178 */
  (**(code **)(*param_2 + 0x98))(param_2);
  FUN_003741b0(param_1,param_2,extraout_x1,param_3,param_4,&local_70);
  local_70 = puVar2 + 0x10;
  if ((local_54._1_1_ == '\0') && (0 < local_58)) {
                    /* try { // try from 00374140 to 00374143 has its CatchHandler @ 0037415c */
    (**(code **)(*local_68 + 0x18))();
  }
  return;
}


