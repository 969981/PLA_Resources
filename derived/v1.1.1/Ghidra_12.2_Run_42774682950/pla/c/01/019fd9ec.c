/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019fd9ec; name: FUN_019fd9ec
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_019fd9ec(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  float fVar27;
  int local_168;
  undefined8 *local_160;
  long *local_150;
  long local_148;
  long *local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 local_78;
  long local_70 [2];
  
  lVar15 = *param_2;
  uVar11 = FUN_00b1255c(lVar15 + 0x50);
  if ((uVar11 & 1) == 0) goto LAB_019fe750;
  plVar19 = *(long **)(lVar15 + 0x68);
  if (plVar19 != (long *)0x0) {
    lVar20 = plVar19[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_019fe750;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar21 = *(long **)(lVar15 + 0x70);
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_019fe750;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_140 = (long *)0x0;
  lStack_138 = 0;
  FUN_008802f0(&local_140,plVar21 + 0xb);
  local_80 = (long *)0x0;
  local_78 = 0;
  FUN_00880560(&local_80,&local_140);
  plVar22 = local_140;
  if (local_140 != (long *)0x0) {
    plVar23 = local_140 + 1;
    do {
      iVar9 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_90 = (long *)*plVar22;
      FUN_02a44274(lVar20 + 0xd8,&local_90);
    }
  }
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  FUN_00ab3c84(&local_a0,&local_80);
  plVar22 = local_80;
  if (local_80 != (long *)0x0) {
    plVar23 = local_80 + 1;
    do {
      iVar9 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_140 = (long *)*plVar22;
      FUN_02a44274(lVar20 + 0xd8,&local_140);
    }
  }
  local_140 = (long *)0x0;
  lStack_138 = 0;
  FUN_008802f0(&local_140,plVar21 + 0xb);
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_00ab3c84(&local_b0,&local_140);
  plVar22 = local_140;
  if (local_140 != (long *)0x0) {
    plVar23 = local_140 + 1;
    do {
      iVar9 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_80 = (long *)*plVar22;
      FUN_02a44274(lVar20 + 0xd8,&local_80);
    }
  }
  plVar22 = *(long **)(lVar15 + 0x78);
  if (plVar22 != (long *)0x0) {
    lVar20 = plVar22[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_019fe750;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar23 = *(long **)(lVar15 + 0x80);
  if (plVar23 != (long *)0x0) {
    lVar20 = plVar23[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_019fe750;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar24 = *(long **)(lVar15 + 0x88);
  if (plVar24 != (long *)0x0) {
    lVar20 = plVar24[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_019fe750;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar25 = *(long **)(lVar15 + 0xa8);
  if (plVar25 == (long *)0x0) goto LAB_019fe750;
  lVar20 = plVar25[0xb];
  if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_019fe750;
  if (*(long *)(lVar20 + 0x10) == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
    *(undefined8 *)(lVar20 + 0x10) = uVar12;
  }
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    puVar7 = PTR_DAT_0437a758;
  } while (cVar5 != '\0');
  lVar20 = plVar25[0x4d];
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar1 = (int *)(lVar20 + 0xc);
    local_160._0_4_ = *(int *)(lVar20 + 0xc);
    do {
      plVar13 = *(long **)(lVar20 + 0x10);
      if (((*PTR_DAT_0437a750 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a750), iVar9 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar12;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar7 = PTR_DAT_043795e0;
        __cxa_guard_release(PTR_DAT_0437a750);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_019fdd24;
        if (plVar13 == (long *)puVar7) break;
        plVar13 = (long *)*plVar13;
      }
      iVar9 = *piVar1;
      if (iVar9 == (int)local_160) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = (int)local_160 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar20 = *(long *)(lVar20 + 0x18);
          if (lVar20 != 0) {
            lVar18 = param_1[0x72];
            plVar13 = (long *)(lVar20 + -0x50);
            if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) goto LAB_019fe3a8;
            piVar1 = (int *)(lVar18 + 0xc);
            local_168 = *(int *)(lVar18 + 0xc);
            goto LAB_019fe77c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      local_160._0_4_ = iVar9;
    } while (iVar9 != 0);
  }
LAB_019fdd24:
  lVar20 = param_1[0x72];
  goto joined_r0x019fe3dc;
LAB_019fe77c:
  do {
    plVar17 = *(long **)(lVar18 + 0x10);
    if (((*PTR_DAT_04379e78 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e78), iVar9 != 0)) {
      uVar12 = FUN_0095a420();
      *(undefined8 *)PTR_DAT_04379e80 = uVar12;
      __cxa_guard_release(PTR_DAT_04379e78);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) goto LAB_019fe3a8;
      if (plVar17 == (long *)PTR_DAT_04379e80) break;
      plVar17 = (long *)*plVar17;
    }
    iVar9 = *piVar1;
    if (iVar9 == local_168) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = local_168 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + -0x50) + 0x18))(&local_140);
          local_c0 = (undefined8 *)0x0;
          uStack_b8 = 0;
          FUN_00bd1f90(&local_c0,&local_140);
          plVar17 = local_140;
          if (local_140 != (long *)0x0) {
            plVar16 = local_140 + 1;
            do {
              iVar9 = (int)*plVar16 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *(int *)plVar16 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_140[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar26;
              local_80 = (long *)*plVar17;
              FUN_02a44274(lVar26 + 0xd8,&local_80);
            }
          }
          FUN_00aea200(plVar13,&local_c0);
          puVar8 = local_c0;
          if (local_c0 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_c0 + 1);
            do {
              iVar9 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 == 0) {
              local_c0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar26 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar26;
              local_140 = (long *)*puVar8;
              FUN_02a44274(lVar26 + 0xd8,&local_140);
            }
          }
          lVar26 = *(long *)(lVar18 + 8);
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))();
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    local_168 = iVar9;
  } while (iVar9 != 0);
LAB_019fe3a8:
  lVar20 = *(long *)(lVar20 + 8);
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 + -1 != 0) goto LAB_019fdd24;
  *(undefined8 *)(lVar20 + 0x18) = 0;
  (**(code **)(*plVar13 + 0x20))(plVar13);
  lVar20 = param_1[0x72];
joined_r0x019fe3dc:
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar9 = *(int *)(lVar20 + 0xc);
    do {
      plVar13 = *(long **)(lVar20 + 0x10);
      if (((*PTR_DAT_04379e78 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379e78), iVar10 != 0)) {
        uVar12 = FUN_0095a420();
        *(undefined8 *)PTR_DAT_04379e80 = uVar12;
        __cxa_guard_release(PTR_DAT_04379e78);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_019fdd2c;
        if (plVar13 == (long *)PTR_DAT_04379e80) break;
        plVar13 = (long *)*plVar13;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_019fe9e0;
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 != 0) {
          local_d0 = (long *)0x0;
          uStack_c8 = 0;
          FUN_00b1b5bc(&local_d0,&local_b0);
          (**(code **)(*plVar24 + 0x10))(&local_140,plVar24);
          local_80 = (long *)0x0;
          local_78 = 0;
          FUN_015300dc(&local_80,&local_140);
          plVar13 = local_140;
          if (local_140 != (long *)0x0) {
            plVar17 = local_140 + 1;
            do {
              iVar9 = (int)*plVar17 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *(int *)plVar17 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_140[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_90 = (long *)*plVar13;
              FUN_02a44274(lVar18 + 0xd8,&local_90);
            }
          }
          local_e0 = (long *)0x0;
          local_d8 = 0;
          do {
            uVar12 = local_78;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(&local_78,0x10);
            if (bVar6) {
              local_78 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          uVar14 = *(undefined8 *)PTR_DAT_043794a0;
          *(undefined8 *)PTR_DAT_043794a8 = uVar14;
          FUN_02a44e0c(&local_90,uVar14,uVar12);
          plVar13 = local_80;
          local_80 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            plVar17 = plVar13 + 1;
            do {
              iVar9 = (int)*plVar17 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *(int *)plVar17 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              plVar13[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_140 = (long *)*plVar13;
              FUN_02a44274(lVar18 + 0xd8,&local_140);
            }
          }
          plVar13 = local_e0;
          local_e0 = (long *)0x0;
          if (local_90 == (long *)0x0) {
            if (plVar13 != (long *)0x0) {
              plVar17 = plVar13 + 1;
              do {
                lVar18 = *plVar17;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar6) {
                  *(int *)plVar17 = (int)lVar18 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((int)lVar18 == 1) {
                plVar13[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar18;
                local_140 = (long *)*plVar13;
                FUN_02a44274(lVar18 + 0xd8,&local_140);
              }
            }
            uVar12 = 0;
          }
          else {
            plVar17 = local_90;
            if (plVar13 != (long *)0x0) {
              plVar17 = plVar13 + 1;
              do {
                iVar9 = (int)*plVar17 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar6) {
                  *(int *)plVar17 = iVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 == 0) {
                plVar13[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar18;
                local_140 = (long *)*plVar13;
                FUN_02a44274(lVar18 + 0xd8,&local_140);
              }
              plVar17 = local_90;
            }
            local_90 = (long *)0x0;
            local_e0 = plVar17;
          }
          plVar13 = local_90;
          local_d8 = uVar12;
          if (local_90 != (long *)0x0) {
            plVar17 = local_90 + 1;
            do {
              iVar9 = (int)*plVar17 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *(int *)plVar17 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_90[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_140 = (long *)*plVar13;
              FUN_02a44274(lVar18 + 0xd8,&local_140);
            }
          }
          FUN_01bdbc80((long *)(lVar20 + -0x50),&local_d0,&local_e0);
          plVar13 = local_e0;
          if (local_e0 != (long *)0x0) {
            plVar17 = local_e0 + 1;
            do {
              iVar9 = (int)*plVar17 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *(int *)plVar17 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_e0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_140 = (long *)*plVar13;
              FUN_02a44274(lVar18 + 0xd8,&local_140);
            }
          }
          plVar13 = local_80;
          if (local_80 != (long *)0x0) {
            plVar17 = local_80 + 1;
            do {
              iVar9 = (int)*plVar17 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *(int *)plVar17 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_80[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_140 = (long *)*plVar13;
              FUN_02a44274(lVar18 + 0xd8,&local_140);
            }
          }
          plVar13 = local_d0;
          if (local_d0 != (long *)0x0) {
            plVar17 = local_d0 + 1;
            do {
              iVar9 = (int)*plVar17 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *(int *)plVar17 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_d0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_140 = (long *)*plVar13;
              FUN_02a44274(lVar18 + 0xd8,&local_140);
            }
          }
          lVar18 = *(long *)(lVar20 + 8);
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 != 0) break;
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*(long *)(lVar20 + -0x50) + 0x20))();
          lVar20 = param_1[0x76];
          goto joined_r0x019feddc;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_019fe9e0:
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_019fdd2c:
  lVar20 = param_1[0x76];
joined_r0x019feddc:
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar9 = *(int *)(lVar20 + 0xc);
    do {
      plVar13 = *(long **)(lVar20 + 0x10);
      if (((*PTR_DAT_0437a5b8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a5b8), iVar10 != 0)) {
        uVar12 = FUN_00ab4284();
        *(undefined8 *)PTR_DAT_0437a5c0 = uVar12;
        __cxa_guard_release(PTR_DAT_0437a5b8);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_019fdd34;
        if (plVar13 == (long *)PTR_DAT_0437a5c0) break;
        plVar13 = (long *)*plVar13;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_019ff0b0;
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 != 0) {
          plVar17 = (long *)(lVar20 + -0x50);
          local_140 = (long *)0x0;
          lStack_138 = 0;
          FUN_008802f0(&local_140,plVar23 + 0xb);
          local_f0 = (undefined8 *)0x0;
          uStack_e8 = 0;
          FUN_00ab1f6c(&local_f0,&local_140);
          plVar13 = local_140;
          if (local_140 != (long *)0x0) {
            plVar16 = local_140 + 1;
            do {
              iVar9 = (int)*plVar16 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *(int *)plVar16 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_140[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_80 = (long *)*plVar13;
              FUN_02a44274(lVar18 + 0xd8,&local_80);
            }
          }
          FUN_01a04c0c(lVar20 + 0x1a0,&local_f0);
          (**(code **)(*(long *)(lVar20 + -0x50) + 0xf0))(plVar17);
          lVar26 = *(long *)(lVar20 + 0x1b0);
          FUN_00aaeed4(&local_90,plVar17);
          lVar18 = nn::os::GetCurrentThread();
          plVar13 = (long *)(lVar26 + 0xf8);
          do {
            if (*plVar13 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0xec));
                while (*plVar13 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar6) {
                    *plVar13 = lVar18;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_019ff21c;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = lVar18;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_019ff21c:
          puVar7 = PTR_DAT_04379498;
          plVar13 = *(long **)(lVar26 + 0xb0);
          while (plVar13 != (long *)0x0) {
            local_140 = (long *)0x0;
            lStack_138 = 0;
            FUN_008802f0(&local_140,plVar13 + 3);
            plVar16 = (long *)plVar13[5];
            local_130 = plVar16;
            if ((local_140 == (long *)0x0) || (*(int *)((long)local_140 + 0xc) == 0)) {
              plVar13 = (long *)FUN_01a04e84(lVar26 + 0x80,plVar13);
              plVar16 = local_140;
            }
            else {
              local_80 = (long *)0x0;
              local_78 = 0;
              FUN_01a04c0c(&local_80,&local_90);
              (**(code **)(*plVar16 + 0x30))(plVar16,&local_80);
              plVar16 = local_80;
              if (local_80 != (long *)0x0) {
                plVar2 = local_80 + 1;
                do {
                  iVar9 = (int)*plVar2 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar6) {
                    *(int *)plVar2 = iVar9;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar9 == 0) {
                  local_80[2] = 0;
                  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(puVar7);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_70[0] = *plVar16;
                  FUN_02a44274(lVar18 + 0xd8,local_70);
                }
              }
              plVar13 = (long *)*plVar13;
              plVar16 = local_140;
            }
            local_140 = plVar16;
            if (plVar16 != (long *)0x0) {
              plVar2 = plVar16 + 1;
              do {
                iVar9 = (int)*plVar2 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *(int *)plVar2 = iVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 == 0) {
                plVar16[2] = 0;
                if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar7);
                }
                lVar18 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar18;
                local_70[0] = *plVar16;
                FUN_02a44274(lVar18 + 0xd8,local_70);
              }
            }
          }
          *(undefined8 *)(lVar26 + 0xf8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0xec));
          plVar13 = local_90;
          if (local_90 != (long *)0x0) {
            plVar16 = local_90 + 1;
            do {
              iVar9 = (int)*plVar16 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *(int *)plVar16 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_90[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_140 = (long *)*plVar13;
              FUN_02a44274(lVar18 + 0xd8,&local_140);
            }
          }
          puVar8 = local_f0;
          if (local_f0 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_f0 + 1);
            do {
              iVar9 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 == 0) {
              local_f0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_140 = (long *)*puVar8;
              FUN_02a44274(lVar18 + 0xd8,&local_140);
            }
          }
          lVar20 = *(long *)(lVar20 + 8);
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 != 0) break;
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))();
          lVar20 = param_1[0x74];
          goto joined_r0x019ff334;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_019ff0b0:
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_019fdd34:
  lVar20 = param_1[0x74];
joined_r0x019ff334:
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar9 = *(int *)(lVar20 + 0xc);
    do {
      plVar13 = *(long **)(lVar20 + 0x10);
      if (((*PTR_DAT_0437a550 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a550), iVar10 != 0)) {
        uVar12 = FUN_00aa0310();
        *(undefined8 *)PTR_DAT_0437a558 = uVar12;
        __cxa_guard_release(PTR_DAT_0437a550);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_019fdd3c;
        if (plVar13 == (long *)PTR_DAT_0437a558) break;
        plVar13 = (long *)*plVar13;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_019ff5e4;
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 != 0) {
          plVar13 = (long *)(lVar20 + -0x50);
          if (plVar22 == (long *)0x0) {
            local_100 = (undefined8 *)0x0;
            uStack_f8 = 0;
          }
          else {
            local_140 = (long *)0x0;
            lStack_138 = 0;
            FUN_008802f0(&local_140,plVar22 + 0xb);
            local_100 = (undefined8 *)0x0;
            uStack_f8 = 0;
            FUN_00aa03f0(&local_100,&local_140);
            plVar17 = local_140;
            if (local_140 != (long *)0x0) {
              plVar16 = local_140 + 1;
              do {
                iVar9 = (int)*plVar16 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar6) {
                  *(int *)plVar16 = iVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 == 0) {
                local_140[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar18;
                local_80 = (long *)*plVar17;
                FUN_02a44274(lVar18 + 0xd8,&local_80);
              }
            }
          }
          FUN_00aeaa8c(lVar20 + 0x1a0,&local_100);
          (**(code **)(*(long *)(lVar20 + -0x50) + 0xf0))(plVar13);
          uVar12 = *(undefined8 *)(lVar20 + 0x1b0);
          FUN_00a9ecd4(&local_140,plVar13);
          FUN_0135cd08(uVar12,&local_140);
          plVar17 = local_140;
          if (local_140 != (long *)0x0) {
            plVar16 = local_140 + 1;
            do {
              iVar9 = (int)*plVar16 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *(int *)plVar16 = iVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 == 0) {
              local_140[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_80 = (long *)*plVar17;
              FUN_02a44274(lVar18 + 0xd8,&local_80);
            }
          }
          puVar8 = local_100;
          if (local_100 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_100 + 1);
            do {
              iVar9 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 == 0) {
              local_100[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_140 = (long *)*puVar8;
              FUN_02a44274(lVar18 + 0xd8,&local_140);
            }
          }
          lVar20 = *(long *)(lVar20 + 8);
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 != 0) break;
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
          lVar20 = param_1[0x78];
          goto joined_r0x019ff774;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_019ff5e4:
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_019fdd3c:
  lVar20 = param_1[0x78];
joined_r0x019ff774:
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar9 = *(int *)(lVar20 + 0xc);
    do {
      plVar13 = *(long **)(lVar20 + 0x10);
      if (((*PTR_DAT_0437f490 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437f490), iVar10 != 0)) {
        uVar12 = FUN_01443f54();
        *(undefined8 *)PTR_DAT_0437f498 = uVar12;
        __cxa_guard_release(PTR_DAT_0437f490);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_019fdd44;
        if (plVar13 == (long *)PTR_DAT_0437f498) break;
        plVar13 = (long *)*plVar13;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar20 = *(long *)(lVar20 + 0x18);
          if (lVar20 != 0) {
            plVar17 = (long *)(lVar20 + -0x50);
            (**(code **)(*plVar24 + 0x10))(&local_140,plVar24);
            local_110 = (undefined8 *)0x0;
            uStack_108 = 0;
            FUN_015300dc(&local_110,&local_140);
            plVar13 = local_140;
            if (local_140 != (long *)0x0) {
              plVar16 = local_140 + 1;
              do {
                iVar9 = (int)*plVar16 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar6) {
                  *(int *)plVar16 = iVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 == 0) {
                local_140[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar18;
                local_80 = (long *)*plVar13;
                FUN_02a44274(lVar18 + 0xd8,&local_80);
              }
            }
            FUN_0152fad0(lVar20 + 0x1a0,&local_110);
            (**(code **)(*(long *)(lVar20 + -0x50) + 0xf0))(plVar17);
            uVar12 = *(undefined8 *)(lVar20 + 0x1b0);
            FUN_0152d920(&local_140,plVar17);
            FUN_0152f8a0(uVar12,&local_140);
            plVar13 = local_140;
            if (local_140 != (long *)0x0) {
              plVar16 = local_140 + 1;
              do {
                iVar9 = (int)*plVar16 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar6) {
                  *(int *)plVar16 = iVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 == 0) {
                local_140[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar18;
                local_80 = (long *)*plVar13;
                FUN_02a44274(lVar18 + 0xd8,&local_80);
              }
            }
            puVar8 = local_110;
            if (local_110 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_110 + 1);
              do {
                iVar9 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar9 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 + -1 == 0) {
                local_110[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar18;
                local_140 = (long *)*puVar8;
                FUN_02a44274(lVar18 + 0xd8,&local_140);
              }
            }
            lVar20 = *(long *)(lVar20 + 8);
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_019fdd44:
  (**(code **)(*param_1 + 0x140))(param_1,lVar15);
  plVar13 = (long *)FUN_00b13c20(plVar19 + 0x1e,&local_140);
  if (plVar13 == (long *)0x0) {
    lVar20 = param_1[0x3f];
    if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) {
LAB_019fe1f4:
      plVar17 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar20 + 0xc);
      iVar9 = *(int *)(lVar20 + 0xc);
      do {
        local_160 = *(undefined8 **)(lVar20 + 0x10);
        if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar10 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar12;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a0e8);
        }
        if (local_160 == (undefined8 *)0x0) goto LAB_019fe1f4;
        while (local_160 != (undefined8 *)PTR_DAT_0437a0f0) {
          plVar17 = (long *)0x0;
          local_160 = (undefined8 *)*local_160;
          if (local_160 == (undefined8 *)0x0) goto LAB_019fe1f8;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar17 = (long *)0x0;
            if (*(long *)(lVar20 + 0x18) != 0) {
              plVar17 = (long *)(*(long *)(lVar20 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar17 = (long *)0x0;
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_019fe1f8:
    local_140 = (long *)plVar17[0x12];
    lStack_138 = plVar17[0x13];
    plVar13 = (long *)FUN_00bd8988(plVar19,plVar19[1],&local_140);
    if (plVar17 != (long *)0x0) {
      lVar20 = plVar17[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    FUN_009c69bc(&local_90,param_1);
    (**(code **)(*local_90 + 0x18))(&local_140);
    local_120 = (undefined8 *)0x0;
    uStack_118 = 0;
    FUN_0087f944(&local_120,&local_140);
    plVar17 = local_140;
    if (local_140 != (long *)0x0) {
      plVar16 = local_140 + 1;
      do {
        iVar9 = (int)*plVar16 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_140[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar20;
        local_80 = (long *)*plVar17;
        FUN_02a44274(lVar20 + 0xd8,&local_80);
      }
    }
    FUN_00d804f8(plVar13,&local_120,1);
    puVar8 = local_120;
    if (local_120 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_120 + 1);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar20;
        local_140 = (long *)*puVar8;
        FUN_02a44274(lVar20 + 0xd8,&local_140);
      }
    }
    if (local_90 != (long *)0x0) {
      lVar20 = local_90[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
  }
  fVar27 = (float)FUN_00ae6464();
  *(undefined1 *)(plVar19 + 0x1c) = 1;
  plVar19[0x1b] = 0;
  plVar19[0x1a] = (ulong)(uint)-fVar27 << 0x20;
  lVar20 = plVar25[0x46];
  if (plVar25[0x47] != lVar20) {
    uVar11 = 0;
    do {
      local_130 = (long *)0x0;
      uStack_128 = 0;
      local_140 = (long *)0x0;
      lStack_138 = 0;
      local_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_00b1b5bc(&local_90,lVar20 + uVar11 * 0x10);
      plVar16 = local_90;
      plVar17 = local_130;
      if (local_90 != (long *)0x0) {
        plVar2 = local_90;
        if (*(int *)((long)local_90 + 0xc) != 0) {
          piVar1 = (int *)((long)local_90 + 0xc);
          iVar9 = *(int *)((long)local_90 + 0xc);
          do {
            plVar17 = (long *)plVar16[2];
            if (((*PTR_DAT_0437a148 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a148), iVar10 != 0)) {
              uVar12 = FUN_009b19b4();
              *(undefined8 *)PTR_DAT_0437a150 = uVar12;
              __cxa_guard_release(PTR_DAT_0437a148);
            }
            while( true ) {
              plVar2 = local_90;
              if (plVar17 == (long *)0x0) goto joined_r0x01a00124;
              if (plVar17 == (long *)PTR_DAT_0437a150) break;
              plVar17 = (long *)*plVar17;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar9) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar9 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar20 = plVar16[3];
                if (lVar20 != 0) {
                  FUN_00b1b5bc(&local_130,&local_90);
                  FUN_00ae8374(&local_140,param_1 + 0x72);
                  FUN_009c69bc(&local_148,(long *)(lVar20 + -0x50));
                  if (local_148 != 0) {
                    plVar19 = *(long **)(local_148 + 8);
                    if ((*PTR_DAT_04379520 & 1) == 0) {
                      iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
                      puVar7 = PTR_DAT_04379528;
                      if (iVar9 != 0) {
                        FUN_008a62a4(PTR_DAT_04379528);
                        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379520);
                      }
                    }
                    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                    if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar19;
                    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
                    lVar15 = (**(code **)(*plVar19 + 0x10))(plVar19,0x220,0x10);
                    if (lVar15 == 0) {
                      (**(code **)(*plVar19 + 0xb8))();
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_02a4c0f4(lVar15,0);
                  }
                  lVar18 = *(long *)(lVar20 + 8);
                  piVar1 = (int *)(lVar18 + 0xc);
                  do {
                    iVar9 = *piVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar9 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  plVar2 = local_90;
                  if (iVar9 + -1 == 0) {
                    *(undefined8 *)(lVar18 + 0x18) = 0;
                    (**(code **)(*(long *)(lVar20 + -0x50) + 0x20))();
                    plVar2 = local_90;
                  }
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar9 = iVar10;
          } while (iVar10 != 0);
        }
joined_r0x01a00124:
        plVar17 = local_130;
        local_90 = plVar2;
        if (plVar2 != (long *)0x0) {
          plVar16 = plVar2 + 1;
          do {
            iVar9 = (int)*plVar16 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *(int *)plVar16 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            plVar2[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_80 = (long *)*plVar2;
            FUN_02a44274(lVar20 + 0xd8,&local_80);
            plVar17 = local_130;
          }
        }
      }
      local_130 = plVar17;
      if (plVar17 != (long *)0x0) {
        plVar16 = plVar17 + 1;
        do {
          iVar9 = (int)*plVar16 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          plVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar20 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar20;
          local_80 = (long *)*plVar17;
          FUN_02a44274(lVar20 + 0xd8,&local_80);
        }
      }
      plVar17 = local_140;
      if (local_140 != (long *)0x0) {
        plVar16 = local_140 + 1;
        do {
          iVar9 = (int)*plVar16 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          local_140[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar20 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar20;
          local_80 = (long *)*plVar17;
          FUN_02a44274(lVar20 + 0xd8,&local_80);
        }
      }
      uVar11 = uVar11 + 1;
      lVar20 = plVar25[0x46];
    } while (uVar11 < (ulong)(plVar25[0x47] - lVar20 >> 4));
  }
  local_150 = plVar13;
  if (plVar13 == (long *)0x0) {
    FUN_01c36bc0(param_1,&local_150);
  }
  else {
    lVar20 = plVar13[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
LAB_019fe750:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar12;
    }
    plVar13 = local_150;
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_01c36bc0(param_1,&local_150);
    if (plVar13 != (long *)0x0) {
      lVar20 = plVar13[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  (**(code **)(*param_1 + 0x150))(param_1,lVar15);
  lVar15 = param_1[0x72];
  *(undefined1 *)(param_1 + 0x71) = 1;
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar9 = *(int *)(lVar15 + 0xc);
    do {
      plVar13 = *(long **)(lVar15 + 0x10);
      if (((*PTR_DAT_04379e78 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379e78), iVar10 != 0)) {
        uVar12 = FUN_0095a420();
        *(undefined8 *)PTR_DAT_04379e80 = uVar12;
        __cxa_guard_release(PTR_DAT_04379e78);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_019fddd0;
        if (plVar13 == (long *)PTR_DAT_04379e80) break;
        plVar13 = (long *)*plVar13;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 != 0) {
            plVar13 = (long *)(lVar15 + -0x50);
            uVar4 = *(uint *)(lVar15 + 0x1c4);
            uVar3 = uVar4 & 0xffff7fff;
            bVar6 = (uVar4 != 0) == ((uVar4 & 0xffff7fff) != 0);
            if ((((uVar3 == uVar4) || (uVar3 != 0)) || (*(int *)(lVar15 + 0x1cc) == 0)) ||
               (*(int *)(lVar15 + 0x1d4) == 8)) {
              if (!bVar6) goto LAB_01a0034c;
LAB_01a002d4:
              *(uint *)(lVar15 + 0x1c4) = uVar3;
              if ((*(uint *)(lVar15 + 0x1c0) != uVar3) && (*(int *)(lVar15 + 0x1cc) == 0)) {
                *(uint *)(lVar15 + 0x1c0) = uVar3;
              }
            }
            else {
              if (!(!bVar6 || *(int *)(lVar15 + 0x1cc) == 1)) goto LAB_01a002d4;
LAB_01a0034c:
              if (uVar3 == 0) {
                FUN_01bdbe38(plVar13,0);
                uVar12 = 1;
              }
              else {
                uVar12 = 2;
              }
              FUN_01bdbe50(plVar13,uVar12,8);
              *(uint *)(lVar15 + 0x1c4) = uVar3;
            }
            lVar15 = *(long *)(lVar15 + 8);
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_019fddd0:
  lVar15 = plVar25[0xb];
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  if (plVar24 != (long *)0x0) {
    lVar15 = plVar24[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
  if (plVar23 != (long *)0x0) {
    lVar15 = plVar23[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  plVar23 = local_b0;
  if (plVar22 != (long *)0x0) {
    lVar15 = plVar22[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
      plVar23 = local_b0;
    }
  }
  local_b0 = plVar23;
  if (plVar23 != (long *)0x0) {
    plVar22 = plVar23 + 1;
    do {
      iVar9 = (int)*plVar22 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(int *)plVar22 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      plVar23[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_140 = (long *)*plVar23;
      FUN_02a44274(lVar15 + 0xd8,&local_140);
    }
  }
  plVar22 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar23 = local_a0 + 1;
    do {
      iVar9 = (int)*plVar23 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_140 = (long *)*plVar22;
      FUN_02a44274(lVar15 + 0xd8,&local_140);
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar15 = plVar21[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar15 = plVar19[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  return;
}


