/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbc868; name: FUN_02bbc868
 */


void FUN_02bbc868(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_78 [24];
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    return;
  }
  plVar16 = *(long **)(param_1 + 8);
  puVar13 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,400,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    uVar20 = 0;
    uVar19 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar11 = PTR_DAT_04379528, iVar12 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar16;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    puVar13[0x30] = 0;
    puVar13[0x31] = 0;
    uVar19 = 0x10;
    puVar13[0x2e] = 0;
    puVar13[0x2f] = 0;
    uVar20 = 400;
    puVar13[0x2c] = 0;
    puVar13[0x2d] = 0;
    puVar13[0x2a] = 0;
    puVar13[0x2b] = 0;
    puVar13[0x28] = 0;
    puVar13[0x29] = 0;
    puVar13[0x26] = 0;
    puVar13[0x27] = 0;
    puVar13[0x24] = 0;
    puVar13[0x25] = 0;
    puVar13[0x22] = 0;
    puVar13[0x23] = 0;
    puVar13[0x20] = 0;
    puVar13[0x21] = 0;
    puVar13[0x1e] = 0;
    puVar13[0x1f] = 0;
    puVar13[0x1c] = 0;
    puVar13[0x1d] = 0;
    puVar13[0x1a] = 0;
    puVar13[0x1b] = 0;
    puVar13[0x18] = 0;
    puVar13[0x19] = 0;
    puVar11 = PTR_DAT_043880b8;
    uVar1 = *(undefined8 *)(PTR_DAT_043880b8 + 0x30);
    uVar5 = *(undefined8 *)(PTR_DAT_043880b8 + 0x38);
    uVar18 = *(undefined8 *)(PTR_DAT_043880b8 + 0x20);
    uVar6 = *(undefined8 *)(PTR_DAT_043880b8 + 0x28);
    puVar13[4] = uVar18;
    puVar13[5] = uVar6;
    puVar13[6] = uVar1;
    puVar13[7] = uVar5;
    uVar2 = *(undefined8 *)(puVar11 + 0x10);
    uVar7 = *(undefined8 *)(puVar11 + 0x18);
    uVar3 = *(undefined8 *)puVar11;
    uVar8 = *(undefined8 *)(puVar11 + 8);
    *puVar13 = uVar3;
    puVar13[1] = uVar8;
    puVar13[8] = uVar3;
    puVar13[9] = uVar8;
    puVar13[0x10] = uVar3;
    puVar13[0x11] = uVar8;
    *(undefined1 *)(puVar13 + 0x30) = 1;
    puVar13[2] = uVar2;
    puVar13[3] = uVar7;
    puVar13[10] = uVar2;
    puVar13[0xb] = uVar7;
    puVar13[0xe] = uVar1;
    puVar13[0xf] = uVar5;
    puVar13[0xc] = uVar18;
    puVar13[0xd] = uVar6;
    puVar13[0x12] = uVar2;
    puVar13[0x13] = uVar7;
    puVar13[0x16] = uVar1;
    puVar13[0x17] = uVar5;
    puVar13[0x14] = uVar18;
    puVar13[0x15] = uVar6;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  }
  lVar14 = *(long *)(param_1 + 0x1a0);
  *(undefined8 **)(param_1 + 0x1a0) = puVar13;
  if (lVar14 == 0) goto LAB_02bbcab4;
  FUN_02bcbe58(auStack_78,0);
  plVar4 = *(long **)(param_1 + 0x1a8);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  uVar18 = *(undefined8 *)(param_1 + 0x1b8);
  uVar15 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  lVar10 = tpidr_el0;
  if ((uVar15 & 1) == 0) {
LAB_02bbca14:
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar14,uVar1,uVar18);
  }
  else {
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02bbca14;
    FUN_02bcc824(plVar4,lVar14,uVar1,uVar18);
  }
  if (*(char *)(lVar10 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar10 + 0x38d488) = 1;
    *(undefined8 *)(lVar10 + 0x38d478) = 0;
    *(undefined8 *)(lVar10 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar12 = *(int *)(lVar10 + 0x38d480) + -1;
  *(int *)(lVar10 + 0x38d480) = iVar12;
  if (iVar12 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar10 + 0x38d484) = 0;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x1a0);
LAB_02bbcab4:
  *(long **)(param_1 + 0x1a8) = plVar16;
  *(undefined8 *)(param_1 + 0x1b0) = uVar20;
  *(undefined8 *)(param_1 + 0x1b8) = uVar19;
  *(undefined8 **)(param_1 + 0x1c0) = puVar13;
  puVar9 = *(undefined8 **)(param_1 + 0x118);
  for (puVar17 = *(undefined8 **)(param_1 + 0x110); puVar17 != puVar9; puVar17 = puVar17 + 1) {
    FUN_02bbc3b4(*puVar17,puVar13);
  }
  return;
}


