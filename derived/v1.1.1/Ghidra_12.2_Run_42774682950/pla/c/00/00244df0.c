/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00244df0; name: FUN_00244df0
 */


void FUN_00244df0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  FUN_00232674(*(undefined8 *)(param_1 + 0x18));
  *(undefined2 *)(param_1 + 0x10d) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar2 = *(long **)(param_1 + 0x138);
  do {
    if ((long *)(param_1 + 0x130) == plVar2) {
      plVar2 = *(long **)(param_1 + 0x40);
      while ((long *)(param_1 + 0x38) != plVar2) {
        plVar6 = (long *)plVar2[1];
        FUN_00232674(plVar2[2]);
        lVar3 = plVar2[5];
        plVar2[2] = 0;
        if (0 < (int)plVar2[4]) {
          lVar7 = 0;
          lVar8 = 8;
          lVar4 = *(long *)(lVar3 + 8);
          while( true ) {
            if (lVar4 != 0) {
              FUN_00232674(lVar4);
              lVar3 = plVar2[5];
            }
            *(undefined8 *)(lVar3 + lVar8) = 0;
            lVar3 = plVar2[5];
            lVar7 = lVar7 + 1;
            lVar8 = lVar8 + 0x10;
            if ((int)plVar2[4] <= lVar7) break;
            lVar4 = *(long *)(lVar3 + lVar8);
          }
        }
        if (lVar3 != 0) {
          FUN_00232674();
        }
        plVar2[5] = 0;
        if ((long *)(param_1 + 0x38) != plVar2) {
          plVar1 = (long *)plVar2[1];
          lVar3 = *plVar1;
          *(long **)(*plVar2 + 8) = plVar1;
          *plVar1 = *plVar2;
          *(long **)(lVar3 + 8) = plVar2;
          *plVar2 = lVar3;
        }
        FUN_00232674(plVar2);
        plVar2 = plVar6;
      }
      plVar2 = *(long **)(param_1 + 0x78);
      while ((long *)(param_1 + 0x70) != plVar2) {
        plVar6 = (long *)plVar2[1];
        FUN_0024506c(plVar2);
        if ((long *)(param_1 + 0x70) != plVar2) {
          plVar1 = (long *)plVar2[1];
          lVar3 = *plVar1;
          *(long **)(*plVar2 + 8) = plVar1;
          *plVar1 = *plVar2;
          *(long **)(lVar3 + 8) = plVar2;
          *plVar2 = lVar3;
        }
        FUN_00232674(plVar2);
        plVar2 = plVar6;
      }
      plVar2 = *(long **)(param_1 + 0x30);
      while ((long *)(param_1 + 0x28) != plVar2) {
        plVar6 = (long *)plVar2[1];
        FUN_00245160(plVar2);
        if ((long *)(param_1 + 0x28) != plVar2) {
          plVar1 = (long *)plVar2[1];
          lVar3 = *plVar1;
          *(long **)(*plVar2 + 8) = plVar1;
          *plVar1 = *plVar2;
          *(long **)(lVar3 + 8) = plVar2;
          *plVar2 = lVar3;
        }
        FUN_00232674(plVar2);
        plVar2 = plVar6;
      }
      lVar3 = FUN_0025981c(param_1 + 0x48);
      if ((lVar3 != 0) && (*(char *)(param_1 + 0x10f) == '\0')) {
        FUN_00232674();
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_002597c0(param_1 + 0x48);
      return;
    }
    plVar6 = (long *)plVar2[1];
    if ((long *)(param_1 + 0x130) != plVar2) {
      lVar3 = *plVar6;
      *(long **)(*plVar2 + 8) = plVar6;
      *plVar6 = *plVar2;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
    }
    iVar5 = (int)plVar2[2];
    lVar3 = plVar2[3];
    if (0 < iVar5) {
      lVar7 = 0;
      lVar4 = 8;
      lVar8 = *(long *)(lVar3 + 8);
      if (lVar8 != 0) goto LAB_00244f08;
      while (lVar7 = lVar7 + 1, lVar7 < iVar5) {
        while( true ) {
          lVar4 = lVar4 + 0x10;
          lVar8 = *(long *)(lVar3 + lVar4);
          if (lVar8 == 0) break;
LAB_00244f08:
          FUN_00232674(lVar8);
          iVar5 = (int)plVar2[2];
          lVar3 = plVar2[3];
          lVar7 = lVar7 + 1;
          if (iVar5 <= lVar7) goto LAB_00244f28;
        }
      }
    }
LAB_00244f28:
    if (lVar3 != 0) {
      FUN_00232674();
    }
    FUN_00232674(plVar2);
    plVar2 = plVar6;
  } while( true );
}


