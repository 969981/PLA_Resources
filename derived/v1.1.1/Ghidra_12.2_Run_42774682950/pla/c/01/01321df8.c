/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01321df8; name: FUN_01321df8
 */


byte FUN_01321df8(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  
  bVar1 = FUN_02858378(*(undefined8 *)(param_1 + 0x740));
  iVar5 = FUN_013081ac(*(undefined8 *)(param_1 + 0x7e0));
  bVar2 = FUN_01306ee0(*(undefined8 *)(param_1 + 0x808));
  bVar3 = FUN_01308584(*(undefined8 *)(param_1 + 0x828));
  bVar4 = FUN_01308ba4(*(undefined8 *)(param_1 + 0x848));
  return bVar2 & bVar1 & iVar5 == 1 & bVar3 & bVar4;
}


