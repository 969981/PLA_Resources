/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00543290; name: FUN_00543290
 */


void FUN_00543290(long *param_1,ulong *param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  void *__src;
  void *__dest;
  ulong uVar3;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  if ((*param_2 & 1) == 0) {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = (void *)param_2[2];
    goto LAB_00543340;
  }
  uVar2 = param_2[1];
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (uVar2 < 0x17) {
    local_60 = (ulong)(byte)((int)uVar2 << 1);
    __dest = (void *)((ulong)&local_60 | 1);
    if (uVar2 != 0) goto LAB_0054332c;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    local_60 = uVar3 | 1;
    uStack_58 = uVar2;
    local_50 = __dest;
LAB_0054332c:
    memcpy(__dest,__src,uVar2);
  }
  *(undefined1 *)((long)__dest + uVar2) = 0;
LAB_00543340:
                    /* try { // try from 00543340 to 0054334f has its CatchHandler @ 00543544 */
  FUN_003e4b18(param_1,2,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  puVar1 = PTR_DAT_04374c68;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 00543380 to 00543387 has its CatchHandler @ 00543530 */
  FUN_002ef6d0(param_1 + 9);
  param_1[0xd] = 0;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[0x10] = param_2[2];
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
                    /* try { // try from 005433a8 to 005433af has its CatchHandler @ 00543450 */
  FUN_003e4c14(param_1 + 0x11);
                    /* try { // try from 005433b4 to 005433bb has its CatchHandler @ 005433dc */
  FUN_003ed3d0(param_1 + 0x1b,param_3);
  return;
}


