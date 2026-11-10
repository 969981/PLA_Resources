/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00233e78; name: FUN_00233e78
 */


undefined8 FUN_00233e78(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 1 || *(int *)PTR_DAT_04372bd8 < iVar1) {
    return 0;
  }
  return *(undefined8 *)(*param_1 + (long)(iVar1 + -1) * 8);
}


