/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc224; name: FUN_02edc224
 */


undefined8 FUN_02edc224(long *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*(uint *)(param_1 + 1) <= param_2) && (*(uint *)((long)param_1 + 0xc) < param_2)) {
    iVar1 = *(uint *)((long)param_1 + 0xc) + (param_2 - *(uint *)(param_1 + 1));
    lVar2 = FUN_02f59e50(0,*param_1,iVar1);
    if (lVar2 == 0) {
      return 0;
    }
    *param_1 = lVar2;
    *(int *)((long)param_1 + 0xc) = iVar1;
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}


