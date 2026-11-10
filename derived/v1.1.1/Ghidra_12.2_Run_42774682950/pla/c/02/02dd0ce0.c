/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd0ce0; name: FUN_02dd0ce0
 */


void FUN_02dd0ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  plVar9 = *(long **)(param_1 + 8);
  puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x140,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    uVar12 = 0;
    uVar11 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar6 = &PTR_FUN_0429a958;
    puVar6[1] = param_3;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0x3f8000003f800000;
    puVar6[0x1c] = 0x3f8000003f800000;
    puVar6[0x1d] = 0x3f8000003f800000;
    puVar6[0x24] = 0x3f8000003f800000;
    *(undefined4 *)(puVar6 + 0x25) = 1;
    *(undefined4 *)(puVar6 + 0x20) = 0;
    puVar6[0x1e] = 0x3f00000000000000;
    puVar6[0x1f] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    *(undefined8 *)((long)puVar6 + 300) = 0x3f800000;
    *(undefined4 *)((long)puVar6 + 0x134) = 0;
    FUN_02dd1710(puVar6,param_2,plVar9);
    uVar11 = 0x10;
    uVar12 = 0x140;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  lVar7 = *(long *)(param_1 + 0x90);
  *(undefined8 **)(param_1 + 0x90) = puVar6;
  if (lVar7 == 0) goto LAB_02dd0f34;
  FUN_02bcbe58(auStack_78,0);
  FUN_02dd2e48(lVar7);
  plVar1 = *(long **)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uVar10 = *(undefined8 *)(param_1 + 0xa8);
  uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar3 = tpidr_el0;
  if ((uVar8 & 1) == 0) {
LAB_02dd0e98:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,uVar2,uVar10);
  }
  else {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02dd0e98;
    FUN_02bcc824(plVar1,lVar7,uVar2,uVar10);
  }
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar5 = *(int *)(lVar3 + 0x38d480) + -1;
  *(int *)(lVar3 + 0x38d480) = iVar5;
  if (iVar5 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar3 + 0x38d484) = 0;
  }
LAB_02dd0f34:
  *(long **)(param_1 + 0x98) = plVar9;
  *(undefined8 *)(param_1 + 0xa0) = uVar12;
  *(undefined8 *)(param_1 + 0xa8) = uVar11;
  return;
}


