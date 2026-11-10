/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c60754; name: FUN_02c60754
 */


bool FUN_02c60754(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
  if (((iVar2 == param_2) ||
      (iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1), iVar2 == param_2)) ||
     (iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2), iVar2 == param_2)) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),3);
    bVar1 = iVar2 == param_2;
  }
  return bVar1;
}


