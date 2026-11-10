/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e5788; name: FUN_003e5788
 */


void FUN_003e5788(long *param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *__src;
  void *__dest;
  ulong uVar4;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  if ((*param_2 & 1) == 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = (void *)param_2[2];
    goto LAB_003e5848;
  }
  uVar3 = param_2[1];
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (uVar3 < 0x17) {
    local_70 = (ulong)(byte)((int)uVar3 << 1);
    __dest = (void *)((ulong)&local_70 | 1);
    if (uVar3 != 0) goto LAB_003e5834;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_70 = uVar4 | 1;
    uStack_68 = uVar3;
    local_60 = __dest;
LAB_003e5834:
    memcpy(__dest,__src,uVar3);
  }
  *(undefined1 *)((long)__dest + uVar3) = 0;
LAB_003e5848:
  *(uint *)(param_1 + 3) = (uint)(param_4 != 0);
  puVar1 = PTR_DAT_043740e0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[4] = -1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[7] = (long)local_60;
  param_1[6] = uStack_68;
  param_1[5] = local_70;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 003e5888 to 003e5893 has its CatchHandler @ 003e5a08 */
  uVar2 = FUN_003eed6c();
  FUN_003eedac(uVar2,param_1);
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  *param_1 = (long)(PTR_DAT_043740e8 + 0x10);
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[10] = param_2[2];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 003e58d8 to 003e58df has its CatchHandler @ 003e59ac */
  FUN_003e4c14(param_1 + 0xb);
                    /* try { // try from 003e58e4 to 003e58ef has its CatchHandler @ 003e5950 */
  FUN_003ed3d0(param_1 + 0x15,param_3);
  param_1[0x20] = param_4;
  *(undefined4 *)(param_1 + 0x21) = 0;
                    /* try { // try from 003e58fc to 003e58ff has its CatchHandler @ 003e5938 */
  FUN_002ef6d0(param_1 + 0x22);
  param_1[0x26] = (long)(param_1 + 0x27);
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = (long)(param_1 + 0x2a);
  return;
}


