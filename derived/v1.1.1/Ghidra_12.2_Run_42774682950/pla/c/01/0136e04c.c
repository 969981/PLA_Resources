/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136e04c; name: FUN_0136e04c
 */


void FUN_0136e04c(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  ushort uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  uint param3;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  float fVar23;
  long **local_130;
  long *local_128;
  long lStack_120;
  long local_118;
  long *local_110;
  long *local_108;
  long lStack_100;
  long local_f8;
  long *local_f0;
  long alStack_c8 [9];
  long *local_78;
  
  if (*(long **)(param_1 + 0x5b8) == (long *)(param_1 + 0x5c0)) {
    param3 = 0;
  }
  else {
    param3 = 0;
    plVar21 = *(long **)(param_1 + 0x5b8);
    do {
      uVar3 = *(uint *)(plVar21 + 4);
      uVar4 = *(uint *)((long)plVar21 + 0x24);
      FUN_0136dde0(param_1,param3,0,uVar4 % 10);
      FUN_0136dde0(param_1,param3,1,uVar4 / 10 + (uVar4 / 100) * -10);
      FUN_0136dde0(param_1,param3,2,uVar4 / 100 + (uVar4 / 1000) * -10);
      FUN_0136dde0(param_1,param3,3,uVar4 / 1000 + (uVar4 / 10000) * -10);
      FUN_0136dde0(param_1,param3,4,uVar4 / 10000 + (uVar4 / 100000) * -10);
      FUN_0136dde0(param_1,param3,5,(uVar4 >> 5) / 0xc35 + ((uVar4 >> 5) / 0x7a12) * -10);
      snprintf((char *)alStack_c8,0x40,"pane_L_mngm_score_info_01_%02d",param3);
      local_78 = alStack_c8;
      FUN_009313e8(&local_128,&local_78);
      plVar18 = local_128;
      if (local_128 == (long *)0x0) {
        local_108 = *(long **)PTR_DAT_04379c88;
LAB_0136eb08:
        lStack_100 = *(long *)PTR_PTR_04379d00;
        if (local_128 != (long *)0x0) goto LAB_0136e304;
LAB_0136eb18:
        local_f8 = 0;
        local_f0 = (long *)0x0;
      }
      else {
        local_108 = (long *)local_128[0xb];
        if (local_128 == (long *)0x0) goto LAB_0136eb08;
        lStack_100 = local_128[0xc];
        if (local_128 == (long *)0x0) goto LAB_0136eb18;
LAB_0136e304:
        local_f8 = local_128[0xd];
        local_f0 = (long *)0x0;
        (**(code **)(*local_128 + 0x18))(local_128);
        plVar17 = local_f0;
        local_f0 = plVar18;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x20))();
        }
      }
      lVar12 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_108);
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe | 1 < uVar3;
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      plVar18 = *(long **)(param_1 + 0x2c8);
      if (plVar18 != (long *)0x0) {
        plVar17 = plVar18 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)*plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar17 = (long *)plVar18[0x37];
      if (plVar17 != (long *)0x0) {
        lVar12 = plVar17[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar13;
        }
        piVar2 = (int *)(lVar12 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar19 = plVar18 + 10;
      do {
        iVar7 = (int)*plVar19 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar6) {
          *(int *)plVar19 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        plVar18 = *(long **)(param_1 + 0x2c8);
      }
      else {
        plVar18 = *(long **)(param_1 + 0x2c8);
      }
      if (plVar18 != (long *)0x0) {
        plVar19 = plVar18 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar19 = (long *)plVar18[0x38];
      if (plVar19 != (long *)0x0) {
        plVar20 = plVar19 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *(int *)plVar20 = (int)*plVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          iVar7 = (int)*plVar20 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *(int *)plVar20 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
      plVar20 = plVar18 + 10;
      do {
        iVar7 = (int)*plVar20 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *(int *)plVar20 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
      FUN_02c395d0(plVar17,0,uVar3,2,0,1);
      snprintf((char *)alStack_c8,0x40,"pane_L_mngm_score_info_01_%02d_T_mngm_score_info_00",param3)
      ;
      FUN_00d37c90(&local_108,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
      plVar18 = (long *)local_108[0xd];
      if (plVar18 != (long *)0x0) {
        plVar20 = plVar18 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *(int *)plVar20 = (int)*plVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (local_108 != (long *)0x0) {
        lVar12 = local_108[0xb];
        piVar2 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_108 + 0x20))();
        }
      }
      local_108 = (long *)0x248aa7c8cbcbbafd;
      FUN_02c2e7d0(plVar18,&local_108,plVar19);
      plVar19 = *(long **)(param_1 + 0x2c8);
      if (plVar19 != (long *)0x0) {
        plVar20 = plVar19 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *(int *)plVar20 = (int)*plVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_78 = alStack_c8;
      FUN_009313e8(&local_128,&local_78);
      plVar20 = local_128;
      if (local_128 == (long *)0x0) {
        local_108 = *(long **)PTR_DAT_04379c88;
LAB_0136eb38:
        lStack_100 = *(long *)PTR_PTR_04379d00;
        if (local_128 != (long *)0x0) goto LAB_0136e55c;
LAB_0136eb48:
        local_f8 = 0;
        local_f0 = (long *)0x0;
      }
      else {
        local_108 = (long *)local_128[0xb];
        if (local_128 == (long *)0x0) goto LAB_0136eb38;
        lStack_100 = local_128[0xc];
        if (local_128 == (long *)0x0) goto LAB_0136eb48;
LAB_0136e55c:
        local_f8 = local_128[0xd];
        local_f0 = (long *)0x0;
        (**(code **)(*local_128 + 0x18))(local_128);
        plVar22 = local_f0;
        local_f0 = plVar20;
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x20))();
        }
      }
      FUN_0283d080(plVar19,&local_108,10);
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      if (plVar19 != (long *)0x0) {
        plVar20 = plVar19 + 10;
        do {
          iVar7 = (int)*plVar20 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *(int *)plVar20 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
      snprintf((char *)alStack_c8,0x40,"anime_L_mngm_score_info_00_%02d_close",param3);
      local_78 = alStack_c8;
      FUN_009313e8(&local_128,&local_78);
      plVar19 = local_128;
      if (local_128 == (long *)0x0) {
        plVar20 = *(long **)PTR_DAT_04379c88;
LAB_0136eb68:
        lStack_100 = *(long *)PTR_PTR_04379d00;
        if (local_128 != (long *)0x0) goto LAB_0136e62c;
LAB_0136eb78:
        local_f8 = 0;
        local_108 = plVar20;
      }
      else {
        plVar20 = (long *)local_128[0xb];
        if (local_128 == (long *)0x0) goto LAB_0136eb68;
        lStack_100 = local_128[0xc];
        if (local_128 == (long *)0x0) goto LAB_0136eb78;
LAB_0136e62c:
        local_f8 = local_128[0xd];
        local_f0 = (long *)0x0;
        local_108 = plVar20;
        (**(code **)(*local_128 + 0x18))(local_128);
      }
      local_f0 = plVar19;
      lVar12 = *(long *)(param_1 + 0x2c8);
      if (lVar12 != 0) {
        plVar22 = *(long **)(lVar12 + 0x1a0);
        lVar16 = *(long *)(lVar12 + 0x1a8);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        plVar8 = plVar22;
        if ((lVar16 != 0) && ((long *)*plVar22 != plVar20)) {
          plVar14 = plVar22 + lVar16 * 6;
          lVar16 = lVar16 * 0x30;
          do {
            lVar16 = lVar16 + -0x30;
            plVar8 = plVar14;
            if (lVar16 == 0) break;
            plVar1 = plVar22 + 6;
            plVar22 = plVar22 + 6;
            plVar8 = plVar22;
          } while ((long *)*plVar1 != plVar20);
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        if (plVar8 == (long *)(*(long *)(lVar12 + 0x1a0) + *(long *)(lVar12 + 0x1a8) * 0x30)) {
LAB_0136e740:
          if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_0136e760;
          FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_108);
        }
        else {
          uVar15 = (ulong)*(uint *)(plVar8 + 5);
          if (((*(uint *)(plVar8[4] + 0x278) <= *(uint *)(plVar8 + 5)) ||
              (lVar12 = *(long *)(plVar8[4] + 600), *(char *)(lVar12 + uVar15 * 0x48 + 8) == '\0'))
             || (*(char *)(lVar12 + uVar15 * 0x48 + 0xb) == '\0')) goto LAB_0136e740;
          plVar20 = (long *)(lVar12 + uVar15 * 0x48 + 0x10);
          lVar16 = *plVar20;
          if ((lVar16 != 0) && (*(char *)(lVar12 + uVar15 * 0x48 + 9) == '\0')) {
            fVar23 = *(float *)(lVar16 + 0x20);
            uVar11 = FUN_00227728();
            uVar15 = FUN_00227744(*plVar20);
            if (((float)uVar11 <= fVar23) && ((uVar15 & 1) == 0)) goto LAB_0136e740;
          }
        }
        FUN_0283b748(0,*(undefined8 *)(param_1 + 0x2c8),&local_108);
      }
LAB_0136e760:
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      snprintf((char *)alStack_c8,0x40,"anime_L_mngm_score_info_01_%02d_close",param3);
      local_78 = alStack_c8;
      FUN_009313e8(&local_128,&local_78);
      plVar19 = local_128;
      if (local_128 == (long *)0x0) {
        plVar20 = *(long **)PTR_DAT_04379c88;
LAB_0136eb94:
        lStack_100 = *(long *)PTR_PTR_04379d00;
        if (local_128 != (long *)0x0) goto LAB_0136e7d0;
LAB_0136eba4:
        local_f8 = 0;
        local_108 = plVar20;
      }
      else {
        plVar20 = (long *)local_128[0xb];
        if (local_128 == (long *)0x0) goto LAB_0136eb94;
        lStack_100 = local_128[0xc];
        if (local_128 == (long *)0x0) goto LAB_0136eba4;
LAB_0136e7d0:
        local_f8 = local_128[0xd];
        local_f0 = (long *)0x0;
        local_108 = plVar20;
        (**(code **)(*local_128 + 0x18))(local_128);
      }
      local_f0 = plVar19;
      lVar12 = *(long *)(param_1 + 0x2c8);
      if (lVar12 != 0) {
        plVar22 = *(long **)(lVar12 + 0x1a0);
        lVar16 = *(long *)(lVar12 + 0x1a8);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        plVar8 = plVar22;
        if ((lVar16 != 0) && ((long *)*plVar22 != plVar20)) {
          plVar14 = plVar22 + lVar16 * 6;
          lVar16 = lVar16 * 0x30;
          do {
            lVar16 = lVar16 + -0x30;
            plVar8 = plVar14;
            if (lVar16 == 0) break;
            plVar1 = plVar22 + 6;
            plVar22 = plVar22 + 6;
            plVar8 = plVar22;
          } while ((long *)*plVar1 != plVar20);
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        if (plVar8 == (long *)(*(long *)(lVar12 + 0x1a0) + *(long *)(lVar12 + 0x1a8) * 0x30)) {
LAB_0136e8e4:
          if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_0136e904;
          FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_108);
        }
        else {
          uVar15 = (ulong)*(uint *)(plVar8 + 5);
          if (((*(uint *)(plVar8[4] + 0x278) <= *(uint *)(plVar8 + 5)) ||
              (lVar12 = *(long *)(plVar8[4] + 600), *(char *)(lVar12 + uVar15 * 0x48 + 8) == '\0'))
             || (*(char *)(lVar12 + uVar15 * 0x48 + 0xb) == '\0')) goto LAB_0136e8e4;
          plVar20 = (long *)(lVar12 + uVar15 * 0x48 + 0x10);
          lVar16 = *plVar20;
          if ((lVar16 != 0) && (*(char *)(lVar12 + uVar15 * 0x48 + 9) == '\0')) {
            fVar23 = *(float *)(lVar16 + 0x20);
            uVar11 = FUN_00227728();
            uVar15 = FUN_00227744(*plVar20);
            if (((float)uVar11 <= fVar23) && ((uVar15 & 1) == 0)) goto LAB_0136e8e4;
          }
        }
        FUN_0283b748(0,*(undefined8 *)(param_1 + 0x2c8),&local_108);
      }
LAB_0136e904:
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      *(uint *)(plVar21 + 4) = uVar3;
      *(uint *)((long)plVar21 + 0x24) = uVar4;
      *(uint *)(plVar21 + 5) = param3;
      if (plVar18 != (long *)0x0) {
        plVar19 = plVar18 + 10;
        do {
          iVar7 = (int)*plVar19 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *(int *)plVar19 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      if (plVar17 != (long *)0x0) {
        lVar12 = plVar17[0xb];
        piVar2 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
      param3 = param3 + 1;
      plVar18 = (long *)plVar21[1];
      if ((long *)plVar21[1] == (long *)0x0) {
        plVar18 = plVar21 + 2;
        plVar17 = (long *)*plVar18;
        if ((long *)*plVar17 != plVar21) {
          do {
            lVar12 = *plVar18;
            plVar18 = (long *)(lVar12 + 0x10);
            plVar17 = (long *)*plVar18;
          } while (*plVar17 != lVar12);
        }
      }
      else {
        do {
          plVar17 = plVar18;
          plVar18 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
      plVar21 = plVar17;
    } while (plVar17 != (long *)(param_1 + 0x5c0));
    if (5 < param3) {
      return;
    }
  }
  puVar10 = PTR_PTR_04379d00;
  puVar9 = PTR_DAT_04379c88;
  do {
    snprintf((char *)&local_108,0x40,"pane_N_mngm_info_%02d",param3);
    local_130 = &local_108;
    FUN_009313e8(&local_78,&local_130);
    plVar18 = local_78;
    plVar21 = (long *)puVar10;
    local_128 = (long *)puVar9;
    if (local_78 != (long *)0x0) {
      plVar21 = local_78 + 0xc;
      local_128 = local_78 + 0xb;
    }
    local_128 = (long *)*local_128;
    lStack_120 = *plVar21;
    if (local_78 == (long *)0x0) {
      local_118 = 0;
      local_110 = (long *)0x0;
    }
    else {
      local_118 = local_78[0xd];
      local_110 = (long *)0x0;
      (**(code **)(*local_78 + 0x18))(local_78);
      plVar21 = local_110;
      local_110 = plVar18;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x20))();
      }
    }
    lVar12 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_128);
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    param3 = param3 + 1;
  } while (param3 != 6);
  return;
}


