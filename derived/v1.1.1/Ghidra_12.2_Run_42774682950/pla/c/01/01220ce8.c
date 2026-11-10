/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01220ce8; name: FUN_01220ce8
 */


undefined8 FUN_01220ce8(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar8 = *(int *)(param_1 + 0x1680);
  if (iVar8 == 2) {
    if (*(int *)(param_1 + 0x167c) == 0) {
      FUN_00d52f90(param_1,0,0,0,1);
      *(undefined1 *)(param_1 + 0x6de) = 0;
      uVar10 = FUN_00d54910(param_1);
      if ((uVar10 & 1) == 0) {
        FUN_012152b8(param_1,1);
      }
      else {
        FUN_012201cc(param_1,&DAT_03a7a140,2);
      }
      uVar11 = 1;
    }
    else {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar14 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar14;
      plVar9 = *(long **)(lVar14 + 0x248);
      if (plVar9 == (long *)0x0) {
        FUN_00d52f90(param_1,DAT_000004a9,0,1,1);
      }
      else {
        lVar14 = plVar9[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar11;
        }
        piVar3 = (int *)(lVar14 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_00d52f90(param_1,*(undefined1 *)((long)plVar9 + 0x4a9),0,1,1);
        lVar14 = plVar9[0xb];
        piVar3 = (int *)(lVar14 + 0xc);
        do {
          iVar8 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      *(undefined1 *)(param_1 + 0x6de) = 1;
      FUN_0121fb5c(param_1);
      uVar11 = 0;
    }
    FUN_00d5d7b0(param_1,0,uVar11);
    FUN_01215340(param_1);
    plVar9 = *(long **)(param_1 + 0x2c8);
    if (plVar9 != (long *)0x0) {
      plVar12 = plVar9 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar12 = (long *)plVar9[0x29];
    lVar14 = plVar9[0x2a];
    if ((lVar14 != 0) && (*plVar12 != 0x3ff20a62e4785bf7)) {
      plVar13 = plVar12 + lVar14 * 6;
      lVar14 = lVar14 * 0x30;
      do {
        lVar14 = lVar14 + -0x30;
        if (lVar14 == 0) {
          plVar12 = plVar13;
          break;
        }
        plVar2 = plVar12 + 6;
        plVar1 = plVar12 + 6;
        plVar12 = plVar2;
      } while (*plVar1 != 0x3ff20a62e4785bf7);
    }
    *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) | 1;
    if (plVar9 != (long *)0x0) {
      plVar12 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
        lVar14 = *(long *)(param_1 + 0x440);
        goto joined_r0x01220fdc;
      }
    }
    lVar14 = *(long *)(param_1 + 0x440);
joined_r0x01220fdc:
    if (lVar14 != 0) {
      FUN_02831440();
    }
    *(undefined1 *)(param_1 + 0x1688) = 0;
    *(undefined4 *)(param_1 + 0x1680) = 0;
    return 1;
  }
  if (iVar8 == 1) {
    lVar14 = *(long *)(param_1 + 0x2c8);
    if (lVar14 != 0) {
      plVar9 = *(long **)(lVar14 + 0x1a0);
      lVar15 = *(long *)(lVar14 + 0x1a8);
      if ((lVar15 == 0) || (*plVar9 == 0x7818093c3a41411c)) {
        plVar12 = plVar9;
      }
      else {
        lVar16 = lVar15 * 0x30;
        plVar13 = plVar9;
        do {
          lVar16 = lVar16 + -0x30;
          if (lVar16 == 0) goto LAB_01221164;
          plVar1 = plVar13 + 6;
          plVar12 = plVar13 + 6;
          plVar13 = plVar13 + 6;
        } while (*plVar1 != 0x7818093c3a41411c);
      }
      if (plVar12 != plVar9 + lVar15 * 6) {
        uVar10 = (ulong)*(uint *)(plVar12 + 5);
        if (((*(uint *)(plVar12 + 5) < *(uint *)(plVar12[4] + 0x278)) &&
            (lVar15 = *(long *)(plVar12[4] + 600), *(char *)(lVar15 + uVar10 * 0x48 + 8) != '\0'))
           && (*(char *)(lVar15 + uVar10 * 0x48 + 0xb) != '\0')) {
          plVar9 = (long *)(lVar15 + uVar10 * 0x48 + 0x10);
          lVar14 = *plVar9;
          if (lVar14 == 0) {
            return 0;
          }
          if (*(char *)(lVar15 + uVar10 * 0x48 + 9) != '\0') {
            return 0;
          }
          fVar17 = *(float *)(lVar14 + 0x20);
          uVar6 = FUN_00227728();
          uVar10 = FUN_00227744(*plVar9);
          if (fVar17 < (float)uVar6) {
            return 0;
          }
          if ((uVar10 & 1) != 0) {
            return 0;
          }
          lVar14 = *(long *)(param_1 + 0x2c8);
        }
      }
LAB_01221164:
      if (lVar14 != 0) {
        plVar9 = *(long **)(lVar14 + 0x1a0);
        lVar14 = *(long *)(lVar14 + 0x1a8);
        if ((lVar14 == 0) || (*plVar9 == 0x5996500e6aa840a)) {
          plVar12 = plVar9;
        }
        else {
          lVar15 = lVar14 * 0x30;
          plVar13 = plVar9;
          do {
            lVar15 = lVar15 + -0x30;
            if (lVar15 == 0) goto LAB_01221288;
            plVar1 = plVar13 + 6;
            plVar12 = plVar13 + 6;
            plVar13 = plVar13 + 6;
          } while (*plVar1 != 0x5996500e6aa840a);
        }
        if (plVar12 != plVar9 + lVar14 * 6) {
          uVar10 = (ulong)*(uint *)(plVar12 + 5);
          if (((*(uint *)(plVar12 + 5) < *(uint *)(plVar12[4] + 0x278)) &&
              (lVar14 = *(long *)(plVar12[4] + 600), *(char *)(lVar14 + uVar10 * 0x48 + 8) != '\0'))
             && (*(char *)(lVar14 + uVar10 * 0x48 + 0xb) != '\0')) {
            plVar9 = (long *)(lVar14 + uVar10 * 0x48 + 0x10);
            lVar15 = *plVar9;
            if (lVar15 == 0) {
              return 0;
            }
            if (*(char *)(lVar14 + uVar10 * 0x48 + 9) != '\0') {
              return 0;
            }
            fVar17 = *(float *)(lVar15 + 0x20);
            uVar6 = FUN_00227728();
            uVar10 = FUN_00227744(*plVar9);
            if (fVar17 < (float)uVar6) {
              return 0;
            }
            if ((uVar10 & 1) != 0) {
              return 0;
            }
          }
        }
      }
    }
LAB_01221288:
    if (*(int *)(param_1 + 0x167c) == 0) {
      *(undefined4 *)(param_1 + 0x167c) = 1;
      uVar7 = FUN_00d54910(param_1);
      FUN_00d5fe08(param_1,uVar7 & 1);
      uVar10 = FUN_00d54918(param_1);
      if (((uVar7 & 1) != 0) && ((uVar10 & 1) != 0)) {
        FUN_00d49d34(param_1,1);
      }
      uVar7 = 1;
      FUN_00d5caf8(param_1,1);
      FUN_00d57b60(param_1,1,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x167c) = 0;
      FUN_00d5fe08(param_1,0);
      FUN_00d49d34(param_1,0);
      FUN_00d5caf8(param_1,0);
      FUN_00d57b60(param_1,1,1);
      uVar10 = FUN_00d55168(param_1);
      uVar7 = 0;
      if ((uVar10 & 1) != 0) {
        FUN_0121c924(param_1,1);
        uVar7 = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x1688) = 1;
    FUN_00d4ecc4(param_1);
    FUN_00d51790(param_1,uVar7 ^ 1,0xffffffff,0xffffffff);
    FUN_00d4f240(param_1,uVar7 ^ 1);
    FUN_00d51790(param_1,uVar7,0xffffffff,0xffffffff);
    if (*(int *)(param_1 + 0x167c) == 0) {
      uVar11 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab918);
      FUN_0281bd00(uVar11,0,0);
      FUN_0121b8e8(param_1);
    }
    goto LAB_01220dfc;
  }
  if (iVar8 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x167c) == 0) {
    local_60 = 0x7818093c3a41411c;
    pcStack_58 = "anime_box_to_allbox";
    local_50 = 0x13;
    uStack_48 = 0;
    if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_01220d60;
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_60);
    plVar9 = *(long **)(param_1 + 0x2c8);
  }
  else {
    local_60 = 0x5996500e6aa840a;
    pcStack_58 = "anime_allbox_to_box";
    local_50 = 0x13;
    uStack_48 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_60);
    }
    FUN_0121b8e8(param_1);
LAB_01220d60:
    plVar9 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = (long *)plVar9[0x29];
  lVar14 = plVar9[0x2a];
  if ((lVar14 != 0) && (*plVar12 != 0x3ff20a62e4785bf7)) {
    plVar13 = plVar12 + lVar14 * 6;
    lVar14 = lVar14 * 0x30;
    do {
      lVar14 = lVar14 + -0x30;
      if (lVar14 == 0) {
        plVar12 = plVar13;
        break;
      }
      plVar2 = plVar12 + 6;
      plVar1 = plVar12 + 6;
      plVar12 = plVar2;
    } while (*plVar1 != 0x3ff20a62e4785bf7);
  }
  *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 10;
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
LAB_01220dfc:
  *(int *)(param_1 + 0x1680) = *(int *)(param_1 + 0x1680) + 1;
  return 0;
}


