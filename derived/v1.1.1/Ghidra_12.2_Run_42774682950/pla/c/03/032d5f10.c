/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d5f10; name: FUN_032d5f10
 */


void FUN_032d5f10(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
    plVar5 = *(long **)(lVar4 + 0x10);
  }
  else {
    plVar5 = *(long **)(lVar4 + 0x10);
  }
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    if ((lVar3 != 0) && ((char)plVar5[4] != '\0')) {
      lVar2 = plVar5[2];
      if (lVar4 == 0) {
        lVar4 = FUN_0333d16c(0,1);
        *(long *)(lVar1 + 0x38d490) = lVar4;
      }
      FUN_032cf244(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x60),lVar3,1,(int)lVar2 - (int)lVar3);
    }
    *(undefined1 *)(plVar5 + 4) = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    FUN_032d5cb4(plVar5);
    lVar3 = (long)DAT_04449ef4;
    lVar4 = *(long *)(lVar1 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar4;
    }
    *(undefined8 *)(lVar4 + lVar3 * 8 + 0x18) = 0;
  }
  return;
}


