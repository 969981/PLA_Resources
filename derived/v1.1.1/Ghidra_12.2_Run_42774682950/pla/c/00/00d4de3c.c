/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4de3c; name: FUN_00d4de3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d4de3c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 == (long *)0x0) {
    lVar7 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab918);
    lVar3 = _DAT_00000150;
    plVar9 = _DAT_00000148;
    lVar13 = *(long *)(lVar7 + 0x718);
    plVar10 = *(long **)(lVar7 + 0x730);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar12 = plVar9;
    if ((lVar3 != 0) && (*plVar9 != lVar13)) {
      lVar7 = lVar3 * 0x30;
      plVar11 = plVar9 + lVar3 * 6;
      do {
        lVar7 = lVar7 + -0x30;
        plVar12 = plVar11;
        if (lVar7 == 0) break;
        plVar2 = plVar9 + 6;
        plVar9 = plVar9 + 6;
        plVar12 = plVar9;
      } while (*plVar2 != lVar13);
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe;
    plVar10 = DAT_043ab970;
    lVar7 = DAT_043ab958;
    lVar3 = _DAT_00000150;
    plVar9 = _DAT_00000148;
    if (DAT_043ab970 != (long *)0x0) {
      (**(code **)(*DAT_043ab970 + 0x18))(DAT_043ab970);
    }
    plVar12 = plVar9;
    if ((lVar3 != 0) && (*plVar9 != lVar7)) {
      lVar13 = lVar3 * 0x30;
      plVar11 = plVar9 + lVar3 * 6;
      do {
        lVar13 = lVar13 + -0x30;
        plVar12 = plVar11;
        if (lVar13 == 0) break;
        plVar2 = plVar9 + 6;
        plVar9 = plVar9 + 6;
        plVar12 = plVar9;
      } while (*plVar2 != lVar7);
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe;
    plVar10 = DAT_043ab9f0;
    lVar7 = DAT_043ab9d8;
    lVar3 = _DAT_00000150;
    plVar9 = _DAT_00000148;
    if (DAT_043ab9f0 != (long *)0x0) {
      (**(code **)(*DAT_043ab9f0 + 0x18))(DAT_043ab9f0);
    }
    plVar12 = plVar9;
    if ((lVar3 != 0) && (*plVar9 != lVar7)) {
      lVar13 = lVar3 * 0x30;
      plVar11 = plVar9 + lVar3 * 6;
      do {
        lVar13 = lVar13 + -0x30;
        plVar12 = plVar11;
        if (lVar13 == 0) break;
        plVar2 = plVar9 + 6;
        plVar9 = plVar9 + 6;
        plVar12 = plVar9;
      } while (*plVar2 != lVar7);
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe;
  }
  else {
    plVar10 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar7 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab918);
    plVar12 = (long *)plVar9[0x29];
    lVar3 = plVar9[0x2a];
    lVar13 = *(long *)(lVar7 + 0x718);
    plVar11 = *(long **)(lVar7 + 0x730);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar2 = plVar12;
    if ((lVar3 != 0) && (*plVar12 != lVar13)) {
      lVar7 = lVar3 * 0x30;
      plVar8 = plVar12 + lVar3 * 6;
      do {
        lVar7 = lVar7 + -0x30;
        plVar2 = plVar8;
        if (lVar7 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar2 = plVar12;
      } while (*plVar1 != lVar13);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe;
    plVar11 = DAT_043ab970;
    lVar7 = DAT_043ab958;
    plVar12 = (long *)plVar9[0x29];
    lVar3 = plVar9[0x2a];
    if (DAT_043ab970 != (long *)0x0) {
      (**(code **)(*DAT_043ab970 + 0x18))(DAT_043ab970);
    }
    plVar2 = plVar12;
    if ((lVar3 != 0) && (*plVar12 != lVar7)) {
      lVar13 = lVar3 * 0x30;
      plVar8 = plVar12 + lVar3 * 6;
      do {
        lVar13 = lVar13 + -0x30;
        plVar2 = plVar8;
        if (lVar13 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar2 = plVar12;
      } while (*plVar1 != lVar7);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe;
    plVar11 = DAT_043ab9f0;
    lVar7 = DAT_043ab9d8;
    plVar12 = (long *)plVar9[0x29];
    lVar3 = plVar9[0x2a];
    if (DAT_043ab9f0 != (long *)0x0) {
      (**(code **)(*DAT_043ab9f0 + 0x18))(DAT_043ab9f0);
    }
    plVar2 = plVar12;
    if ((lVar3 != 0) && (*plVar12 != lVar7)) {
      lVar13 = lVar3 * 0x30;
      plVar8 = plVar12 + lVar3 * 6;
      do {
        lVar13 = lVar13 + -0x30;
        plVar2 = plVar8;
        if (lVar13 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar2 = plVar12;
      } while (*plVar1 != lVar7);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d4e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}


