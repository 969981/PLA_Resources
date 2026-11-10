/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00402390; name: FUN_00402390
 */


undefined8 FUN_00402390(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_004015a0();
  uVar2 = 0;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x244) == *(int *)(lVar1 + 0x240)) {
      return 0;
    }
    lVar3 = (long)*(int *)(lVar1 + 0x240) * 4;
    *(uint *)(lVar1 + lVar3) = *(uint *)(lVar1 + lVar3) | 1;
    uVar2 = 1;
  }
  return uVar2;
}


