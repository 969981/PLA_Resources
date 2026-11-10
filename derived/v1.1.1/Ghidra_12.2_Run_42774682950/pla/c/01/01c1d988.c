/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c1d988; name: FUN_01c1d988
 */


void FUN_01c1d988(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 in_q3 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  uVar19 = in_q3._8_8_;
  uVar18 = in_q3._0_8_;
  if (*(char *)(param_1 + 0x228) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x1f0) == 0) {
    local_70 = (long *)0x0;
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_01c1d9c8;
LAB_01c1e19c:
    FUN_00b907c8(&local_78);
  }
  else {
    FUN_00cfac20(&local_70);
    if (*(long *)(param_1 + 0x200) != 0) goto LAB_01c1e19c;
LAB_01c1d9c8:
    local_78 = (long *)0x0;
  }
  puVar7 = PTR_DAT_04379690;
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379690), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  puVar9 = PTR_DAT_043796a0;
  puVar8 = PTR_DAT_04379698;
  lVar20 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar20;
  plVar21 = *(long **)(*(long *)(lVar20 + 0x50) + 0x38);
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01c1e268;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar10 = PTR_DAT_043828d0;
  lVar20 = *(long *)(param_1 + 0x230);
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar14 = *(int *)(lVar20 + 0xc);
    do {
      puVar23 = *(undefined8 **)(lVar20 + 0x10);
      if (((*PTR_DAT_043828c8 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_043828c8), iVar15 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar15 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar16;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar10 = PTR_DAT_043795e0;
        __cxa_guard_release(PTR_DAT_043828c8);
      }
      plVar22 = (long *)0x0;
      if (puVar23 == (undefined8 *)0x0) goto joined_r0x01c1e3ec;
      while (puVar23 != (undefined8 *)puVar10) {
        puVar23 = (undefined8 *)*puVar23;
        if (puVar23 == (undefined8 *)0x0) {
          plVar22 = (long *)0x0;
          goto joined_r0x01c1e3ec;
        }
      }
      iVar15 = *piVar1;
      if (iVar15 == iVar14) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          plVar22 = (long *)0x0;
          if (*(long *)(lVar20 + 0x18) != 0) {
            plVar22 = (long *)(*(long *)(lVar20 + 0x18) + -0x50);
          }
          goto joined_r0x01c1e3ec;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar14 = iVar15;
    } while (iVar15 != 0);
  }
  plVar22 = (long *)0x0;
