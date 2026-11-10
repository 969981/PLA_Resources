/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255ee38; name: FUN_0255ee38
 */


void FUN_0255ee38(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x208);
  plVar1 = (long *)0x0;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x68);
  }
  *param_1 = (long)plVar1;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0255ee58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}


