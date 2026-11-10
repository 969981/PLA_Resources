/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291ef64; name: FUN_0291ef64
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_0291ef64(long param_1,ulong *param_2,byte param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  short sVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  long local_98;
  long *local_90;
  long *local_88;
  short local_80;
  byte local_7e;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  uVar17 = *(ulong *)(param_1 + 0x460);
  plVar13 = (long *)(param_1 + 0x458);
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar14 = *param_2;
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & uVar14;
    }
    else {
      uVar19 = uVar14;
      if (uVar17 <= uVar14) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = uVar14 / uVar17;
        }
        uVar19 = uVar14 - uVar19 * uVar17;
      }
    }
    puVar21 = *(undefined8 **)(*plVar13 + uVar19 * 8);
    if ((puVar21 != (undefined8 *)0x0) && (plVar23 = (long *)*puVar21, plVar23 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar23[1] == uVar14) {
            if (plVar23[2] == uVar14) goto LAB_0291f0a8;
          }
          else if ((plVar23[1] & uVar17 - 1) != uVar19) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar23[1];
          if (uVar18 == uVar14) {
            if (plVar23[2] == uVar14) goto LAB_0291f0a8;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  lVar22 = *(long *)(param_1 + 0x448);
  if ((lVar22 == 0) || (*(int *)(lVar22 + 0xc) == 0)) {
    return (long *)0x0;
  }
  piVar1 = (int *)(lVar22 + 0xc);
  lVar15 = param_1;
  iVar10 = *(int *)(lVar22 + 0xc);
LAB_0291f0ec:
  plVar24 = *(long **)(lVar22 + 0x10);
  plVar23 = (long *)FUN_00d82f90(lVar15);
  if (plVar24 == (long *)0x0) {
    return (long *)0x0;
  }
  while (plVar24 != plVar23) {
    plVar24 = (long *)*plVar24;
    if (plVar24 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  iVar3 = *piVar1;
  if (iVar3 != iVar10) {
    ClearExclusiveLocal();
LAB_0291f0e0:
    lVar15 = 0;
    iVar10 = iVar3;
    if (iVar3 == 0) {
      return (long *)0x0;
    }
    goto LAB_0291f0ec;
  }
  cVar4 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar8) {
    *piVar1 = iVar10 + 1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 != '\0') goto LAB_0291f0e0;
  lVar22 = *(long *)(lVar22 + 0x18);
  if (lVar22 == 0) {
    return (long *)0x0;
  }
  plVar23 = *(long **)(*(long *)(lVar22 + 0x1b8) + 0x88);
  if (plVar23 == (long *)0x0) {
    sVar9 = -1;
    goto LAB_0291f1ac;
  }
  plVar24 = plVar23 + 10;
  do {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar8) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar2 = (undefined8 *)plVar23[0xc];
  for (puVar21 = (undefined8 *)plVar23[0xb]; puVar21 != puVar2; puVar21 = puVar21 + 2) {
    sVar9 = FUN_02b6f370(*puVar21,param_2);
    if (-1 < sVar9) {
      sVar9 = *(short *)((long)puVar21 + 10) + sVar9;
      goto LAB_0291f198;
    }
  }
  sVar9 = -1;
LAB_0291f198:
  do {
    iVar10 = (int)*plVar24 + -1;
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar8) {
      *(int *)plVar24 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
LAB_0291f1ac:
  lVar15 = *(long *)(lVar22 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = iVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*(long *)(lVar22 + -0x50) + 0x20))((long *)(lVar22 + -0x50));
  }
  if (sVar9 < 0) {
    return (long *)0x0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x4c0U));
  plVar24 = (long *)FUN_02914f50(&local_90,*(undefined8 *)(param_1 + 8));
  if (plVar24 != (long *)0x0) {
    lVar22 = plVar24[0xb];
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_0291fef4;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)(*plVar24 + 0x10))(&local_90);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_02913eb8(&local_78,&local_90);
  plVar23 = local_90;
  if (local_90 != (long *)0x0) {
    plVar12 = local_90 + 1;
    do {
      iVar10 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *(int *)plVar12 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_68 = *plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_68);
    }
  }
  plVar23 = local_78;
  if (local_78 == (long *)0x0) {
    local_98 = 0;
  }
  else {
    plVar12 = local_78 + 1;
    local_98 = *local_78;
    do {
      iVar10 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *(int *)plVar12 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar22 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar22;
      local_90 = (long *)*plVar23;
      FUN_02a44274(lVar22 + 0xd8,&local_90);
    }
  }
  FUN_009c69bc(&local_90,param_1);
  FUN_014417ec(&local_78,local_90 + 0x46,param_2);
  if (local_90 != (long *)0x0) {
    lVar22 = local_90[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  plVar12 = local_78;
  lVar22 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar22;
  plVar23 = (long *)PTR_PTR_04379d00;
  if (local_78 != (long *)0x0) {
    plVar23 = local_78 + 0xc;
  }
  lVar15 = *plVar23;
  bVar8 = local_78 != (long *)0x0;
  if (bVar8) {
    (**(code **)(*local_78 + 0x18))(local_78);
  }
  plVar23 = *(long **)(*(long *)(lVar22 + 0x158) + 0x60);
  (**(code **)(*plVar23 + 0x50))(plVar23,local_98,lVar15);
  if (bVar8) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  lVar22 = plVar24[0xb];
  if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_0291fef4;
  if (*(long *)(lVar22 + 0x10) == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
    *(undefined8 *)(lVar22 + 0x10) = uVar11;
  }
  piVar1 = (int *)(lVar22 + 0xc);
  do {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_00befc74(&local_90,param_2);
  lVar22 = plVar24[0xb];
  local_88 = plVar24;
  if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_0291fef4;
  if (*(long *)(lVar22 + 0x10) == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
    *(undefined8 *)(lVar22 + 0x10) = uVar11;
  }
  piVar1 = (int *)(lVar22 + 0xc);
  do {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar22 = plVar24[0xb];
  piVar1 = (int *)(lVar22 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = iVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_80 = sVar9;
  local_7e = param_3 & 1;
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar22 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))();
  }
  plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x490) + 0x10))
                              (*(long **)(param_1 + 0x490),0x48,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x490) + 0xb8))();
  }
  uVar11 = *(undefined8 *)(param_1 + 0x490);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar10 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  plVar23 = local_90;
  if (lVar22 != 0) {
    if (0xf < *(ulong *)(lVar22 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = uVar11;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
  }
  if (local_90 == (long *)0x0) {
    lVar15 = *(long *)PTR_DAT_04379c88;
LAB_0291fee0:
    lVar20 = *(long *)PTR_PTR_04379d00;
  }
  else {
    lVar15 = local_90[0xb];
    if (local_90 == (long *)0x0) goto LAB_0291fee0;
    lVar20 = local_90[0xc];
  }
  lVar16 = 0;
  if (local_90 != (long *)0x0) {
    lVar16 = local_90[0xd];
  }
  plVar12[2] = lVar15;
  plVar12[3] = lVar20;
  plVar12[4] = lVar16;
  plVar12[5] = 0;
  if (local_90 == (long *)0x0) {
    plVar12[5] = 0;
  }
  else {
    (**(code **)(*local_90 + 0x18))(local_90);
    plVar26 = (long *)plVar12[5];
    plVar12[5] = (long)plVar23;
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 0x20))();
    }
  }
  plVar12[6] = (long)local_90;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))();
  }
  plVar12[7] = (long)local_88;
  if (local_88 != (long *)0x0) {
    lVar15 = local_88[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_0291fef4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(byte *)((long)plVar12 + 0x42) = local_7e;
  *(short *)(plVar12 + 8) = local_80;
  if (lVar22 != 0) {
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
  }
  uVar17 = plVar12[2];
  *plVar12 = 0;
  plVar12[1] = uVar17;
  uVar18 = *(ulong *)(param_1 + 0x460);
  if (uVar18 != 0) {
    uVar14 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar19 = uVar18 - 1 & uVar17;
    }
    else {
      uVar19 = uVar17;
      if (uVar18 <= uVar17) {
        uVar19 = 0;
        if (uVar18 != 0) {
          uVar19 = uVar17 / uVar18;
        }
        uVar19 = uVar17 - uVar19 * uVar18;
      }
    }
    plVar23 = *(long **)(*plVar13 + uVar19 * 8);
    if (plVar23 == (long *)0x0) goto LAB_0291f778;
    if (uVar14 < 2) {
      do {
        plVar23 = (long *)*plVar23;
        if ((plVar23 == (long *)0x0) || ((plVar23[1] & uVar18 - 1) != uVar19)) goto LAB_0291f778;
      } while (plVar23[2] != uVar17);
LAB_0291f6a4:
      if (plVar12 == (long *)0x0) goto LAB_0291f984;
      plVar13 = (long *)plVar12[7];
      if (plVar13 == (long *)0x0) {
LAB_0291f6cc:
        plVar13 = (long *)plVar12[6];
      }
      else {
        lVar22 = plVar13[0xb];
        piVar1 = (int *)(lVar22 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 != 0) goto LAB_0291f6cc;
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
        plVar13 = (long *)plVar12[6];
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
      if ((long *)plVar12[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar12[5] + 0x20))();
      }
      plVar13 = *(long **)(param_1 + 0x490);
      uVar17 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar17 & 1) == 0) {
LAB_0291f750:
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x48,8);
        lVar22 = *(long *)(param_1 + 0x2a8);
      }
      else {
        lVar22 = tpidr_el0;
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar22 + 0x38d480) < 1) goto LAB_0291f750;
        FUN_02bcc824(plVar13,plVar12,0x48,8);
        lVar22 = *(long *)(param_1 + 0x2a8);
      }
      goto joined_r0x0291f770;
    }
    while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
      uVar14 = plVar23[1];
      if (uVar18 <= uVar14) {
        uVar5 = 0;
        if (uVar18 != 0) {
          uVar5 = uVar14 / uVar18;
        }
        uVar14 = uVar14 - uVar5 * uVar18;
      }
      if (uVar14 != uVar19) break;
      if (plVar23[2] == uVar17) goto LAB_0291f6a4;
    }
  }
