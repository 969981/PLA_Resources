/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f1c08; name: FUN_012f1c08
 */


uint FUN_012f1c08(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0xf8) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00d37ad4();
  }
  uVar2 = FUN_012ef338(*(undefined8 *)(param_1 + 0x728));
  uVar3 = FUN_012f008c(*(undefined8 *)(param_1 + 0x730));
  return uVar1 & uVar2 & uVar3 & 1;
}


