/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b8308; name: FUN_016b8308
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_016b8308(long *param_1,long param_2,int param_3,ulong *param_4,byte param_5)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  char *pcVar25;
  long *local_140;
  long *local_138;
  undefined8 local_130;
  long *local_128;
  undefined1 *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [96];
  long *local_a0;
  long *local_98;
  long *local_90;
  byte local_88;
  undefined8 local_80;
  long *local_70 [2];
  
  puVar8 = PTR_DAT_0437a7c0;
  uVar18 = *(ulong *)(param_2 + 0x60);
  if (uVar18 != 0) {
    uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar22 = *param_4;
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = uVar18 - 1 & uVar22;
    }
    else if (uVar22 < uVar18) {
      uVar20 = uVar22;
    }
    else {
      uVar20 = 0;
      if (uVar18 != 0) {
        uVar20 = uVar22 / uVar18;
      }
      uVar20 = uVar22 - uVar20 * uVar18;
    }
    plVar21 = *(long **)(*(long *)(param_2 + 0x58) + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar21[1] == uVar22) {
            if (plVar21[2] == uVar22) goto LAB_016b8944;
          }
          else if ((plVar21[1] & uVar18 - 1) != uVar20) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar21[1];
          if (uVar19 == uVar22) {
            if (plVar21[2] == uVar22) goto LAB_016b8944;
          }
          else {
            if (uVar18 <= uVar19) {
              uVar6 = 0;
              if (uVar18 != 0) {
                uVar6 = uVar19 / uVar18;
              }
              uVar19 = uVar19 - uVar6 * uVar18;
            }
            if (uVar19 != uVar20) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  local_140 = (long *)0x0;
  if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar14 != 0)) {
    local_70[0] = (long *)FUN_00938550();
    puVar9 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,local_70);
    FUN_00100250(PTR_LAB_0437a8d8,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  puVar9 = PTR_DAT_0437a7d0;
  local_138 = *(long **)PTR_DAT_0437a7d0;
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x18))();
  }
  local_130 = 0;
  local_128 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_120 = (undefined1 *)0x0;
  local_118 = (code *)0x0;
  local_110 = (undefined1 *)0x0;
  puStack_108 = (undefined1 *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar14 != 0)) {
    local_70[0] = (long *)FUN_00938550();
    puVar10 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,local_70);
    FUN_00100250(PTR_LAB_0437a8d8,puVar10,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  local_98 = *(long **)puVar9;
  if (local_98 == (long *)0x0) {
    bVar3 = *puVar8;
  }
  else {
    (**(code **)(*local_98 + 0x18))();
    bVar3 = *puVar8;
  }
  if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar14 != 0)) {
    local_70[0] = (long *)FUN_00938550();
    puVar8 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,local_70);
    FUN_00100250(PTR_LAB_0437a8d8,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  local_90 = *(long **)puVar9;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))();
  }
  puVar8 = PTR_DAT_04379678;
  local_88 = 0;
  local_80 = 0;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379678), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  plVar21 = local_140;
  puVar10 = PTR_DAT_04379688;
  puVar9 = PTR_DAT_04379680;
  lVar17 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar17;
  plVar24 = *(long **)(lVar17 + 0xf8);
  if (plVar24 != (long *)0x0) {
    plVar23 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar23 = (long *)plVar24[0x12];
  if (plVar23 != (long *)0x0) {
    plVar1 = plVar23 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  bVar3 = param_5 & 1;
  local_140 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  plVar21 = plVar24 + 10;
  do {
    iVar14 = (int)*plVar21 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar5) {
      *(int *)plVar21 = iVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_140 = plVar23;
  if (iVar14 == 0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  local_130 = *(undefined8 *)(*(long *)PTR_DAT_043806f8 + 0x28);
  local_128 = (long *)FUN_016b8e38(*(long *)(*(long *)PTR_DAT_043806f8 + 0x48) + 8);
  puVar13 = PTR_DAT_04379ce0;
  puVar12 = PTR_DAT_04379cd8;
  puVar11 = PTR_DAT_04379cd0;
  if (local_128 != (long *)0x0) {
    pcVar25 = (char *)param_4[1];
    if (*pcVar25 == '\0') {
      plVar21 = (long *)FUN_00938550();
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    else {
      if (((*PTR_DAT_04379cd0 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar15 = *(undefined8 *)puVar12;
      *(undefined8 *)puVar13 = uVar15;
      FUN_02a47cd8(local_70,uVar15,pcVar25);
      plVar21 = local_70[0];
    }
    plVar24 = local_98;
    local_98 = (long *)0x0;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))();
    }
    local_98 = plVar21;
    if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379678), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar17 = *(long *)puVar9;
    *(long *)puVar10 = lVar17;
    plVar21 = *(long **)(lVar17 + 0x100);
    if (plVar21 != (long *)0x0) {
      plVar24 = plVar21 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar5) {
          *(int *)plVar24 = (int)*plVar24 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar24 = (long *)plVar21[0x21];
    if (plVar24 != (long *)0x0) {
      plVar23 = plVar24 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar5) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar23 = plVar21 + 10;
    do {
      iVar14 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = iVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
    lVar17 = FUN_016b4cc8(plVar24,param_4);
    pcVar25 = *(char **)(lVar17 + 8);
    if (*pcVar25 == '\0') {
      plVar21 = (long *)FUN_00938550();
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    else {
      if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar15 = *(undefined8 *)puVar12;
      *(undefined8 *)puVar13 = uVar15;
      FUN_02a47cd8(local_70,uVar15,pcVar25);
      plVar21 = local_70[0];
    }
    plVar23 = local_138;
    local_138 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    local_138 = plVar21;
    lVar17 = FUN_016b4b54(plVar24,param_4);
    pcVar25 = *(char **)(lVar17 + 8);
    if (*pcVar25 == '\0') {
      plVar21 = (long *)FUN_00938550();
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
    else {
      if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar15 = *(undefined8 *)puVar12;
      *(undefined8 *)puVar13 = uVar15;
      FUN_02a47cd8(local_70,uVar15,pcVar25);
      plVar21 = local_70[0];
    }
    plVar23 = local_90;
    local_90 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    pcVar7 = local_118;
    if ((param_5 & 1) == 0) {
      local_80 = *(undefined8 *)(param_2 + 0xc0);
    }
    local_90 = plVar21;
    local_88 = bVar3;
    if (param_3 != 0) {
      puVar16 = (undefined8 *)0x0;
LAB_016b8834:
      *param_1 = (long)puVar16;
      if (plVar24 != (long *)0x0) {
        plVar21 = plVar24 + 10;
        do {
          iVar14 = (int)*plVar21 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      pcVar7 = local_118;
      if (local_a0 != (long *)0x0) {
        plVar21 = local_a0 + 10;
        do {
          iVar14 = (int)*plVar21 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*local_a0 + 0x10))();
          pcVar7 = local_118;
        }
      }
      local_118 = pcVar7;
      if (pcVar7 != (code *)0x0) {
        local_110 = (undefined1 *)0x0;
        puStack_108 = (undefined1 *)0x0;
        local_120 = (undefined1 *)0x0;
        local_118 = (code *)0x0;
        (*pcVar7)(auStack_100);
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_140 != (long *)0x0) {
        plVar21 = local_140 + 10;
        do {
          iVar14 = (int)*plVar21 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*local_140 + 0x10))();
        }
      }
      return;
    }
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      puStack_108 = (undefined1 *)0x0;
      local_120 = (undefined1 *)0x0;
      local_118 = (code *)0x0;
      (*pcVar7)(auStack_100);
    }
    plVar21 = local_128;
    puVar8 = PTR_DAT_04379520;
    local_120 = &LAB_016b9e28;
    local_118 = FUN_016b9e30;
    local_110 = &LAB_016b9e34;
    puStack_108 = &LAB_016b9e38;
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar14 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    puVar9 = PTR_DAT_04379528;
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (*(ulong *)(lVar17 + 0x80) < 0x10) {
      *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar21;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
      plVar23 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x58,8);
      if (plVar23 == (long *)0x0) {
        (**(code **)(*plVar21 + 0xb8))(plVar21);
        FUN_016b70b8(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_016b70b8();
      plVar1 = local_a0;
      *plVar23 = (long)&PTR_LAB_04224b30;
      plVar23[1] = (long)plVar21;
      plVar23[2] = (long)plVar23;
      plVar23[3] = 0x58;
      plVar23[9] = (long)&PTR_LAB_04224b80;
      plVar23[4] = 8;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
      plVar21 = plVar23 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar5) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_a0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        plVar21 = plVar1 + 10;
        do {
          iVar14 = (int)*plVar21 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar5) {
            *(int *)plVar21 = iVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar14 == 0) {
          (**(code **)(*plVar1 + 0x10))();
        }
      }
      plVar21 = local_128;
      local_a0 = plVar23;
      if (((*puVar8 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar14 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
      if (*(ulong *)(lVar17 + 0x80) < 0x10) {
        *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar21;
        *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        puVar16 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x160,0x10);
        if (puVar16 == (undefined8 *)0x0) {
          (**(code **)(*plVar21 + 0xb8))(plVar21);
        }
        FUN_016b7a78(puVar16,&local_140);
        *puVar16 = &PTR_LAB_04224ce0;
        puVar16[1] = plVar21;
        puVar16[2] = puVar16;
        puVar16[3] = 0x160;
        puVar16[4] = 0x10;
        puVar16[9] = &PTR_LAB_04224d38;
        puVar16[10] = &PTR_LAB_04224d80;
        *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        if (puVar16 != (undefined8 *)0x0) {
          lVar17 = puVar16[0xb];
          if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_016b8e0c;
          if (*(long *)(lVar17 + 0x10) == 0) {
            uVar15 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
            *(undefined8 *)(lVar17 + 0x10) = uVar15;
          }
          piVar2 = (int *)(lVar17 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        goto LAB_016b8834;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_016b8e0c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_016b8944:
  lVar17 = plVar21[3];
  *param_1 = lVar17;
  if (lVar17 == 0) {
    return;
  }
  lVar17 = *(long *)(lVar17 + 0x58);
  if (*(undefined8 **)(lVar17 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar15;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    return;
  }
  goto LAB_016b8e0c;
}


