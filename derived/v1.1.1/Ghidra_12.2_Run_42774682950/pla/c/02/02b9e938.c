/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9e938; name: FUN_02b9e938
 */


undefined1  [16] FUN_02b9e938(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long *plVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *unaff_x25;
  ulong uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  long *local_90;
  ulong local_88;
  ulong *local_80;
  ulong *local_78;
  ulong local_70;
  ulong *puStack_68;
  
  uVar8 = nn::os::GetCurrentThread();
  puVar1 = param_1 + 0x10;
  do {
    if (*puVar1 != 0 || param_1[0x11] != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x74));
        while (*puVar1 == 0 && param_1[0x11] == 0) {
          cVar6 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8;
            param_1[0x11] = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02b9e9b0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar8;
      param_1[0x11] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02b9e9b0:
  local_90 = (long *)*param_2;
  puVar9 = (ulong *)(**(code **)(*local_90 + 0x10))(local_90,0x158,8);
  puVar4 = PTR_DAT_04379528;
  if (puVar9 == (ulong *)0x0) {
    local_90 = (long *)0x0;
    uVar14 = 0;
    uVar8 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar7 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02b9f65c;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = local_90;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar11 = (long *)*param_2;
    unaff_x25 = puVar9 + 0x18;
    *unaff_x25 = (ulong)plVar11;
    puVar9[0x15] = 0;
    puVar9[0x16] = 0;
    puVar9[0x17] = 0;
    *(undefined4 *)(puVar9 + 0x1b) = 0;
    puVar9[0x19] = 0x7ffffffffffffff;
    puVar9[0x1a] = 0;
    puVar9[0x1e] = 0;
    puVar9[0x1c] = 0;
    puVar9[0x1d] = 0;
    puVar18 = puVar9 + 0x1f;
    *puVar18 = (ulong)plVar11;
    *(undefined4 *)(puVar9 + 0x22) = 0;
    puVar9[0x28] = 0;
    *(undefined1 *)(puVar9 + 0x29) = 0;
    puVar9[0x20] = 0x7ffffffffffffff;
    puVar9[0x21] = 0;
    puVar9[0x23] = 0x400;
    puVar9[0x24] = 0x400;
    uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x40,8);
    if (uVar8 == 0) {
      (**(code **)(*(long *)*unaff_x25 + 0xb8))();
    }
    uVar14 = puVar9[0x15];
    uVar21 = puVar9[0x16];
    uVar22 = uVar8;
    if (uVar21 == uVar14) {
      uVar21 = uVar14;
    }
    else {
      do {
        uVar22 = uVar22 - 0x20;
        uVar21 = uVar21 - 0x20;
        FUN_02b61974(unaff_x25,uVar22,uVar21);
      } while (uVar14 != uVar21);
      uVar14 = puVar9[0x15];
      uVar21 = puVar9[0x16];
    }
    puVar9[0x15] = uVar22;
    puVar9[0x16] = uVar8;
    uVar22 = puVar9[0x17];
    puVar9[0x17] = uVar8 + 0x40;
    while (uVar8 = uVar21, uVar8 != uVar14) {
      uVar21 = uVar8 - 0x20;
      plVar11 = *(long **)(uVar8 - 0x18);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x30))(plVar11,uVar21);
        plVar11 = *(long **)(uVar8 - 0x18);
        *(undefined8 *)(uVar8 - 0x20) = 0;
        *(undefined8 *)(uVar8 - 0x18) = 0;
        if (plVar11 != (long *)0x0) {
          plVar2 = plVar11 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar6 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar3) {
              *(int *)plVar2 = iVar7;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
        plVar11 = *(long **)(uVar8 - 0x18);
        *(undefined8 *)(uVar8 - 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(uVar8 - 8) = 0;
        if (plVar11 != (long *)0x0) {
          plVar2 = plVar11 + 10;
          do {
            iVar7 = (int)*plVar2 + -1;
            cVar6 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar3) {
              *(int *)plVar2 = iVar7;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      }
    }
    if (uVar14 != 0) {
      unaff_x25 = (ulong *)*unaff_x25;
      uVar8 = (**(code **)(*unaff_x25 + 0xc0))(unaff_x25);
      if ((uVar8 & 1) != 0) {
        lVar15 = tpidr_el0;
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(unaff_x25,uVar14,uVar22 - uVar14,8);
          goto LAB_02b9ec10;
        }
      }
      (**(code **)(*unaff_x25 + 0x18))(unaff_x25,uVar14,uVar22 - uVar14,8);
    }
LAB_02b9ec10:
    uVar8 = puVar9[0x1c];
    if ((ulong)((long)(puVar9[0x1e] - uVar8) >> 5) < 2) {
      uVar14 = puVar9[0x1d];
      local_70 = 0;
      puStack_68 = puVar18;
      local_88 = (**(code **)(*(long *)puVar9[0x1f] + 0x10))((long *)puVar9[0x1f],0x40,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*puVar18 + 0xb8))();
      }
      puVar19 = (ulong *)(local_88 + ((long)(uVar14 - uVar8) >> 5) * 0x20);
      uVar8 = local_88 + 0x40;
      uVar14 = puVar9[0x1c];
      uVar21 = puVar9[0x1d];
      unaff_x25 = puVar19;
      local_80 = puVar19;
      local_78 = puVar19;
      local_70 = uVar8;
      if (uVar21 == uVar14) {
        local_78 = (ulong *)uVar14;
      }
      else {
        do {
          unaff_x25 = unaff_x25 + -4;
          uVar21 = uVar21 - 0x20;
          FUN_02ba04a8(puVar18,unaff_x25,uVar21);
        } while (uVar14 != uVar21);
        uVar14 = puVar9[0x1c];
        local_78 = (ulong *)puVar9[0x1d];
      }
      puVar9[0x1c] = (ulong)unaff_x25;
      puVar9[0x1d] = (ulong)puVar19;
      local_70 = puVar9[0x1e];
      puVar9[0x1e] = uVar8;
      local_88 = uVar14;
      local_80 = (ulong *)uVar14;
      FUN_02ba058c(&local_88);
    }
    cVar6 = (*DAT_043f0b30)(puVar9,param_2[2]);
    *(bool *)(puVar9 + 0x2a) = cVar6 != '\0';
    uVar8 = 8;
    uVar14 = 0x158;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  uVar21 = param_2[1];
  uVar22 = param_2[2];
  puVar9[0x25] = *param_2;
  puVar9[0x26] = uVar21;
  puVar9[0x27] = uVar22;
  (*DAT_043f0b48)(puVar9,&LAB_02b9f680);
  (*DAT_043f0b50)(puVar9,puVar9);
  FUN_02b9f690(puVar9);
  FUN_02b9faf0(puVar9);
  puVar19 = (ulong *)param_1[2];
  puVar18 = param_1 + 1;
  *param_1 = (ulong)puVar9;
  if (puVar19 == (ulong *)0x0) {
LAB_02b9ee48:
    puVar17 = (ulong *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0x38,8);
    if (puVar17 == (ulong *)0x0) {
      (**(code **)(*(long *)param_1[8] + 0xb8))();
    }
    uVar21 = param_1[8];
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar10 == 0) {
      uVar21 = *param_1;
      puVar17[6] = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar17[2] = uVar21;
      puVar17[3] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_02b9f65c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(ulong *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar21;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      puVar17[2] = *param_1;
      puVar17[3] = 0;
      puVar17[6] = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    *puVar17 = 0;
    puVar17[1] = (ulong)puVar9;
    if ((puVar19 == (ulong *)0x0) ||
       (*(float *)(param_1 + 0xd) * (float)puVar19 < (float)(param_1[0xc] + 1))) {
      uVar21 = (ulong)(puVar19 < (ulong *)0x3 || ((ulong)puVar19 & (long)puVar19 - 1U) != 0) |
               (long)puVar19 << 1;
      uVar22 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
      if (uVar22 <= uVar21) {
        uVar22 = uVar21;
      }
      if (uVar22 - 1 == 0) {
        uVar22 = 2;
      }
      else if ((uVar22 & uVar22 - 1) != 0) {
        uVar22 = std::__next_prime(uVar22);
      }
      uVar21 = param_1[2];
      if (uVar21 < uVar22) {
        uVar12 = uVar22;
LAB_02b9ef6c:
        FUN_02ba0808(puVar18,uVar12);
      }
      else if (uVar22 < uVar21) {
        uVar12 = (ulong)((float)param_1[0xc] / *(float *)(param_1 + 0xd));
        if ((uVar21 < 3) ||
           (uVar20 = uVar21 - (uVar21 >> 1 & 0x5555555555555555),
           uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333),
           1 < (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar12 = std::__next_prime(uVar12);
        }
        else if (1 < uVar12) {
          uVar12 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar12 - 1) & 0x3f);
        }
        if (uVar12 <= uVar22) {
          uVar12 = uVar22;
        }
        if (uVar12 < uVar21) goto LAB_02b9ef6c;
      }
      puVar19 = (ulong *)param_1[2];
      if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
        unaff_x25 = (ulong *)((long)puVar19 - 1U & (ulong)puVar9);
      }
      else if (puVar9 < puVar19) {
        unaff_x25 = puVar9;
      }
      else {
        uVar21 = 0;
        if (puVar19 != (ulong *)0x0) {
          uVar21 = (ulong)puVar9 / (ulong)puVar19;
        }
        unaff_x25 = (ulong *)((long)puVar9 - uVar21 * (long)puVar19);
      }
    }
    puVar13 = *(ulong **)(*puVar18 + (long)unaff_x25 * 8);
    if (puVar13 == (ulong *)0x0) {
      puVar13 = param_1 + 7;
      *puVar17 = *puVar13;
      *puVar13 = (ulong)puVar17;
      *(ulong **)(param_1[1] + (long)unaff_x25 * 8) = puVar13;
      if (*puVar17 != 0) {
        puVar13 = *(ulong **)(*puVar17 + 8);
        if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
          puVar13 = (ulong *)((ulong)puVar13 & (long)puVar19 - 1U);
        }
        else if (puVar19 <= puVar13) {
          uVar21 = 0;
          if (puVar19 != (ulong *)0x0) {
            uVar21 = (ulong)puVar13 / (ulong)puVar19;
          }
          puVar13 = (ulong *)((long)puVar13 - uVar21 * (long)puVar19);
        }
        puVar13 = (ulong *)(*puVar18 + (long)puVar13 * 8);
        goto LAB_02b9f0a0;
      }
    }
    else {
      *puVar17 = *puVar13;
LAB_02b9f0a0:
      *puVar13 = (ulong)puVar17;
    }
    param_1[0xc] = param_1[0xc] + 1;
  }
  else {
    uVar21 = (long)puVar19 - ((ulong)puVar19 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      unaff_x25 = (ulong *)((long)puVar19 - 1U & (ulong)puVar9);
    }
    else {
      unaff_x25 = puVar9;
      if (puVar19 <= puVar9) {
        uVar22 = 0;
        if (puVar19 != (ulong *)0x0) {
          uVar22 = (ulong)puVar9 / (ulong)puVar19;
        }
        unaff_x25 = (ulong *)((long)puVar9 - uVar22 * (long)puVar19);
      }
    }
    puVar17 = *(ulong **)(*puVar18 + (long)unaff_x25 * 8);
    if (puVar17 == (ulong *)0x0) goto LAB_02b9ee48;
    if (uVar21 < 2) {
      do {
        puVar17 = (ulong *)*puVar17;
        if ((puVar17 == (ulong *)0x0) ||
           ((ulong *)puVar17[1] != puVar9 && (ulong *)(puVar17[1] & (long)puVar19 - 1U) != unaff_x25
           )) goto LAB_02b9ee48;
      } while ((ulong *)puVar17[2] != puVar9);
    }
    else {
      do {
        puVar17 = (ulong *)*puVar17;
        if (puVar17 == (ulong *)0x0) goto LAB_02b9ee48;
        puVar13 = (ulong *)puVar17[1];
        if (puVar13 != puVar9) {
          if (puVar19 <= puVar13) {
            uVar21 = 0;
            if (puVar19 != (ulong *)0x0) {
              uVar21 = (ulong)puVar13 / (ulong)puVar19;
            }
            puVar13 = (ulong *)((long)puVar13 - uVar21 * (long)puVar19);
          }
          if (puVar13 != unaff_x25) goto LAB_02b9ee48;
        }
      } while ((ulong *)puVar17[2] != puVar9);
    }
  }
  uVar21 = puVar17[3];
  puVar17[3] = (ulong)puVar9;
  if (uVar21 != 0) {
    FUN_02bcbe58(&local_88,0);
    if (*(char *)(uVar21 + 0x150) != '\0') {
      (*DAT_043f0b38)(uVar21);
    }
    FUN_02b8b0e8(uVar21 + 0xe0);
    lVar10 = *(long *)(uVar21 + 0xa8);
    if (lVar10 != 0) {
      lVar15 = *(long *)(uVar21 + 0xb0);
      if (lVar15 == lVar10) {
        lVar15 = lVar10;
      }
      else {
        do {
          lVar16 = lVar15 + -0x20;
          plVar11 = *(long **)(lVar15 + -0x18);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x30))(plVar11,lVar16);
            plVar11 = *(long **)(lVar15 + -0x18);
            *(undefined8 *)(lVar15 + -0x20) = 0;
            *(undefined8 *)(lVar15 + -0x18) = 0;
            if (plVar11 != (long *)0x0) {
              plVar2 = plVar11 + 10;
              do {
                iVar7 = (int)*plVar2 + -1;
                cVar6 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar3) {
                  *(int *)plVar2 = iVar7;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar7 == 0) {
                (**(code **)(*plVar11 + 0x10))();
              }
            }
            plVar11 = *(long **)(lVar15 + -0x18);
            *(undefined8 *)(lVar15 + -0x10) = 0xffffffffffffffff;
            *(undefined8 *)(lVar15 + -8) = 0;
            if (plVar11 != (long *)0x0) {
              plVar2 = plVar11 + 10;
              do {
                iVar7 = (int)*plVar2 + -1;
                cVar6 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar3) {
                  *(int *)plVar2 = iVar7;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar7 == 0) {
                (**(code **)(*plVar11 + 0x10))();
              }
            }
          }
          lVar15 = lVar16;
        } while (lVar16 != lVar10);
        lVar15 = *(long *)(uVar21 + 0xa8);
      }
      plVar11 = *(long **)(uVar21 + 0xc0);
      *(long *)(uVar21 + 0xb0) = lVar10;
      lVar10 = *(long *)(uVar21 + 0xb8) - lVar15;
      uVar22 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar22 & 1) != 0) {
        lVar16 = tpidr_el0;
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar11,lVar15,lVar10,8);
          goto LAB_02b9f220;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar15,lVar10,8);
    }
