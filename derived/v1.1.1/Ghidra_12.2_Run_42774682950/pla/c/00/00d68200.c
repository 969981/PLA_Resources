/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d68200; name: FUN_00d68200
 */


void FUN_00d68200(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long local_d0 [13];
  undefined1 auStack_68 [24];
  
  if (*(long *)(param_1 + 0x5c0) != 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 8);
  local_d0[0] = param_1;
  plVar3 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x130,0x10);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar3[2] = param_1 + 0x180;
  plVar3[3] = 0;
  *plVar3 = (long)&PTR_FUN_041eb328;
  plVar3[1] = param_1;
  plVar3[0x1d] = (long)&DAT_cbf29ce484222645;
  plVar3[0x1e] = (long)&DAT_03996322;
  *(undefined4 *)(plVar3 + 0x21) = 4;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *(undefined1 *)((long)plVar3 + 0x10c) = 1;
  *(undefined4 *)(plVar3 + 0x1c) = 0;
  plVar3[10] = 0;
  *(undefined1 *)(plVar3 + 0xb) = 0;
  *(undefined8 *)((long)plVar3 + 0x5c) = 0;
  *(undefined8 *)((long)plVar3 + 100) = 0;
  *(undefined8 *)((long)plVar3 + 0x6c) = 0;
  *(undefined8 *)((long)plVar3 + 0x74) = 0;
  *(undefined4 *)((long)plVar3 + 0x7c) = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x20] = 0;
  *(undefined4 *)((long)plVar3 + 0x10e) = 0;
  plVar3[0x24] = 0;
  plVar3[0x25] = 0;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  (**(code **)(*plVar3 + 0x10))(plVar3);
  puVar9 = *(undefined8 **)(param_1 + 0x5c0);
  *(long **)(param_1 + 0x5c0) = plVar3;
  if (puVar9 == (undefined8 *)0x0) {
    *(long **)(param_1 + 0x5c8) = plVar7;
    *(undefined8 *)(param_1 + 0x5d0) = 0x130;
    goto LAB_00d68368;
  }
  FUN_02bcbe58(auStack_68,0);
  (**(code **)*puVar9)(puVar9);
  plVar3 = *(long **)(param_1 + 0x5c8);
  uVar8 = *(undefined8 *)(param_1 + 0x5d0);
  uVar10 = *(undefined8 *)(param_1 + 0x5d8);
  uVar5 = (**(code **)(*plVar3 + 0xc0))(plVar3);
  lVar4 = tpidr_el0;
  if ((uVar5 & 1) == 0) {
LAB_00d68474:
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar9,uVar8,uVar10);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00d68474;
    FUN_02bcc824(plVar3,puVar9,uVar8,uVar10);
  }
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
  plVar3 = *(long **)(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5d0) = 0x130;
  *(long **)(param_1 + 0x5c8) = plVar7;
LAB_00d68368:
  *(undefined8 *)(param_1 + 0x5d8) = 0x10;
  pcVar6 = (code *)plVar3[0xd];
  if (pcVar6 != (code *)0x0) {
    plVar3[0xe] = 0;
    plVar3[0xf] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    (*pcVar6)(plVar3 + 0x10);
  }
  FUN_00d68d5c(local_d0,plVar3 + 0x10);
  plVar3[0xd] = (long)FUN_00d68d58;
  plVar3[0xf] = (long)&LAB_00d68d68;
  plVar3[0xe] = (long)FUN_00d68d5c;
  plVar3[0xc] = (long)&LAB_00d68d54;
  FUN_00d68d58(local_d0);
  return;
}


