/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329bba0; name: FUN_0329bba0
 */


void FUN_0329bba0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *__dest;
  void *__src;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  if (param_2 != param_1) {
    iVar1 = *(int *)(param_2 + 1);
    __src = (void *)*param_2;
    if (iVar1 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,2,0,0,(long)param_1 + 0xc);
      *param_1 = __dest;
    }
    memcpy(__dest,__src,(long)iVar1 << 1);
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}


