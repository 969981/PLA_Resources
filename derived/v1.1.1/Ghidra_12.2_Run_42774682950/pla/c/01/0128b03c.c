/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128b03c; name: FUN_0128b03c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0128b03c(long param_1,int param_2,uint param_3,ulong param_4)

{
  long *plVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  long lVar20;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  uVar17 = (ulong)param_3;
  if (**(int **)(param_1 + 0x1648) == 0) {
    FUN_0128bac8(param_1);
    plVar16 = *(long **)(param_1 + 0x2c8);
  }
  else if (**(int **)(param_1 + 0x1648) == 1) {
    FUN_0128b960(param_1);
    local_80 = 0x5619d56b81557fff;
    pcStack_78 = "InputMultiSelectAll";
    local_70 = 0x13;
    local_68 = (long *)0x0;
    FUN_00d4d788(param_1,&local_80,*(undefined1 *)(param_1 + param_2 + 0x1785));
    plVar16 = *(long **)(param_1 + 0x2c8);
  }
  else {
    FUN_0128eecc(param_1,&DAT_03a7a530,1);
    plVar16 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar16 != (long *)0x0) {
    plVar10 = plVar16 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar12 = *(long *)(param_1 + 0x1650);
  lVar20 = *(long *)(lVar12 + 0x88);
  plVar10 = *(long **)(*(long *)(lVar12 + 8) + 0x148);
  lVar15 = *(long *)(*(long *)(lVar12 + 8) + 0x150);
  plVar19 = *(long **)(lVar12 + 0xa0);
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  plVar14 = plVar10;
  if ((lVar15 != 0) && (*plVar10 != lVar20)) {
    lVar12 = lVar15 * 0x30;
    plVar13 = plVar10 + lVar15 * 6;
    do {
      lVar12 = lVar12 + -0x30;
      plVar14 = plVar13;
      if (lVar12 == 0) break;
      plVar1 = plVar10 + 6;
      plVar10 = plVar10 + 6;
      plVar14 = plVar10;
    } while (*plVar1 != lVar20);
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) & 0xfe;
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar19 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *(int *)plVar19 = (int)*plVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar19 = (long *)plVar10[0x29];
  lVar15 = plVar10[0x2a];
  if ((lVar15 != 0) && (*plVar19 != 0x2289107558513a28)) {
    plVar14 = plVar19 + lVar15 * 6;
    lVar15 = lVar15 * 0x30;
    do {
      lVar15 = lVar15 + -0x30;
      if (lVar15 == 0) {
        plVar19 = plVar14;
        break;
      }
      plVar1 = plVar19 + 6;
      plVar13 = plVar19 + 6;
      plVar19 = plVar1;
    } while (*plVar13 != 0x2289107558513a28);
  }
  pcVar3 = (char *)(param_1 + 0x1670);
  *(byte *)(plVar19[4] + 0x58) = *(byte *)(plVar19[4] + 0x58) & 0xfe;
  if (plVar10 == (long *)0x0) {
LAB_0128b1bc:
    if ((param_4 & 1) == 0) goto LAB_0128b1c0;
LAB_0128b740:
    cVar4 = *pcVar3;
  }
  else {
    plVar19 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar19 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *(int *)plVar19 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 != 0) goto LAB_0128b1bc;
    plVar10 = (long *)(**(code **)(*plVar10 + 0x10))();
    if ((param_4 & 1) != 0) goto LAB_0128b740;
LAB_0128b1c0:
    if (param_2 == 0) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (plVar10 = (long *)__cxa_guard_acquire(PTR_DAT_04379558), (int)plVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        plVar10 = (long *)__cxa_guard_release(PTR_DAT_04379558);
      }
      lVar15 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar15;
      plVar19 = *(long **)(lVar15 + 0x280);
      if (plVar19 != (long *)0x0) {
        lVar15 = plVar19[0xb];
        plVar10 = *(long **)(lVar15 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_0128b930;
        if (*(long *)(lVar15 + 0x10) == 0) {
          plVar10 = (long *)(**(code **)*plVar10)();
          *(long **)(lVar15 + 0x10) = plVar10;
        }
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar11 = FUN_010dac08(plVar10,0);
      if (param_3 < (uint)uVar11) {
        uVar18 = *(uint *)((long)plVar19 + uVar17 * 4 + 0x68);
      }
      else {
        uVar18 = 0;
      }
      uVar7 = FUN_010dac08(uVar11,0);
      if (uVar7 <= param_3) {
        bVar5 = true;
      }
      else {
        uVar18 = *(uint *)((long)plVar19 + uVar17 * 4 + 0x68);
        bVar5 = uVar18 >> 0x10 != 0 && (uVar18 & 0xffff) != 0;
      }
      if (plVar19 != (long *)0x0) {
        lVar15 = plVar19[0xb];
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
      }
      if (uVar7 <= param_3) goto joined_r0x0128b804;
      if ((uVar18 & 0xffff) != 0) goto LAB_0128b2a0;
LAB_0128b3e4:
      cVar4 = *pcVar3;
    }
    else {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar15 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar15;
      plVar10 = *(long **)(lVar15 + 0x238);
      if (plVar10 != (long *)0x0) {
        lVar15 = plVar10[0xb];
        if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0128b930;
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar11;
        }
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar18 = *(uint *)((long)plVar10 + (ulong)(param_3 + (int)plVar10[0xa6] * 0x1e) * 4 + 0x68);
      if (uVar18 >> 0x10 == 0 && (uVar18 & 0xffff) != 0) {
        FUN_0111e970(plVar10,(int)plVar10[0xa6],uVar17);
        uVar18 = 0;
      }
      lVar15 = plVar10[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 1) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      bVar5 = true;
      if ((uVar18 & 0xffff) == 0) goto LAB_0128b3e4;
LAB_0128b2a0:
      if (*(char *)(param_1 + 0x1671) == '\0') {
        FUN_028541b4(*(undefined8 *)(param_1 + 0x1650));
      }
      else {
        *(undefined1 *)(param_1 + 0x1671) = 0;
      }
      FUN_02852550(*(undefined8 *)(param_1 + 0x1650),uVar18,1);
      lVar12 = *(long *)(param_1 + 0x1650);
      lVar20 = *(long *)(lVar12 + 0x88);
      plVar10 = *(long **)(*(long *)(lVar12 + 8) + 0x148);
      lVar15 = *(long *)(*(long *)(lVar12 + 8) + 0x150);
      plVar19 = *(long **)(lVar12 + 0xa0);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
      plVar14 = plVar10;
      if ((lVar15 != 0) && (*plVar10 != lVar20)) {
        lVar12 = lVar15 * 0x30;
        plVar13 = plVar10 + lVar15 * 6;
        do {
          lVar12 = lVar12 + -0x30;
          plVar14 = plVar13;
          if (lVar12 == 0) break;
          plVar1 = plVar10 + 6;
          plVar10 = plVar10 + 6;
          plVar14 = plVar10;
        } while (*plVar1 != lVar20);
      }
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
      *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) | 1;
      iVar9 = **(int **)(param_1 + 0x1648);
      if (iVar9 == 1) {
        plVar10 = *(long **)(param_1 + 0x2c8);
        if (plVar10 != (long *)0x0) {
          plVar19 = plVar10 + 10;
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar6) {
              *(int *)plVar19 = (int)*plVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar19 = (long *)plVar10[0x37];
        if (plVar19 != (long *)0x0) {
          lVar15 = plVar19[0xb];
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_0128b930:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar11;
          }
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar14 = plVar10 + 10;
        do {
          iVar9 = (int)*plVar14 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *(int *)plVar14 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        FUN_02c4fb44(&local_80,uVar18 & 0xffff);
        uVar8 = FUN_02c4fc60(&local_80,0x1d);
        FUN_02c395d0(plVar19,0,uVar8,7,0,1);
        if (plVar19 != (long *)0x0) {
          lVar15 = plVar19[0xb];
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
          }
        }
        local_80 = 0x3f297ae088dfbe24;
        pcStack_78 = "pane_T_p_sales_price_01";
        local_70 = 0x17;
        local_68 = (long *)0x0;
        FUN_0128d2ac(param_1,0,0xb04cc27b5a91b547,&local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        iVar9 = **(int **)(param_1 + 0x1648);
        plVar10 = *(long **)(param_1 + 0x2c8);
      }
      else {
        plVar10 = *(long **)(param_1 + 0x2c8);
      }
      if (plVar10 != (long *)0x0) {
        plVar19 = plVar10 + 10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar19 = (long *)plVar10[0x29];
      lVar15 = plVar10[0x2a];
      if ((lVar15 != 0) && (*plVar19 != 0x2289107558513a28)) {
        plVar14 = plVar19 + lVar15 * 6;
        lVar15 = lVar15 * 0x30;
        do {
          lVar15 = lVar15 + -0x30;
          if (lVar15 == 0) {
            plVar19 = plVar14;
            break;
          }
          plVar1 = plVar19 + 6;
          plVar13 = plVar19 + 6;
          plVar19 = plVar1;
        } while (*plVar13 != 0x2289107558513a28);
      }
      *(byte *)(plVar19[4] + 0x58) = *(byte *)(plVar19[4] + 0x58) & 0xfe | iVar9 == 1;
      if (plVar10 == (long *)0x0) goto LAB_0128b3e4;
      plVar19 = plVar10 + 10;
      do {
        iVar9 = (int)*plVar19 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *(int *)plVar19 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != 0) goto LAB_0128b3e4;
      (**(code **)(*plVar10 + 0x10))();
      cVar4 = *pcVar3;
    }
    if (bVar5) {
      if (cVar4 == '\0') {
        local_80 = 0x6382194909ee1083;
        pcStack_78 = "anime_info_out";
        local_70 = 0xe;
        local_68 = (long *)0x0;
        lVar15 = 0;
        if (*(long *)(param_1 + 0x2c8) != 0) {
          FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_80);
          lVar15 = *(long *)(param_1 + 0x2c8);
        }
        local_80 = 0x9df07271bfcdbeca;
        pcStack_78 = "anime_info_in";
        local_70 = 0xd;
        local_68 = (long *)0x0;
        if (lVar15 != 0) {
          FUN_0283b1e8(lVar15,&local_80);
        }
        *pcVar3 = '\x01';
      }
      goto joined_r0x0128b804;
    }
  }
  if (cVar4 != '\0') {
    local_80 = 0x9df07271bfcdbeca;
    pcStack_78 = "anime_info_in";
    local_70 = 0xd;
    local_68 = (long *)0x0;
    lVar15 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_80);
      lVar15 = *(long *)(param_1 + 0x2c8);
    }
    local_80 = 0x6382194909ee1083;
    pcStack_78 = "anime_info_out";
    local_70 = 0xe;
    local_68 = (long *)0x0;
    if (lVar15 != 0) {
      FUN_0283b1e8(lVar15,&local_80);
    }
    *pcVar3 = '\0';
  }
joined_r0x0128b804:
  if (plVar16 != (long *)0x0) {
    plVar10 = plVar16 + 10;
    do {
      iVar9 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  return;
}


