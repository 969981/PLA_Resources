/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0196be58; name: FUN_0196be58
 */


uint FUN_0196be58(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_01cbcb8c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 200) + 0x98));
  if ((uVar2 & 1) == 0) {
    FUN_01e34268(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xc0));
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_01e82e64(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xd0),param_2);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


