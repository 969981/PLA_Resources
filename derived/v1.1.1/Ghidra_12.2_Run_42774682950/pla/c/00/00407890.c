/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407890; name: FUN_00407890
 */


undefined8 FUN_00407890(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  iVar1 = *param_1 + -1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
  *param_1 = iVar1;
  return uVar2;
}