LAB_0291f778:
  fVar27 = (float)(*(long *)(param_1 + 0x4b0) + 1);
  if ((uVar18 == 0) || (*(float *)(param_1 + 0x4b8) * (float)uVar18 < fVar27)) {
    uVar17 = (ulong)(uVar18 < 3 || (uVar18 & uVar18 - 1) != 0) | uVar18 << 1;
    uVar14 = (ulong)(fVar27 / *(float *)(param_1 + 0x4b8));
    if (uVar14 <= uVar17) {
      uVar14 = uVar17;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
      bVar8 = uVar18 < 3;
      uVar17 = uVar14;
      if (1 < uVar18) goto LAB_0291f7e0;
LAB_0291f8a0:
      FUN_02924d08(plVar13,uVar14);
    }
    else {
      if ((uVar14 & uVar14 - 1) != 0) {
        uVar14 = std::__next_prime(uVar14);
        uVar18 = *(ulong *)(param_1 + 0x460);
      }
      bVar8 = uVar18 <= uVar14;
      uVar17 = uVar14;
      if (uVar18 < uVar14) goto LAB_0291f8a0;
LAB_0291f7e0:
      if (!bVar8) {
        uVar14 = (ulong)((float)*(ulong *)(param_1 + 0x4b0) / *(float *)(param_1 + 0x4b8));
        if ((uVar18 < 3) ||
           (uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
           uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333),
           1 < (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar14 = std::__next_prime(uVar14);
        }
        else if (1 < uVar14) {
          uVar14 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar14 - 1) & 0x3f);
        }
        if (uVar14 <= uVar17) {
          uVar14 = uVar17;
        }
        if (uVar14 < uVar18) goto LAB_0291f8a0;
      }
    }
    uVar18 = *(ulong *)(param_1 + 0x460);
    uVar17 = plVar12[1];
  }
  uVar14 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar14 < 2) {
    uVar17 = uVar18 - 1 & uVar17;
  }
  else if (uVar18 <= uVar17) {
    uVar19 = 0;
    if (uVar18 != 0) {
      uVar19 = uVar17 / uVar18;
    }
    uVar17 = uVar17 - uVar19 * uVar18;
  }
  plVar23 = *(long **)(*plVar13 + uVar17 * 8);
  if (plVar23 == (long *)0x0) {
    *plVar12 = *(long *)(param_1 + 0x488);
    *(long **)(param_1 + 0x488) = plVar12;
    *(long *)(*(long *)(param_1 + 0x458) + uVar17 * 8) = param_1 + 0x488;
    if (*plVar12 != 0) {
      uVar17 = *(ulong *)(*plVar12 + 8);
      if (uVar14 < 2) {
        uVar17 = uVar17 & uVar18 - 1;
      }
      else if (uVar18 <= uVar17) {
        uVar14 = 0;
        if (uVar18 != 0) {
          uVar14 = uVar17 / uVar18;
        }
        uVar17 = uVar17 - uVar14 * uVar18;
      }
      plVar23 = (long *)(*plVar13 + uVar17 * 8);
      goto LAB_0291f96c;
    }
  }
  else {
    *plVar12 = *plVar23;
LAB_0291f96c:
    *plVar23 = (long)plVar12;
  }
  *(long *)(param_1 + 0x4b0) = *(long *)(param_1 + 0x4b0) + 1;
  plVar23 = plVar12;
