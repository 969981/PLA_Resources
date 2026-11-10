/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c5b5c; name: FUN_003c5b5c
 */


undefined8
FUN_003c5b5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong __n;
  void *__dest;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined4 local_88;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pbVar5 = *(byte **)(param_3 + 0x20);
  bVar1 = *pbVar5;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return 1;
    }
  }
  else if (*(long *)(pbVar5 + 8) == 0) {
    return 1;
  }
  if ((bVar1 & 1) == 0) {
    bVar2 = pbVar5[1];
  }
  else {
    bVar2 = **(byte **)(pbVar5 + 0x10);
  }
  if (bVar2 != 0x2e) {
    return 1;
  }
  uStack_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0;
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = *(ulong *)(pbVar5 + 8);
  }
  local_50 = param_4;
  uStack_48 = param_5;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  pbVar6 = *(byte **)(pbVar5 + 0x10);
  __n = uVar3 - 1;
  if ((bVar1 & 1) == 0) {
    pbVar6 = pbVar5 + 1;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_68 = (ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_68 | 1);
    if (__n == 0) goto LAB_003c5c54;
  }
  else {
    uVar3 = uVar3 + 0xf & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    local_68 = uVar3 | 1;
    uStack_60 = __n;
    local_58 = __dest;
  }
  memcpy(__dest,pbVar6 + 1,__n);
LAB_003c5c54:
  uStack_98 = uStack_60;
  local_a0 = local_68;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_88 = *(undefined4 *)(param_3 + 0x48);
  local_90 = local_58;
  local_58 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
                    /* try { // try from 003c5c7c to 003c5c87 has its CatchHandler @ 003c5d84 */
  uVar3 = FUN_003c63d0(param_1 + 0x30,&local_a0,&local_50);
  if ((local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
  if ((local_68 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  if ((uVar3 & 1) == 0) {
    FUN_0030f640(&local_a0,2,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor_database.cc"
                 ,0xe8);
                    /* try { // try from 003c5d00 to 003c5d57 has its CatchHandler @ 003c5dc0 */
    uVar4 = FUN_0030f3ac(&local_a0,"Extension conflicts with extension already in database: extend "
                        );
    uVar4 = FUN_0030f3e8(uVar4,*(undefined8 *)(param_3 + 0x20));
    uVar4 = FUN_0030f3ac(uVar4,&DAT_0395384f);
    uVar4 = FUN_0030f3e8(uVar4,*(undefined8 *)(param_3 + 0x18));
    uVar4 = FUN_0030f3ac(uVar4,&DAT_038c83e2);
    uVar4 = FUN_0030f52c(uVar4,*(undefined4 *)(param_3 + 0x48));
    uVar4 = FUN_0030f3ac(uVar4," } from:");
    uVar4 = FUN_0030f3e8(uVar4,param_2);
                    /* try { // try from 003c5d58 to 003c5d5f has its CatchHandler @ 003c5d80 */
    FUN_0030f41c(&local_68,uVar4);
    FUN_0030f658(&local_a0);
    return 0;
  }
  return 1;
}


