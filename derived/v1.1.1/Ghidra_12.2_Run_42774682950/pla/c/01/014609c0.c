/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014609c0; name: FUN_014609c0
 */


void FUN_014609c0(float param_1,long param_2,undefined8 param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d2e5c8(*(undefined8 *)(param_2 + 0x10));
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  FUN_00d2e4b8(fVar1,*(undefined8 *)(param_2 + 0x10),param_3);
  return;
}


