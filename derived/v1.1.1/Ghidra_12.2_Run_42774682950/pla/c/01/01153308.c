/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01153308; name: FUN_01153308
 */


void FUN_01153308(long param_1,long *param_2,uint param_3)

{
  int *piVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined **ppuVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined **ppuVar24;
  long *plVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined **ppuVar29;
  byte *pbVar30;
  undefined **ppuVar31;
  undefined8 *puVar32;
  float fVar33;
  uint local_6c;
  long *local_68;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar21 = (long *)(param_1 + 0x78);
  do {
    if (*plVar21 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar21 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *plVar21 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0115337c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar5) {
      *plVar21 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0115337c:
  pbVar30 = PTR_DAT_04379520;
  local_6c = param_3;
  if ((int)param_3 < 2) {
    local_6c = 1;
  }
  plVar21 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_011540dc;
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar21;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0xd0,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar21 + 0xb8))(plVar21);
  }
  puVar2 = PTR_DAT_043796d0;
  plVar10[7] = 0;
  *(undefined4 *)(plVar10 + 8) = 0;
  *(undefined4 *)(plVar10 + 6) = 0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  *plVar10 = (long)(puVar2 + 0x10);
  plVar10[4] = 0;
  plVar10[5] = 0;
  if (((*pbVar30 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar11 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar16 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
    pbVar30 = PTR_DAT_04379520;
  }
  plVar10[1] = lVar16;
  plVar15 = plVar10 + 10;
  *(int *)plVar15 = 0;
  *plVar10 = (long)&PTR_LAB_041f3140;
  plVar10[9] = (long)&PTR_LAB_041f3178;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  if (((*pbVar30 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar16 = DAT_043f1798;
  lVar11 = tpidr_el0;
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar11 + 0x20), *(long *)(lVar11 + 0x20) == 0)) {
    *(long *)(lVar11 + 0x20) = DAT_043f1798;
    lVar12 = lVar16;
  }
  plVar17 = plVar10 + 0xe;
  *plVar17 = lVar12;
  *(undefined4 *)(plVar10 + 0x11) = 0;
  plVar10[0xf] = 0x1fffffffffffffff;
  plVar10[0x10] = 0;
  FUN_01154ed4(plVar10 + 0x12);
  *(undefined4 *)(plVar10 + 0x19) = 0;
  *(uint *)((long)plVar10 + 0xcc) = local_6c;
  uVar22 = (ulong)local_6c;
  lVar16 = plVar10[0xb];
  if ((ulong)(plVar10[0xd] - lVar16 >> 3) < uVar22) {
    lVar18 = plVar10[0xc];
    lVar12 = (**(code **)(*(long *)plVar10[0xe] + 0x10))((long *)plVar10[0xe],uVar22 << 3,8);
    if (lVar12 == 0) {
      (**(code **)(*(long *)*plVar17 + 0xb8))();
    }
    lVar16 = lVar12 + (lVar18 - lVar16 >> 3) * 8;
    plVar25 = (long *)plVar10[0xb];
    plVar14 = (long *)plVar10[0xc];
    lVar18 = lVar16;
    if (plVar14 == plVar25) {
      plVar14 = plVar25;
    }
    else {
      do {
        lVar18 = lVar18 + -8;
        plVar14 = plVar14 + -1;
        FUN_01159440(plVar17,lVar18,plVar14);
      } while (plVar25 != plVar14);
      plVar14 = (long *)plVar10[0xb];
      plVar25 = (long *)plVar10[0xc];
    }
    plVar10[0xb] = lVar18;
    plVar10[0xc] = lVar16;
    lVar16 = plVar10[0xd];
    plVar10[0xd] = lVar12 + uVar22 * 8;
joined_r0x01153558:
    if (plVar25 != plVar14) {
      while( true ) {
        plVar25 = plVar25 + -1;
        plVar13 = (long *)*plVar25;
        if (plVar13 == (long *)0x0) break;
        plVar3 = plVar13 + 10;
        do {
          iVar8 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != 0) break;
        (**(code **)(*plVar13 + 0x10))();
        if (plVar25 == plVar14) goto LAB_0115355c;
      }
      goto joined_r0x01153558;
    }
LAB_0115355c:
    if (plVar14 != (long *)0x0) {
      plVar25 = (long *)*plVar17;
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) == 0) {
LAB_01153898:
        (**(code **)(*plVar25 + 0x18))(plVar25,plVar14,lVar16 - (long)plVar14,8);
      }
      else {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_01153898;
        FUN_02bcc824(plVar25,plVar14,lVar16 - (long)plVar14,8);
      }
      pbVar30 = PTR_DAT_04379520;
    }
  }
  lVar16 = plVar10[0x12];
  if ((ulong)(plVar10[0x14] - lVar16 >> 4) < 0x40) {
    plVar25 = plVar10 + 0x15;
    lVar18 = plVar10[0x13];
    lVar12 = (**(code **)(*(long *)*plVar25 + 0x10))((long *)*plVar25,0x400,8);
    if (lVar12 == 0) {
      (**(code **)(*(long *)*plVar25 + 0xb8))();
    }
    lVar16 = lVar12 + (lVar18 - lVar16 >> 4) * 0x10;
    puVar23 = (undefined8 *)plVar10[0x12];
    puVar32 = (undefined8 *)plVar10[0x13];
    if (puVar32 == puVar23) {
      lVar18 = lVar16;
      puVar32 = puVar23;
    }
    else {
      lVar18 = lVar16 + -0x10;
      FUN_011569c0(plVar25,lVar18,puVar32 + -2);
      if (puVar32 + -2 != puVar23) {
        do {
          lVar18 = lVar18 + -0x10;
          FUN_011569c0(plVar25,lVar18,puVar32 + -4);
          puVar32 = puVar32 + -2;
        } while (puVar23 + 2 != puVar32);
      }
      puVar23 = (undefined8 *)plVar10[0x13];
      puVar32 = (undefined8 *)plVar10[0x12];
    }
    plVar10[0x12] = lVar18;
    plVar10[0x13] = lVar16;
    lVar16 = plVar10[0x14];
    plVar10[0x14] = lVar12 + 0x400;
    plVar13 = (long *)PTR_DAT_043794a8;
    plVar14 = (long *)PTR_DAT_043794a0;
    puVar2 = PTR_DAT_04379498;
    if (puVar23 != puVar32) {
      puVar23 = puVar23 + -2;
      puVar28 = (undefined8 *)*puVar23;
      puVar6 = PTR_LAB_04379590;
      puVar7 = PTR_LAB_04379590;
      if (puVar28 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar28 + 1);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar6 = PTR_LAB_04379590;
        puVar7 = PTR_LAB_04379590;
        if (iVar8 + -1 == 0) {
          puVar28[2] = 0;
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *plVar14;
          *plVar13 = lVar12;
          local_68 = (long *)*puVar28;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
          puVar6 = PTR_LAB_04379590;
          puVar7 = PTR_LAB_04379590;
        }
      }
      while (PTR_LAB_04379590 = puVar7, puVar7 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar6,
            puVar23 != puVar32) {
        puVar23 = puVar23 + -2;
        puVar28 = (undefined8 *)*puVar23;
        if (puVar28 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar28 + 1);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          puVar6 = PTR_LAB_04379590;
          if (iVar8 + -1 == 0) {
            puVar28[2] = 0;
            if (((*puVar2 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(puVar2), plVar14 = (long *)PTR_DAT_043794a0,
               plVar13 = (long *)PTR_DAT_043794a8, iVar8 != 0)) {
              FUN_00100250(puVar7,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar2);
              plVar14 = (long *)PTR_DAT_043794a0;
              plVar13 = (long *)PTR_DAT_043794a8;
            }
            lVar12 = *plVar14;
            *plVar13 = lVar12;
            local_68 = (long *)*puVar28;
            FUN_02a44274(lVar12 + 0xd8,&local_68);
            puVar6 = PTR_LAB_04379590;
          }
        }
      }
    }
    pbVar30 = PTR_DAT_04379520;
    if (puVar32 != (undefined8 *)0x0) {
      plVar25 = (long *)*plVar25;
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar25,puVar32,lVar16 - (long)puVar32,8);
          goto LAB_01153790;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,puVar32,lVar16 - (long)puVar32,8);
    }
  }
