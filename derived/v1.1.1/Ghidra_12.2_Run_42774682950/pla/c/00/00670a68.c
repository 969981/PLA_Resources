/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00670a68; name: FUN_00670a68
 */


undefined8 FUN_00670a68(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0xd8) != 0) {
    uVar1 = 2;
  }
  FUN_0066ce3c(*(undefined8 *)(param_1 + 200),uVar1);
  return 1;
}


