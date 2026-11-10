/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b5f54; name: FUN_016b5f54
 */


uint FUN_016b5f54(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_016b42f0(*(undefined8 *)(param_1 + 0x108));
  uVar2 = FUN_0165dad8(*(undefined8 *)(param_1 + 0x100));
  uVar3 = FUN_01779bc8(*(undefined8 *)(param_1 + 0x110));
  uVar4 = FUN_0177f230(*(undefined8 *)(param_1 + 0x118));
  return uVar1 & uVar2 & uVar3 & uVar4 & 1;
}


