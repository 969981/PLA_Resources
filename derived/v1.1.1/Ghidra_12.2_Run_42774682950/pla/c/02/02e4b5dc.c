/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4b5dc; name: FUN_02e4b5dc
 */


long * FUN_02e4b5dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x400)) {
    if (*(long *)(lVar1 + 0x410) != 0) {
LAB_02e4b67c:
      plVar3 = *(long **)(lVar1 + 0x410);
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
LAB_02e4b684:
      if (*plVar3 == 0) {
        *(undefined8 *)(lVar1 + 0x410) = 0;
      }
      else {
        *(long *)(lVar1 + 0x410) = *plVar3;
      }
      *(int *)(lVar1 + 0x408) = *(int *)(lVar1 + 0x408) + -1;
      return plVar3;
    }
  }
  lVar1 = FUN_02f59e40(10,0x418,0x10);
  lVar2 = 0;
  if (lVar1 == 0) {
    return (long *)0x0;
  }
  *(undefined8 *)(lVar1 + 0x400) = 0;
  *(undefined4 *)(lVar1 + 0x408) = 0;
  *(undefined8 *)(lVar1 + 0x410) = 0;
  lVar4 = lVar1;
  do {
    *(long *)(lVar1 + 0x410) = lVar4;
    *(undefined8 *)(lVar1 + lVar2) = 0;
    while( true ) {
      if (lVar2 == 0x3f0) {
        *(undefined4 *)(lVar1 + 0x408) = 0x40;
        if (*param_1 != 0) {
          *(long *)(lVar1 + 0x400) = *param_1;
          *param_1 = lVar1;
          goto LAB_02e4b67c;
        }
        *param_1 = lVar1;
        *(undefined8 *)(lVar1 + 0x400) = 0;
        plVar3 = *(long **)(lVar1 + 0x410);
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        goto LAB_02e4b684;
      }
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar1 + lVar2;
      if (*(long *)(lVar1 + 0x410) == 0) break;
      *(long *)(lVar1 + lVar2) = *(long *)(lVar1 + 0x410);
      *(long *)(lVar1 + 0x410) = lVar4;
    }
  } while( true );
}


