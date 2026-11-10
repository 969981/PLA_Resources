/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314764c; name: FUN_0314764c
 */


void FUN_0314764c(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  puVar1 = (undefined8 *)FUN_032cf5b0(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 **)(param_1 + 0x70) = puVar1;
  if (*(int *)(param_1 + 0x54) < 1) {
    return;
  }
  FUN_03147580(puVar1,*(int *)(param_1 + 0x54) + 1);
  return;
}


