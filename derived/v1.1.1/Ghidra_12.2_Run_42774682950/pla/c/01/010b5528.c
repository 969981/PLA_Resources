/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b5528; name: FUN_010b5528
 */


byte FUN_010b5528(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  bVar1 = FUN_010b4a50(param_1 + 0x1b8);
  bVar2 = FUN_010b4a50(param_1 + 0x1f8);
  bVar3 = FUN_010b4a50(param_1 + 0x238);
  bVar4 = FUN_010b4a50(param_1 + 0x278);
  bVar5 = FUN_010b4a50(param_1 + 0x2b8);
  bVar6 = FUN_010b4a50(param_1 + 0x2f8);
  bVar7 = FUN_010b4a50(param_1 + 0x338);
  bVar8 = 0;
  if (*(long *)(param_1 + 0x3d0) != 0) {
    bVar8 = *(byte *)(*(long *)(param_1 + 0x3d0) + 0x1e1);
  }
  return bVar8 & bVar1 & bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & 1;
}


