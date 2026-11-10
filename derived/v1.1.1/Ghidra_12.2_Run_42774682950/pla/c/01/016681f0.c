/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016681f0; name: FUN_016681f0
 */


void FUN_016681f0(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  byte *pbVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  int local_cc;
  long *local_c0;
  byte *local_b8;
  long *local_a8;
  long *local_a0;
  byte *local_98;
  size_t local_90;
  long *local_88;
  ulong local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  
  local_68 = param_2;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar17 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar17;
  plVar11 = *(long **)(lVar17 + 0x100);
  if (plVar11 != (long *)0x0) {
    plVar22 = plVar11 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar22 = (long *)plVar11[0x20];
  if (plVar22 != (long *)0x0) {
    plVar23 = plVar22 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar23 = plVar11 + 10;
  do {
    iVar10 = (int)*plVar23 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar7) {
      *(int *)plVar23 = iVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))();
    plVar11 = (long *)plVar22[0xc];
  }
  else {
    plVar11 = (long *)plVar22[0xc];
  }
  if (plVar11 != (long *)0x0) {
    plVar23 = plVar11 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_70 = (long *)plVar22[0xf];
  if (local_70 != (long *)0x0) {
    lVar17 = local_70[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar23 = (long *)plVar22[0x11];
  if (plVar23 != (long *)0x0) {
    plVar16 = plVar23 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar16 = plVar23 + 0x1d;
  if (plVar23[0x28] != 0) {
    FUN_01675714(plVar16,plVar23[0x23]);
    lVar17 = plVar23[0x1e];
    plVar23[0x23] = 0;
    if (((lVar17 != 0) && (*(undefined8 *)*plVar16 = 0, lVar17 != 1)) &&
       (*(undefined8 *)(*plVar16 + 8) = 0, lVar17 != 2)) {
      lVar19 = 2;
      do {
        *(undefined8 *)(*plVar16 + lVar19 * 8) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar17 != lVar19);
    }
    plVar23[0x28] = 0;
  }
  plVar24 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  if (plVar24 != plVar15) {
    do {
      local_78 = (long *)*plVar24;
      if (local_78 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = local_78 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *(int *)plVar13 = (int)*plVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plVar13 = local_78;
      }
      if (plVar13[0xb] == -0x732b328715c910ab) {
        local_80 = (ulong)*(uint *)((long)plVar23 + 0x54);
        if (plVar13[0x10] != plVar13[0xf]) {
          uVar21 = 0;
          local_cc = 1;
          while( true ) {
            plVar14 = local_70;
            uVar20 = local_80;
            FUN_01668fcc(&local_c0,plVar13,uVar21 & 0xffffffff);
            pbVar9 = local_b8;
            puVar8 = PTR_DAT_0437a0d0;
            if (local_b8 == (byte *)0x0) {
              if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
                FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar8);
              }
              local_a0 = *(long **)PTR_DAT_0437a0d8;
              local_88 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
              local_98 = *(byte **)(PTR_DAT_0437a0d8 + 8);
              local_90 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x18))();
              }
            }
            else {
              local_90 = strlen((char *)local_b8);
              bVar5 = *pbVar9;
              if (bVar5 == 0) {
                local_a0 = (long *)&DAT_cbf29ce484222645;
              }
              else {
                local_a0 = (long *)&DAT_cbf29ce484222645;
                pbVar18 = pbVar9;
                do {
                  pbVar18 = pbVar18 + 1;
                  local_a0 = (long *)(((ulong)local_a0 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar18;
                } while (bVar5 != 0);
              }
              local_98 = pbVar9;
              local_88 = (long *)0x0;
            }
            FUN_0166184c(plVar14,uVar20,local_cc,&local_a0);
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            if (local_a8 != (long *)0x0) {
              (**(code **)(*local_a8 + 0x20))();
            }
            uVar21 = uVar21 + 1;
            if ((ulong)(local_78[0x10] - local_78[0xf] >> 3) <= uVar21) break;
            local_cc = local_cc + 1;
            plVar13 = local_78;
          }
        }
        FUN_016745b0(plVar23,&local_80,&local_68);
        *(int *)((long)plVar23 + 0x54) = *(int *)((long)plVar23 + 0x54) + 1;
      }
      else {
        lVar17 = plVar11[0x13];
        lVar19 = plVar11[0x14] - lVar17;
        if (lVar19 == 0) {
          uVar21 = 0;
        }
        else {
          uVar21 = lVar19 * 0x40 - 1;
        }
        uVar20 = plVar11[0x1b] + plVar11[0x1a];
        if (uVar21 == uVar20) {
          FUN_0166fd0c(plVar11 + 0x12);
          uVar20 = plVar11[0x1a] + plVar11[0x1b];
          lVar17 = plVar11[0x13];
          if (plVar11[0x14] == lVar17) goto LAB_01668c1c;
LAB_01668398:
          lVar17 = *(long *)(lVar17 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
        }
        else {
          if (plVar11[0x14] != lVar17) goto LAB_01668398;
LAB_01668c1c:
          lVar17 = 0;
        }
        FUN_0166af20(plVar11 + 0x1c,lVar17,&local_78);
        plVar11[0x1b] = plVar11[0x1b] + 1;
      }
      if (local_78 != (long *)0x0) {
        plVar13 = local_78 + 10;
        do {
          iVar10 = (int)*plVar13 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *(int *)plVar13 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
      plVar24 = plVar24 + 1;
    } while (plVar24 != plVar15);
  }
  puVar8 = PTR_DAT_0437b160;
  local_a0 = (long *)0x145d669ed9ccd14;
  local_c0 = (long *)FUN_0166a280(*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388),&local_a0,
                                  &local_68,&local_70);
  if (local_c0 != (long *)0x0) {
    plVar24 = local_c0 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar7) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar17 = plVar11[0x13];
  lVar19 = plVar11[0x14] - lVar17;
  uVar21 = 0;
  if (lVar19 != 0) {
    uVar21 = lVar19 * 0x40 - 1;
  }
  uVar20 = plVar11[0x1b] + plVar11[0x1a];
  plVar24 = plVar11 + 0x1c;
  if (uVar21 == uVar20) {
    FUN_0166fd0c(plVar11 + 0x12);
    uVar20 = plVar11[0x1a] + plVar11[0x1b];
    lVar17 = plVar11[0x13];
    if (plVar11[0x14] == lVar17) goto LAB_01668c48;
LAB_01668474:
    lVar17 = *(long *)(lVar17 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
  }
  else {
    if (plVar11[0x14] != lVar17) goto LAB_01668474;
LAB_01668c48:
    lVar17 = 0;
  }
  FUN_0166af20(plVar24,lVar17,&local_c0);
  plVar11[0x1b] = plVar11[0x1b] + 1;
  if (local_c0 != (long *)0x0) {
    plVar15 = local_c0 + 10;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  local_a0 = (long *)0xda1ece532b4484d3;
  local_c0 = (long *)FUN_0166a280(*(undefined8 *)(*(long *)puVar8 + 0x388),&local_a0,&local_68,
                                  &local_70);
  if (local_c0 != (long *)0x0) {
    plVar15 = local_c0 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar17 = plVar11[0x13];
  lVar19 = plVar11[0x14] - lVar17;
  uVar21 = 0;
  if (lVar19 != 0) {
    uVar21 = lVar19 * 0x40 - 1;
  }
  uVar20 = plVar11[0x1b] + plVar11[0x1a];
  if (uVar21 == uVar20) {
    FUN_0166fd0c(plVar11 + 0x12);
    uVar20 = plVar11[0x1a] + plVar11[0x1b];
    lVar17 = plVar11[0x13];
    if (plVar11[0x14] == lVar17) goto LAB_01668c6c;
LAB_01668538:
    lVar17 = *(long *)(lVar17 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
  }
  else {
    if (plVar11[0x14] != lVar17) goto LAB_01668538;
LAB_01668c6c:
    lVar17 = 0;
  }
  FUN_0166af20(plVar24,lVar17,&local_c0);
  plVar11[0x1b] = plVar11[0x1b] + 1;
  if (local_c0 != (long *)0x0) {
    plVar15 = local_c0 + 10;
    do {
      iVar10 = (int)*plVar15 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  plVar13 = (long *)param_1[1];
  for (plVar15 = (long *)*param_1; plVar15 != plVar13; plVar15 = plVar15 + 1) {
    local_a0 = (long *)*plVar15;
    if (local_a0 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = local_a0 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar14 = local_a0;
    }
    if (plVar14[0xb] == 0x1f9c392cefbb1b58) {
      local_c0 = (long *)FUN_0166a464(&local_78,*(undefined8 *)(*(long *)puVar8 + 0x388),
                                      &DAT_03a7c468,&local_a0);
      if (local_c0 != (long *)0x0) {
        plVar14 = local_c0 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar17 = plVar11[0x13];
      lVar19 = plVar11[0x14] - lVar17;
      uVar21 = 0;
      if (lVar19 != 0) {
        uVar21 = lVar19 * 0x40 - 1;
      }
      uVar20 = plVar11[0x1b] + plVar11[0x1a];
      if (uVar21 == uVar20) {
        FUN_0166fd0c(plVar11 + 0x12);
        uVar20 = plVar11[0x1a] + plVar11[0x1b];
        lVar17 = plVar11[0x13];
        if (plVar11[0x14] == lVar17) goto LAB_01668e5c;
LAB_0166893c:
        lVar17 = *(long *)(lVar17 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
      }
      else {
        if (plVar11[0x14] != lVar17) goto LAB_0166893c;
LAB_01668e5c:
        lVar17 = 0;
      }
      FUN_0166af20(plVar24,lVar17,&local_c0);
      plVar11[0x1b] = plVar11[0x1b] + 1;
      plVar14 = local_a0;
      if (local_c0 != (long *)0x0) {
        plVar2 = local_c0 + 10;
        do {
          iVar10 = (int)*plVar2 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_c0 + 0x10))();
          plVar14 = local_a0;
        }
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14 + 10;
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  FUN_01674e64(plVar23,&DAT_03a7c468);
  local_a0 = (long *)FUN_0166a974(&local_c0,*(undefined8 *)(*(long *)puVar8 + 0x388),&DAT_03a7c470,
                                  &local_68,&local_70);
  if (local_a0 != (long *)0x0) {
    plVar15 = local_a0 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar17 = plVar11[0x13];
  lVar19 = plVar11[0x14] - lVar17;
  if (lVar19 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = lVar19 * 0x40 - 1;
  }
  uVar20 = plVar11[0x1b] + plVar11[0x1a];
  if (uVar21 == uVar20) {
    FUN_0166fd0c(plVar11 + 0x12);
    uVar20 = plVar11[0x1a] + plVar11[0x1b];
    lVar17 = plVar11[0x13];
    if (plVar11[0x14] == lVar17) goto LAB_01668c90;
  }
  else if (plVar11[0x14] == lVar17) {
LAB_01668c90:
    lVar17 = 0;
    goto LAB_016686c8;
  }
  lVar17 = *(long *)(lVar17 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
LAB_016686c8:
  FUN_0166af20(plVar24,lVar17,&local_a0);
  plVar11[0x1b] = plVar11[0x1b] + 1;
  puVar4 = (undefined8 *)param_1[1];
  for (puVar3 = (undefined8 *)*param_1; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    local_c0 = (long *)*puVar3;
    if (local_c0 == (long *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = local_c0 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar15 = local_c0;
    }
    if (plVar15[0xb] == 0x4e3742139786576f) {
      local_78 = (long *)FUN_0166a464(&local_80,*(undefined8 *)(*(long *)puVar8 + 0x388),
                                      &DAT_03a7c478,&local_c0);
      if (local_78 != (long *)0x0) {
        plVar15 = local_78 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *(int *)plVar15 = (int)*plVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar17 = plVar11[0x13];
      lVar19 = plVar11[0x14] - lVar17;
      uVar21 = 0;
      if (lVar19 != 0) {
        uVar21 = lVar19 * 0x40 - 1;
      }
      uVar20 = plVar11[0x1b] + plVar11[0x1a];
      if (uVar21 == uVar20) {
        FUN_0166fd0c(plVar11 + 0x12);
        uVar20 = plVar11[0x1a] + plVar11[0x1b];
        lVar17 = plVar11[0x13];
        if (plVar11[0x14] == lVar17) goto LAB_01668e80;
LAB_01668b24:
        lVar17 = *(long *)(lVar17 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
      }
      else {
        if (plVar11[0x14] != lVar17) goto LAB_01668b24;
LAB_01668e80:
        lVar17 = 0;
      }
      FUN_0166af20(plVar24,lVar17,&local_78);
      plVar11[0x1b] = plVar11[0x1b] + 1;
      plVar15 = local_c0;
      if (local_78 != (long *)0x0) {
        plVar13 = local_78 + 10;
        do {
          iVar10 = (int)*plVar13 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *(int *)plVar13 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_78 + 0x10))();
          plVar15 = local_c0;
        }
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar13 = plVar15 + 10;
      do {
        iVar10 = (int)*plVar13 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *(int *)plVar13 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  FUN_01674e64(plVar23,&DAT_03a7c478);
  if (plVar23[0x28] != 0) {
    FUN_01675714(plVar16,plVar23[0x23]);
    lVar17 = plVar23[0x1e];
    plVar23[0x23] = 0;
    if (((lVar17 != 0) && (*(undefined8 *)*plVar16 = 0, lVar17 != 1)) &&
       (*(undefined8 *)(*plVar16 + 8) = 0, lVar17 != 2)) {
      lVar19 = 2;
      do {
        *(undefined8 *)(*plVar16 + lVar19 * 8) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar17 != lVar19);
    }
    plVar23[0x28] = 0;
  }
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  do {
    if (puVar3 == puVar4) {
      if (local_a0 != (long *)0x0) {
        plVar16 = local_a0 + 10;
        do {
          iVar10 = (int)*plVar16 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *(int *)plVar16 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_a0 + 0x10))();
        }
      }
      if (plVar23 != (long *)0x0) {
        plVar16 = plVar23 + 10;
        do {
          iVar10 = (int)*plVar16 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *(int *)plVar16 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
      if (local_70 != (long *)0x0) {
        lVar17 = local_70[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
      if (plVar11 != (long *)0x0) {
        plVar23 = plVar11 + 10;
        do {
          iVar10 = (int)*plVar23 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar7) {
            *(int *)plVar23 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      if (plVar22 != (long *)0x0) {
        plVar11 = plVar22 + 10;
        do {
          iVar10 = (int)*plVar11 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *(int *)plVar11 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
      return;
    }
    local_c0 = (long *)*puVar3;
    if (local_c0 == (long *)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = local_c0 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar16 = local_c0;
    }
    if (plVar16[0xb] == -0x6b612f1665c75851) {
      local_78 = (long *)FUN_0166a464(&local_80,*(undefined8 *)(*(long *)puVar8 + 0x388),
                                      &DAT_03a7c480,&local_c0);
      if (local_78 != (long *)0x0) {
        plVar16 = local_78 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar17 = plVar11[0x13];
      lVar19 = plVar11[0x14] - lVar17;
      uVar21 = 0;
      if (lVar19 != 0) {
        uVar21 = lVar19 * 0x40 - 1;
      }
      uVar20 = plVar11[0x1b] + plVar11[0x1a];
      if (uVar21 == uVar20) {
        FUN_0166fd0c(plVar11 + 0x12);
        uVar20 = plVar11[0x1a] + plVar11[0x1b];
        lVar17 = plVar11[0x13];
        if (plVar11[0x14] == lVar17) goto LAB_01668edc;
LAB_01668d98:
        lVar17 = *(long *)(lVar17 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
      }
      else {
        if (plVar11[0x14] != lVar17) goto LAB_01668d98;
LAB_01668edc:
        lVar17 = 0;
      }
      FUN_0166af20(plVar24,lVar17,&local_78);
      plVar11[0x1b] = plVar11[0x1b] + 1;
      plVar16 = local_c0;
      if (local_78 != (long *)0x0) {
        plVar15 = local_78 + 10;
        do {
          iVar10 = (int)*plVar15 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *(int *)plVar15 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_78 + 0x10))();
          plVar16 = local_c0;
        }
      }
    }
    if (plVar16 != (long *)0x0) {
      plVar15 = plVar16 + 10;
      do {
        iVar10 = (int)*plVar15 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *(int *)plVar15 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
    }
    puVar3 = puVar3 + 1;
  } while( true );
}