LAB_01153790:
  uVar26 = 0;
  ppuVar24 = &PTR_LAB_041f30d8;
  puVar2 = PTR_DAT_043796d0 + 0x10;
  do {
    plVar25 = (long *)plVar10[1];
    if (((*pbVar30 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(pbVar30), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(pbVar30);
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_011540dc;
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar25;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    plVar14 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x98,8);
    if (plVar14 == (long *)0x0) {
      (**(code **)(*plVar25 + 0xb8))(plVar25);
    }
    *plVar14 = (long)puVar2;
    plVar14[7] = 0;
    *(undefined4 *)(plVar14 + 8) = 0;
    *(undefined4 *)(plVar14 + 6) = 0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[5] = 0;
    if (((*pbVar30 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar30), iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
      __cxa_guard_release(pbVar30);
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar16 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if (*(long *)(lVar16 + 0x80) != 0) {
        lVar12 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
      }
    }
    *plVar14 = (long)&PTR_LAB_041f30d8;
    plVar14[1] = lVar12;
    plVar13 = plVar14 + 10;
    *(int *)plVar13 = 0;
    plVar14[9] = (long)&PTR_LAB_041f3110;
    FUN_01154ed4(plVar14 + 0xb);
    *(undefined2 *)(plVar14 + 0x12) = 1;
    *(uint *)((long)plVar14 + 0x94) = uVar26;
    plVar14[1] = (long)plVar25;
    plVar14[2] = (long)plVar14;
    plVar14[3] = 0x98;
    plVar14[4] = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_68 = plVar14;
    if ((ulong)plVar10[0xc] < (ulong)plVar10[0xd]) {
      FUN_01159784(plVar17,plVar10[0xc],&local_68);
      plVar10[0xc] = plVar10[0xc] + 8;
    }
    else {
      FUN_01159528(plVar10 + 0xb,&local_68);
    }
    pbVar30 = PTR_DAT_04379520;
    if (local_68 != (long *)0x0) {
      plVar25 = local_68 + 10;
      do {
        iVar8 = (int)*plVar25 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *(int *)plVar25 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    uVar26 = uVar26 + 1;
  } while (uVar26 != local_6c);
  plVar10[1] = (long)plVar21;
  plVar10[2] = (long)plVar10;
  plVar10[3] = 0xd0;
  plVar10[4] = 8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *(int *)plVar15 = (int)*plVar15 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar21 = (long *)(param_1 + 0x88);
  ppuVar31 = (undefined **)*param_2;
  ppuVar29 = *(undefined ***)(param_1 + 0x90);
  if (ppuVar29 != (undefined **)0x0) {
    uVar22 = (long)ppuVar29 - ((ulong)ppuVar29 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      ppuVar24 = (undefined **)((long)ppuVar29 - 1U & (ulong)ppuVar31);
    }
    else {
      ppuVar24 = ppuVar31;
      if (ppuVar29 <= ppuVar31) {
        uVar20 = 0;
        if (ppuVar29 != (undefined **)0x0) {
          uVar20 = (ulong)ppuVar31 / (ulong)ppuVar29;
        }
        ppuVar24 = (undefined **)((long)ppuVar31 - uVar20 * (long)ppuVar29);
      }
    }
    plVar17 = *(long **)(*plVar21 + (long)ppuVar24 * 8);
    if (plVar17 != (long *)0x0) {
      if (uVar22 < 2) {
        do {
          plVar17 = (long *)*plVar17;
          if ((plVar17 == (long *)0x0) ||
             ((undefined **)plVar17[1] != ppuVar31 &&
              (undefined **)((ulong)plVar17[1] & (long)ppuVar29 - 1U) != ppuVar24))
          goto LAB_01153d7c;
        } while ((undefined **)plVar17[2] != ppuVar31);
      }
      else {
        do {
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_01153d7c;
          ppuVar19 = (undefined **)plVar17[1];
          if (ppuVar19 != ppuVar31) {
            if (ppuVar29 <= ppuVar19) {
              uVar22 = 0;
              if (ppuVar29 != (undefined **)0x0) {
                uVar22 = (ulong)ppuVar19 / (ulong)ppuVar29;
              }
              ppuVar19 = (undefined **)((long)ppuVar19 - uVar22 * (long)ppuVar29);
            }
            if (ppuVar19 != ppuVar24) goto LAB_01153d7c;
          }
        } while ((undefined **)plVar17[2] != ppuVar31);
      }
      if (plVar10 != (long *)0x0) {
        do {
          iVar8 = (int)*plVar15 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *(int *)plVar15 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      goto LAB_01153e84;
    }
  }
LAB_01153d7c:
  plVar15 = (long *)(**(code **)(**(long **)(param_1 + 0xc0) + 0x10))
                              (*(long **)(param_1 + 0xc0),0x20,8);
  if (plVar15 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0xb8))();
  }
  uVar27 = *(undefined8 *)(param_1 + 0xc0);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    plVar15[2] = *param_2;
    plVar15[3] = (long)plVar10;
  }
  else {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_011540dc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar27;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar15[2] = *param_2;
    plVar15[3] = (long)plVar10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *plVar15 = 0;
  plVar15[1] = (long)ppuVar31;
  fVar33 = (float)(*(long *)(param_1 + 0xe0) + 1);
  if ((ppuVar29 == (undefined **)0x0) || (*(float *)(param_1 + 0xe8) * (float)ppuVar29 < fVar33)) {
    uVar22 = (ulong)(ppuVar29 < (undefined **)0x3 || ((ulong)ppuVar29 & (long)ppuVar29 - 1U) != 0) |
             (long)ppuVar29 << 1;
    uVar20 = (ulong)(fVar33 / *(float *)(param_1 + 0xe8));
    if (uVar20 <= uVar22) {
      uVar20 = uVar22;
    }
    FUN_011560f8(plVar21,uVar20);
    ppuVar29 = *(undefined ***)(param_1 + 0x90);
    if (((ulong)ppuVar29 & (long)ppuVar29 - 1U) == 0) {
      ppuVar24 = (undefined **)((long)ppuVar29 - 1U & (ulong)ppuVar31);
    }
    else if (ppuVar31 < ppuVar29) {
      ppuVar24 = ppuVar31;
    }
    else {
      uVar22 = 0;
      if (ppuVar29 != (undefined **)0x0) {
        uVar22 = (ulong)ppuVar31 / (ulong)ppuVar29;
      }
      ppuVar24 = (undefined **)((long)ppuVar31 - uVar22 * (long)ppuVar29);
    }
  }
  plVar10 = *(long **)(*plVar21 + (long)ppuVar24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)(param_1 + 0xb8);
    *plVar15 = *plVar10;
    *plVar10 = (long)plVar15;
    *(long **)(*(long *)(param_1 + 0x88) + (long)ppuVar24 * 8) = plVar10;
    if (*plVar15 != 0) {
      ppuVar24 = *(undefined ***)(*plVar15 + 8);
      if (((ulong)ppuVar29 & (long)ppuVar29 - 1U) == 0) {
        ppuVar24 = (undefined **)((ulong)ppuVar24 & (long)ppuVar29 - 1U);
      }
      else if (ppuVar29 <= ppuVar24) {
        uVar22 = 0;
        if (ppuVar29 != (undefined **)0x0) {
          uVar22 = (ulong)ppuVar24 / (ulong)ppuVar29;
        }
        ppuVar24 = (undefined **)((long)ppuVar24 - uVar22 * (long)ppuVar29);
      }
      plVar10 = (long *)(*plVar21 + (long)ppuVar24 * 8);
      goto LAB_01153e74;
    }
  }
  else {
    *plVar15 = *plVar10;
LAB_01153e74:
    *plVar10 = (long)plVar15;
  }
  *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
LAB_01153e84:
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


