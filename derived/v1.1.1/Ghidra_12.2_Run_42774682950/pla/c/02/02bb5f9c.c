/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb5f9c; name: FUN_02bb5f9c
 */


void FUN_02bb5f9c(long param_1,uint param_2,byte param_3,byte param_4,byte param_5,byte param_6)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a0 = *(undefined8 *)(param_1 + 8);
  lVar16 = *(long *)(param_1 + 400);
  if (lVar16 == 0) {
    FUN_02bb93c0(&local_98,local_a0,&local_a0);
    lVar16 = local_98;
    local_98 = 0;
    lVar12 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar16;
    if (lVar12 == 0) {
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
      *(undefined8 *)(param_1 + 0x198) = local_90;
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      FUN_02bad2b8(lVar12);
      plVar17 = *(long **)(param_1 + 0x198);
      uVar14 = *(undefined8 *)(param_1 + 0x1a0);
      uVar15 = *(undefined8 *)(param_1 + 0x1a8);
      uVar13 = (**(code **)(*plVar17 + 0xc0))(plVar17);
      if ((uVar13 & 1) == 0) {
LAB_02bb6088:
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar12,uVar14,uVar15);
      }
      else {
        lVar16 = tpidr_el0;
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_02bb6088;
        FUN_02bcc824(plVar17,lVar12,uVar14,uVar15);
      }
      lVar16 = tpidr_el0;
      if (*(char *)(lVar16 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar16 + 0x38d488) = 1;
        *(undefined8 *)(lVar16 + 0x38d478) = 0;
        *(undefined8 *)(lVar16 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar10 = *(int *)(lVar16 + 0x38d480) + -1;
      *(int *)(lVar16 + 0x38d480) = iVar10;
      if (iVar10 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar16 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
      lVar16 = *(long *)(param_1 + 400);
      *(undefined8 *)(param_1 + 0x198) = local_90;
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  lVar12 = lVar16;
  if (*(long *)(lVar16 + 0xe0) == 0) {
    plVar17 = *(long **)(param_1 + 8);
    puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,1);
    if (puVar11 == (undefined8 *)0x0) {
      plVar17 = (long *)0x0;
      uVar15 = 0;
      uVar14 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar10 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar17;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar11[2] = 0x101010101010101;
      puVar11[3] = 0x101010101010101;
      uVar15 = 0x20;
      *puVar11 = 0x101010101010101;
      puVar11[1] = 0x101010101010101;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      uVar14 = 1;
    }
    lVar12 = *(long *)(lVar16 + 0xe0);
    *(undefined8 **)(lVar16 + 0xe0) = puVar11;
    if (lVar12 != 0) {
      FUN_02bcbe58(&local_98,0);
      plVar2 = *(long **)(lVar16 + 0xe8);
      uVar3 = *(undefined8 *)(lVar16 + 0xf0);
      uVar18 = *(undefined8 *)(lVar16 + 0xf8);
      uVar13 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      lVar4 = tpidr_el0;
      if ((uVar13 & 1) == 0) {
LAB_02bb6288:
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar12,uVar3,uVar18);
      }
      else {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02bb6288;
        FUN_02bcc824(plVar2,lVar12,uVar3,uVar18);
      }
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar10 = *(int *)(lVar4 + 0x38d480) + -1;
      *(int *)(lVar4 + 0x38d480) = iVar10;
      if (iVar10 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar4 + 0x38d484) = 0;
      }
    }
    *(undefined8 *)(lVar16 + 0xf8) = uVar14;
    *(undefined1 *)(lVar16 + 0x100) = 1;
    *(long **)(lVar16 + 0xe8) = plVar17;
    *(undefined8 *)(lVar16 + 0xf0) = uVar15;
    lVar12 = *(long *)(param_1 + 400);
  }
  pbVar1 = (byte *)(*(long *)(lVar12 + 0xe0) + (ulong)param_2 * 4);
  bVar7 = *pbVar1 != (param_3 & 1);
  if (bVar7) {
    *pbVar1 = param_3 & 1;
  }
  param_5 = param_5 & 1;
  bVar8 = pbVar1[1] != (param_4 & 1);
  if (bVar8) {
    pbVar1[1] = param_4 & 1;
  }
  bVar9 = pbVar1[2] != param_5;
  if (bVar9) {
    pbVar1[2] = param_5;
  }
  if (pbVar1[3] == (param_6 & 1)) {
    if (!bVar7 && ((!bVar8 && !bVar7) && (!bVar9 && (!bVar8 && !bVar7)))) {
      if ((*(char *)(lVar16 + 0x100) == '\0') && (!bVar5)) {
        return;
      }
      goto LAB_02bb63f8;
    }
  }
  else {
    pbVar1[3] = param_6 & 1;
  }
  *(undefined1 *)(lVar16 + 0x100) = 1;
LAB_02bb63f8:
  lVar12 = *(long *)(param_1 + 0x240);
  for (lVar16 = *(long *)(param_1 + 0x238); lVar16 != lVar12; lVar16 = lVar16 + 0x18) {
    *(undefined1 *)(lVar16 + 0x10) = 1;
  }
  return;
}


