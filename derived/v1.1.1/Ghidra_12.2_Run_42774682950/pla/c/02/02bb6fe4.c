/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb6fe4; name: FUN_02bb6fe4
 */


void FUN_02bb6fe4(long param_1,byte param_2,byte param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a0 = *(undefined8 *)(param_1 + 8);
  lVar15 = *(long *)(param_1 + 400);
  if (lVar15 == 0) {
    FUN_02bb93c0(&local_98,local_a0,&local_a0);
    lVar15 = local_98;
    local_98 = 0;
    lVar9 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar15;
    if (lVar9 == 0) {
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      FUN_02bad2b8(lVar9);
      plVar13 = *(long **)(param_1 + 0x198);
      uVar11 = *(undefined8 *)(param_1 + 0x1a0);
      uVar12 = *(undefined8 *)(param_1 + 0x1a8);
      uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar10 & 1) == 0) {
LAB_02bb70bc:
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar9,uVar11,uVar12);
      }
      else {
        lVar15 = tpidr_el0;
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_02bb70bc;
        FUN_02bcc824(plVar13,lVar9,uVar11,uVar12);
      }
      lVar15 = tpidr_el0;
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar7 = *(int *)(lVar15 + 0x38d480) + -1;
      *(int *)(lVar15 + 0x38d480) = iVar7;
      if (iVar7 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar15 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
      lVar15 = *(long *)(param_1 + 400);
    }
    *(undefined8 *)(param_1 + 0x198) = local_90;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  lVar9 = lVar15;
  if (*(long *)(lVar15 + 0x1e0) == 0) {
    plVar13 = *(long **)(param_1 + 8);
    puVar8 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x1c,4);
    if (puVar8 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
      uVar12 = 0;
      uVar11 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar13;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      *(undefined4 *)((long)puVar8 + 0x14) = 0;
      *(undefined4 *)(puVar8 + 3) = 0;
      *(undefined8 *)((long)puVar8 + 4) = 0;
      uVar12 = 0x1c;
      *(undefined1 *)((long)puVar8 + 2) = 1;
      *(undefined8 *)((long)puVar8 + 9) = 0;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      uVar11 = 4;
    }
    lVar9 = *(long *)(lVar15 + 0x1e0);
    *(undefined8 **)(lVar15 + 0x1e0) = puVar8;
    if (lVar9 == 0) {
      *(long **)(lVar15 + 0x1e8) = plVar13;
      *(undefined8 *)(lVar15 + 0x1f0) = uVar12;
    }
    else {
      FUN_02bcbe58(&local_98,0);
      plVar1 = *(long **)(lVar15 + 0x1e8);
      uVar2 = *(undefined8 *)(lVar15 + 0x1f0);
      uVar14 = *(undefined8 *)(lVar15 + 0x1f8);
      uVar10 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      lVar3 = tpidr_el0;
      if ((uVar10 & 1) == 0) {
LAB_02bb72b4:
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,uVar2,uVar14);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02bb72b4;
        FUN_02bcc824(plVar1,lVar9,uVar2,uVar14);
      }
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar7 = *(int *)(lVar3 + 0x38d480) + -1;
      *(int *)(lVar3 + 0x38d480) = iVar7;
      if (iVar7 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar3 + 0x38d484) = 0;
      }
      *(long **)(lVar15 + 0x1e8) = plVar13;
      *(undefined8 *)(lVar15 + 0x1f0) = uVar12;
    }
    *(undefined8 *)(lVar15 + 0x1f8) = uVar11;
    *(undefined1 *)(lVar15 + 0x200) = 1;
    lVar9 = *(long *)(param_1 + 400);
  }
  lVar9 = *(long *)(lVar9 + 0x1e0);
  param_2 = param_2 & 1;
  bVar6 = *(byte *)(lVar9 + 1) != param_2;
  if (bVar6) {
    *(byte *)(lVar9 + 1) = param_2;
  }
  if (*(byte *)(lVar9 + 2) == (param_3 & 1)) {
    if (!bVar6) {
      if ((*(char *)(lVar15 + 0x200) == '\0') && (!bVar4)) {
        return;
      }
      goto LAB_02bb73d0;
    }
  }
  else {
    *(byte *)(lVar9 + 2) = param_3 & 1;
  }
  *(undefined1 *)(lVar15 + 0x200) = 1;
LAB_02bb73d0:
  lVar9 = *(long *)(param_1 + 0x240);
  for (lVar15 = *(long *)(param_1 + 0x238); lVar15 != lVar9; lVar15 = lVar15 + 0x18) {
    *(undefined1 *)(lVar15 + 0x10) = 1;
  }
  return;
}


