/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed5ce4; name: FUN_02ed5ce4
 */


void FUN_02ed5ce4(long param_1)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((lVar1 != 0) && (bVar2 = *(byte *)(lVar1 + 0x98), (bVar2 >> 1 & 1) == 0)) {
    plVar3 = &DAT_0440ad60;
    do {
      lVar4 = *plVar3;
      plVar3 = (long *)(lVar4 + 0x40);
    } while (lVar4 != 0 && lVar4 != param_1);
    if (lVar4 == 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (DAT_0440ad60 == 0) {
        DAT_0440ad60 = param_1;
      }
      else {
        *(long *)(DAT_0440ad58 + 0x40) = param_1;
        lVar1 = *(long *)(param_1 + 0x78);
      }
      DAT_0440ad50 = DAT_0440ad50 + 1;
      bVar2 = *(byte *)(lVar1 + 0x98);
      DAT_0440ad58 = param_1;
    }
    *(byte *)(lVar1 + 0x98) = bVar2 | 2;
  }
  return;
}


