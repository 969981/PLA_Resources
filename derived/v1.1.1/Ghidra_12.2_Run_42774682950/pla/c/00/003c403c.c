/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c403c; name: FUN_003c403c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_003c403c(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_f8 [88];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_28 [8];
  
  local_70 = 0;
  uStack_68 = 0;
  local_60 = PTR_FUN_04373f88;
  puStack_58 = PTR_LAB_04373f90;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = _UNK_03889148;
  local_80 = _DAT_03889140;
  FUN_003c4df0(auStack_f8,&local_80);
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
                    /* try { // try from 003c4098 to 003c40c7 has its CatchHandler @ 003c4188 */
  uVar2 = FUN_003bfcb0(auStack_f8);
  uVar3 = FUN_0031e758(uVar2,param_2,param_3);
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 003c40d8 to 003c40ef has its CatchHandler @ 003c4164 */
    FUN_0030f640(&local_80,2,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor_database.cc"
                 ,0x18b);
                    /* try { // try from 003c40f0 to 003c4103 has its CatchHandler @ 003c414c */
    uVar2 = FUN_0030f3ac(&local_80,
                         "Invalid file descriptor data passed to EncodedDescriptorDatabase::Add().")
    ;
                    /* try { // try from 003c4104 to 003c410b has its CatchHandler @ 003c4148 */
    FUN_0030f41c(auStack_28,uVar2);
    FUN_0030f658(&local_80);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_003c41b0(param_1 + 8,uVar2,param_2,param_3);
  }
  if (local_88 != 0) {
                    /* try { // try from 003c4120 to 003c4127 has its CatchHandler @ 003c4174 */
    FUN_0032cf34(auStack_f8);
  }
  FUN_0032c4f8(auStack_f8);
  return uVar1 & 1;
}


