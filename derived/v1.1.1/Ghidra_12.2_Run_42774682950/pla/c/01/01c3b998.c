/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3b998; name: FUN_01c3b998
 */


void FUN_01c3b998(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x3d0) = *param_2;
  *(undefined8 *)(param_1 + 0x3d8) = uVar1;
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    *(undefined1 *)(param_1 + 0x3c0) = 1;
  }
  return;
}


