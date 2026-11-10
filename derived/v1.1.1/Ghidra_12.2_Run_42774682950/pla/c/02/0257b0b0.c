/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257b0b0; name: FUN_0257b0b0
 */


void FUN_0257b0b0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong local_68;
  
  plVar14 = (long *)param_1[0x59];
  if (plVar14 != (long *)0x0) {
    plVar6 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar15 = 0;
  plVar6 = param_1;
LAB_0257b134:
  if ((int)param_1[uVar15 * 2 + 0xd6] == 0) {
    uVar16 = param_1[199] - param_1[0xc6];
    if (uVar16 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(int *)((long)param_1 + 0x6fc) - 2;
      iVar10 = (int)(uVar16 >> 3);
      iVar12 = uVar13 - iVar10;
      do {
        uVar13 = uVar13 + iVar10;
        iVar12 = iVar12 + iVar10;
      } while (iVar12 < 0);
      do {
        iVar12 = uVar13 - iVar10;
        uVar13 = uVar13 - iVar10;
      } while ((ulong)((long)uVar16 >> 3) <= (ulong)(long)iVar12);
    }
    uVar16 = *(ulong *)(param_1[0xc6] + (ulong)uVar13 * 8);
    local_68 = uVar16;
    lVar4 = FUN_025788d4(plVar6,uVar16 & 0xffffffff);
    if (lVar4 == 0) {
      plVar6 = (long *)param_1[0x59];
      if (plVar6 != (long *)0x0) {
        plVar8 = plVar6 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = (int)*plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar8 = (long *)plVar6[0x29];
      lVar4 = plVar6[0x2a];
      if ((lVar4 != 0) && (*plVar8 != (&DAT_0425d808)[uVar15 * 3])) {
        plVar11 = plVar8 + lVar4 * 6;
        lVar4 = lVar4 * 0x30;
        plVar7 = plVar8;
        do {
          lVar4 = lVar4 + -0x30;
          if (lVar4 == 0) {
            plVar8 = plVar11;
            break;
          }
          plVar8 = plVar7 + 6;
          plVar1 = plVar7 + 6;
          plVar7 = plVar8;
        } while (*plVar1 != (&DAT_0425d808)[uVar15 * 3]);
      }
      *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe;
      if (plVar6 == (long *)0x0) {
LAB_0257b4e8:
        plVar8 = (long *)plVar14[0x29];
        lVar4 = plVar14[0x2a];
      }
      else {
        plVar8 = plVar6 + 10;
        do {
          iVar12 = (int)*plVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 != 0) goto LAB_0257b4e8;
        plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
        plVar8 = (long *)plVar14[0x29];
        lVar4 = plVar14[0x2a];
      }
      if ((lVar4 != 0) && (*plVar8 != (&DAT_0425d790)[uVar15 * 3])) {
        plVar11 = plVar8 + lVar4 * 6;
        lVar4 = lVar4 * 0x30;
        plVar7 = plVar8;
        do {
          lVar4 = lVar4 + -0x30;
          if (lVar4 == 0) goto LAB_0257b514;
          plVar8 = plVar7 + 6;
          plVar1 = plVar7 + 6;
          plVar7 = plVar8;
        } while (*plVar1 != (&DAT_0425d790)[uVar15 * 3]);
      }
      goto LAB_0257b518;
    }
    lVar5 = FUN_025788d4(lVar4,uVar16 & 0xffffffff);
    if ((lVar5 != 0) && (param_1[0x89] != 0)) {
      FUN_0284ef04(param_1[0x89] + uVar15 * 0xd0,lVar5,0,0);
    }
    FUN_0257a950(param_1,uVar15 & 0xffffffff,lVar4);
    plVar6 = (long *)FUN_02579b58(param_1,uVar15 & 0xffffffff,&local_68);
    plVar8 = (long *)plVar14[0x29];
    lVar4 = plVar14[0x2a];
    if ((lVar4 != 0) && (*plVar8 != (&DAT_0425d790)[uVar15 * 3])) {
      plVar11 = plVar8 + lVar4 * 6;
      lVar4 = lVar4 * 0x30;
      plVar7 = plVar8;
      do {
        lVar4 = lVar4 + -0x30;
        if (lVar4 == 0) goto LAB_0257b42c;
        plVar8 = plVar7 + 6;
        plVar1 = plVar7 + 6;
        plVar7 = plVar8;
      } while (*plVar1 != (&DAT_0425d790)[uVar15 * 3]);
    }
    goto LAB_0257b118;
  }
  if ((int)param_1[uVar15 * 2 + 0xd6] == 4) {
    uVar16 = param_1[199] - param_1[0xc6];
    if (uVar16 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(int *)((long)param_1 + 0x6fc) + 2;
      iVar10 = (int)(uVar16 >> 3);
      iVar12 = uVar13 - iVar10;
      do {
        uVar13 = uVar13 + iVar10;
        iVar12 = iVar12 + iVar10;
      } while (iVar12 < 0);
      do {
        iVar12 = uVar13 - iVar10;
        uVar13 = uVar13 - iVar10;
      } while ((ulong)((long)uVar16 >> 3) <= (ulong)(long)iVar12);
    }
    uVar16 = *(ulong *)(param_1[0xc6] + (ulong)uVar13 * 8);
    local_68 = uVar16;
    lVar4 = FUN_025788d4(plVar6,uVar16 & 0xffffffff);
    if (lVar4 != 0) {
      lVar5 = FUN_025788d4(lVar4,uVar16 & 0xffffffff);
      if ((lVar5 != 0) && (param_1[0x89] != 0)) {
        FUN_0284ef04(param_1[0x89] + uVar15 * 0xd0,lVar5,0,0);
      }
      FUN_0257a950(param_1,uVar15 & 0xffffffff,lVar4);
      plVar6 = (long *)FUN_02579b58(param_1,uVar15 & 0xffffffff,&local_68);
      plVar8 = (long *)plVar14[0x29];
      lVar4 = plVar14[0x2a];
      if ((lVar4 != 0) && (*plVar8 != (&DAT_0425d790)[uVar15 * 3])) {
        plVar11 = plVar8 + lVar4 * 6;
        lVar4 = lVar4 * 0x30;
        plVar7 = plVar8;
        do {
          lVar4 = lVar4 + -0x30;
          if (lVar4 == 0) goto LAB_0257b42c;
          plVar1 = plVar7 + 6;
          plVar8 = plVar7 + 6;
          plVar7 = plVar7 + 6;
        } while (*plVar1 != (&DAT_0425d790)[uVar15 * 3]);
      }
      goto LAB_0257b118;
    }
    plVar6 = (long *)param_1[0x59];
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar8 = (long *)plVar6[0x29];
    lVar4 = plVar6[0x2a];
    if ((lVar4 != 0) && (*plVar8 != (&DAT_0425d808)[uVar15 * 3])) {
      plVar11 = plVar8 + lVar4 * 6;
      lVar4 = lVar4 * 0x30;
      plVar7 = plVar8;
      do {
        lVar4 = lVar4 + -0x30;
        if (lVar4 == 0) {
          plVar8 = plVar11;
          break;
        }
        plVar8 = plVar7 + 6;
        plVar1 = plVar7 + 6;
        plVar7 = plVar8;
      } while (*plVar1 != (&DAT_0425d808)[uVar15 * 3]);
    }
    *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe;
    if (plVar6 == (long *)0x0) {
LAB_0257b558:
      plVar8 = (long *)plVar14[0x29];
      lVar4 = plVar14[0x2a];
      if (lVar4 != 0) {
LAB_0257b560:
        if (*plVar8 != (&DAT_0425d790)[uVar15 * 3]) {
          plVar11 = plVar8 + lVar4 * 6;
          lVar4 = lVar4 * 0x30;
          plVar7 = plVar8;
          do {
            lVar4 = lVar4 + -0x30;
            if (lVar4 == 0) goto LAB_0257b514;
            plVar8 = plVar7 + 6;
            plVar1 = plVar7 + 6;
            plVar7 = plVar8;
          } while (*plVar1 != (&DAT_0425d790)[uVar15 * 3]);
        }
      }
    }
    else {
      plVar8 = plVar6 + 10;
      do {
        iVar12 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 != 0) goto LAB_0257b558;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x10))();
      plVar8 = (long *)plVar14[0x29];
      lVar4 = plVar14[0x2a];
      if (lVar4 != 0) goto LAB_0257b560;
    }
    goto LAB_0257b518;
  }
  goto LAB_0257b128;
LAB_0257b42c:
  plVar8 = plVar11;
LAB_0257b118:
  lVar4 = plVar8[4];
  bVar9 = *(byte *)(lVar4 + 0x58) | 1;
LAB_0257b124:
  *(byte *)(lVar4 + 0x58) = bVar9;
LAB_0257b128:
  uVar15 = uVar15 + 1;
  if (uVar15 == 5) {
    if (plVar14 != (long *)0x0) {
      plVar6 = plVar14 + 10;
      do {
        iVar12 = (int)*plVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0257b45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar14 + 0x10))(plVar14);
        return;
      }
    }
    return;
  }
  goto LAB_0257b134;
LAB_0257b514:
  plVar8 = plVar11;
LAB_0257b518:
  lVar4 = plVar8[4];
  bVar9 = *(byte *)(lVar4 + 0x58) & 0xfe;
  goto LAB_0257b124;
}


