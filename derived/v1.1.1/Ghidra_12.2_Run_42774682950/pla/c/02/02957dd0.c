/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02957dd0; name: FUN_02957dd0
 */


void FUN_02957dd0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__s;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78 [3];
  
  *param_1 = param_2[1];
  param_1[1] = param_2[2];
  memset(param_1 + 2,0,0x180);
  plVar9 = (long *)*param_2;
  puVar4 = (undefined2 *)(**(code **)(*plVar9 + 0x10))(plVar9,0xc,4);
  pbVar14 = PTR_DAT_04379520;
  if (puVar4 == (undefined2 *)0x0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *(undefined4 *)(puVar4 + 2) = 5;
    *puVar4 = 0x61f;
    *(undefined1 *)(puVar4 + 4) = 0;
    uVar15 = 4;
    uVar16 = 0xc;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  lVar10 = param_1[0x2e];
  param_1[0x2e] = puVar4;
  lVar5 = tpidr_el0;
  if (lVar10 != 0) {
    FUN_02bcbe58(&local_d8,0);
    plVar1 = (long *)param_1[0x2f];
    uVar13 = param_1[0x30];
    uVar12 = param_1[0x31];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_02957f28:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02957f28;
      FUN_02bcc824(plVar1,lVar10,uVar13,uVar12);
    }
    pbVar14 = PTR_DAT_04379520;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  param_1[0x2f] = plVar9;
  param_1[0x30] = uVar16;
  param_1[0x31] = uVar15;
  plVar9 = (long *)*param_2;
  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*pbVar14 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *puVar7 = param_2[1];
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined4 *)((long)puVar7 + 0xb) = 0;
    uVar15 = 8;
    uVar16 = 0x10;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  lVar10 = param_1[0x2a];
  param_1[0x2a] = puVar7;
  if (lVar10 != 0) {
    FUN_02bcbe58(&local_d8,0);
    plVar1 = (long *)param_1[0x2b];
    uVar13 = param_1[0x2c];
    uVar12 = param_1[0x2d];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_029580d4:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_029580d4;
      FUN_02bcc824(plVar1,lVar10,uVar13,uVar12);
    }
    pbVar14 = PTR_DAT_04379520;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  param_1[0x2b] = plVar9;
  param_1[0x2c] = uVar16;
  param_1[0x2d] = uVar15;
  FUN_008a9600(&local_d8,*param_2);
  plVar9 = local_d8;
  local_d8 = (long *)0x0;
  lVar10 = param_1[2];
  param_1[2] = plVar9;
  if (lVar10 == 0) {
    param_1[4] = local_c8;
    param_1[5] = local_c0;
    param_1[3] = local_d0;
    local_d8 = (long *)0x0;
  }
  else {
    FUN_02bcbe58(local_78,0);
    plVar9 = (long *)param_1[3];
    uVar15 = param_1[4];
    uVar16 = param_1[5];
    uVar6 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar6 & 1) == 0) {
LAB_02958208:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar15,uVar16);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02958208;
      FUN_02bcc824(plVar9,lVar10,uVar15,uVar16);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
    plVar9 = local_d8;
    param_1[3] = local_d0;
    param_1[4] = local_c8;
    param_1[5] = local_c0;
    local_d8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      FUN_02bcbe58(local_78,0);
      uVar16 = local_c0;
      uVar15 = local_c8;
      plVar1 = local_d0;
      uVar6 = (**(code **)(*local_d0 + 0xc0))(local_d0);
      if ((uVar6 & 1) == 0) {
LAB_02958324:
        (**(code **)(*plVar1 + 0x18))(plVar1,plVar9,uVar15,uVar16);
      }
      else {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02958324;
        FUN_02bcc824(plVar1,plVar9,uVar15,uVar16);
      }
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
      *(int *)(lVar5 + 0x38d480) = iVar3;
      if (iVar3 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar5 + 0x38d484) = 0;
      }
    }
  }
  plVar9 = (long *)*param_2;
  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0xd90,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*pbVar14 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *puVar7 = &PTR_LAB_04277098;
    *(undefined8 *)((long)puVar7 + 0x3c) = 0;
    *(undefined8 *)((long)puVar7 + 0x44) = 0;
    *(undefined8 *)((long)puVar7 + 0x4c) = 0;
    *(undefined8 *)((long)puVar7 + 0x54) = 0;
    *(undefined4 *)((long)puVar7 + 0x5c) = 0;
    uVar15 = 8;
    uVar16 = 0xd90;
    *(undefined8 *)((long)puVar7 + 0x9c) = 0;
    *(undefined8 *)((long)puVar7 + 0xa4) = 0;
    *(undefined8 *)((long)puVar7 + 0xac) = 0;
    *(undefined8 *)((long)puVar7 + 0xb4) = 0;
    *(undefined4 *)((long)puVar7 + 0xbc) = 0;
    *(undefined8 *)((long)puVar7 + 0xfc) = 0;
    *(undefined8 *)((long)puVar7 + 0x114) = 0;
    *(undefined4 *)((long)puVar7 + 0x11c) = 0;
    *(undefined8 *)((long)puVar7 + 0x104) = 0;
    *(undefined8 *)((long)puVar7 + 0x10c) = 0;
    *(undefined4 *)((long)puVar7 + 0x17c) = 0;
    *(undefined8 *)((long)puVar7 + 0x15c) = 0;
    *(undefined8 *)((long)puVar7 + 0x164) = 0;
    *(undefined8 *)((long)puVar7 + 0x16c) = 0;
    *(undefined8 *)((long)puVar7 + 0x174) = 0;
    *(undefined4 *)((long)puVar7 + 0x1dc) = 0;
    *(undefined8 *)((long)puVar7 + 0x1cc) = 0;
    *(undefined8 *)((long)puVar7 + 0x1d4) = 0;
    *(undefined8 *)((long)puVar7 + 0x1bc) = 0;
    *(undefined8 *)((long)puVar7 + 0x1c4) = 0;
    *(undefined4 *)((long)puVar7 + 0x23c) = 0;
    *(undefined8 *)((long)puVar7 + 0x21c) = 0;
    *(undefined8 *)((long)puVar7 + 0x224) = 0;
    *(undefined8 *)((long)puVar7 + 0x22c) = 0;
    *(undefined8 *)((long)puVar7 + 0x234) = 0;
    *(undefined4 *)((long)puVar7 + 0x29c) = 0;
    *(undefined8 *)((long)puVar7 + 0x27c) = 0;
    *(undefined8 *)((long)puVar7 + 0x284) = 0;
    *(undefined8 *)((long)puVar7 + 0x28c) = 0;
    *(undefined8 *)((long)puVar7 + 0x294) = 0;
    *(undefined4 *)((long)puVar7 + 0x2fc) = 0;
    *(undefined8 *)((long)puVar7 + 0x2dc) = 0;
    *(undefined8 *)((long)puVar7 + 0x2e4) = 0;
    *(undefined8 *)((long)puVar7 + 0x2ec) = 0;
    *(undefined8 *)((long)puVar7 + 0x2f4) = 0;
    *(undefined4 *)((long)puVar7 + 0x35c) = 0;
    *(undefined8 *)((long)puVar7 + 0x34c) = 0;
    *(undefined8 *)((long)puVar7 + 0x354) = 0;
    *(undefined8 *)((long)puVar7 + 0x33c) = 0;
    *(undefined8 *)((long)puVar7 + 0x344) = 0;
    *(undefined4 *)((long)puVar7 + 0x3bc) = 0;
    *(undefined8 *)((long)puVar7 + 0x3ac) = 0;
    *(undefined8 *)((long)puVar7 + 0x3b4) = 0;
    *(undefined8 *)((long)puVar7 + 0x39c) = 0;
    *(undefined8 *)((long)puVar7 + 0x3a4) = 0;
    *(undefined4 *)((long)puVar7 + 0x41c) = 0;
    *(undefined8 *)((long)puVar7 + 0x40c) = 0;
    *(undefined8 *)((long)puVar7 + 0x414) = 0;
    *(undefined8 *)((long)puVar7 + 0x3fc) = 0;
    *(undefined8 *)((long)puVar7 + 0x404) = 0;
    *(undefined4 *)((long)puVar7 + 0x47c) = 0;
    *(undefined8 *)((long)puVar7 + 0x46c) = 0;
    *(undefined8 *)((long)puVar7 + 0x474) = 0;
    *(undefined8 *)((long)puVar7 + 0x45c) = 0;
    *(undefined8 *)((long)puVar7 + 0x464) = 0;
    *(undefined4 *)((long)puVar7 + 0x4dc) = 0;
    *(undefined8 *)((long)puVar7 + 0x4cc) = 0;
    *(undefined8 *)((long)puVar7 + 0x4d4) = 0;
    *(undefined8 *)((long)puVar7 + 0x4bc) = 0;
    *(undefined8 *)((long)puVar7 + 0x4c4) = 0;
    *(undefined4 *)((long)puVar7 + 0x53c) = 0;
    *(undefined8 *)((long)puVar7 + 0x52c) = 0;
    *(undefined8 *)((long)puVar7 + 0x534) = 0;
    *(undefined8 *)((long)puVar7 + 0x51c) = 0;
    *(undefined8 *)((long)puVar7 + 0x524) = 0;
    *(undefined4 *)((long)puVar7 + 0x59c) = 0;
    *(undefined8 *)((long)puVar7 + 0x58c) = 0;
    *(undefined8 *)((long)puVar7 + 0x594) = 0;
    *(undefined8 *)((long)puVar7 + 0x57c) = 0;
    *(undefined8 *)((long)puVar7 + 0x584) = 0;
    *(undefined4 *)((long)puVar7 + 0x5fc) = 0;
    *(undefined8 *)((long)puVar7 + 0x5ec) = 0;
    *(undefined8 *)((long)puVar7 + 0x5f4) = 0;
    *(undefined8 *)((long)puVar7 + 0x5dc) = 0;
    *(undefined8 *)((long)puVar7 + 0x5e4) = 0;
    *(undefined4 *)((long)puVar7 + 0x65c) = 0;
    *(undefined8 *)((long)puVar7 + 0x64c) = 0;
    *(undefined8 *)((long)puVar7 + 0x654) = 0;
    *(undefined8 *)((long)puVar7 + 0x63c) = 0;
    *(undefined8 *)((long)puVar7 + 0x644) = 0;
    *(undefined4 *)((long)puVar7 + 0x6bc) = 0;
    *(undefined8 *)((long)puVar7 + 0x6ac) = 0;
    *(undefined8 *)((long)puVar7 + 0x6b4) = 0;
    *(undefined8 *)((long)puVar7 + 0x69c) = 0;
    *(undefined8 *)((long)puVar7 + 0x6a4) = 0;
    *(undefined4 *)((long)puVar7 + 0x71c) = 0;
    *(undefined8 *)((long)puVar7 + 0x70c) = 0;
    *(undefined8 *)((long)puVar7 + 0x714) = 0;
    *(undefined8 *)((long)puVar7 + 0x6fc) = 0;
    *(undefined8 *)((long)puVar7 + 0x704) = 0;
    *(undefined4 *)((long)puVar7 + 0x77c) = 0;
    *(undefined8 *)((long)puVar7 + 0x76c) = 0;
    *(undefined8 *)((long)puVar7 + 0x774) = 0;
    *(undefined8 *)((long)puVar7 + 0x75c) = 0;
    *(undefined8 *)((long)puVar7 + 0x764) = 0;
    *(undefined4 *)((long)puVar7 + 0x7dc) = 0;
    *(undefined8 *)((long)puVar7 + 0x7cc) = 0;
    *(undefined8 *)((long)puVar7 + 0x7d4) = 0;
    *(undefined8 *)((long)puVar7 + 0x7bc) = 0;
    *(undefined8 *)((long)puVar7 + 0x7c4) = 0;
    *(undefined4 *)((long)puVar7 + 0x83c) = 0;
    *(undefined8 *)((long)puVar7 + 0x82c) = 0;
    *(undefined8 *)((long)puVar7 + 0x834) = 0;
    *(undefined8 *)((long)puVar7 + 0x81c) = 0;
    *(undefined8 *)((long)puVar7 + 0x824) = 0;
    *(undefined4 *)((long)puVar7 + 0x89c) = 0;
    *(undefined8 *)((long)puVar7 + 0x88c) = 0;
    *(undefined8 *)((long)puVar7 + 0x894) = 0;
    *(undefined8 *)((long)puVar7 + 0x87c) = 0;
    *(undefined8 *)((long)puVar7 + 0x884) = 0;
    *(undefined4 *)((long)puVar7 + 0x8fc) = 0;
    *(undefined8 *)((long)puVar7 + 0x8ec) = 0;
    *(undefined8 *)((long)puVar7 + 0x8f4) = 0;
    *(undefined8 *)((long)puVar7 + 0x8dc) = 0;
    *(undefined8 *)((long)puVar7 + 0x8e4) = 0;
    *(undefined4 *)((long)puVar7 + 0x95c) = 0;
    *(undefined8 *)((long)puVar7 + 0x94c) = 0;
    *(undefined8 *)((long)puVar7 + 0x954) = 0;
    *(undefined8 *)((long)puVar7 + 0x93c) = 0;
    *(undefined8 *)((long)puVar7 + 0x944) = 0;
    *(undefined4 *)((long)puVar7 + 0x9bc) = 0;
    *(undefined8 *)((long)puVar7 + 0x9ac) = 0;
    *(undefined8 *)((long)puVar7 + 0x9b4) = 0;
    *(undefined8 *)((long)puVar7 + 0x99c) = 0;
    *(undefined8 *)((long)puVar7 + 0x9a4) = 0;
    *(undefined4 *)((long)puVar7 + 0xa1c) = 0;
    *(undefined8 *)((long)puVar7 + 0xa0c) = 0;
    *(undefined8 *)((long)puVar7 + 0xa14) = 0;
    *(undefined8 *)((long)puVar7 + 0x9fc) = 0;
    *(undefined8 *)((long)puVar7 + 0xa04) = 0;
    *(undefined4 *)((long)puVar7 + 0xa7c) = 0;
    *(undefined8 *)((long)puVar7 + 0xa6c) = 0;
    *(undefined8 *)((long)puVar7 + 0xa74) = 0;
    *(undefined8 *)((long)puVar7 + 0xa5c) = 0;
    *(undefined8 *)((long)puVar7 + 0xa64) = 0;
    *(undefined4 *)((long)puVar7 + 0xadc) = 0;
    *(undefined8 *)((long)puVar7 + 0xacc) = 0;
    *(undefined8 *)((long)puVar7 + 0xad4) = 0;
    *(undefined8 *)((long)puVar7 + 0xabc) = 0;
    *(undefined8 *)((long)puVar7 + 0xac4) = 0;
    *(undefined4 *)((long)puVar7 + 0xb3c) = 0;
    *(undefined8 *)((long)puVar7 + 0xb2c) = 0;
    *(undefined8 *)((long)puVar7 + 0xb34) = 0;
    *(undefined8 *)((long)puVar7 + 0xb1c) = 0;
    *(undefined8 *)((long)puVar7 + 0xb24) = 0;
    *(undefined4 *)((long)puVar7 + 0xb9c) = 0;
    *(undefined8 *)((long)puVar7 + 0xb8c) = 0;
    *(undefined8 *)((long)puVar7 + 0xb94) = 0;
    *(undefined8 *)((long)puVar7 + 0xb7c) = 0;
    *(undefined8 *)((long)puVar7 + 0xb84) = 0;
    *(undefined4 *)((long)puVar7 + 0xbfc) = 0;
    *(undefined8 *)((long)puVar7 + 0xbec) = 0;
    *(undefined8 *)((long)puVar7 + 0xbf4) = 0;
    *(undefined8 *)((long)puVar7 + 0xbdc) = 0;
    *(undefined8 *)((long)puVar7 + 0xbe4) = 0;
    *(undefined4 *)((long)puVar7 + 0xc5c) = 0;
    *(undefined8 *)((long)puVar7 + 0xc4c) = 0;
    *(undefined8 *)((long)puVar7 + 0xc54) = 0;
    *(undefined8 *)((long)puVar7 + 0xc3c) = 0;
    *(undefined8 *)((long)puVar7 + 0xc44) = 0;
    *(undefined4 *)((long)puVar7 + 0xcbc) = 0;
    *(undefined8 *)((long)puVar7 + 0xcac) = 0;
    *(undefined8 *)((long)puVar7 + 0xcb4) = 0;
    *(undefined8 *)((long)puVar7 + 0xc9c) = 0;
    *(undefined8 *)((long)puVar7 + 0xca4) = 0;
    *(undefined4 *)((long)puVar7 + 0xd1c) = 0;
    *(undefined8 *)((long)puVar7 + 0xd0c) = 0;
    *(undefined8 *)((long)puVar7 + 0xd14) = 0;
    *(undefined8 *)((long)puVar7 + 0xcfc) = 0;
    *(undefined8 *)((long)puVar7 + 0xd04) = 0;
    *(undefined4 *)((long)puVar7 + 0xd7c) = 0;
    *(undefined8 *)((long)puVar7 + 0xd6c) = 0;
    *(undefined8 *)((long)puVar7 + 0xd74) = 0;
    *(undefined8 *)((long)puVar7 + 0xd5c) = 0;
    *(undefined8 *)((long)puVar7 + 0xd64) = 0;
    *(undefined1 *)(puVar7 + 0x1b1) = 0;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar11 = (undefined8 *)param_1[0x1e];
  param_1[0x1e] = puVar7;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_d8,0);
    (**(code **)*puVar11)(puVar11);
    plVar1 = (long *)param_1[0x1f];
    uVar13 = param_1[0x20];
    uVar12 = param_1[0x21];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_02958734:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar11,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02958734;
      FUN_02bcc824(plVar1,puVar11,uVar13,uVar12);
    }
    pbVar14 = PTR_DAT_04379520;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  param_1[0x1f] = plVar9;
  param_1[0x20] = uVar16;
  param_1[0x21] = uVar15;
  plVar9 = (long *)*param_2;
  __s = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,0x1d00,8);
  if (__s == (void *)0x0) {
    plVar9 = (long *)0x0;
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    if (((*pbVar14 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
    uVar15 = 0x1d00;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    memset(__s,0,0x1d00);
    uVar16 = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  lVar10 = param_1[0x26];
  param_1[0x26] = __s;
  if (lVar10 != 0) {
    FUN_02bcbe58(&local_d8,0);
    FUN_00885a14(lVar10);
    plVar1 = (long *)param_1[0x27];
    uVar13 = param_1[0x28];
    uVar12 = param_1[0x29];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_029588ec:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_029588ec;
      FUN_02bcc824(plVar1,lVar10,uVar13,uVar12);
    }
    pbVar14 = PTR_DAT_04379520;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  param_1[0x27] = plVar9;
  param_1[0x28] = uVar15;
  param_1[0x29] = uVar16;
  plVar9 = (long *)*param_2;
  local_78[0] = plVar9;
  lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,0xd0,8);
  if (lVar10 == 0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*pbVar14 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    FUN_029cc384(lVar10,local_78);
    uVar15 = 8;
    uVar16 = 0xd0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  puVar7 = (undefined8 *)param_1[0x22];
  param_1[0x22] = lVar10;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_d8,0);
    (**(code **)*puVar7)(puVar7);
    plVar1 = (long *)param_1[0x23];
    uVar13 = param_1[0x24];
    uVar12 = param_1[0x25];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_02958aac:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar7,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02958aac;
      FUN_02bcc824(plVar1,puVar7,uVar13,uVar12);
    }
    pbVar14 = PTR_DAT_04379520;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
    lVar10 = param_1[0x22];
  }
  param_1[0x23] = plVar9;
  param_1[0x24] = uVar16;
  local_d0 = (long *)*param_1;
  param_1[0x25] = uVar15;
  plVar9 = (long *)*param_2;
  local_c8 = param_1[1];
  local_c0 = param_1[0x1e];
  local_b8 = (undefined8 *)param_1[0x2a];
  local_b0 = param_1[0x26];
  local_d8 = plVar9;
  local_a8 = lVar10;
  lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,0x80,8);
  if (lVar10 == 0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*pbVar14 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    FUN_029991e8(lVar10,&local_d8);
    uVar15 = 8;
    uVar16 = 0x80;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = param_1[0x16];
  param_1[0x16] = lVar10;
  if (lVar8 != 0) {
    FUN_02bcbe58(local_78,0);
    FUN_008a5ccc(lVar8);
    plVar1 = (long *)param_1[0x17];
    uVar13 = param_1[0x18];
    uVar12 = param_1[0x19];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_02958c8c:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02958c8c;
      FUN_02bcc824(plVar1,lVar8,uVar13,uVar12);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
    lVar10 = param_1[0x16];
  }
  param_1[0x17] = plVar9;
  param_1[0x18] = uVar16;
  param_1[0x19] = uVar15;
  plVar9 = (long *)*param_2;
  uVar15 = *param_1;
  uVar16 = param_1[1];
  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x20,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar7 = &PTR_LAB_04276ea0;
    puVar7[1] = uVar15;
    puVar7[2] = lVar10;
    puVar7[3] = uVar16;
    uVar15 = 8;
    uVar16 = 0x20;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  puVar11 = (undefined8 *)param_1[0x1a];
  param_1[0x1a] = puVar7;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_d8,0);
    (**(code **)*puVar11)(puVar11);
    plVar1 = (long *)param_1[0x1b];
    uVar13 = param_1[0x1c];
    uVar12 = param_1[0x1d];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_02958e50:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar11,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02958e50;
      FUN_02bcc824(plVar1,puVar11,uVar13,uVar12);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  param_1[0x1b] = plVar9;
  param_1[0x1c] = uVar16;
  uVar13 = param_1[0x16];
  param_1[0x1d] = uVar15;
  plVar9 = (long *)*param_2;
  uVar15 = *param_1;
  uVar16 = param_1[1];
  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x20,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *puVar7 = &PTR_LAB_04279678;
    puVar7[1] = uVar15;
    puVar7[2] = uVar16;
    puVar7[3] = uVar13;
    uVar15 = 8;
    uVar16 = 0x20;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar11 = (undefined8 *)param_1[0x12];
  param_1[0x12] = puVar7;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_d8,0);
    (**(code **)*puVar11)(puVar11);
    plVar1 = (long *)param_1[0x13];
    uVar13 = param_1[0x14];
    uVar12 = param_1[0x15];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_02959014:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar11,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02959014;
      FUN_02bcc824(plVar1,puVar11,uVar13,uVar12);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
    puVar7 = (undefined8 *)param_1[0x12];
  }
  param_1[0x13] = plVar9;
  param_1[0x14] = uVar16;
  uVar13 = *param_1;
  param_1[0x15] = uVar15;
  plVar9 = (long *)*param_2;
  uVar15 = param_1[1];
  uVar16 = param_1[2];
  puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x28,8);
  if (puVar11 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *puVar11 = &PTR_LAB_0427d0d0;
    puVar11[1] = uVar13;
    puVar11[2] = uVar15;
    puVar11[3] = uVar16;
    puVar11[4] = puVar7;
    uVar15 = 8;
    uVar16 = 0x28;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar7 = (undefined8 *)param_1[10];
  param_1[10] = puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_d8,0);
    (**(code **)*puVar7)(puVar7);
    plVar1 = (long *)param_1[0xb];
    uVar13 = param_1[0xc];
    uVar12 = param_1[0xd];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_029591e0:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar7,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_029591e0;
      FUN_02bcc824(plVar1,puVar7,uVar13,uVar12);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
    puVar11 = (undefined8 *)param_1[10];
  }
  param_1[0xb] = plVar9;
  param_1[0xc] = uVar16;
  uVar16 = param_1[2];
  param_1[0xd] = uVar15;
  plVar9 = (long *)*param_2;
  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x18,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0295a798;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
    uVar15 = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    puVar7[2] = puVar11;
    *puVar7 = &PTR_LAB_0427d0f0;
    puVar7[1] = uVar16;
    uVar16 = 0x18;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar11 = (undefined8 *)param_1[0xe];
  param_1[0xe] = puVar7;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_d8,0);
    (**(code **)*puVar11)(puVar11);
    plVar1 = (long *)param_1[0xf];
    uVar13 = param_1[0x10];
    uVar12 = param_1[0x11];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_029593a4:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar11,uVar13,uVar12);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_029593a4;
      FUN_02bcc824(plVar1,puVar11,uVar13,uVar12);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
    puVar7 = (undefined8 *)param_1[0xe];
  }
  local_d8 = (long *)*param_1;
  param_1[0xf] = plVar9;
  param_1[0x10] = uVar16;
  param_1[0x11] = uVar15;
  local_d0 = (long *)param_1[1];
  local_c8 = param_1[2];
  local_c0 = param_1[10];
  local_b0 = param_1[0x16];
  local_a8 = param_1[0x1a];
  local_a0 = param_1[0x22];
  local_98 = param_1[0x1e];
  local_90 = param_1[0x2a];
  local_88 = param_1[0x2e];
  uStack_80 = param_1[0x26];
  local_b8 = puVar7;
  FUN_0299e034(uStack_80,*param_2,&local_d8);
  plVar9 = (long *)*param_2;
  uVar15 = *param_1;
  uVar16 = param_1[1];
  uVar13 = param_1[2];
  uVar12 = param_1[0x26];
  puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x20,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_0295a798:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *puVar7 = uVar15;
    puVar7[1] = uVar16;
    puVar7[2] = uVar13;
    puVar7[3] = uVar12;
    uVar15 = 8;
    uVar16 = 0x20;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  lVar10 = param_1[6];
  param_1[6] = puVar7;
  if (lVar10 == 0) goto LAB_02959654;
  FUN_02bcbe58(&local_d8,0);
  plVar1 = (long *)param_1[7];
  uVar13 = param_1[8];
  uVar12 = param_1[9];
  uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar6 & 1) == 0) {
LAB_029595b8:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar13,uVar12);
  }
  else {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_029595b8;
    FUN_02bcc824(plVar1,lVar10,uVar13,uVar12);
  }
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
LAB_02959654:
  param_1[7] = plVar9;
  param_1[8] = uVar16;
  param_1[9] = uVar15;
  return;
}


