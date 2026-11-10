/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191d1f8; name: FUN_0191d1f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0191d1f8(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 local_ac;
  undefined4 local_a4;
  ulong local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined2 local_74;
  undefined1 local_72;
  
  local_a0 = 0xd65830cac3e925da;
  pcStack_98 = "field_obstruction_waza";
  local_90 = 0x16;
  local_88 = (long *)0x0;
  auVar21 = _DAT_043d1bf0;
  auVar22 = _DAT_043d1c20;
  if (DAT_043d1be0 != '\0') goto LAB_0191d250;
  auVar21 = FUN_00aee408(&local_a0,param_1);
  puVar6 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar16 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar16;
  uVar13 = *(ulong *)(lVar16 + 0x60);
  uVar18 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & local_a0;
    }
    else if (local_a0 < uVar13) {
      uVar15 = local_a0;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = local_a0 / uVar13;
      }
      uVar15 = local_a0 - uVar15 * uVar13;
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == local_a0) {
            if (plVar17[2] == local_a0) goto LAB_0191d340;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == local_a0) {
            if (plVar17[2] == local_a0) goto LAB_0191d340;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  goto LAB_0191d380;
LAB_0191d45c:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) goto LAB_0191d49c;
  plVar1 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar19 = FUN_00d7905c(plVar17,param_1 + 0xc0);
  do {
    iVar12 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 != 0) goto LAB_0191d49c;
  (**(code **)(*plVar17 + 0x10))(plVar17);
  bVar2 = *puVar6;
  goto joined_r0x0191d684;
LAB_0191d538:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar20 = FUN_00d7905c(plVar17,param_1 + 0xe0);
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  goto LAB_0191d578;
LAB_0191d340:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = FUN_00d7905c(plVar17,param_1 + 0x20);
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
LAB_0191d380:
  uVar9 = FUN_01917858(&local_a0,param_1 + 0x40);
  uVar10 = FUN_01917858(&local_a0,param_1 + 0x60);
  uVar11 = FUN_00ea3f80(&local_a0,param_1 + 0x80);
  auVar22 = FUN_00aee408(&local_a0,param_1 + 0xa0);
  if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar7;
  *(long *)puVar8 = lVar16;
  uVar13 = *(ulong *)(lVar16 + 0x60);
  uVar19 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & local_a0;
    }
    else if (local_a0 < uVar13) {
      uVar15 = local_a0;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = local_a0 / uVar13;
      }
      uVar15 = local_a0 - uVar15 * uVar13;
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == local_a0) {
            if (plVar17[2] == local_a0) goto LAB_0191d45c;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == local_a0) {
            if (plVar17[2] == local_a0) goto LAB_0191d45c;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_0191d49c:
  bVar2 = *puVar6;
joined_r0x0191d684:
  if (((bVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar7;
  *(long *)puVar8 = lVar16;
  uVar13 = *(ulong *)(lVar16 + 0x60);
  uVar20 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & local_a0;
    }
    else if (local_a0 < uVar13) {
      uVar15 = local_a0;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = local_a0 / uVar13;
      }
      uVar15 = local_a0 - uVar15 * uVar13;
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == local_a0) {
            if (plVar17[2] == local_a0) goto LAB_0191d538;
          }
          else if ((plVar17[1] & uVar13 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == local_a0) {
            if (plVar17[2] == local_a0) goto LAB_0191d538;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar5 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_0191d578:
  DAT_043d1c34 = uVar20;
  DAT_043d1c0c = 0;
  DAT_043d1c0d = local_74;
  DAT_043d1c0f = local_72;
  DAT_043d1c14 = local_ac;
  DAT_043d1c1c = local_a4;
  if (DAT_043d1be0 == '\0') {
    DAT_043d1be0 = '\x01';
  }
  DAT_043d1c00 = uVar18;
  DAT_043d1c04 = uVar9;
  DAT_043d1c08 = uVar10;
  DAT_043d1c10 = uVar11;
  DAT_043d1c30 = uVar19;
  if (local_88 != (long *)0x0) {
    _DAT_043d1bf0 = auVar21;
    _DAT_043d1c20 = auVar22;
    (**(code **)(*local_88 + 0x20))();
    auVar21 = _DAT_043d1bf0;
    auVar22 = _DAT_043d1c20;
  }
LAB_0191d250:
  DAT_043d1c20_8 = auVar22._8_8_;
  _DAT_043d1c20 = auVar22._0_8_;
  DAT_043d1bf0_8 = auVar21._8_8_;
  _DAT_043d1bf0 = auVar21._0_8_;
  return;
}


