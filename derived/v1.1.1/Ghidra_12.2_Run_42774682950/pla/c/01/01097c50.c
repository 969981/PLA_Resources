/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01097c50; name: FUN_01097c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01097c50(long *param_1,undefined8 param_2,ulong *param_3)

{
  char *pcVar1;
  long *plVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  int *piVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined **local_70;
  uint local_68;
  ushort local_64;
  
  uVar11 = FUN_02c6849c(*(undefined8 *)(*param_1 + 0x98));
  uVar9 = FUN_02c6f924(*(undefined8 *)(*param_1 + 0x98));
  uVar12 = FUN_02c5fb2c(*param_1);
  if ((int)uVar11 < 0x38a && uVar9 < 0x1c) {
    lVar20 = *(&DAT_04400660)[(ulong)uVar11 * 4];
    uVar19 = (&DAT_04400660)[(ulong)uVar11 * 4][1] - lVar20 >> 3;
    if ((uVar19 <= uVar9) || (*(long *)(lVar20 + (ulong)uVar9 * 8) == 0)) goto LAB_01097cf4;
    uVar10 = uVar9;
  }
  else {
LAB_01097cf4:
    uVar10 = 0;
    lVar20 = *DAT_04400660;
    uVar19 = DAT_04400660[1] - lVar20 >> 3;
  }
  if (uVar19 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar17 = *(int **)(lVar20 + (ulong)uVar10 * 8);
  puVar3 = (uint *)((long)piVar17 + (ulong)*(ushort *)((long)piVar17 + (10 - (long)*piVar17)));
  uVar28 = *(uint *)((long)puVar3 + (ulong)*puVar3);
  local_98 = (int *)0x0;
  uVar27 = uVar28 & 0xff;
  local_78 = 0;
  local_a8 = (int *)0x0;
  local_a0 = (int *)0x0;
  local_88 = 0x1fffffffffffffff;
  uStack_80 = 0;
  local_90 = param_2;
  FUN_010992c0(&local_a8,uVar27);
  if ((uVar28 & 0xff) != 0) {
    uVar28 = 0;
    do {
      local_e0 = &PTR_LAB_0428acc8;
      local_d8._0_6_ = CONCAT24(uVar9,uVar11);
      uVar10 = FUN_02c55ba0(&local_e0,uVar28);
      if (uVar10 <= uVar12) {
        local_e0 = &PTR_LAB_0428acc8;
        local_d8._0_6_ = CONCAT24(uVar9,uVar11);
        uVar13 = FUN_02c55e48(&local_e0,uVar28);
        if (uVar13 != 0) {
          lVar20 = (&DAT_0428af30)[(ulong)uVar13 * 6];
          if (lVar20 == 0) {
            plVar25 = &DAT_0428af30;
          }
          else {
            plVar25 = &DAT_0428af30;
            if (*(char *)(lVar20 + 0x1e1) != '\0') {
              plVar25 = &DAT_0428af30 + (ulong)uVar13 * 6;
            }
          }
          piVar17 = (int *)((long)*(uint **)(*plVar25 + 0x250) +
                           (ulong)**(uint **)(*plVar25 + 0x250));
          if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 0xf) ||
             (uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[7], uVar19 == 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = *(char *)((long)piVar17 + uVar19) != '\0';
          }
          local_e0 = &PTR_LAB_0428acc8;
          local_d8._0_6_ = CONCAT24(uVar9,uVar11);
          uVar14 = FUN_02c55cf4(&local_e0,uVar28);
          local_e0 = (undefined **)
                     CONCAT17((uVar14 & 0xffff) <= uVar12,CONCAT16(bVar8,CONCAT24(uVar10,uVar13)));
          if (local_a0 < local_98) {
            FUN_01099848(local_90,local_a0,&local_e0);
            local_a0 = local_a0 + 2;
          }
          else {
            FUN_01099920(&local_a8,&local_e0);
          }
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar27 != uVar28);
  }
  piVar26 = local_a0;
  piVar17 = local_a8;
  puVar7 = PTR_nothrow_04373ab8;
  uVar19 = (long)local_a0 - (long)local_a8 >> 3;
  if (0x400 < (long)local_a0 - (long)local_a8) {
    uVar29 = uVar19;
    if (0xffffffffffffffe < (long)uVar19) {
      uVar29 = 0xfffffffffffffff;
    }
    do {
      pvVar16 = operator_new(uVar29 << 3,(nothrow_t *)puVar7);
      if (pvVar16 != (void *)0x0) {
        FUN_01099a50(piVar17,piVar26,uVar19,pvVar16,uVar29);
        operator_delete(pvVar16);
        goto LAB_01097ee0;
      }
      uVar29 = uVar29 >> 1;
    } while (uVar29 != 0);
  }
  FUN_01099a50(piVar17,piVar26,uVar19,0,0);
LAB_01097ee0:
  local_d0 = 0;
  local_e0 = (undefined **)0x0;
  local_d8 = 0;
  local_b0 = 0;
  local_c0 = 0x3fffffffffffffff;
  uStack_b8 = 0;
  uStack_c8 = param_2;
  FUN_01099378(&local_e0,0x3d);
  uVar19 = 0;
  do {
    local_70 = &PTR_LAB_0428ac88;
    local_68 = uVar11;
    local_64 = uVar9;
    uVar29 = FUN_02c54eb8(&local_70,uVar19 & 0xffffffff);
    if ((uVar29 & 1) != 0) {
      local_70 = (undefined **)CONCAT44(local_70._4_4_,(&DAT_03a84b1c)[uVar19]);
      if (local_d8 < local_d0) {
        FUN_0109a9a0(&uStack_c8,local_d8,&local_70);
        local_d8 = local_d8 + 4;
      }
      else {
        FUN_0109a8c0(&local_e0,&local_70);
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != 0x3d);
  FUN_02c60a58(*param_1,0);
  FUN_02c60a58(*param_1,1);
  FUN_02c60a58(*param_1,2);
  FUN_02c60a58(*param_1,3);
  lVar20 = local_d8 - (long)local_e0;
  if (lVar20 == 4) {
    uVar19 = 0;
    plVar25 = (long *)*param_1;
  }
  else {
    if (lVar20 == 0) goto LAB_01098154;
    uVar29 = lVar20 >> 2;
    lVar20 = 0x3f;
    if ((0x7fffffffffffffffU >> (LZCOUNT(uVar29) & 0x3fU) & uVar29) != 0) {
      lVar20 = 0x40;
    }
    uVar21 = lVar20 - LZCOUNT(uVar29);
    uVar19 = uVar21 >> 6;
    if ((uVar21 & 0x3f) != 0) {
      uVar19 = uVar19 + 1;
    }
    if (uVar21 < uVar19) {
      uVar21 = 0;
    }
    else {
      uVar22 = 0;
      if (uVar19 != 0) {
        uVar22 = uVar21 / uVar19;
      }
      uVar21 = 0xffffffffffffffff >> (-uVar22 & 0x3f);
    }
    uVar22 = *param_3;
    uVar23 = param_3[1];
    do {
      uVar24 = uVar22 ^ uVar23;
      uVar19 = uVar22 + uVar23;
      uVar23 = uVar24 >> 0x1b | uVar24 << 0x25;
      uVar19 = uVar19 & uVar21;
      uVar22 = uVar24 ^ (uVar22 >> 0x28 | uVar22 << 0x18) ^ uVar24 << 0x10;
    } while (uVar29 <= uVar19);
    *param_3 = uVar22;
    param_3[1] = uVar23;
    plVar25 = (long *)*param_1;
  }
  if (plVar25 != (long *)0x0) {
    plVar2 = plVar25 + 10;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  iVar4 = *(int *)((long)local_e0 + uVar19 * 4);
  if ((iVar4 == 0) || (iVar15 = FUN_02c6087c(plVar25,iVar4), iVar15 != 0)) {
    if (plVar25 == (long *)0x0) goto LAB_01098154;
  }
  else {
    if (plVar25 == (long *)0x0) {
      for (lVar20 = 0; (&DAT_03a84b1c)[lVar20] != iVar4; lVar20 = lVar20 + 2) {
        if (lVar20 == 0x3c) goto LAB_010984e8;
        if ((&DAT_03a84b20)[lVar20] == iVar4) {
          lVar20 = lVar20 + 1;
          break;
        }
      }
      FUN_02c870fc(_DAT_00000098,lVar20,1);
LAB_010984e8:
      FUN_02c628f8(0,iVar4);
      goto LAB_01098154;
    }
    plVar2 = plVar25 + 10;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    for (lVar20 = 0; (&DAT_03a84b1c)[lVar20] != iVar4; lVar20 = lVar20 + 2) {
      if (lVar20 == 0x3c) goto LAB_0109811c;
      if ((&DAT_03a84b20)[lVar20] == iVar4) {
        lVar20 = lVar20 + 1;
        break;
      }
    }
    FUN_02c870fc(plVar25[0x13],lVar20,1);
LAB_0109811c:
    FUN_02c628f8(plVar25,iVar4);
    do {
      iVar4 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
  plVar2 = plVar25 + 10;
  do {
    iVar4 = (int)*plVar2 + -1;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *(int *)plVar2 = iVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
  }
LAB_01098154:
  piVar17 = local_a0;
  if (local_a8 != local_a0) {
    piVar26 = local_a8;
    if (*(char *)((long)local_a8 + 6) != '\0') goto LAB_0109819c;
LAB_01098188:
    do {
      do {
        piVar18 = piVar26 + 2;
        if (piVar18 == piVar17) goto LAB_010982cc;
        pcVar1 = (char *)((long)piVar26 + 0xe);
        piVar26 = piVar18;
      } while (*pcVar1 == '\0');
LAB_0109819c:
      plVar25 = (long *)*param_1;
      if (plVar25 != (long *)0x0) {
        plVar2 = plVar25 + 10;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      iVar4 = *piVar26;
      if (iVar4 == 0) {
        iVar15 = 3;
joined_r0x010982c4:
        if (plVar25 == (long *)0x0) goto LAB_01098188;
      }
      else {
        cVar5 = *(char *)((long)piVar26 + 7);
        iVar15 = FUN_02c6087c(plVar25,iVar4);
        if (iVar15 != 0) goto joined_r0x010982c4;
        if (plVar25 != (long *)0x0) {
          plVar2 = plVar25 + 10;
          do {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (cVar5 != '\0') {
          lVar20 = 3;
          for (piVar18 = &DAT_03a84b24; piVar18[-2] != iVar4; piVar18 = piVar18 + 4) {
            if (lVar20 == 0x3f) goto LAB_01098258;
            if (piVar18[-1] == iVar4) {
              lVar20 = lVar20 + -2;
              goto LAB_0109824c;
            }
            if (*piVar18 == iVar4) {
              lVar20 = lVar20 + -1;
              goto LAB_0109824c;
            }
            if (piVar18[1] == iVar4) goto LAB_0109824c;
            lVar20 = lVar20 + 4;
          }
          lVar20 = lVar20 + -3;
LAB_0109824c:
          FUN_02c870fc(plVar25[0x13],lVar20,1);
        }
LAB_01098258:
        if (plVar25 == (long *)0x0) break;
        plVar2 = plVar25 + 10;
        do {
          lVar20 = *plVar2;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(int *)plVar2 = (int)lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar20 == 1) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
        iVar15 = 0;
      }
      plVar2 = plVar25 + 10;
      do {
        iVar4 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *(int *)plVar2 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 != 0) {
        if (iVar15 == 0) break;
        goto LAB_01098188;
      }
      (**(code **)(*plVar25 + 0x10))(plVar25);
    } while (iVar15 != 0);
LAB_010982cc:
    piVar17 = local_a0;
    if (local_a8 != local_a0) {
      plVar25 = (long *)*param_1;
      piVar26 = local_a8;
      do {
        if (plVar25 != (long *)0x0) {
          plVar2 = plVar25 + 10;
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        iVar4 = *piVar26;
        if (iVar4 == 0) {
          iVar15 = 3;
          if (plVar25 != (long *)0x0) goto LAB_010983e0;
LAB_010982ec:
          if (iVar15 == 1) break;
        }
        else {
          cVar5 = *(char *)((long)piVar26 + 7);
          iVar15 = FUN_02c6087c(plVar25,iVar4);
          if (iVar15 != 0) {
            if (plVar25 == (long *)0x0) goto LAB_010982ec;
LAB_010983e0:
            plVar2 = plVar25 + 10;
            do {
              iVar4 = (int)*plVar2 + -1;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(int *)plVar2 = iVar4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
            }
            goto LAB_010982ec;
          }
          if (plVar25 != (long *)0x0) {
            plVar2 = plVar25 + 10;
            do {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(int *)plVar2 = (int)*plVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          if (cVar5 != '\0') {
            lVar20 = 3;
            for (piVar18 = &DAT_03a84b24; piVar18[-2] != iVar4; piVar18 = piVar18 + 4) {
              if (lVar20 == 0x3f) goto LAB_010983bc;
              if (piVar18[-1] == iVar4) {
                lVar20 = lVar20 + -2;
                goto LAB_010983b0;
              }
              if (*piVar18 == iVar4) {
                lVar20 = lVar20 + -1;
                goto LAB_010983b0;
              }
              if (piVar18[1] == iVar4) goto LAB_010983b0;
              lVar20 = lVar20 + 4;
            }
            lVar20 = lVar20 + -3;
LAB_010983b0:
            FUN_02c870fc(plVar25[0x13],lVar20,1);
          }
LAB_010983bc:
          if (plVar25 != (long *)0x0) {
            plVar2 = plVar25 + 10;
            do {
              lVar20 = *plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(int *)plVar2 = (int)lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar20 == 1) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
            }
            iVar15 = 0;
            goto LAB_010983e0;
          }
        }
        piVar26 = piVar26 + 2;
        if (piVar26 == piVar17) break;
        plVar25 = (long *)*param_1;
      } while( true );
    }
  }
  FUN_01099508(&local_e0);
  FUN_01099590(&local_a8);
  return;
}


