/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00581f1c; name: FUN_00581f1c
 */


void FUN_00581f1c(long *param_1,byte *param_2)

{
  ulong __n;
  byte bVar1;
  ulong __n_00;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  byte *__s1;
  void *__dest;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  bVar1 = *param_2;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  __n_00 = uVar4 - 5;
  __n = uVar4;
  if (4 < uVar4) {
    __n = 5;
  }
  if (__n == 0) {
LAB_00581f88:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0xa8);
    if (plVar3 != (long *)0x0) {
      plVar3[10] = 0;
      plVar3[9] = 0;
      plVar3[8] = 0;
      plVar3[7] = 0;
      plVar3[0xc] = 0;
      plVar3[0xb] = 0;
      plVar3[0xe] = 0;
      plVar3[0xd] = 0;
      plVar3[0x10] = 0;
      plVar3[0xf] = 0;
      plVar3[0x12] = 0;
      plVar3[0x11] = 0;
      *plVar3 = (long)(PTR_DAT_04374e38 + 0x10);
      plVar3[0x10] = 0;
      plVar3[2] = 0;
      plVar3[1] = 0;
      plVar3[4] = 0;
      plVar3[3] = 0;
      plVar3[6] = 0;
      plVar3[5] = 0;
      plVar3[0x13] = 0;
      plVar3[0x14] = 0;
      plVar3[9] = 0;
      plVar3[8] = 0;
      plVar3[0xb] = 0;
      plVar3[10] = 0;
      plVar3[0xd] = 0;
      plVar3[0xc] = 0;
      plVar3[0xf] = 0;
      plVar3[0xe] = 0;
    }
                    /* try { // try from 00581fe8 to 00581ff3 has its CatchHandler @ 00582130 */
    uVar4 = FUN_00584450(plVar3,param_2);
    plVar6 = plVar3;
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
    if ((uVar4 & 1) == 0 && plVar3 != (long *)0x0) {
      (**(code **)*plVar3)(plVar3);
      FUN_002e2ea0(PTR_LAB_04373088,plVar3);
      plVar6 = (long *)0x0;
    }
    *param_1 = (long)plVar6;
    return;
  }
  __s1 = *(byte **)(param_2 + 0x10);
  if ((bVar1 & 1) == 0) {
    __s1 = param_2 + 1;
  }
  iVar2 = memcmp(__s1,"libc:",__n);
  if (__n < 5 || iVar2 != 0) goto LAB_00581f88;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_58 = 0;
  if (uVar4 < 5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  if (0xffffffffffffffef < __n_00) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n_00 < 0x17) {
    local_58 = (ulong)(byte)((int)__n_00 << 1);
    __dest = (void *)((ulong)&local_58 | 1);
    if (__n_00 == 0) goto LAB_005820bc;
  }
  else {
    uVar4 = uVar4 + 0xb & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_58 = uVar4 | 1;
    local_50 = __n_00;
    local_48 = __dest;
  }
  memcpy(__dest,__s1 + 5,__n_00);
LAB_005820bc:
  *(undefined1 *)((long)__dest + __n_00) = 0;
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x10);
  if (lVar5 != 0) {
                    /* try { // try from 005820d8 to 005820e3 has its CatchHandler @ 00582114 */
    FUN_00588194(lVar5,&local_58);
  }
  *param_1 = lVar5;
  if ((local_58 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_48);
  return;
}


