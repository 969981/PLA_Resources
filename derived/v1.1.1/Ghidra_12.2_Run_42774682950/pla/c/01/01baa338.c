/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01baa338; name: FUN_01baa338
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01baa338(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  byte bVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined1 in_q3 [16];
  undefined8 uVar29;
  undefined4 uVar30;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_88 [2];
  long local_78;
  
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar11 = PTR_DAT_043794d8;
  puVar10 = PTR_DAT_043794d0;
  uVar29 = in_q3._8_8_;
  uVar15 = in_q3._0_8_;
  if (*(char *)((long)param_1 + 9) != '\0') {
    return;
  }
  local_d0 = 0;
  uStack_c8 = 0;
  plVar23 = *(long **)(*param_1 + 0x488);
  if (plVar23 != (long *)0x0) {
    if (*(int *)((long)plVar23 + 0xc) != 0) {
      piVar1 = (int *)((long)plVar23 + 0xc);
      iVar12 = *(int *)((long)plVar23 + 0xc);
      do {
        plVar28 = (long *)plVar23[2];
        if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
          if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)puVar11 = uVar16;
            __cxa_guard_release(puVar10);
          }
          *(undefined **)puVar9 = puVar11;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar28 == (long *)0x0) goto LAB_01bab018;
          if (plVar28 == (long *)puVar9) break;
          plVar28 = (long *)*plVar28;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar21 = plVar23[3];
            local_d0 = 0;
            uStack_c8 = 0;
            plVar28 = (long *)(lVar21 + -0x50);
            if (lVar21 == 0) goto LAB_01baa39c;
            FUN_0199c138(local_88,plVar28);
            puVar9 = PTR_DAT_043794b8;
            puVar8 = PTR_DAT_043794b0;
            if (local_88[0] == (long *)0x0) {
              uStack_c8 = 0;
              local_d0 = 0;
              goto LAB_01baafdc;
            }
            lVar26 = local_88[0][0x35];
            uStack_c8 = 0;
            local_d0 = 0;
            if (lVar26 == 0) goto joined_r0x01bab19c;
            if (*(int *)(lVar26 + 0xc) == 0) goto joined_r0x01bab19c;
            piVar1 = (int *)(lVar26 + 0xc);
            iVar12 = *(int *)(lVar26 + 0xc);
            goto LAB_01bab084;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
LAB_01bab018:
    local_d0 = 0;
    uStack_c8 = 0;
  }
  goto LAB_01baa39c;
LAB_01bab084:
  do {
    plVar25 = *(long **)(lVar26 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar13 != 0)) {
        if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)puVar11 = uVar16;
          __cxa_guard_release(puVar10);
        }
        *(undefined **)PTR_DAT_043794c8 = puVar11;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      *(undefined **)puVar9 = PTR_DAT_043794c8;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      plVar23 = (long *)puVar8;
      if (plVar25 == (long *)0x0) goto joined_r0x01bab19c;
      if (plVar25 == (long *)puVar9) break;
      plVar25 = (long *)*plVar25;
    }
    iVar13 = *piVar1;
    if (iVar13 == iVar12) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        plVar23 = *(long **)(lVar26 + 0x18);
        if (plVar23 != (long *)0x0) {
          plVar25 = plVar23 + -10;
          (**(code **)(plVar23[-10] + 0x40))(plVar25);
          lVar26 = plVar23[1];
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_d0 = uVar15;
          uStack_c8 = uVar29;
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*plVar25 + 0x20))(plVar25);
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar13;
  } while (iVar13 != 0);
joined_r0x01bab19c:
  if (local_88[0] != (long *)0x0) {
    lVar26 = local_88[0][0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*local_88[0] + 0x20))();
    }
  }
LAB_01baafdc:
  lVar21 = *(long *)(lVar21 + 8);
  piVar1 = (int *)(lVar21 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar28 + 0x20))(plVar28);
  }
LAB_01baa39c:
  puVar27 = *(undefined8 **)(*param_1 + 0x3c0);
  puVar24 = *(undefined8 **)(*param_1 + 0x3c8);
  if (puVar27 == puVar24) {
    return;
  }
  local_a0 = local_d0;
  uStack_98 = uStack_c8;
