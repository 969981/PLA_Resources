/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed5d64; name: FUN_02ed5d64
 */


void FUN_02ed5d64(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (((lVar1 == 0) || (bVar4 = *(byte *)(lVar1 + 0x98), (bVar4 >> 1 & 1) == 0)) ||
     (*(short *)(lVar1 + 0x94) != 0)) {
    return;
  }
  puVar5 = &DAT_0440ad60;
  plVar6 = &DAT_0440ad60;
  lVar3 = 0;
  do {
    lVar2 = lVar3;
    lVar3 = *plVar6;
    plVar6 = (long *)(lVar3 + 0x40);
  } while (lVar3 != 0 && lVar3 != param_1);
  if (lVar3 != 0) {
    if (DAT_0440ad60 != lVar3) {
      puVar5 = (undefined8 *)(lVar2 + 0x40);
    }
    *puVar5 = *(undefined8 *)(lVar3 + 0x40);
    if (DAT_0440ad58 == lVar3) {
      DAT_0440ad58 = lVar2;
    }
    DAT_0440ad50 = DAT_0440ad50 + -1;
    lVar1 = *(long *)(param_1 + 0x78);
    bVar4 = *(byte *)(lVar1 + 0x98);
  }
  *(byte *)(lVar1 + 0x98) = bVar4 & 0xfd;
  return;
}


