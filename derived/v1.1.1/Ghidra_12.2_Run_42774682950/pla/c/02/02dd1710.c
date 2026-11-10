/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd1710; name: FUN_02dd1710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02dd1710(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 local_1a0;
  long *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  long *local_178;
  ulong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_ac;
  undefined4 local_a4;
  
  puVar1 = PTR_DAT_0437a648;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  puVar9 = PTR_DAT_0437a658;
  puVar2 = PTR_DAT_0437a650;
  lVar17 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar17;
  FUN_030e95d0(&local_1a0);
  local_130 = 0;
  uStack_118 = _UNK_038890d8;
  local_120 = _DAT_038890d0;
  local_198 = *(long **)(lVar17 + 0x228);
  local_ac = 0x3f6666663e99999a;
  local_a4 = 2;
  lVar17 = tpidr_el0;
  lVar15 = *(long *)(lVar17 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar15;
  }
  plVar11 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
  uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,0x990,0);
  FUN_03028830(uVar12,&local_1a0);
  FUN_02bf0bf4(&local_1a0);
  plVar11 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar12;
  if ((plVar11 == (long *)0x0) || (plVar11[1] == 0)) {
LAB_02dd17fc:
    bVar4 = *puVar1;
  }
  else {
    plVar5 = plVar11 + 2;
    do {
      lVar15 = *plVar5;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar8) {
        *plVar5 = lVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar15 + -1 != 0) goto LAB_02dd17fc;
    (**(code **)(*plVar11 + 0x18))();
    bVar4 = *puVar1;
  }
  if (((bVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar15 = *(long *)puVar2;
  *(long *)puVar9 = lVar15;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(*(long *)(lVar15 + 0x230) + 0x118));
  puVar13 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
  pbVar21 = PTR_DAT_04379520;
  if (puVar13 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar12 = 0;
    uVar19 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02dd2e20;
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = param_3;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[4] = 0;
    puVar13[6] = 0;
    puVar13[7] = param_3;
    uVar19 = 8;
    uVar12 = 0x68;
    *(undefined4 *)(puVar13 + 5) = 0;
    *(undefined4 *)(puVar13 + 10) = 0;
    puVar13[0xb] = 0;
    puVar13[2] = param_3;
    puVar13[3] = 0x3fffffffffffffff;
    puVar13[8] = 0x3fffffffffffffff;
    puVar13[9] = 0;
    *(undefined4 *)(puVar13 + 0xc) = 0x3f800000;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    plVar11 = param_3;
  }
  lVar15 = *(long *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar13;
  if (lVar15 != 0) {
    FUN_02bcbe58(&local_1a0,0);
    FUN_02dd829c(lVar15);
    plVar5 = *(long **)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar20 = *(undefined8 *)(param_1 + 0x30);
    uVar14 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar14 & 1) == 0) {
LAB_02dd1950:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar15,uVar6,uVar20);
    }
    else {
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_02dd1950;
      FUN_02bcc824(plVar5,lVar15,uVar6,uVar20);
    }
    pbVar21 = PTR_DAT_04379520;
    if (*(char *)(lVar17 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar17 + 0x38d488) = 1;
      *(undefined8 *)(lVar17 + 0x38d478) = 0;
      *(undefined8 *)(lVar17 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar10 = *(int *)(lVar17 + 0x38d480) + -1;
    *(int *)(lVar17 + 0x38d480) = iVar10;
    if (iVar10 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar17 + 0x38d484) = 0;
    }
  }
  *(long **)(param_1 + 0x20) = plVar11;
  *(undefined8 *)(param_1 + 0x28) = uVar12;
  *(undefined8 *)(param_1 + 0x30) = uVar19;
  puVar13 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
  if (puVar13 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar12 = 0;
    uVar19 = 0;
  }
  else {
    if (((*pbVar21 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02dd2e20;
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = param_3;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[4] = 0;
    puVar13[6] = 0;
    puVar13[7] = param_3;
    uVar19 = 8;
    uVar12 = 0x68;
    *(undefined4 *)(puVar13 + 5) = 0;
    *(undefined4 *)(puVar13 + 10) = 0;
    puVar13[0xb] = 0;
    puVar13[2] = param_3;
    puVar13[3] = 0x3fffffffffffffff;
    puVar13[8] = 0x3fffffffffffffff;
    puVar13[9] = 0;
    *(undefined4 *)(puVar13 + 0xc) = 0x3f800000;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    plVar11 = param_3;
  }
  lVar15 = *(long *)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x38) = puVar13;
  if (lVar15 != 0) {
    FUN_02bcbe58(&local_1a0,0);
    FUN_02dd8504(lVar15);
    plVar5 = *(long **)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar20 = *(undefined8 *)(param_1 + 0x50);
    uVar14 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar14 & 1) == 0) {
LAB_02dd1b20:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar15,uVar6,uVar20);
    }
    else {
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_02dd1b20;
      FUN_02bcc824(plVar5,lVar15,uVar6,uVar20);
    }
    pbVar21 = PTR_DAT_04379520;
    if (*(char *)(lVar17 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar17 + 0x38d488) = 1;
      *(undefined8 *)(lVar17 + 0x38d478) = 0;
      *(undefined8 *)(lVar17 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar10 = *(int *)(lVar17 + 0x38d480) + -1;
    *(int *)(lVar17 + 0x38d480) = iVar10;
    if (iVar10 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar17 + 0x38d484) = 0;
    }
  }
  *(long **)(param_1 + 0x40) = plVar11;
  *(undefined8 *)(param_1 + 0x48) = uVar12;
  *(undefined8 *)(param_1 + 0x50) = uVar19;
  puVar13 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  if (puVar13 == (undefined8 *)0x0) {
    local_190 = (undefined8 *)0x0;
    local_188 = (undefined8 *)0x0;
    local_198 = (long *)0x0;
  }
  else {
    if (((*pbVar21 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02dd2e20;
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = param_3;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = param_3;
    *(undefined4 *)(puVar13 + 6) = 0;
    puVar13[4] = 0x1fffffffffffffff;
    puVar13[5] = 0;
    local_190 = (undefined8 *)&DAT_00000038;
    local_188 = (undefined8 *)&DAT_00000008;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    local_198 = param_3;
  }
  local_1a0 = 0;
  lVar15 = *(long *)(param_1 + 0x98);
  *(undefined8 **)(param_1 + 0x98) = puVar13;
  if (lVar15 == 0) {
    *(undefined8 **)(param_1 + 0xa8) = local_190;
    *(undefined8 **)(param_1 + 0xb0) = local_188;
    *(long **)(param_1 + 0xa0) = local_198;
    local_1a0 = 0;
  }
  else {
    FUN_02bfad10(param_1 + 0xa0);
    lVar15 = local_1a0;
    *(long **)(param_1 + 0xa0) = local_198;
    *(undefined8 **)(param_1 + 0xa8) = local_190;
    *(undefined8 **)(param_1 + 0xb0) = local_188;
    local_1a0 = 0;
    if (lVar15 != 0) {
      FUN_02bfad10(&local_198);
    }
  }
  puVar13 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  if (puVar13 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar12 = 0;
    uVar19 = 0;
  }
  else {
    if (((*pbVar21 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02dd2e20;
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = param_3;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    *(undefined4 *)(puVar13 + 6) = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    uVar19 = 8;
    puVar13[2] = 0;
    puVar13[3] = param_3;
    uVar12 = 0x38;
    puVar13[4] = 0x555555555555555;
    puVar13[5] = 0;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    plVar11 = param_3;
  }
  lVar15 = *(long *)(param_1 + 0x58);
  *(undefined8 **)(param_1 + 0x58) = puVar13;
  if (lVar15 != 0) {
    FUN_02bcbe58(&local_1a0,0);
    FUN_02dd876c(lVar15);
    plVar5 = *(long **)(param_1 + 0x60);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    uVar20 = *(undefined8 *)(param_1 + 0x70);
    uVar14 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar14 & 1) == 0) {
LAB_02dd1dc0:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar15,uVar6,uVar20);
    }
    else {
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_02dd1dc0;
      FUN_02bcc824(plVar5,lVar15,uVar6,uVar20);
    }
    pbVar21 = PTR_DAT_04379520;
    if (*(char *)(lVar17 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar17 + 0x38d488) = 1;
      *(undefined8 *)(lVar17 + 0x38d478) = 0;
      *(undefined8 *)(lVar17 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar10 = *(int *)(lVar17 + 0x38d480) + -1;
    *(int *)(lVar17 + 0x38d480) = iVar10;
    if (iVar10 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar17 + 0x38d484) = 0;
    }
  }
  *(long **)(param_1 + 0x60) = plVar11;
  *(undefined8 *)(param_1 + 0x68) = uVar12;
  *(undefined8 *)(param_1 + 0x70) = uVar19;
  puVar13 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  if (puVar13 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar12 = 0;
    uVar19 = 0;
  }
  else {
    if (((*pbVar21 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02dd2e20;
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = param_3;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    *(undefined4 *)(puVar13 + 6) = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    uVar19 = 8;
    puVar13[2] = 0;
    puVar13[3] = param_3;
    uVar12 = 0x38;
    puVar13[4] = 0x555555555555555;
    puVar13[5] = 0;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    plVar11 = param_3;
  }
  lVar15 = *(long *)(param_1 + 0x78);
  *(undefined8 **)(param_1 + 0x78) = puVar13;
  if (lVar15 != 0) {
    FUN_02bcbe58(&local_1a0,0);
    FUN_02dd876c(lVar15);
    plVar5 = *(long **)(param_1 + 0x80);
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    uVar20 = *(undefined8 *)(param_1 + 0x90);
    uVar14 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar14 & 1) == 0) {
LAB_02dd1f7c:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar15,uVar6,uVar20);
    }
    else {
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_02dd1f7c;
      FUN_02bcc824(plVar5,lVar15,uVar6,uVar20);
    }
    pbVar21 = PTR_DAT_04379520;
    if (*(char *)(lVar17 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar17 + 0x38d488) = 1;
      *(undefined8 *)(lVar17 + 0x38d478) = 0;
      *(undefined8 *)(lVar17 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar10 = *(int *)(lVar17 + 0x38d480) + -1;
    *(int *)(lVar17 + 0x38d480) = iVar10;
    if (iVar10 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar17 + 0x38d484) = 0;
    }
  }
  *(long **)(param_1 + 0x80) = plVar11;
  *(undefined8 *)(param_1 + 0x88) = uVar12;
  *(undefined8 *)(param_1 + 0x90) = uVar19;
  puVar13 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  if (puVar13 == (undefined8 *)0x0) {
    param_3 = (long *)0x0;
    uVar12 = 0;
    uVar19 = 0;
  }
  else {
    if (((*pbVar21 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_02dd2e20:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = param_3;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    *puVar13 = 0;
    puVar13[1] = 0;
    *(undefined4 *)(puVar13 + 6) = 0;
    puVar13[2] = 0;
    puVar13[3] = param_3;
    uVar19 = 8;
    puVar13[4] = 0x249249249249249;
    puVar13[5] = 0;
    uVar12 = 0x38;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  }
  lVar15 = *(long *)(param_1 + 0xb8);
  *(undefined8 **)(param_1 + 0xb8) = puVar13;
  if (lVar15 != 0) {
    FUN_02bcbe58(&local_1a0,0);
    FUN_02dd892c(lVar15);
    plVar11 = *(long **)(param_1 + 0xc0);
    uVar6 = *(undefined8 *)(param_1 + 200);
    uVar20 = *(undefined8 *)(param_1 + 0xd0);
    uVar14 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar14 & 1) == 0) {
LAB_02dd213c:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar15,uVar6,uVar20);
    }
    else {
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_02dd213c;
      FUN_02bcc824(plVar11,lVar15,uVar6,uVar20);
    }
    if (*(char *)(lVar17 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar17 + 0x38d488) = 1;
      *(undefined8 *)(lVar17 + 0x38d478) = 0;
      *(undefined8 *)(lVar17 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar10 = *(int *)(lVar17 + 0x38d480) + -1;
    *(int *)(lVar17 + 0x38d480) = iVar10;
    if (iVar10 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar17 + 0x38d484) = 0;
    }
  }
  *(long **)(param_1 + 0xc0) = param_3;
  *(undefined8 *)(param_1 + 200) = uVar12;
  *(undefined8 *)(param_1 + 0xd0) = uVar19;
  lVar15 = *(long *)(param_2 + 8);
  if (lVar15 != 0) {
    local_1a0 = *(undefined8 *)(lVar15 + 0x270);
    local_198 = (long *)CONCAT44(local_198._4_4_,*(undefined4 *)(lVar15 + 0x278));
    local_190 = (undefined8 *)0x0;
    local_188 = (undefined8 *)0x0;
    local_178 = *(long **)(lVar15 + 0x298);
    local_170 = *(ulong *)(lVar15 + 0x2a0);
    local_168 = *(undefined8 *)(lVar15 + 0x2a8);
    uStack_160 = *(undefined8 *)(lVar15 + 0x2b0);
    local_180 = (undefined8 *)0x0;
    lVar16 = *(long *)(lVar15 + 0x288) - *(long *)(lVar15 + 0x280);
    if (lVar16 != 0) {
      uVar14 = local_170;
      if (0x7ffffffffffffffe < local_170) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < (ulong)((lVar16 >> 5) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      puVar13 = (undefined8 *)(**(code **)(*local_178 + 0x10))(local_178,lVar16,8);
      if (puVar13 == (undefined8 *)0x0) {
        (**(code **)(*local_178 + 0xb8))();
      }
      local_180 = puVar13 + (lVar16 >> 5) * 4;
      puVar22 = *(undefined8 **)(lVar15 + 0x280);
      puVar23 = *(undefined8 **)(lVar15 + 0x288);
      local_190 = puVar13;
      local_188 = puVar13;
      if (puVar22 != puVar23) {
        puVar1 = PTR_DAT_0437ace8 + 0x10;
        puVar2 = PTR_DAT_043885b8 + 0x10;
        do {
          plVar11 = local_178;
          puVar13 = local_188;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0
             )) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar15 != 0) {
            if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02dd2e20;
            *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar11;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          }
          *puVar13 = *puVar22;
          puVar13[1] = puVar22[1];
          puVar13[2] = puVar22[2];
          plVar11 = (long *)puVar22[3];
          puVar13[3] = plVar11;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x18))();
          }
          uVar12 = puVar22[4];
          *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(puVar22 + 5);
          puVar13[4] = uVar12;
          puVar13[6] = puVar1;
          FUN_00937ea0(puVar13 + 7,puVar22 + 7);
          lVar16 = puVar22[9];
          puVar13[9] = lVar16;
          if (lVar16 != 0) {
            piVar3 = (int *)(lVar16 + 0x50);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = *piVar3 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          lVar16 = puVar22[10];
          puVar13[10] = lVar16;
          if (lVar16 != 0) {
            piVar3 = (int *)(lVar16 + 0x50);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = *piVar3 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          lVar16 = puVar22[0xb];
          puVar13[0xb] = lVar16;
          if (lVar16 != 0) {
            lVar16 = *(long *)(lVar16 + 0x58);
            if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar16 + 0x10) == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
              *(undefined8 *)(lVar16 + 0x10) = uVar12;
            }
            piVar3 = (int *)(lVar16 + 0xc);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = *piVar3 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          puVar13[6] = puVar2;
          if (lVar15 != 0) {
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
          }
          puVar22 = puVar22 + 0xc;
          local_188 = local_188 + 0xc;
        } while (puVar22 != puVar23);
      }
    }
    puVar23 = local_188;
    *(undefined4 *)(param_1 + 0xe4) = (undefined4)local_1a0;
    *(undefined4 *)(param_1 + 0xe8) = local_1a0._4_4_;
    *(undefined4 *)(param_1 + 0xec) = local_198._0_4_;
    puVar22 = local_190;
    for (puVar13 = local_190; puVar13 != puVar23; puVar13 = puVar13 + 0xc) {
      local_190 = puVar22;
      FUN_02dd3c5c(*(undefined4 *)((long)puVar13 + 0x24),*(undefined4 *)(puVar13 + 5),param_1,
                   puVar13 + 6,*(undefined4 *)(puVar13 + 4));
      puVar22 = local_190;
    }
    puVar13 = puVar22;
    puVar23 = local_188;
    plVar11 = local_178;
    if (puVar22 != (undefined8 *)0x0) {
      while (local_190 = puVar13, local_178 = plVar11, puVar23 != puVar22) {
        puVar18 = puVar23 + -0xc;
        FUN_00936104(puVar23 + -6);
        plVar5 = puVar23 + -9;
        puVar13 = local_190;
        puVar23 = puVar18;
        plVar11 = local_178;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x20))();
          puVar13 = local_190;
          plVar11 = local_178;
        }
      }
      lVar15 = (long)local_180 - (long)puVar13;
      local_188 = puVar22;
      uVar14 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar14 & 1) != 0) {
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar11,puVar13,lVar15,8);
          goto LAB_02dd2590;
        }
      }
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar13,lVar15,8);
    }
  }
LAB_02dd2590:
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x128) = 0x3f80000000000001;
  *(undefined4 *)(param_1 + 0xf0) = 1;
  return;
}


