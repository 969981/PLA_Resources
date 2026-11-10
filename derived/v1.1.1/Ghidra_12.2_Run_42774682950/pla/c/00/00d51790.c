/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d51790; name: FUN_00d51790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d51790(long *param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  
  if (((int)param_1[(long)param_2 * 0xc + 200] == 0) ||
     (lVar13 = (long)param_2, *(int *)((long)param_1 + lVar13 * 0x60 + 0x644) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar8 = *(long *)(param_1[lVar13 * 0xc + 199] + 0xb0);
  if (lVar8 != 0) {
    *(long *)(param_1[lVar13 * 0xc + 199] + 0xb0) = lVar8 - ((lVar8 << 4) >> 4);
  }
  (**(code **)(*param_1 + 0x100))(param_1,param_2);
  iVar6 = param_2;
  if (param_2 == 2) {
    iVar6 = 0;
  }
  lVar8 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar6 * 0x28);
  iVar3 = *(int *)(*(long *)(lVar8 + 0x8b0) + 0x10);
  iVar6 = *(int *)(*(long *)(lVar8 + 0x8b0) + 0x14);
  if (param_3 != -1) {
    iVar6 = param_3;
  }
  *(short *)(param_1 + lVar13 * 0xc + 0xcb) = (short)iVar6;
  if (param_4 != -1) {
    iVar3 = param_4;
  }
  *(short *)((long)param_1 + lVar13 * 0x60 + 0x65a) = (short)iVar3;
  FUN_00d4f364(param_1,param_2);
  lVar8 = _DAT_00000150;
  plVar12 = _DAT_00000148;
  if (*(char *)((long)param_1 + lVar13 * 0x60 + 0x666) == '\0') {
    plVar10 = (long *)param_1[0x59];
    if (plVar10 == (long *)0x0) {
      lVar14 = (&DAT_043ab898)[lVar13 * 0x28];
      plVar10 = (long *)(&DAT_043ab8b0)[lVar13 * 0x28];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar15 = plVar12;
      if ((lVar8 != 0) && (*plVar12 != lVar14)) {
        lVar9 = lVar8 * 0x30;
        plVar11 = plVar12 + lVar8 * 6;
        do {
          lVar9 = lVar9 + -0x30;
          plVar15 = plVar11;
          if (lVar9 == 0) break;
          plVar2 = plVar12 + 6;
          plVar12 = plVar12 + 6;
          plVar15 = plVar12;
        } while (*plVar2 != lVar14);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) & 0xfe;
    }
    else {
      plVar12 = plVar10 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar14 = (&DAT_043ab898)[lVar13 * 0x28];
      plVar15 = (long *)plVar10[0x29];
      lVar8 = plVar10[0x2a];
      plVar11 = (long *)(&DAT_043ab8b0)[lVar13 * 0x28];
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      plVar2 = plVar15;
      if ((lVar8 != 0) && (*plVar15 != lVar14)) {
        lVar9 = lVar8 * 0x30;
        plVar7 = plVar15 + lVar8 * 6;
        do {
          lVar9 = lVar9 + -0x30;
          plVar2 = plVar7;
          if (lVar9 == 0) break;
          plVar1 = plVar15 + 6;
          plVar15 = plVar15 + 6;
          plVar2 = plVar15;
        } while (*plVar1 != lVar14);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe;
      do {
        iVar6 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x110))(param_1,param_2,&DAT_043ab878 + lVar13 * 0x28);
    lVar8 = _DAT_00000150;
    plVar12 = _DAT_00000148;
    plVar10 = (long *)param_1[0x59];
    if (plVar10 == (long *)0x0) {
      lVar14 = (&DAT_043ab898)[lVar13 * 0x28];
      plVar10 = (long *)(&DAT_043ab8b0)[lVar13 * 0x28];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      plVar15 = plVar12;
      if ((lVar8 != 0) && (*plVar12 != lVar14)) {
        lVar9 = lVar8 * 0x30;
        plVar11 = plVar12 + lVar8 * 6;
        do {
          lVar9 = lVar9 + -0x30;
          plVar15 = plVar11;
          if (lVar9 == 0) break;
          plVar2 = plVar12 + 6;
          plVar12 = plVar12 + 6;
          plVar15 = plVar12;
        } while (*plVar2 != lVar14);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) | 1;
    }
    else {
      plVar12 = plVar10 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar14 = (&DAT_043ab898)[lVar13 * 0x28];
      plVar15 = (long *)plVar10[0x29];
      lVar8 = plVar10[0x2a];
      plVar11 = (long *)(&DAT_043ab8b0)[lVar13 * 0x28];
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      plVar2 = plVar15;
      if ((lVar8 != 0) && (*plVar15 != lVar14)) {
        lVar9 = lVar8 * 0x30;
        plVar7 = plVar15 + lVar8 * 6;
        do {
          lVar9 = lVar9 + -0x30;
          plVar2 = plVar7;
          if (lVar9 == 0) break;
          plVar1 = plVar15 + 6;
          plVar15 = plVar15 + 6;
          plVar2 = plVar15;
        } while (*plVar1 != lVar14);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) | 1;
      do {
        iVar6 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    FUN_00d50db0(param_1,param_2);
  }
  FUN_00d51148(param_1,param_2,(char)param_1[lVar13 * 0xc + 0xcd]);
  return;
}


