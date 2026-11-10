/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4ebc; name: FUN_032c4ebc
 */


void FUN_032c4ebc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *__dest;
  void *__src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    __src = (void *)*param_2;
    __dest = (void *)*param_1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar1) {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a090,iVar1,1,__dest,*(undefined4 *)(param_1 + 1));
      *param_1 = __dest;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}


