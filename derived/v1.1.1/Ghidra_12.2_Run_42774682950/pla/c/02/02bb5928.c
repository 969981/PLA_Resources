/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb5928; name: FUN_02bb5928
 */


void FUN_02bb5928(long param_1,uint param_2,byte param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a0 = *(undefined8 *)(param_1 + 8);
  lVar14 = *(long *)(param_1 + 400);
  if (lVar14 == 0) {
    FUN_02bb93c0(&local_98,local_a0,&local_a0);
    lVar14 = local_98;
    local_98 = 0;
    lVar8 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar14;
    if (lVar8 == 0) {
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      FUN_02bad2b8(lVar8);
      plVar12 = *(long **)(param_1 + 0x198);
      uVar10 = *(undefined8 *)(param_1 + 0x1a0);
      uVar11 = *(undefined8 *)(param_1 + 0x1a8);
      uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar9 & 1) == 0) {
LAB_02bb5a00:
        (**(code **)(*plVar12 + 0x18))(plVar12,lVar8,uVar10,uVar11);
      }
      else {
        lVar14 = tpidr_el0;
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_02bb5a00;
        FUN_02bcc824(plVar12,lVar8,uVar10,uVar11);
      }
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar14 + 0x38d480) + -1;
      *(int *)(lVar14 + 0x38d480) = iVar6;
      if (iVar6 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar14 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
      lVar14 = *(long *)(param_1 + 400);
    }
    *(undefined8 *)(param_1 + 0x198) = local_90;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  lVar8 = lVar14;
  if (*(long *)(lVar14 + 0xa8) != 0) goto LAB_02bb5cb0;
  plVar12 = *(long **)(param_1 + 8);
  puVar7 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x10,4);
  if (puVar7 == (undefined8 *)0x0) {
    plVar12 = (long *)0x0;
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar12;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar7 = 0;
    puVar7[1] = 0x300000008;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    uVar10 = 4;
    uVar11 = 0x10;
  }
  lVar8 = *(long *)(lVar14 + 0xa8);
  *(undefined8 **)(lVar14 + 0xa8) = puVar7;
  if (lVar8 == 0) {
    *(long **)(lVar14 + 0xb0) = plVar12;
    *(undefined8 *)(lVar14 + 0xb8) = uVar11;
  }
  else {
    FUN_02bcbe58(&local_98,0);
    plVar1 = *(long **)(lVar14 + 0xb0);
    uVar2 = *(undefined8 *)(lVar14 + 0xb8);
    uVar13 = *(undefined8 *)(lVar14 + 0xc0);
    uVar9 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    lVar3 = tpidr_el0;
    if ((uVar9 & 1) == 0) {
LAB_02bb5be8:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02bb5be8;
      FUN_02bcc824(plVar1,lVar8,uVar2,uVar13);
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar3 + 0x38d480) + -1;
    *(int *)(lVar3 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar3 + 0x38d484) = 0;
    }
    *(long **)(lVar14 + 0xb0) = plVar12;
    *(undefined8 *)(lVar14 + 0xb8) = uVar11;
  }
  *(undefined8 *)(lVar14 + 0xc0) = uVar10;
  *(undefined1 *)(lVar14 + 0xcc) = 1;
  lVar8 = *(long *)(param_1 + 400);
LAB_02bb5cb0:
  if (*(byte *)(*(long *)(lVar8 + 0xa8) + (ulong)param_2) == (param_3 & 1)) {
    if ((*(char *)(lVar14 + 0xcc) == '\0') && (!bVar4)) {
      return;
    }
  }
  else {
    *(byte *)(*(long *)(lVar8 + 0xa8) + (ulong)param_2) = param_3 & 1;
    *(undefined1 *)(lVar14 + 0xcc) = 1;
  }
  lVar8 = *(long *)(param_1 + 0x240);
  for (lVar14 = *(long *)(param_1 + 0x238); lVar14 != lVar8; lVar14 = lVar14 + 0x18) {
    *(undefined1 *)(lVar14 + 0x10) = 1;
  }
  return;
}


