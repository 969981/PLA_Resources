/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a0a27c; name: FUN_02a0a27c
 */


void FUN_02a0a27c(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x168);
  lVar5 = *(long *)(param_1 + 0x5e0);
  uVar10 = *(undefined8 *)(lVar5 + 0x30);
  uVar11 = *(undefined8 *)(lVar5 + 0x10);
  uVar12 = *(undefined8 *)(lVar5 + 0x150);
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,8);
  if (puVar3 == (undefined8 *)0x0) {
    param_2 = (long *)0x0;
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar3 = &PTR_LAB_04279640;
    puVar3[1] = uVar10;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
    puVar3[8] = uVar8;
    uVar8 = 8;
    uVar10 = 0x60;
    *(undefined2 *)((long)puVar3 + 0x5b) = 0;
    *(undefined1 *)((long)puVar3 + 0x5d) = 0;
    puVar3[4] = uVar6;
    puVar3[5] = param_1 + 0xd0;
    puVar3[6] = param_1 + 0x4c8;
    puVar3[7] = param_1 + 0x4c0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x5c0);
  *(undefined8 **)(param_1 + 0x5c0) = puVar3;
  if (puVar7 == (undefined8 *)0x0) goto LAB_02a0a494;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar7)(puVar7);
  plVar9 = *(long **)(param_1 + 0x5c8);
  uVar6 = *(undefined8 *)(param_1 + 0x5d0);
  uVar11 = *(undefined8 *)(param_1 + 0x5d8);
  uVar4 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  lVar5 = tpidr_el0;
  if ((uVar4 & 1) == 0) {
LAB_02a0a3f8:
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar7,uVar6,uVar11);
  }
  else {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02a0a3f8;
    FUN_02bcc824(plVar9,puVar7,uVar6,uVar11);
  }
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
LAB_02a0a494:
  *(long **)(param_1 + 0x5c8) = param_2;
  *(undefined8 *)(param_1 + 0x5d0) = uVar10;
  *(undefined8 *)(param_1 + 0x5d8) = uVar8;
  return;
}


