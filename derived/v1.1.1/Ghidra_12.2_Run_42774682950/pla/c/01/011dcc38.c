/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011dcc38; name: FUN_011dcc38
 */


void FUN_011dcc38(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar4 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar4 == 0) || (*plVar2 == -0x1f6a3bafd742c721)) {
    plVar7 = plVar2;
  }
  else {
    lVar6 = lVar4 * 0x30;
    plVar3 = plVar2;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) {
        return;
      }
      plVar1 = plVar3 + 6;
      plVar7 = plVar3 + 6;
      plVar3 = plVar3 + 6;
    } while (*plVar1 != -0x1f6a3bafd742c721);
  }
  if ((plVar7 != plVar2 + lVar4 * 6) && (lVar4 = plVar7[4], lVar4 != 0)) {
    if ((param_2 & 1) == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = *(byte *)(param_1 + 0x6f8);
    }
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | bVar5;
  }
  return;
}


