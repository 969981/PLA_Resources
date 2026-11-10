/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060a088; name: FUN_0060a088
 */


void FUN_0060a088(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  ulong *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  ulong uVar4;
  byte local_68 [16];
  undefined8 local_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  
  if ((byte)param_2[8] != 0) {
LAB_0060a0a4:
    if ((int)param_2[4] != 0x1c) {
      FUN_0060759c(param_1,param_2 + 3);
      return;
    }
    FUN_0060759c(local_68,param_2 + 3);
                    /* try { // try from 0060a0c0 to 0060a0d7 has its CatchHandler @ 0060a260 */
    puVar2 = (ulong *)FUN_002e3e88(local_68,0,&DAT_038aa492,1);
    uStack_48 = puVar2[1];
    local_50 = *puVar2;
    local_40 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
                    /* try { // try from 0060a0f0 to 0060a103 has its CatchHandler @ 0060a228 */
    puVar2 = (ulong *)FUN_002e4094(&local_50,&DAT_03904308,1);
    uVar4 = puVar2[1];
    uVar3 = *puVar2;
    param_1[2] = puVar2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    if ((local_50 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_40);
    }
    if ((local_68[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
    return;
  }
  bVar1 = (byte)*param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0060a0a4;
  }
  else if (param_2[1] == 0) goto LAB_0060a0a4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((bVar1 & 1) == 0) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    return;
  }
  uVar3 = param_2[1];
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (uVar3 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar3 << 1);
    if (uVar3 == 0) goto LAB_0060a208;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    param_1[1] = uVar3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  memcpy(__dest,__src,uVar3);
LAB_0060a208:
  *(undefined1 *)((long)__dest + uVar3) = 0;
  return;
}


