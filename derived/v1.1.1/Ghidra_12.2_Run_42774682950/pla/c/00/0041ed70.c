/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041ed70; name: FUN_0041ed70
 */


undefined8 FUN_0041ed70(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == (int *)0x0) || (*param_2 != 0x10)) || (*(long *)(param_2 + 2) == 0)) {
    return 0;
  }
  uVar1 = FUN_0041eeb0(*(long *)(param_2 + 2),param_1);
  return uVar1;
}


