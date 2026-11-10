/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5fb2c; name: FUN_02c5fb2c
 */


ulong FUN_02c5fb2c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) != 0) {
    uVar5 = FUN_02c68174();
    return uVar5;
  }
  uVar1 = FUN_02c6849c();
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
  uVar6 = 1;
  do {
    uVar4 = FUN_02c524b0(uVar1,uVar2,uVar6);
    if (uVar3 < uVar4) break;
    uVar6 = uVar6 + 1;
  } while ((uVar6 & 0xff) < 0x65);
  uVar3 = uVar6 - 1;
  if ((uVar6 & 0xff) < 2) {
    uVar3 = 1;
  }
  return (ulong)(uVar3 & 0xff);
}


