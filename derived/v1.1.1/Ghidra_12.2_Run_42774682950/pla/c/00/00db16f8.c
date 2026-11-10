/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db16f8; name: FUN_00db16f8
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00db16f8(uint param_1)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  ushort uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  uint *puVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  byte *pbVar25;
  long *plVar26;
  byte *pbVar27;
  undefined8 local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pbVar25 = PTR_DAT_0437b630;
  if (((*PTR_DAT_0437b630 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0))
  {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  plVar26 = (long *)PTR_DAT_0437b638;
  lVar19 = *(long *)PTR_DAT_0437b638;
  if (lVar19 == 0) {
    DAT_043ad1d0 = lVar19;
    return 0;
  }
  DAT_043ad1d0 = lVar19;
  if (((*PTR_DAT_0437b668 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b668), iVar8 != 0))
  {
    FUN_00100250(&LAB_00db65b8,PTR_DAT_0437b670,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b668);
  }
  lVar12 = *(long *)PTR_DAT_0437b670;
  *(long *)PTR_DAT_0437b678 = lVar12;
  if (lVar12 == 0) {
    return 0;
  }
  if (*(char *)(lVar12 + 0x50) == '\0') {
LAB_00db178c:
    local_98 = 0;
    local_90 = 0;
  }
  else {
    local_98 = 0;
    local_90 = 0;
    iVar8 = nn::account::GetUserId((Uid *)&local_98,(UserHandle *)(lVar12 + 0x58));
    if (iVar8 != 0) goto LAB_00db178c;
  }
  if (local_98 == 0 && local_90 == 0) {
    return 0;
  }
  puVar21 = *(uint **)(*(long *)(lVar19 + 0xb8) + 0x250);
  uVar4 = *puVar21;
  piVar1 = (int *)((long)puVar21 + (ulong)uVar4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
    return 0;
  }
  uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
  if (uVar15 == 0) {
    return 0;
  }
  uVar13 = (ulong)*(uint *)((long)piVar1 + uVar15);
  local_98 = 0;
  nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_98);
  uVar22 = local_98;
  if (((*pbVar25 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"timestamp",uVar22);
  }
  local_98 = 0;
  nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_98);
  local_a0 = local_98;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a8 = 0;
  nn::time::ToCalendarTime
            ((CalendarTime *)&local_a8,(CalendarAdditionalInfo *)&local_98,(PosixTime *)&local_a0);
  if (((*pbVar25 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db1574(DAT_043ad1d0,"timezone",&local_90);
  }
  if (((*pbVar25 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"ver_id",0x6e);
  }
  pbVar27 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  plVar24 = (long *)PTR_DAT_04379560;
  lVar12 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x268), plVar23 == (long *)0x0)) {
    uVar22 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    uVar22 = (ulong)*(byte *)((long)plVar23 + 0x7f);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,&DAT_03973ffb,uVar22);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if (lVar12 != 0) {
    plVar23 = *(long **)(lVar12 + 0x228);
    if (plVar23 != (long *)0x0) {
      lVar12 = plVar23[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar10 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar6) {
          *piVar10 = *piVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar22 = ((long *)plVar23[0x3b])[1];
    if (uVar22 != 0) {
      uVar16 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar22 - 1 & 0x52daf76250fe632a;
      }
      else if (uVar22 < 0x52daf76250fe632b) {
        uVar17 = 0;
        if (uVar22 != 0) {
          uVar17 = 0x52daf76250fe632a / uVar22;
        }
        uVar17 = 0x52daf76250fe632a - uVar17 * uVar22;
      }
      else {
        uVar17 = 0x52daf76250fe632a;
      }
      plVar18 = *(long **)(*(long *)plVar23[0x3b] + uVar17 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            pbVar27 = PTR_DAT_04379558;
            plVar24 = (long *)PTR_DAT_04379560;
            pbVar25 = PTR_DAT_0437b630;
            plVar26 = (long *)PTR_DAT_0437b638;
            if (plVar18[1] == 0x52daf76250fe632a) {
              if (plVar18[2] == 0x52daf76250fe632a) goto LAB_00db1a40;
            }
            else if ((plVar18[1] & uVar22 - 1) != uVar17) goto joined_r0x00db260c;
            plVar18 = (long *)*plVar18;
            uVar16 = 0;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == 0x52daf76250fe632a) {
              if (plVar18[2] == 0x52daf76250fe632a) goto LAB_00db1a40;
            }
            else {
              if (uVar22 <= uVar16) {
                uVar7 = 0;
                if (uVar22 != 0) {
                  uVar7 = uVar16 / uVar22;
                }
                uVar16 = uVar16 - uVar7 * uVar22;
              }
              if (uVar16 != uVar17) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
joined_r0x00db260c:
          uVar16 = 0;
        }
        goto joined_r0x00db1a44;
      }
    }
    uVar16 = 0;
    goto LAB_00db1a48;
  }
  uVar16 = 0xffffffffffffffff;
LAB_00db1a90:
  bVar3 = *pbVar25;
joined_r0x00db1a7c:
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"star_lv",uVar16);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x220), plVar23 == (long *)0x0)) {
    lVar12 = -1;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = (ulong)*(byte *)((long)plVar23 + 0x11a) + (ulong)*(ushort *)(plVar23 + 0x23) * 0x3c;
    lVar14 = plVar23[0xb];
    piVar10 = (int *)(lVar14 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"playtime",lVar12);
  }
  if (((*PTR_DAT_0437b648 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b648), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437b660,PTR_DAT_0437b650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b648);
  }
  lVar12 = *(long *)PTR_DAT_0437b650;
  *(long *)PTR_DAT_0437b658 = lVar12;
  if (lVar12 == 0) {
    lVar12 = -1;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = (long)*(int *)(lVar12 + 0x350);
    bVar3 = *pbVar25;
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"tv_mobile",lVar12);
  }
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  lVar12 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar12;
  if ((lVar12 == 0) || (*(long **)(lVar12 + 0x90) == (long *)0x0)) {
LAB_00db1c18:
    uVar9 = 0;
    bVar3 = *pbVar25;
  }
  else {
    iVar8 = (**(code **)(**(long **)(lVar12 + 0x90) + 0x40))();
    if (4 < iVar8 - 1U) goto LAB_00db1c18;
    uVar9 = *(undefined8 *)(&DAT_03a786f8 + (long)(int)(iVar8 - 1U) * 8);
    bVar3 = *pbVar25;
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"controller",uVar9);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x298), plVar23 == (long *)0x0)) {
    uVar22 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar20 = 0;
    uVar22 = 1;
    do {
      local_98 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_a0 = local_a0 & 0xffffffffffffff00;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      local_88 = 0;
      FUN_02c53108(uVar22 & 0xffffffff,&local_98,&local_a0);
      if (local_a0._0_1_ != (PosixTime)0x0) {
        uVar16 = 0;
        do {
          piVar10 = (int *)FUN_02c53064(uVar22 & 0xffffffff,
                                        *(undefined2 *)((long)&local_98 + uVar16 * 2));
          if (((0x66 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
              (uVar17 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x33], uVar17 != 0)) &&
             (*(short *)((long)piVar10 + uVar17) != 0)) {
            uVar20 = (*(uint *)((long)plVar23 + uVar22 * 0x58 + 0xdc) & 1) + uVar20;
            break;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < (local_a0 & 0xff));
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x38a);
    lVar12 = plVar23[0xb];
    uVar22 = (ulong)uVar20;
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar26 = (long *)PTR_DAT_0437b638;
      pbVar25 = PTR_DAT_0437b630;
      plVar24 = (long *)PTR_DAT_04379560;
      pbVar27 = PTR_DAT_04379558;
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *PTR_DAT_0437b630;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"dex_faund",uVar22);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x298), plVar23 == (long *)0x0)) {
    uVar22 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar20 = 0;
    uVar22 = 1;
    do {
      local_98 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_a0 = local_a0 & 0xffffffffffffff00;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      local_88 = 0;
      FUN_02c53108(uVar22 & 0xffffffff,&local_98,&local_a0);
      if (local_a0._0_1_ != (PosixTime)0x0) {
        uVar16 = 0;
        do {
          piVar10 = (int *)FUN_02c53064(uVar22 & 0xffffffff,
                                        *(undefined2 *)((long)&local_98 + uVar16 * 2));
          if (((0x66 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
              (uVar17 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x33], uVar17 != 0)) &&
             (*(short *)((long)piVar10 + uVar17) != 0)) {
            if (*(short *)((long)plVar23 + uVar22 * 0x58 + 0xe6) != 0) {
              uVar20 = uVar20 + 1;
            }
            break;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < (local_a0 & 0xff));
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x38a);
    lVar12 = plVar23[0xb];
    uVar22 = (ulong)uVar20;
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar26 = (long *)PTR_DAT_0437b638;
      pbVar25 = PTR_DAT_0437b630;
      plVar24 = (long *)PTR_DAT_04379560;
      pbVar27 = PTR_DAT_04379558;
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *PTR_DAT_0437b630;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"dex_capture",uVar22);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x298), plVar23 == (long *)0x0)) {
    uVar22 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar20 = 0;
    uVar22 = 1;
    do {
      local_98 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_a0 = local_a0 & 0xffffffffffffff00;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      local_88 = 0;
      FUN_02c53108(uVar22 & 0xffffffff,&local_98,&local_a0);
      if (local_a0._0_1_ != (PosixTime)0x0) {
        uVar16 = 0;
        do {
          piVar10 = (int *)FUN_02c53064(uVar22 & 0xffffffff,
                                        *(undefined2 *)((long)&local_98 + uVar16 * 2));
          if (((0x66 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
              (uVar17 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x33], uVar17 != 0)) &&
             (*(short *)((long)piVar10 + uVar17) != 0)) {
            uVar11 = *(ushort *)((long)plVar23 + uVar22 * 0x58 + 0xe4);
            if (99 < uVar11) {
              uVar16 = FUN_011357f8(plVar23,uVar22 & 0xffffffff);
              uVar11 = 100;
              if ((uVar16 & 1) == 0) {
                uVar11 = 99;
              }
            }
            if (99 < uVar11) {
              uVar20 = uVar20 + 1;
            }
            break;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < (local_a0 & 0xff));
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x38a);
    lVar12 = plVar23[0xb];
    uVar22 = (ulong)uVar20;
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      plVar24 = (long *)PTR_DAT_04379560;
      pbVar27 = PTR_DAT_04379558;
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    bVar3 = *PTR_DAT_0437b630;
    pbVar25 = PTR_DAT_0437b630;
    plVar26 = (long *)PTR_DAT_0437b638;
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"dex_complete",uVar22);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x268), plVar23 == (long *)0x0)) {
    uVar22 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    uVar22 = (ulong)*(byte *)((long)plVar23 + 0x7d);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"gender",uVar22);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x2d0), plVar23 == (long *)0x0)) {
    uVar9 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar9 = FUN_00db5da4(plVar23[0xd]);
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,&DAT_03907748,uVar9);
  }
  FUN_00db5af8(&local_98);
  lVar12 = local_90;
  if (((*pbVar25 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if ((lVar12 != 0) && (DAT_043ad1d0 != 0)) {
    FUN_00db1574(DAT_043ad1d0,&DAT_0391cd5f,lVar12);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x2d0), plVar23 == (long *)0x0)) {
    uVar9 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar9 = FUN_00db5da4(plVar23[0x11]);
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,&DAT_038b647e,uVar9);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x2d0), plVar23 == (long *)0x0)) {
    uVar9 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar9 = FUN_00db5da4(plVar23[0x12]);
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,&DAT_0388dce8,uVar9);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x2d0), plVar23 == (long *)0x0)) {
    uVar9 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar9 = FUN_00db5da4(plVar23[0x13]);
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"bottoms",uVar9);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x2d0), plVar23 == (long *)0x0)) {
    uVar9 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar9 = FUN_00db5da4(plVar23[0x14]);
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"dress",uVar9);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x2d0), plVar23 == (long *)0x0)) {
    uVar9 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar9 = FUN_00db5da4(plVar23[0x15]);
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"shoes",uVar9);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x2d0), plVar23 == (long *)0x0)) {
    uVar9 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar9 = FUN_00db5da4(plVar23[0x10]);
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"glasses",uVar9);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar23 = *(long **)(lVar12 + 0x2d0), plVar23 == (long *)0x0)) {
    uVar9 = 0xffffffffffffffff;
    bVar3 = *pbVar25;
  }
  else {
    lVar12 = plVar23[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00db3564;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar9 = FUN_00db5da4(plVar23[0xf]);
    lVar12 = plVar23[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
      bVar3 = *pbVar25;
    }
    else {
      bVar3 = *pbVar25;
    }
  }
  if (((bVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"eyebrow_color",uVar9);
  }
  if (((*pbVar27 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *plVar24;
  *(long *)PTR_DAT_04379568 = lVar12;
  if ((lVar12 == 0) || (plVar24 = *(long **)(lVar12 + 0x2d0), plVar24 == (long *)0x0)) {
    uVar9 = 0xffffffffffffffff;
  }
  else {
    lVar12 = plVar24[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_00db3564:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = *piVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar9 = FUN_00db5da4(plVar24[0xe]);
    lVar12 = plVar24[0xb];
    piVar10 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar6) {
        *piVar10 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
  puVar2 = (uint *)((long)((long)piVar1 + uVar15) + uVar13);
  if (((*pbVar25 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar8 != 0)) {
    FUN_00100250(&LAB_00db6348,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *plVar26;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"contact",uVar9);
  }
  nn::prepo::PlayReport::Clear();
  uVar9 = nn::prepo::PlayReport::SetEventId((char *)(lVar19 + 0x58));
  if ((ulong)*puVar2 != 0) {
    lVar12 = 0;
    do {
      uVar22 = (ulong)*(uint *)((long)puVar2 + lVar12 + 4);
      if ((long)puVar21 + lVar12 + uVar22 + uVar15 + uVar4 + uVar13 + 4 != 0) {
        lVar19 = lVar12 + (uVar22 - (long)*(int *)((long)puVar2 + lVar12 + uVar22 + 4));
        if (*(ushort *)((long)puVar2 + lVar19 + 4) < 5) {
          lVar19 = 0;
        }
        else {
          uVar15 = (ulong)*(ushort *)((long)puVar2 + lVar19 + 8);
          lVar19 = 0;
          if (uVar15 != 0) {
            lVar19 = uVar22 + uVar15;
            lVar19 = (long)puVar2 +
                     lVar12 + lVar19 + (ulong)*(uint *)((long)puVar2 + lVar12 + lVar19 + 4) + 4;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00db3600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar15 = (*(code *)(&UNK_00db3604 + (ulong)(byte)(&DAT_03a786e0)[param_1] * 4))
                           (uVar9,lVar19 + 4);
        return uVar15;
      }
      lVar12 = lVar12 + 4;
    } while ((ulong)*puVar2 * 4 != lVar12);
  }
  iVar8 = nn::prepo::PlayReport::Save((Uid *)(lVar19 + 0x58));
  return (ulong)(iVar8 == 0);
LAB_00db1a40:
  uVar16 = (ulong)*(uint *)(plVar18 + 3);
joined_r0x00db1a44:
  if (plVar23 == (long *)0x0) goto LAB_00db1a90;
LAB_00db1a48:
  lVar12 = plVar23[0xb];
  piVar10 = (int *)(lVar12 + 0xc);
  do {
    iVar8 = *piVar10;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar6) {
      *piVar10 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 != 0) goto LAB_00db1a90;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  (**(code **)(*plVar23 + 0x20))(plVar23);
  bVar3 = *pbVar25;
  goto joined_r0x00db1a7c;
}


