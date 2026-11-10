/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b98874; name: FUN_02b98874
 */


void FUN_02b98874(long *param_1,long *param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [24];
  
  param_2 = (long *)*param_2;
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x90,8);
  if (puVar6 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    lVar7 = 0;
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
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    *(undefined2 *)(puVar6 + 0x11) = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[0x10] = 0xffffffffffffffff;
    puVar6[2] = 0xffffffffffffffff;
    puVar6[3] = 0;
    *(undefined1 *)((long)puVar6 + 0x8a) = 1;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
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
    *param_1 = (long)puVar6;
    param_1[1] = (long)param_2;
    param_1[2] = 0x90;
    param_1[3] = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    lVar7 = *param_1;
  }
  iVar5 = (*DAT_043f06b8)(param_3);
  *(long *)(lVar7 + 0x70) = (long)iVar5;
  iVar5 = (*DAT_043f06c0)(param_3);
  lVar9 = *(long *)(lVar7 + 0x48);
  *(long *)(lVar7 + 0x78) = (long)iVar5;
  *(undefined8 *)(lVar7 + 0x48) = param_3;
  if (lVar9 == 0) goto LAB_02b98b5c;
  FUN_02bcbe58(auStack_68,0);
  plVar1 = *(long **)(lVar7 + 0x50);
  uVar2 = *(undefined8 *)(lVar7 + 0x58);
  uVar10 = *(undefined8 *)(lVar7 + 0x60);
  uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar3 = tpidr_el0;
  if ((uVar8 & 1) == 0) {
LAB_02b98ac0:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,uVar2,uVar10);
  }
  else {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02b98ac0;
    FUN_02bcc824(plVar1,lVar9,uVar2,uVar10);
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
LAB_02b98b5c:
  *(undefined8 *)(lVar7 + 0x68) = param_5;
  *(undefined1 *)(lVar7 + 0x8a) = 0;
  if ((param_4 | 2) == 3) {
    *(undefined1 *)(lVar7 + 0x88) = 1;
  }
  if ((param_4 | 1) == 3) {
    *(undefined1 *)(lVar7 + 0x89) = 1;
  }
  return;
}