LAB_0291f984:
  lVar22 = *(long *)(param_1 + 0x2a8);
joined_r0x0291f770:
  if (lVar22 != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x2c8U));
    puVar6 = PTR_PTR_04379d00;
    for (plVar13 = *(long **)(*(long *)(param_1 + 0x2a8) + 0x30); plVar13 != (long *)0x0;
        plVar13 = (long *)*plVar13) {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      lVar22 = *(long *)PTR_DAT_04379c30;
      *(long *)PTR_DAT_04379c38 = lVar22;
      plVar26 = (long *)plVar13[2];
      plVar12 = (long *)puVar6;
      if (plVar26 != (long *)0x0) {
        plVar12 = plVar26 + 0xc;
      }
      lVar15 = *plVar12;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x18))(plVar26);
      }
      plVar25 = (long *)plVar13[3];
      plVar12 = (long *)puVar6;
      if (plVar25 != (long *)0x0) {
        plVar12 = plVar25 + 0xc;
      }
      lVar20 = *plVar12;
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x18))(plVar25);
      }
      plVar12 = *(long **)(*(long *)(lVar22 + 0x158) + 0x60);
      (**(code **)(*plVar12 + 0x98))(plVar12,lVar15,lVar20,local_98);
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x20))(plVar25);
      }
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x20))(plVar26);
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x2c8U));
  }
  if (*(long *)(param_1 + 0x2e8) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x308U));
    puVar7 = PTR_PTR_04379d00;
    puVar6 = PTR_LAB_04379c60;
    for (plVar13 = *(long **)(*(long *)(param_1 + 0x2e8) + 0x30); plVar13 != (long *)0x0;
        plVar13 = (long *)*plVar13) {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar10 != 0)) {
        FUN_00100250(puVar6,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      lVar22 = *(long *)PTR_DAT_04379c30;
      *(long *)PTR_DAT_04379c38 = lVar22;
      plVar26 = (long *)plVar13[2];
      plVar12 = (long *)puVar7;
      if (plVar26 != (long *)0x0) {
        plVar12 = plVar26 + 0xc;
      }
      lVar15 = *plVar12;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x18))(plVar26);
      }
      plVar12 = *(long **)(*(long *)(lVar22 + 0x158) + 0x60);
      (**(code **)(*plVar12 + 0x88))(*(undefined4 *)(plVar13 + 3),plVar12,lVar15,local_98,0,4,0);
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x20))(plVar26);
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x308U));
  }
  if (local_88 != (long *)0x0) {
    lVar22 = local_88[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (plVar24 != (long *)0x0) {
    lVar22 = plVar24[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4c0U));
  goto LAB_0291f0bc;
LAB_0291f0a8:
  if (((param_3 & 1) != 0) && (*(char *)((long)plVar23 + 0x42) == '\0')) {
    *(undefined1 *)((long)plVar23 + 0x42) = 1;
  }
LAB_0291f0bc:
  return plVar23 + 6;
}


