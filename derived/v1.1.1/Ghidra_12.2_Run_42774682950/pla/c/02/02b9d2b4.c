/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9d2b4; name: FUN_02b9d2b4
 */


undefined1  [16] FUN_02b9d2b4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long *plVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong unaff_x28;
  undefined1 auVar19 [16];
  ulong local_88;
  ulong local_80;
  undefined1 auStack_78 [24];
  
  plVar16 = (long *)*param_2;
  uVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,0x48,8);
  puVar6 = PTR_DAT_04379528;
  puVar5 = PTR_DAT_04379520;
  if (uVar10 == 0) {
    plVar16 = (long *)0x0;
    local_88 = 0;
    local_80 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar7 = PTR_DAT_04379528;
      if (iVar9 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02b9dab4;
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar16;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *(undefined2 *)(uVar10 + 0x40) = 0;
    cVar8 = (*DAT_043f0fa0)(uVar10,param_2[2]);
    *(bool *)(uVar10 + 0x42) = cVar8 != '\0';
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    local_80 = 8;
    local_88 = 0x48;
  }
  uVar12 = nn::os::GetCurrentThread();
  puVar1 = param_1 + 0x10;
  do {
    if (*puVar1 != 0 || param_1[0x11] != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x74));
        while (*puVar1 == 0 && param_1[0x11] == 0) {
          cVar8 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12;
            param_1[0x11] = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_02b9d3dc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar8 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar12;
      param_1[0x11] = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_02b9d3dc:
  uVar12 = param_1[2];
  puVar2 = param_1 + 1;
  *param_1 = uVar10;
  if (uVar12 == 0) {
LAB_02b9d4c8:
    puVar17 = (ulong *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0x38,8);
    if (puVar17 == (ulong *)0x0) {
      (**(code **)(*(long *)param_1[8] + 0xb8))();
    }
    uVar13 = param_1[8];
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar9 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar11 == 0) {
      puVar17[2] = *param_1;
      puVar17[3] = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar17[6] = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_02b9dab4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(ulong *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar13;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      puVar17[2] = *param_1;
      puVar17[3] = 0;
      puVar17[6] = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *puVar17 = 0;
    puVar17[1] = uVar10;
    if ((uVar12 == 0) || (*(float *)(param_1 + 0xd) * (float)uVar12 < (float)(param_1[0xc] + 1))) {
      uVar12 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
      uVar13 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
      if (uVar13 <= uVar12) {
        uVar13 = uVar12;
      }
      if (uVar13 - 1 == 0) {
        uVar13 = 2;
      }
      else if ((uVar13 & uVar13 - 1) != 0) {
        uVar13 = std::__next_prime(uVar13);
      }
      uVar12 = param_1[2];
      if (uVar12 < uVar13) {
        uVar18 = uVar13;
LAB_02b9d5dc:
        FUN_02b9e1ec(puVar2,uVar18);
      }
      else if (uVar13 < uVar12) {
        uVar18 = (ulong)((float)param_1[0xc] / *(float *)(param_1 + 0xd));
        if ((uVar12 < 3) ||
           (uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
           uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333),
           1 < (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar18 = std::__next_prime(uVar18);
        }
        else if (1 < uVar18) {
          uVar18 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar18 - 1) & 0x3f);
        }
        if (uVar18 <= uVar13) {
          uVar18 = uVar13;
        }
        if (uVar18 < uVar12) goto LAB_02b9d5dc;
      }
      uVar12 = param_1[2];
      if ((uVar12 & uVar12 - 1) == 0) {
        unaff_x28 = uVar12 - 1 & uVar10;
      }
      else if (uVar10 < uVar12) {
        unaff_x28 = uVar10;
      }
      else {
        uVar13 = 0;
        if (uVar12 != 0) {
          uVar13 = uVar10 / uVar12;
        }
        unaff_x28 = uVar10 - uVar13 * uVar12;
      }
    }
    puVar15 = *(ulong **)(*puVar2 + unaff_x28 * 8);
    if (puVar15 == (ulong *)0x0) {
      puVar15 = param_1 + 7;
      *puVar17 = *puVar15;
      *puVar15 = (ulong)puVar17;
      *(ulong **)(param_1[1] + unaff_x28 * 8) = puVar15;
      if (*puVar17 != 0) {
        uVar13 = *(ulong *)(*puVar17 + 8);
        if ((uVar12 & uVar12 - 1) == 0) {
          uVar13 = uVar13 & uVar12 - 1;
        }
        else if (uVar12 <= uVar13) {
          uVar18 = 0;
          if (uVar12 != 0) {
            uVar18 = uVar13 / uVar12;
          }
          uVar13 = uVar13 - uVar18 * uVar12;
        }
        puVar15 = (ulong *)(*puVar2 + uVar13 * 8);
        goto LAB_02b9d710;
      }
    }
    else {
      *puVar17 = *puVar15;
LAB_02b9d710:
      *puVar15 = (ulong)puVar17;
    }
    param_1[0xc] = param_1[0xc] + 1;
  }
  else {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      unaff_x28 = uVar12 - 1 & uVar10;
    }
    else {
      unaff_x28 = uVar10;
      if (uVar12 <= uVar10) {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = uVar10 / uVar12;
        }
        unaff_x28 = uVar10 - uVar18 * uVar12;
      }
    }
    puVar17 = *(ulong **)(*puVar2 + unaff_x28 * 8);
    if (puVar17 == (ulong *)0x0) goto LAB_02b9d4c8;
    if (uVar13 < 2) {
      do {
        puVar17 = (ulong *)*puVar17;
        if ((puVar17 == (ulong *)0x0) ||
           (puVar17[1] != uVar10 && (puVar17[1] & uVar12 - 1) != unaff_x28)) goto LAB_02b9d4c8;
      } while (puVar17[2] != uVar10);
    }
    else {
      do {
        puVar17 = (ulong *)*puVar17;
        if (puVar17 == (ulong *)0x0) goto LAB_02b9d4c8;
        uVar13 = puVar17[1];
        if (uVar13 != uVar10) {
          if (uVar12 <= uVar13) {
            uVar18 = 0;
            if (uVar12 != 0) {
              uVar18 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar18 * uVar12;
          }
          if (uVar13 != unaff_x28) goto LAB_02b9d4c8;
        }
      } while (puVar17[2] != uVar10);
    }
  }
  uVar12 = puVar17[3];
  puVar17[3] = uVar10;
  if (uVar12 != 0) {
    FUN_02bcbe58(auStack_78,0);
    if (*(char *)(uVar12 + 0x42) != '\0') {
      (*DAT_043f0fa8)(uVar12);
    }
    plVar3 = (long *)puVar17[4];
    uVar10 = puVar17[5];
    uVar18 = puVar17[6];
    uVar13 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    lVar11 = tpidr_el0;
    if ((uVar13 & 1) == 0) {
LAB_02b9d7b0:
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar12,uVar10,uVar18);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02b9d7b0;
      FUN_02bcc824(plVar3,uVar12,uVar10,uVar18);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar9 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar9;
    if (iVar9 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
  }
  puVar17[4] = (ulong)plVar16;
  puVar17[5] = local_88;
  puVar17[6] = local_80;
  uVar10 = *param_1;
  do {
    uVar12 = *puVar1;
    uVar13 = param_1[0x11];
    cVar8 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar12;
      param_1[0x11] = uVar13;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    if (*puVar1 != uVar12 || param_1[0x11] != uVar13) {
      ClearExclusiveLocal();
      uVar12 = *puVar1;
      uVar13 = param_1[0x11];
      goto LAB_02b9d9e8;
    }
    cVar8 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      *(ulong *)((long)param_1 + 0x84) = uVar13;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_02b9d8a4:
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x74));
  auVar19._8_8_ = uVar10;
  auVar19._0_8_ = 1;
  return auVar19;
LAB_02b9d9e8:
  do {
    uVar18 = *puVar1;
    if (uVar18 == uVar12 && param_1[0x11] == uVar13) {
      cVar8 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = 0;
        *(ulong *)((long)param_1 + 0x84) = uVar13;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_02b9d9e8;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    uVar12 = uVar18;
    uVar13 = param_1[0x11];
  } while (!bVar4);
  goto LAB_02b9d8a4;
}


