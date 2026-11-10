/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332d480; name: FUN_0332d480
 */


void FUN_0332d480(long *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 <= *(int *)((long)param_1 + 0x14)) {
    iVar1 = 8;
    if (iVar2 != 0) {
      iVar1 = iVar2 << 1;
    }
    FUN_0332cf90(param_1,iVar1);
  }
  iVar2 = *(int *)((long)param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = (int)param_1[1];
    *(int *)((long)param_1 + 0xc) = iVar2;
  }
  *(int *)((long)param_1 + 0xc) = iVar2 + -1;
  memcpy((void *)(*param_1 + (long)(iVar2 + -1) * 0x100),param_2,0x100);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return;
}


