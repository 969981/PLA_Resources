/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d51e18; name: FUN_00d51e18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d51e18(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  if (((int)param_1[(long)param_2 * 0xc + 200] == 0) ||
     (lVar10 = (long)param_2, *(int *)((long)param_1 + lVar10 * 0x60 + 0x644) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar7 = *(long *)(param_1[lVar10 * 0xc + 199] + 0xb0);
  if (lVar7 != 0) {
    *(long *)(param_1[lVar10 * 0xc + 199] + 0xb0) = lVar7 - ((lVar7 << 4) >> 4);
  }
  (**(code **)(*param_1 + 0x100))(param_1,param_2);
  iVar5 = param_2;
  if (param_2 == 2) {
    iVar5 = 0;
  }
  FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar5 * 0x28);
  FUN_0281a2d0();
  lVar7 = _DAT_00000150;
  plVar8 = _DAT_00000148;
  if (*(char *)((long)param_1 + lVar10 * 0x60 + 0x666) == '\0') {
    plVar9 = (long *)param_1[0x59];
    if (plVar9 == (long *)0x0) {
      lVar13 = (&DAT_043ab898)[lVar10 * 0x28];
      plVar9 = (long *)(&DAT_043ab8b0)[lVar10 * 0x28];
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      plVar12 = plVar8;
      if ((lVar7 != 0) && (*plVar8 != lVar13)) {
        lVar10 = lVar7 * 0x30;
        plVar11 = plVar8 + lVar7 * 6;
        do {
          lVar10 = lVar10 + -0x30;
          plVar12 = plVar11;
          if (lVar10 == 0) break;
          plVar2 = plVar8 + 6;
          plVar8 = plVar8 + 6;
          plVar12 = plVar8;
        } while (*plVar2 != lVar13);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe;
    }
    else {
      plVar8 = plVar9 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar13 = (&DAT_043ab898)[lVar10 * 0x28];
      plVar12 = (long *)plVar9[0x29];
      lVar7 = plVar9[0x2a];
      plVar11 = (long *)(&DAT_043ab8b0)[lVar10 * 0x28];
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      plVar2 = plVar12;
      if ((lVar7 != 0) && (*plVar12 != lVar13)) {
        lVar10 = lVar7 * 0x30;
        plVar6 = plVar12 + lVar7 * 6;
        do {
          lVar10 = lVar10 + -0x30;
          plVar2 = plVar6;
          if (lVar10 == 0) break;
          plVar1 = plVar12 + 6;
          plVar12 = plVar12 + 6;
          plVar2 = plVar12;
        } while (*plVar1 != lVar13);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe;
      do {
        iVar5 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d52104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
    return;
  }
  (**(code **)(*param_1 + 0x110))(param_1,param_2,&DAT_043ab878 + lVar10 * 0x28);
  lVar7 = _DAT_00000150;
  plVar8 = _DAT_00000148;
  plVar9 = (long *)param_1[0x59];
  if (plVar9 == (long *)0x0) {
    lVar13 = (&DAT_043ab898)[lVar10 * 0x28];
    plVar9 = (long *)(&DAT_043ab8b0)[lVar10 * 0x28];
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    plVar12 = plVar8;
    if ((lVar7 != 0) && (*plVar8 != lVar13)) {
      lVar10 = lVar7 * 0x30;
      plVar11 = plVar8 + lVar7 * 6;
      do {
        lVar10 = lVar10 + -0x30;
        plVar12 = plVar11;
        if (lVar10 == 0) break;
        plVar2 = plVar8 + 6;
        plVar8 = plVar8 + 6;
        plVar12 = plVar8;
      } while (*plVar2 != lVar13);
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) | 1;
  }
  else {
    plVar8 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar13 = (&DAT_043ab898)[lVar10 * 0x28];
    plVar12 = (long *)plVar9[0x29];
    lVar7 = plVar9[0x2a];
    plVar11 = (long *)(&DAT_043ab8b0)[lVar10 * 0x28];
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar2 = plVar12;
    if ((lVar7 != 0) && (*plVar12 != lVar13)) {
      lVar10 = lVar7 * 0x30;
      plVar6 = plVar12 + lVar7 * 6;
      do {
        lVar10 = lVar10 + -0x30;
        plVar2 = plVar6;
        if (lVar10 == 0) break;
        plVar1 = plVar12 + 6;
        plVar12 = plVar12 + 6;
        plVar2 = plVar12;
      } while (*plVar1 != lVar13);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) | 1;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  FUN_00d50db0(param_1,param_2);
  return;
}


