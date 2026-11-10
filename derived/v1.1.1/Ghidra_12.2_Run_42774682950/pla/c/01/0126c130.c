/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126c130; name: FUN_0126c130
 */


bool FUN_0126c130(long param_1,int param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)PTR_DAT_04379c88;
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x58);
    }
    plVar3 = (long *)(param_3 + 8);
  }
  else if (param_2 == 1) {
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x38) + 0x58);
    }
    plVar3 = (long *)(param_3 + 0x28);
  }
  else {
    if (param_2 != 2) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x58) + 0x58);
    }
    plVar3 = (long *)(param_3 + 0x48);
  }
  plVar1 = (long *)PTR_DAT_04379c88;
  if (*plVar3 != 0) {
    plVar1 = (long *)(*plVar3 + 0x58);
  }
  return *plVar2 == *plVar1;
}


