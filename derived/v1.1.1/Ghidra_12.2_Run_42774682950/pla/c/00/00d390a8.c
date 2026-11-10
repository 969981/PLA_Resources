/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d390a8; name: FUN_00d390a8
 */


void FUN_00d390a8(long param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x4c8);
  if (lVar4 != 0) {
    plVar3 = *(long **)(lVar4 + 0x70);
    plVar1 = *(long **)(lVar4 + 0x78);
    if (plVar3 != plVar1) {
      bVar2 = param_2 & 1;
      do {
        lVar4 = *(long *)(*plVar3 + 0x2c8);
        if ((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0xf8), lVar5 != 0)) {
          lVar4 = *(long *)(lVar4 + 0xf0);
          *(byte *)(*(long *)(lVar4 + 0x20) + 0x670) = bVar2;
          if ((lVar5 != 1) && (*(byte *)(*(long *)(lVar4 + 0x48) + 0x670) = bVar2, lVar5 != 2)) {
            lVar5 = lVar5 * 0x28 + -0x50;
            plVar6 = (long *)(lVar4 + 0x70);
            do {
              lVar5 = lVar5 + -0x28;
              *(byte *)(*plVar6 + 0x670) = bVar2;
              plVar6 = plVar6 + 5;
            } while (lVar5 != 0);
          }
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x362) = 1;
      return;
    }
  }
  return;
}


