/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f9e10; name: FUN_002f9e10
 */


undefined8 FUN_002f9e10(ulong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_002f9f30(1);
  DAT_043997e8 = *(undefined8 *)PTR_PTR_04373938;
  *(undefined1 **)PTR_PTR_04373938 = &LAB_002f9e60;
  FUN_002f5c30();
  return uVar1;
}


