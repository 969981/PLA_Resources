/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025d46fc; name: FUN_025d46fc
 */


void FUN_025d46fc(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  int local_60;
  undefined1 local_5c;
  undefined1 local_54;
  
  local_64 = 0;
  local_68 = 4;
  local_5c = 0;
  local_54 = 0;
  uStack_70 = FUN_025d3d5c();
  puVar6 = PTR_DAT_04379660;
  local_78 = (long *)0x0;
  local_90 = 0xb1f5891c0f07f9b;
  pcStack_88 = "buddy_talk_failure_keep_time";
  local_80 = 0x1c;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar17 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar17;
  uVar15 = *(ulong *)(lVar17 + 0x60);
  if (uVar15 != 0) {
    uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar15 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar13 = 0xdda9f413319d82e4;
      if (uVar15 < 0xdda9f413319d82e5) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = 0xdda9f413319d82e4 / uVar15;
        }
        uVar13 = 0xdda9f413319d82e4 - uVar13 * uVar15;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar13 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar18[1] == 0xdda9f413319d82e4) {
            if (plVar18[2] == -0x22560becce627d1c) goto LAB_025d481c;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar13) goto LAB_025d4a80;
          plVar18 = (long *)*plVar18;
          iVar9 = 0;
        } while (plVar18 != (long *)0x0);
        goto LAB_025d485c;
      }
      do {
        uVar12 = plVar18[1];
        if (uVar12 == 0xdda9f413319d82e4) {
          if (plVar18[2] == -0x22560becce627d1c) goto LAB_025d481c;
        }
        else {
          if (uVar15 <= uVar12) {
            uVar5 = 0;
            if (uVar15 != 0) {
              uVar5 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar5 * uVar15;
          }
          if (uVar12 != uVar13) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
LAB_025d4a80:
  iVar9 = 0;
LAB_025d485c:
  local_b0 = 0xfa82185f816a457;
  pcStack_a8 = "buddy_talk_action_yuragi_time";
  local_a0 = 0x1d;
  local_98 = (long *)0x0;
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar7;
  *(long *)puVar8 = lVar17;
  uVar15 = *(ulong *)(lVar17 + 0x60);
  if (uVar15 != 0) {
    uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar15 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar13 = 0xdda9f413319d82e4;
      if (uVar15 < 0xdda9f413319d82e5) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = 0xdda9f413319d82e4 / uVar15;
        }
        uVar13 = 0xdda9f413319d82e4 - uVar13 * uVar15;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar13 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar18[1] == 0xdda9f413319d82e4) {
            if (plVar18[2] == -0x22560becce627d1c) goto LAB_025d4918;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar13) goto LAB_025d4aa8;
          plVar18 = (long *)*plVar18;
          iVar10 = 0;
        } while (plVar18 != (long *)0x0);
        goto LAB_025d4958;
      }
      do {
        uVar12 = plVar18[1];
        if (uVar12 == 0xdda9f413319d82e4) {
          if (plVar18[2] == -0x22560becce627d1c) goto LAB_025d4918;
        }
        else {
          if (uVar15 <= uVar12) {
            uVar5 = 0;
            if (uVar15 != 0) {
              uVar5 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar5 * uVar15;
          }
          if (uVar12 != uVar13) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
LAB_025d4aa8:
  iVar10 = 0;
LAB_025d4958:
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar17 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar17;
  if (iVar10 == 0) {
    uVar19 = 0;
  }
  else {
    puVar14 = *(ulong **)(lVar17 + 0xd8);
    uVar1 = iVar10 + 1;
    if (uVar1 == 0) {
      uVar15 = *puVar14;
      uVar19 = (int)puVar14[1] + (int)uVar15;
      uVar12 = puVar14[1] ^ uVar15;
      *puVar14 = uVar12 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar12 << 0x10;
      puVar14[1] = uVar12 >> 0x1b | uVar12 << 0x25;
    }
    else {
      lVar17 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & uVar1) != 0) {
        lVar17 = 0x20;
      }
      uVar12 = lVar17 - LZCOUNT(uVar1);
      uVar15 = uVar12 >> 6;
      if ((uVar12 & 0x3f) != 0) {
        uVar15 = uVar15 + 1;
      }
      if (uVar12 < uVar15) {
        uVar16 = 0;
      }
      else {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar12 / uVar15;
        }
        uVar16 = (uint)(0xffffffffffffffff >> (-uVar13 & 0x3f));
      }
      uVar15 = *puVar14;
      uVar12 = puVar14[1];
      do {
        uVar13 = uVar15 ^ uVar12;
        iVar10 = (int)uVar12;
        uVar12 = uVar13 >> 0x1b | uVar13 << 0x25;
        uVar19 = (int)uVar15 + iVar10 & uVar16;
        uVar15 = uVar13 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar13 << 0x10;
      } while (uVar1 <= uVar19);
      *puVar14 = uVar15;
      puVar14[1] = uVar12;
    }
  }
  local_60 = uVar19 + iVar9;
  local_64 = 1;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_68 = 3;
  FUN_025d35b8(param_1,&uStack_70);
  return;
LAB_025d481c:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_025d4a80;
  plVar2 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  iVar9 = FUN_00d78f50(plVar18,&local_90);
  do {
    iVar10 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  goto LAB_025d485c;
LAB_025d4918:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar10 = FUN_00d78f50(plVar18,&local_b0);
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    goto LAB_025d4958;
  }
  goto LAB_025d4aa8;
}