LAB_02b9f220:
    plVar11 = (long *)puVar17[4];
    uVar22 = puVar17[5];
    uVar20 = puVar17[6];
    uVar12 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar12 & 1) == 0) {
LAB_02b9f280:
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar21,uVar22,uVar20);
    }
    else {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02b9f280;
      FUN_02bcc824(plVar11,uVar21,uVar22,uVar20);
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar10 + 0x38d480) + -1;
    *(int *)(lVar10 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar10 + 0x38d484) = 0;
    }
  }
  puVar17[4] = (ulong)local_90;
  puVar17[5] = uVar14;
  puVar17[6] = uVar8;
  uVar8 = *param_1;
  do {
    uVar14 = *puVar1;
    uVar21 = param_1[0x11];
    cVar6 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar14;
      param_1[0x11] = uVar21;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    if (*puVar1 != uVar14 || param_1[0x11] != uVar21) {
      ClearExclusiveLocal();
      uVar14 = *puVar1;
      uVar21 = param_1[0x11];
      goto LAB_02b9f590;
    }
    cVar6 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      *(ulong *)((long)param_1 + 0x84) = uVar21;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02b9f374:
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x74));
  auVar23._8_8_ = uVar8;
  auVar23._0_8_ = 1;
  return auVar23;
LAB_02b9f590:
  do {
    uVar22 = *puVar1;
    if (uVar22 == uVar14 && param_1[0x11] == uVar21) {
      cVar6 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = 0;
        *(ulong *)((long)param_1 + 0x84) = uVar21;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_02b9f590;
      bVar3 = true;
    }
    else {
      bVar3 = false;
      ClearExclusiveLocal();
    }
    uVar14 = uVar22;
    uVar21 = param_1[0x11];
  } while (!bVar3);
  goto LAB_02b9f374;
}