LAB_01baa3e0:
  plVar28 = (long *)*puVar27;
  if (plVar28 != (long *)0x0) {
    lVar21 = plVar28[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01bab000;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  FUN_00b63bec(&local_b0,plVar28 + 0x1e);
  if (local_b0 == (long *)0x0) {
    plVar25 = (long *)0x0;
LAB_01baa440:
    uVar14 = (uint)plVar23;
    bVar6 = 0;
  }
  else {
    FUN_00b911c4(local_88);
    plVar25 = local_88[0];
    if (local_88[0] == (long *)0x0) goto LAB_01baa440;
    FUN_01a73640(local_88,local_88[0]);
    plVar20 = local_88[0];
    plVar23 = local_88[0];
    if (local_88[0] == (long *)0x0) goto LAB_01baa440;
    if (*(int *)((long)local_88[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_88[0] + 0xc);
      iVar12 = *(int *)((long)local_88[0] + 0xc);
      do {
        plVar22 = (long *)plVar20[2];
        if (((*PTR_DAT_04379e88 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379e88), iVar13 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar13 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar15;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)PTR_DAT_04379e90 = PTR_DAT_043795e0;
          __cxa_guard_release(PTR_DAT_04379e88);
        }
        plVar7 = (long *)0x0;
        plVar23 = local_88[0];
        if (plVar22 == (long *)0x0) goto joined_r0x01baabac;
        while (plVar22 != (long *)PTR_DAT_04379e90) {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            plVar7 = (long *)0x0;
            goto joined_r0x01baabac;
          }
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar21 = plVar20[3];
            plVar7 = (long *)0x0;
            if (lVar21 != 0) {
              plVar7 = (long *)(lVar21 + -0x50);
            }
            goto joined_r0x01baabac;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
    plVar7 = (long *)0x0;
    plVar23 = local_88[0];
joined_r0x01baabac:
    local_88[0] = plVar23;
    if (plVar23 != (long *)0x0) {
      plVar20 = plVar23 + 1;
      do {
        iVar12 = (int)*plVar20 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar3) {
          *(int *)plVar20 = iVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 == 0) {
        plVar23[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_78 = *plVar23;
        FUN_02a44274(lVar21 + 0xd8,&local_78);
      }
    }
    if (plVar7 == (long *)0x0) goto LAB_01baa440;
    FUN_01a8b908(local_88,plVar7);
    plVar23 = local_88[0];
    if (local_88[0] == (long *)0x0) {
LAB_01baac20:
      bVar3 = false;
    }
    else {
      if (*(int *)((long)local_88[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_88[0] + 0xc);
        iVar12 = *(int *)((long)local_88[0] + 0xc);
        do {
          plVar20 = (long *)plVar23[2];
          if (((*PTR_DAT_04379e78 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379e78), iVar13 != 0)) {
            uVar15 = FUN_0095a420();
            *(undefined8 *)PTR_DAT_04379e80 = uVar15;
            __cxa_guard_release(PTR_DAT_04379e78);
          }
          while( true ) {
            if (plVar20 == (long *)0x0) goto LAB_01baad64;
            if (plVar20 == (long *)PTR_DAT_04379e80) break;
            plVar20 = (long *)*plVar20;
          }
          iVar13 = *piVar1;
          if (iVar13 == iVar12) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar21 = plVar23[3];
              local_d8 = (long *)0x0;
              plVar23 = local_88[0];
              if (lVar21 != 0) {
                local_d8 = (long *)(lVar21 + -0x50);
              }
              goto joined_r0x01baadac;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar13;
        } while (iVar13 != 0);
      }
LAB_01baad64:
      local_d8 = (long *)0x0;
      plVar23 = local_88[0];
joined_r0x01baadac:
      local_88[0] = plVar23;
      if (plVar23 != (long *)0x0) {
        plVar20 = plVar23 + 1;
        do {
          iVar12 = (int)*plVar20 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar3) {
            *(int *)plVar20 = iVar12;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 == 0) {
          plVar23[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar21 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar21;
          local_78 = *plVar23;
          FUN_02a44274(lVar21 + 0xd8,&local_78);
        }
      }
      if (local_d8 == (long *)0x0) goto LAB_01baac20;
      if (((int)local_d8[0x42] == 0) && (uVar17 = FUN_01bdbec0(local_d8), (uVar17 & 1) != 0)) {
        uVar14 = FUN_01ba021c(plVar25);
        plVar23 = (long *)(ulong)(uVar14 ^ 1);
      }
      else {
        plVar23 = (long *)0x0;
      }
      lVar21 = local_d8[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 == 1) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_d8 + 0x20))();
      }
      bVar3 = true;
    }
    uVar14 = (uint)plVar23;
    lVar21 = plVar7[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
      if (!bVar3) goto LAB_01baa440;
    }
    else if (!bVar3) goto LAB_01baa440;
    bVar6 = 1;
  }
  if (plVar25 != (long *)0x0) {
    lVar21 = plVar25[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))(plVar25);
    }
  }
  plVar23 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar25 = local_b0 + 1;
    do {
      iVar12 = (int)*plVar25 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *(int *)plVar25 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_88[0] = (long *)*plVar23;
      FUN_02a44274(lVar21 + 0xd8,local_88);
    }
  }
  if ((uVar14 & bVar6) != 0) {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar21 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar21;
    uVar17 = *(ulong *)(lVar21 + 0x60);
    uVar30 = 0;
    if (uVar17 != 0) {
      uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar17 - 1 & 0x9459466dc0004abc;
      }
      else {
        uVar19 = 0x9459466dc0004abc;
        if (uVar17 < 0x9459466dc0004abd) {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = 0x9459466dc0004abc / uVar17;
          }
          uVar19 = 0x9459466dc0004abc - uVar19 * uVar17;
        }
      }
      uVar30 = 0;
      plVar23 = *(long **)(*(long *)(lVar21 + 0x58) + uVar19 * 8);
      if (plVar23 != (long *)0x0) {
        plVar23 = (long *)*plVar23;
        uVar30 = 0;
        if (plVar23 != (long *)0x0) {
          if (uVar18 < 2) {
            do {
              if (plVar23[1] == 0x9459466dc0004abc) {
                if (plVar23[2] == -0x6ba6b9923fffb544) goto LAB_01baa654;
              }
              else if ((plVar23[1] & uVar17 - 1) != uVar19) break;
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar23[1];
              if (uVar18 == 0x9459466dc0004abc) {
                if (plVar23[2] == -0x6ba6b9923fffb544) goto LAB_01baa654;
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
          uVar30 = 0;
        }
      }
    }
    goto LAB_01baa794;
  }
  goto LAB_01baa8d0;
LAB_01baa654:
  plVar23 = (long *)plVar23[3];
  uVar30 = 0;
  if (plVar23 != (long *)0x0) {
    plVar25 = plVar23 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar17 = plVar23[0x21];
    uVar30 = 0;
    if (uVar17 != 0) {
      uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar17 - 1 & 0xf1cc2a0bb5c7f358;
      }
      else {
        uVar19 = 0xf1cc2a0bb5c7f358;
        if (uVar17 < 0xf1cc2a0bb5c7f359) {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = 0xf1cc2a0bb5c7f358 / uVar17;
          }
          uVar19 = 0xf1cc2a0bb5c7f358 - uVar19 * uVar17;
        }
      }
      uVar30 = 0;
      plVar20 = *(long **)(plVar23[0x20] + uVar19 * 8);
      if (plVar20 != (long *)0x0) {
        plVar20 = (long *)*plVar20;
        uVar30 = 0;
        if (plVar20 != (long *)0x0) {
          if (uVar18 < 2) {
            do {
              if (plVar20[1] == 0xf1cc2a0bb5c7f358) {
                if (plVar20[2] == -0xe33d5f44a380ca8) goto LAB_01baa77c;
              }
              else if ((plVar20[1] & uVar17 - 1) != uVar19) {
                uVar30 = 0;
                goto LAB_01baa780;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
            uVar30 = 0;
          }
          else {
            do {
              uVar18 = plVar20[1];
              if (uVar18 == 0xf1cc2a0bb5c7f358) {
                if (plVar20[2] == -0xe33d5f44a380ca8) goto LAB_01baa77c;
              }
              else {
                if (uVar17 <= uVar18) {
                  uVar5 = 0;
                  if (uVar17 != 0) {
                    uVar5 = uVar18 / uVar17;
                  }
                  uVar18 = uVar18 - uVar5 * uVar17;
                }
                if (uVar18 != uVar19) {
                  uVar30 = 0;
                  goto LAB_01baa780;
                }
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
            uVar30 = 0;
          }
        }
      }
    }
    goto LAB_01baa780;
  }
  goto LAB_01baa794;
LAB_01baa77c:
  uVar30 = (undefined4)plVar20[6];
LAB_01baa780:
  do {
    iVar12 = (int)*plVar25 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar3) {
      *(int *)plVar25 = iVar12;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar23 + 0x10))();
  }
LAB_01baa794:
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  FUN_01bae3bc(&local_c0,plVar28 + 0x1e);
  uVar17 = FUN_01bada9c(uVar30,&local_c0,&local_a0);
  plVar23 = local_c0;
  if (local_c0 != (long *)0x0) {
    plVar25 = local_c0 + 1;
    do {
      iVar12 = (int)*plVar25 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar3) {
        *(int *)plVar25 = iVar12;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 == 0) {
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_88[0] = (long *)*plVar23;
      FUN_02a44274(lVar21 + 0xd8,local_88);
    }
  }
  if ((uVar17 & 1) == 0) {
LAB_01baa8d0:
    plVar23 = (long *)0x3;
    goto joined_r0x01baa91c;
  }
  if (*(char *)((long)param_1 + 0xb) == '\0') {
LAB_01baa908:
    FUN_01badf14(0);
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar21 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar21;
    plVar23 = *(long **)(lVar21 + 0x300);
    if (plVar23 == (long *)0x0) {
LAB_01baa8bc:
      cVar2 = *(char *)((long)param_1 + 0xb);
    }
    else {
      lVar21 = plVar23[0xb];
      if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_01bab000:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar21 + 0x10) == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
        *(undefined8 *)(lVar21 + 0x10) = uVar15;
      }
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_01103518(plVar23,param_1 + 8,*param_1 + 0x290);
      lVar21 = plVar23[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 != 0) goto LAB_01baa8bc;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      cVar2 = *(char *)((long)param_1 + 0xb);
    }
    if (cVar2 == '\0') goto LAB_01baa908;
    FUN_01baddd0(0);
  }
  plVar23 = (long *)0x2;
  *(undefined1 *)((long)param_1 + 9) = 1;
joined_r0x01baa91c:
  if (plVar28 != (long *)0x0) {
    lVar21 = plVar28[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
  }
  puVar27 = puVar27 + 1;
  if (puVar27 == puVar24) {
    return;
  }
  if ((int)plVar23 != 3) {
    return;
  }
  goto LAB_01baa3e0;
}


