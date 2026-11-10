/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b71cc; name: FUN_014b71cc
 */


bool FUN_014b71cc(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  return iVar1 != (int)param_1[1];
}


