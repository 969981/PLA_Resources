/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3a134; name: FUN_02f3a134
 */


int FUN_02f3a134(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x290))();
  if (iVar1 == 1) {
    iVar1 = FUN_02e99720(param_1);
    if (iVar1 != 1) {
      (**(code **)(*param_1 + 0x298))(param_1);
    }
  }
  return iVar1;
}


