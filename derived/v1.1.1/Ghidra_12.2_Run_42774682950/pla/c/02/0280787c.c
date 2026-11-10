/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280787c; name: FUN_0280787c
 */


void FUN_0280787c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    param_1 = lVar1;
    for (lVar1 = *(long *)(lVar1 + 0x88); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x88)) {
      param_1 = lVar1;
    }
  }
  FUN_028080bc(param_1,0);
  return;
}


