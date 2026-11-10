/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294c094; name: FUN_0294c094
 */


undefined8 * FUN_0294c094(long param_1,char param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(param_1 + (param_3 & 0xff) * 0x20);
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    return (undefined8 *)*plVar1;
  }
  puVar7 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4,0x4e60,8);
  if (puVar7 == (undefined8 *)0x0) {
    param_4 = (long *)0x0;
    lVar12 = 0;
    lVar11 = 0;
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
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_4;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar7 = &PTR_LAB_04276a58;
    *(undefined2 *)(puVar7 + 1) = 0;
    *(undefined4 *)((long)puVar7 + 10) = 0;
    *(undefined2 *)((long)puVar7 + 0xe) = 0x2e;
    memset(puVar7 + 2,0,0x2714);
    puVar7[0x4e5] = &PTR_LAB_04276a58;
    puVar7[0x4e6] = 0x2e000000000000;
    memset(puVar7 + 0x4e7,0,0x2714);
    *(undefined1 *)(puVar7 + 0x9ca) = 0;
    lVar12 = 0x4e60;
    *(undefined4 *)((long)puVar7 + 0x4e54) = 0;
    *(undefined1 *)(puVar7 + 0x9cb) = 0;
    *(bool *)((long)puVar7 + 0x4e59) = param_2 != '\0';
    lVar11 = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = *plVar1;
  *plVar1 = (long)puVar7;
  if (lVar8 == 0) goto LAB_0294c2e0;
  FUN_02bcbe58(auStack_78,0);
  plVar2 = (long *)plVar1[1];
  lVar3 = plVar1[2];
  lVar10 = plVar1[3];
  uVar9 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  lVar4 = tpidr_el0;
  if ((uVar9 & 1) == 0) {
LAB_0294c240:
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar8,lVar3,lVar10);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0294c240;
    FUN_02bcc824(plVar2,lVar8,lVar3,lVar10);
  }
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
  puVar7 = (undefined8 *)*plVar1;
LAB_0294c2e0:
  plVar1[1] = (long)param_4;
  plVar1[2] = lVar12;
  plVar1[3] = lVar11;
  return puVar7;
}


