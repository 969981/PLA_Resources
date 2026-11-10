/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5d7b0; name: FUN_00d5d7b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d5d7b0(long param_1,int param_2,byte param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  lVar3 = _DAT_00000150;
  plVar10 = _DAT_00000148;
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 == (long *)0x0) {
    lVar13 = (&DAT_043ab8d8)[(long)param_2 * 0x28];
    plVar9 = (long *)(&DAT_043ab8f0)[(long)param_2 * 0x28];
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    plVar12 = plVar10;
    if ((lVar3 != 0) && (*plVar10 != lVar13)) {
      lVar8 = lVar3 * 0x30;
      plVar11 = plVar10 + lVar3 * 6;
      do {
        lVar8 = lVar8 + -0x30;
        plVar12 = plVar11;
        if (lVar8 == 0) break;
        plVar2 = plVar10 + 6;
        plVar10 = plVar10 + 6;
        plVar12 = plVar10;
      } while (*plVar2 != lVar13);
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe | param_3 & 1;
    lVar3 = _DAT_00000150;
    plVar10 = _DAT_00000148;
    lVar13 = (&DAT_043ab8f8)[(long)param_2 * 0x28];
    plVar9 = (long *)(&DAT_043ab910)[(long)param_2 * 0x28];
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    plVar12 = plVar10;
    if ((lVar3 != 0) && (*plVar10 != lVar13)) {
      lVar8 = lVar3 * 0x30;
      plVar11 = plVar10 + lVar3 * 6;
      do {
        lVar8 = lVar8 + -0x30;
        plVar12 = plVar11;
        if (lVar8 == 0) break;
        plVar2 = plVar10 + 6;
        plVar10 = plVar10 + 6;
        plVar12 = plVar10;
      } while (*plVar2 != lVar13);
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe | param_3 & 1;
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
    plVar12 = (long *)plVar9[0x29];
    lVar3 = plVar9[0x2a];
    lVar13 = (&DAT_043ab8d8)[(long)param_2 * 0x28];
    plVar11 = (long *)(&DAT_043ab8f0)[(long)param_2 * 0x28];
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar2 = plVar12;
    if ((lVar3 != 0) && (*plVar12 != lVar13)) {
      lVar8 = lVar3 * 0x30;
      plVar7 = plVar12 + lVar3 * 6;
      do {
        lVar8 = lVar8 + -0x30;
        plVar2 = plVar7;
        if (lVar8 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar2 = plVar12;
      } while (*plVar1 != lVar13);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe | param_3 & 1;
    plVar12 = (long *)plVar9[0x29];
    lVar3 = plVar9[0x2a];
    lVar13 = (&DAT_043ab8f8)[(long)param_2 * 0x28];
    plVar11 = (long *)(&DAT_043ab910)[(long)param_2 * 0x28];
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar2 = plVar12;
    if ((lVar3 != 0) && (*plVar12 != lVar13)) {
      lVar8 = lVar3 * 0x30;
      plVar7 = plVar12 + lVar3 * 6;
      do {
        lVar8 = lVar8 + -0x30;
        plVar2 = plVar7;
        if (lVar8 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar2 = plVar12;
      } while (*plVar1 != lVar13);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe | param_3 & 1;
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
                    /* WARNING: Could not recover jumptable at 0x00d5d9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}


