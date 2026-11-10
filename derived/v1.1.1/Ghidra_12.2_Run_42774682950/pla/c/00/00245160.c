/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00245160; name: FUN_00245160
 */


void FUN_00245160(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  FUN_00232674(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar1 = *(long **)(param_1 + 0x20);
  do {
    if ((long *)(param_1 + 0x18) == plVar1) {
      return;
    }
    plVar5 = (long *)plVar1[1];
    if ((long *)(param_1 + 0x18) != plVar1) {
      lVar2 = *plVar5;
      *(long **)(*plVar1 + 8) = plVar5;
      *plVar5 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
    }
    iVar4 = (int)plVar1[2];
    lVar2 = plVar1[3];
    if (0 < iVar4) {
      lVar6 = 0;
      lVar7 = 8;
      lVar3 = *(long *)(lVar2 + 8);
      if (lVar3 != 0) goto LAB_0024520c;
      while (lVar6 = lVar6 + 1, lVar6 < iVar4) {
        while( true ) {
          lVar7 = lVar7 + 0x10;
          lVar3 = *(long *)(lVar2 + lVar7);
          if (lVar3 == 0) break;
LAB_0024520c:
          FUN_00232674(lVar3);
          iVar4 = (int)plVar1[2];
          lVar2 = plVar1[3];
          lVar6 = lVar6 + 1;
          if (iVar4 <= lVar6) goto LAB_0024522c;
        }
      }
    }
LAB_0024522c:
    if (lVar2 != 0) {
      FUN_00232674();
    }
    FUN_00232674(plVar1);
    plVar1 = plVar5;
  } while( true );
}


