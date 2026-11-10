/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf834; name: FUN_032cf834
 */


long FUN_032cf834(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_2 + -4);
  lVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2 - iVar1);
  return lVar2 - iVar1;
}


