/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f404bc; name: FUN_02f404bc
 */


undefined8 FUN_02f404bc(long param_1)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) ||
     (((*(byte *)(param_1 + 0x6c) >> 2 & 1) == 0 && (*(long *)(param_1 + 0x38) == 0)))) {
    uVar1 = 0;
  }
  else {
    FUN_02f40880(param_1 + 0x20);
    if ((*(long *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) >> 2 & 1) != 0)) {
      FUN_02f40810(param_1 + 0x20);
    }
    uVar1 = 1;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  }
  return uVar1;
}


