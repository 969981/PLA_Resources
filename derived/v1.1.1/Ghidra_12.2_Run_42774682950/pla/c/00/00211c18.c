/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211c18; name: FUN_00211c18
 */


undefined8 FUN_00211c18(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_3 + 0xe6) == '\0') {
    return 0;
  }
  FUN_0021165c(param_2 + 0x18,param_3 + 0x10);
  *(undefined1 *)(param_3 + 0xe6) = 0;
  uVar1 = FUN_00211c68(param_1,param_3);
  return uVar1;
}


