/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145f078; name: FUN_0145f078
 */


void FUN_0145f078(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  plVar3 = *(long **)(lVar4 + 0x148);
  lVar4 = *(long *)(lVar4 + 0x150);
  if ((lVar4 != 0) && (*plVar3 != 0x29288174277c5656)) {
    plVar5 = plVar3 + lVar4 * 6;
    lVar4 = lVar4 * 0x30;
    do {
      lVar4 = lVar4 + -0x30;
      if (lVar4 == 0) {
        plVar3 = plVar5;
        break;
      }
      plVar2 = plVar3 + 6;
      plVar1 = plVar3 + 6;
      plVar3 = plVar2;
    } while (*plVar1 != 0x29288174277c5656);
  }
  *(byte *)(plVar3[4] + 0x58) = *(byte *)(plVar3[4] + 0x58) & 0xfe;
  FUN_0145f0f8();
  return;
}


