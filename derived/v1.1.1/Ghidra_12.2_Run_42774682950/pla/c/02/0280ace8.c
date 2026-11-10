/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280ace8; name: FUN_0280ace8
 */


void FUN_0280ace8(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_78;
  undefined4 uStack_74;
  
  plVar11 = *(long **)(param_1 + 8);
  puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x60,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar11 = (long *)0x0;
    uVar18 = 0;
    uVar17 = 0;
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
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar11;
    uVar17 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    uVar18 = 0x60;
    *puVar7 = &PTR_FUN_0426ece8;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = *(long *)(param_1 + 0x4e0);
  *(undefined8 **)(param_1 + 0x4e0) = puVar7;
  if (lVar8 == 0) goto LAB_0280adac;
  FUN_02bcbe58(&local_78,0);
  FUN_0280cee4(lVar8);
  plVar16 = *(long **)(param_1 + 0x4e8);
  uVar13 = *(undefined8 *)(param_1 + 0x4f0);
  uVar15 = *(undefined8 *)(param_1 + 0x4f8);
  uVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16);
  lVar14 = tpidr_el0;
  if ((uVar10 & 1) == 0) {
LAB_0280aee8:
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar8,uVar13,uVar15);
  }
  else {
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_0280aee8;
    FUN_02bcc824(plVar16,lVar8,uVar13,uVar15);
  }
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
  puVar7 = *(undefined8 **)(param_1 + 0x4e0);
LAB_0280adac:
  uStack_74 = *(undefined4 *)(param_1 + 0x510);
  *(long **)(param_1 + 0x4e8) = plVar11;
  *(undefined8 *)(param_1 + 0x4f0) = uVar18;
  *(undefined8 *)(param_1 + 0x4f8) = uVar17;
  local_78 = 1;
  FUN_0282ab78(puVar7,&local_78,*(undefined8 *)(param_1 + 8));
  lVar8 = *(long *)(param_1 + 0x4e0);
  if (0 < *(int *)(param_1 + 0x510)) {
    lVar12 = 0;
    lVar14 = 0;
    plVar11 = (long *)(param_1 + 0x110);
    do {
      lVar2 = plVar11[-3];
      lVar4 = plVar11[-2];
      lVar3 = plVar11[-1];
      plVar16 = (long *)*plVar11;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
      plVar1 = (long *)(*(long *)(*(long *)(lVar8 + 0x40) + 0x20) + lVar12);
      plVar9 = (long *)plVar1[3];
      *plVar1 = lVar2;
      plVar1[1] = lVar4;
      plVar1[2] = lVar3;
      plVar1[3] = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      lVar14 = lVar14 + 1;
      plVar1[3] = (long)plVar16;
      plVar1[4] = plVar1[4] | 1;
      lVar8 = *(long *)(param_1 + 0x4e0);
      lVar12 = lVar12 + 0x28;
      plVar11 = plVar11 + 8;
    } while (lVar14 < *(int *)(param_1 + 0x510));
  }
  *(undefined4 *)(lVar8 + 0x18) = 1;
  return;
}


