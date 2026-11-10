/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4e2dc; name: FUN_00d4e2dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d4e2dc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  
  (**(code **)(*param_1 + 0xf0))(param_1,param_1 + 200);
  (**(code **)(*param_1 + 0xf8))(param_1,param_1 + 0xd4);
  FUN_00d4ecc4(param_1);
  if (((int)param_1[200] == 0) || (*(int *)((long)param_1 + 0x644) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((((int)param_1[0xd4] != 0) && (*(int *)((long)param_1 + 0x6a4) != 0)) &&
     (*(char *)((long)param_1 + 0x6d2) != '\0')) {
    *(undefined4 *)(param_1 + 0xdb) = 1;
  }
  FUN_00d4ecf0(param_1);
  iVar7 = (int)param_1[0xdb];
  uVar14 = (ulong)iVar7;
  uVar16 = uVar14 ^ 1;
  if (((int)param_1[uVar16 * 0xc + 200] != 0) &&
     (*(int *)((long)param_1 + uVar16 * 0x60 + 0x644) != 0)) {
    (**(code **)(*param_1 + 0x100))(param_1,uVar16 & 0xffffffff);
    FUN_00d4f364(param_1,uVar16 & 0xffffffff);
    lVar10 = _DAT_00000150;
    plVar18 = _DAT_00000148;
    if (*(char *)((long)param_1 + uVar16 * 0x60 + 0x666) == '\0') {
      plVar17 = (long *)param_1[0x59];
      if (plVar17 == (long *)0x0) {
        lVar21 = (&DAT_043ab898)[uVar16 * 0x28];
        plVar17 = (long *)(&DAT_043ab8b0)[uVar16 * 0x28];
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        plVar20 = plVar18;
        if ((lVar10 != 0) && (*plVar18 != lVar21)) {
          lVar12 = lVar10 * 0x30;
          plVar19 = plVar18 + lVar10 * 6;
          do {
            lVar12 = lVar12 + -0x30;
            plVar20 = plVar19;
            if (lVar12 == 0) break;
            plVar2 = plVar18 + 6;
            plVar18 = plVar18 + 6;
            plVar20 = plVar18;
          } while (*plVar2 != lVar21);
        }
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
        *(byte *)(plVar20[4] + 0x58) = *(byte *)(plVar20[4] + 0x58) & 0xfe;
      }
      else {
        plVar18 = plVar17 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar9) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar20 = (long *)plVar17[0x29];
        lVar10 = plVar17[0x2a];
        lVar21 = (&DAT_043ab898)[uVar16 * 0x28];
        plVar19 = (long *)(&DAT_043ab8b0)[uVar16 * 0x28];
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        plVar2 = plVar20;
        if ((lVar10 != 0) && (*plVar20 != lVar21)) {
          lVar12 = lVar10 * 0x30;
          plVar11 = plVar20 + lVar10 * 6;
          do {
            lVar12 = lVar12 + -0x30;
            plVar2 = plVar11;
            if (lVar12 == 0) break;
            plVar1 = plVar20 + 6;
            plVar20 = plVar20 + 6;
            plVar2 = plVar20;
          } while (*plVar1 != lVar21);
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe;
        do {
          iVar15 = (int)*plVar18 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar9) {
            *(int *)plVar18 = iVar15;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x110))(param_1,uVar16 & 0xffffffff,&DAT_043ab878 + uVar16 * 0x28);
      lVar10 = _DAT_00000150;
      plVar18 = _DAT_00000148;
      plVar17 = (long *)param_1[0x59];
      if (plVar17 == (long *)0x0) {
        lVar21 = (&DAT_043ab898)[uVar16 * 0x28];
        plVar17 = (long *)(&DAT_043ab8b0)[uVar16 * 0x28];
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        plVar20 = plVar18;
        if ((lVar10 != 0) && (*plVar18 != lVar21)) {
          lVar12 = lVar10 * 0x30;
          plVar19 = plVar18 + lVar10 * 6;
          do {
            lVar12 = lVar12 + -0x30;
            plVar20 = plVar19;
            if (lVar12 == 0) break;
            plVar2 = plVar18 + 6;
            plVar18 = plVar18 + 6;
            plVar20 = plVar18;
          } while (*plVar2 != lVar21);
        }
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
        *(byte *)(plVar20[4] + 0x58) = *(byte *)(plVar20[4] + 0x58) | 1;
      }
      else {
        plVar18 = plVar17 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar9) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar21 = (&DAT_043ab898)[uVar16 * 0x28];
        plVar20 = (long *)plVar17[0x29];
        lVar10 = plVar17[0x2a];
        plVar19 = (long *)(&DAT_043ab8b0)[uVar16 * 0x28];
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        plVar2 = plVar20;
        if ((lVar10 != 0) && (*plVar20 != lVar21)) {
          lVar12 = lVar10 * 0x30;
          plVar11 = plVar20 + lVar10 * 6;
          do {
            lVar12 = lVar12 + -0x30;
            plVar2 = plVar11;
            if (lVar12 == 0) break;
            plVar1 = plVar20 + 6;
            plVar20 = plVar20 + 6;
            plVar2 = plVar20;
          } while (*plVar1 != lVar21);
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) | 1;
        do {
          iVar15 = (int)*plVar18 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar9) {
            *(int *)plVar18 = iVar15;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      FUN_00d50db0(param_1,uVar16 & 0xffffffff);
    }
    FUN_00d51148(param_1,uVar16 & 0xffffffff,(char)param_1[uVar16 * 0xc + 0xcd]);
  }
  if (((int)param_1[uVar14 * 0xc + 200] != 0) &&
     (*(int *)((long)param_1 + uVar14 * 0x60 + 0x644) != 0)) {
    (**(code **)(*param_1 + 0x100))(param_1,iVar7);
    if (((int)param_1[uVar16 * 0xc + 200] != 0) &&
       (*(int *)((long)param_1 + uVar16 * 0x60 + 0x644) != 0)) {
      iVar15 = (int)uVar16;
      if (iVar15 == 2) {
        iVar15 = 0;
      }
      lVar10 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar15 * 0x28);
      lVar10 = *(long *)(lVar10 + 0x8b0);
      iVar4 = *(int *)(lVar10 + 0x10);
      iVar5 = *(int *)(lVar10 + 0x14);
      piVar3 = (int *)(lVar10 + 0x20);
      if (*(int *)(lVar10 + 0x28) != 0) {
        piVar3 = (int *)(lVar10 + 0x24);
      }
      iVar6 = *piVar3;
      lVar21 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar15 * 0x28);
      lVar10 = **(long **)(lVar21 + 0x838);
      lVar21 = (*(long **)(lVar21 + 0x838))[1];
      if ((lVar10 != lVar21) &&
         ((iVar5 = iVar5 + iVar6 * iVar4, *(char *)(lVar10 + 0x20) != '\0' ||
          (*(int *)(lVar10 + 0x24) != iVar5)))) {
        lVar12 = lVar10 + 0x30;
        do {
          lVar13 = lVar12;
          lVar10 = lVar21;
          if (lVar21 == lVar13) break;
          lVar12 = lVar13 + 0x30;
        } while ((*(char *)(lVar13 + 0x20) != '\0') ||
                (lVar10 = lVar13, *(int *)(lVar13 + 0x24) != iVar5));
      }
      if ((lVar10 != 0) &&
         (((lVar21 != lVar10 && (*(int *)(lVar10 + 0x28) != -1)) &&
          (lVar10 = FUN_00d57364(param_1,uVar16 & 0xffffffff), lVar10 != 0)))) {
        *(undefined1 *)(lVar10 + 0x2ab) = 1;
      }
    }
    FUN_00d4f364(param_1,iVar7);
    lVar10 = _DAT_00000150;
    plVar18 = _DAT_00000148;
    if (*(char *)((long)param_1 + uVar14 * 0x60 + 0x666) == '\0') {
      plVar17 = (long *)param_1[0x59];
      if (plVar17 == (long *)0x0) {
        lVar21 = (&DAT_043ab898)[uVar14 * 0x28];
        plVar17 = (long *)(&DAT_043ab8b0)[uVar14 * 0x28];
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        plVar20 = plVar18;
        if ((lVar10 != 0) && (*plVar18 != lVar21)) {
          lVar12 = lVar10 * 0x30;
          plVar19 = plVar18 + lVar10 * 6;
          do {
            lVar12 = lVar12 + -0x30;
            plVar20 = plVar19;
            if (lVar12 == 0) break;
            plVar2 = plVar18 + 6;
            plVar18 = plVar18 + 6;
            plVar20 = plVar18;
          } while (*plVar2 != lVar21);
        }
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
        *(byte *)(plVar20[4] + 0x58) = *(byte *)(plVar20[4] + 0x58) & 0xfe;
      }
      else {
        plVar18 = plVar17 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar9) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar20 = (long *)plVar17[0x29];
        lVar10 = plVar17[0x2a];
        lVar21 = (&DAT_043ab898)[uVar14 * 0x28];
        plVar19 = (long *)(&DAT_043ab8b0)[uVar14 * 0x28];
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        plVar2 = plVar20;
        if ((lVar10 != 0) && (*plVar20 != lVar21)) {
          lVar12 = lVar10 * 0x30;
          plVar11 = plVar20 + lVar10 * 6;
          do {
            lVar12 = lVar12 + -0x30;
            plVar2 = plVar11;
            if (lVar12 == 0) break;
            plVar1 = plVar20 + 6;
            plVar20 = plVar20 + 6;
            plVar2 = plVar20;
          } while (*plVar1 != lVar21);
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe;
        do {
          iVar15 = (int)*plVar18 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar9) {
            *(int *)plVar18 = iVar15;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x110))(param_1,iVar7,&DAT_043ab878 + uVar14 * 0x28);
      lVar10 = _DAT_00000150;
      plVar18 = _DAT_00000148;
      plVar17 = (long *)param_1[0x59];
      if (plVar17 == (long *)0x0) {
        lVar21 = (&DAT_043ab898)[uVar14 * 0x28];
        plVar17 = (long *)(&DAT_043ab8b0)[uVar14 * 0x28];
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        plVar20 = plVar18;
        if ((lVar10 != 0) && (*plVar18 != lVar21)) {
          lVar12 = lVar10 * 0x30;
          plVar19 = plVar18 + lVar10 * 6;
          do {
            lVar12 = lVar12 + -0x30;
            plVar20 = plVar19;
            if (lVar12 == 0) break;
            plVar2 = plVar18 + 6;
            plVar18 = plVar18 + 6;
            plVar20 = plVar18;
          } while (*plVar2 != lVar21);
        }
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
        *(byte *)(plVar20[4] + 0x58) = *(byte *)(plVar20[4] + 0x58) | 1;
      }
      else {
        plVar18 = plVar17 + 10;
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar9) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        lVar21 = (&DAT_043ab898)[uVar14 * 0x28];
        plVar20 = (long *)plVar17[0x29];
        lVar10 = plVar17[0x2a];
        plVar19 = (long *)(&DAT_043ab8b0)[uVar14 * 0x28];
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        plVar2 = plVar20;
        if ((lVar10 != 0) && (*plVar20 != lVar21)) {
          lVar12 = lVar10 * 0x30;
          plVar11 = plVar20 + lVar10 * 6;
          do {
            lVar12 = lVar12 + -0x30;
            plVar2 = plVar11;
            if (lVar12 == 0) break;
            plVar1 = plVar20 + 6;
            plVar20 = plVar20 + 6;
            plVar2 = plVar20;
          } while (*plVar1 != lVar21);
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) | 1;
        do {
          iVar15 = (int)*plVar18 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar9) {
            *(int *)plVar18 = iVar15;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      FUN_00d50db0(param_1,iVar7);
    }
    FUN_00d51148(param_1,iVar7,(char)param_1[uVar14 * 0xc + 0xcd]);
  }
  if (((int)param_1[0xd4] != 0) && (*(int *)((long)param_1 + 0x6a4) != 0)) {
    *(bool *)((long)param_1 + 0x6dc) = *(float *)(param_1 + 0xd5) <= *(float *)(param_1 + 0xc9);
  }
  FUN_00d5172c(param_1,(int)param_1[0xdc],3);
  return;
}