joined_r0x01c1e3ec:
  if ((((local_70 == (long *)0x0) || (plVar21 == (long *)0x0)) || (plVar22 == (long *)0x0)) ||
     (local_78 == (long *)0x0)) {
    if (plVar22 == (long *)0x0) goto joined_r0x01c1dc3c;
    goto LAB_01c1dc20;
  }
  plVar24 = (long *)local_78[0xbd];
  if (plVar24 == (long *)0x0) {
LAB_01c1da9c:
    if (*(long *)(param_1 + 0x200) == 0) {
      local_68 = (long *)0x0;
LAB_01c1daa8:
      bVar5 = false;
      goto LAB_01c1daac;
    }
    FUN_00b911c4(&local_68);
    if (local_68 == (long *)0x0) goto LAB_01c1daa8;
    iVar14 = FUN_01b9a164();
    if (iVar14 == 3) {
      if (local_68 == (long *)0x0) goto LAB_01c1dc20;
      lVar20 = local_68[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        bVar11 = *piVar1 + -1 == 0;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar24 = local_68;
      } while (cVar4 != '\0');
      goto LAB_01c1dc1c;
    }
    uVar17 = FUN_01ba021c();
    if ((uVar17 & 1) == 0) {
      if (local_68 != (long *)0x0) {
        lVar20 = local_68[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      goto LAB_01c1daa8;
    }
    if (*(long *)(param_1 + 0x200) == 0) {
      local_90 = (long *)0x0;
    }
    else {
      FUN_00b907c8(&local_90);
      if (local_90 != (long *)0x0) {
        if (*(char *)((long)local_90 + 0x61a) == '\0') {
          *(undefined1 *)((long)local_90 + 0x61a) = 1;
        }
        lVar20 = local_90[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_90 + 0x20))();
        }
      }
    }
    if (local_68 != (long *)0x0) {
      lVar20 = local_68[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        bVar11 = *piVar1 + -1 == 0;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar24 = local_68;
      } while (cVar4 != '\0');
      goto LAB_01c1dc1c;
    }
    goto LAB_01c1dc20;
  }
  plVar2 = plVar24 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar17 = FUN_02c6d8ec(plVar24[0x13]);
  do {
    iVar14 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  if ((uVar17 & 1) == 0) goto LAB_01c1da9c;
  bVar5 = true;
LAB_01c1daac:
  uVar17 = FUN_01a73b70(local_78);
  if ((uVar17 & 1) == 0) {
    if (*(long *)(param_1 + 0x200) == 0) {
      local_90 = (long *)0x0;
    }
    else {
      FUN_00b907c8(&local_90);
      if (local_90 != (long *)0x0) {
        if ((char)local_90[0xc3] == '\0') {
          *(undefined1 *)(local_90 + 0xc3) = 1;
        }
        lVar20 = local_90[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          bVar11 = *piVar1 + -1 == 0;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar24 = local_90;
        } while (cVar4 != '\0');
        goto LAB_01c1dc1c;
      }
    }
  }
  else {
    local_90 = (long *)0x0;
    uStack_88 = 0;
    FUN_00cf9db0(&local_90,local_70 + 0xf1);
    if (local_90 == (long *)0x0) {
      local_80 = (long *)0x0;
LAB_01c1dad8:
      if (local_80 != (long *)0x0) goto LAB_01c1e138;
LAB_01c1dae0:
      FUN_009c69bc(&local_90,local_70);
      (**(code **)(*local_90 + 0x40))();
      local_a0 = uVar18;
      uStack_98 = uVar19;
      if (local_90 != (long *)0x0) {
        lVar20 = local_90[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 != 0) goto LAB_01c1db24;
        goto LAB_01c1e178;
      }
    }
    else {
      FUN_00959eac(&local_80);
      plVar24 = local_90;
      if (local_90 == (long *)0x0) goto LAB_01c1dad8;
      plVar2 = local_90 + 1;
      do {
        iVar14 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *(int *)plVar2 = iVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 != 0) goto LAB_01c1dad8;
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_68 = (long *)*plVar24;
      FUN_02a44274(lVar20 + 0xd8,&local_68);
      if (local_80 == (long *)0x0) goto LAB_01c1dae0;
LAB_01c1e138:
      FUN_009c69bc(&local_90);
      (**(code **)(*local_90 + 0x40))();
      local_a0 = uVar18;
      uStack_98 = uVar19;
      if (local_90 != (long *)0x0) {
        lVar20 = local_90[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
LAB_01c1e178:
          *(undefined8 *)(lVar20 + 0x18) = 0;
          uVar18 = local_a0;
          uVar19 = uStack_98;
          (**(code **)(*local_90 + 0x20))();
        }
      }
    }
LAB_01c1db24:
    FUN_009c69bc(&local_90,local_78);
    (**(code **)(*local_90 + 0x40))();
    if (local_90 != (long *)0x0) {
      lVar20 = local_90[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
    fVar25 = (float)local_a0 - (float)uVar18;
    fVar26 = (float)uStack_98 - (float)uVar19;
    fVar27 = (float)((ulong)uStack_98 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
    fVar25 = fVar25 * fVar25;
    fVar26 = fVar26 * fVar26;
    fVar27 = fVar27 * fVar27;
    auVar28._4_4_ = 0;
    auVar28._0_4_ = fVar25;
    auVar28._8_4_ = fVar26;
    auVar28._12_4_ = fVar27;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = fVar25;
    auVar6._8_4_ = fVar26;
    auVar6._12_4_ = fVar27;
    auVar28 = NEON_ext(auVar28,auVar6,8,1);
    if (auVar28._0_4_ + fVar25 + auVar28._4_4_ + 0.0 <
        *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x220)) {
      FUN_01c1e4b4(param_1);
    }
    else if (*(long *)(param_1 + 0x200) == 0) {
      local_90 = (long *)0x0;
    }
    else {
      FUN_00b907c8(&local_90);
      if (local_90 != (long *)0x0) {
        if ((char)local_90[0xc3] == '\0') {
          *(undefined1 *)(local_90 + 0xc3) = 1;
        }
        lVar20 = local_90[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_90 + 0x20))();
        }
      }
    }
    if (!bVar5) {
      if (*(long *)(param_1 + 0x200) == 0) {
        uVar13 = 0;
        local_90 = (long *)0x0;
      }
      else {
        FUN_00b911c4(&local_90);
        if (local_90 == (long *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar17 = FUN_01ba31dc();
          if ((uVar17 & 1) == 0) {
            if (((*PTR_DAT_04379578 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379578), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379578);
            }
            uVar19 = *(undefined8 *)PTR_DAT_04379580;
            *(undefined8 *)PTR_DAT_04379588 = uVar19;
            uVar13 = FUN_00956f14(uVar19,0,0);
          }
          else {
            uVar13 = 1;
          }
          if (local_90 != (long *)0x0) {
            lVar20 = local_90[0xb];
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*local_90 + 0x20))();
            }
          }
        }
      }
      if ((*(float *)(param_1 + 0x224) <=
           ABS((float)((ulong)local_a0 >> 0x20) - (float)((ulong)uVar18 >> 0x20))) ||
         (uVar12 = FUN_01b3a4ac(local_78), ((uVar13 | uVar12 ^ 0xffffffff) & 1) != 0)) {
        if (*(long *)(param_1 + 0x200) == 0) {
          local_90 = (long *)0x0;
        }
        else {
          FUN_00b907c8(&local_90);
          if (local_90 != (long *)0x0) {
            if (*(char *)((long)local_90 + 0x61a) == '\0') {
              *(undefined1 *)((long)local_90 + 0x61a) = 1;
            }
            lVar20 = local_90[0xb];
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*local_90 + 0x20))();
            }
          }
        }
        *(undefined4 *)(plVar22 + 0x47) = 0;
        *(undefined1 *)((long)plVar22 + 0x23c) = 0;
      }
      else if ((int)plVar22[0x47] == 0) {
        *(undefined4 *)(plVar22 + 0x47) = 1;
      }
      else if (*(char *)((long)plVar22 + 0x23c) != '\0') {
        if (*(long *)(param_1 + 0x200) == 0) {
          local_90 = (long *)0x0;
          bVar3 = *puVar7;
        }
        else {
          FUN_00b907c8(&local_90);
          bVar3 = *puVar7;
        }
        if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379690), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379690);
        }
        lVar20 = *(long *)puVar8;
        *(long *)puVar9 = lVar20;
        plVar24 = *(long **)(*(long *)(lVar20 + 0x50) + 0x38);
        if (plVar24 != (long *)0x0) {
          lVar20 = plVar24[0xb];
          if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
LAB_01c1e268:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar20 + 0x10) == 0) {
            uVar18 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
            *(undefined8 *)(lVar20 + 0x10) = uVar18;
          }
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (local_90 == (long *)0x0) {
          if (plVar24 != (long *)0x0) goto LAB_01c1dd60;
        }
        else {
          if (plVar24 != (long *)0x0) {
            if (*(char *)((long)local_90 + 0x61a) != '\0') {
              *(undefined1 *)((long)local_90 + 0x61a) = 0;
            }
LAB_01c1dd60:
            lVar20 = plVar24[0xb];
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*plVar24 + 0x20))(plVar24);
            }
            if (local_90 == (long *)0x0) goto joined_r0x01c1ddb4;
          }
          lVar20 = local_90[0xb];
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_90 + 0x20))();
          }
        }
      }
    }
joined_r0x01c1ddb4:
    if (local_80 != (long *)0x0) {
      lVar20 = local_80[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        bVar11 = *piVar1 + -1 == 0;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar24 = local_80;
      } while (cVar4 != '\0');
LAB_01c1dc1c:
      if (bVar11) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar24 + 0x20))();
      }
    }
  }
LAB_01c1dc20:
  lVar20 = plVar22[0xb];
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    iVar14 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
joined_r0x01c1dc3c:
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  if (local_78 != (long *)0x0) {
    lVar20 = local_78[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    lVar20 = local_70[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


