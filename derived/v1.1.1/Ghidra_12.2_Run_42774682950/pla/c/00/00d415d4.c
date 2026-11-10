/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d415d4; name: FUN_00d415d4
 */


void FUN_00d415d4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_58 [3];
  
  *param_1 = (long)&PTR_FUN_041eafb0;
  param_1[9] = (long)&PTR_LAB_041eb050;
  param_1[10] = (long)&PTR_LAB_041eb098;
  if ((long *)param_1[0xb4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb4] + 0x20))();
  }
  lVar10 = param_1[0xb0];
  param_1[0xb0] = 0;
  if (lVar10 == 0) goto LAB_00d41628;
  FUN_02bcbe58(local_58,0);
  FUN_00d455e8(lVar10);
  plVar13 = (long *)param_1[0xb1];
  lVar11 = param_1[0xb2];
  lVar12 = param_1[0xb3];
  uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  lVar6 = tpidr_el0;
  if ((uVar8 & 1) == 0) {
LAB_00d417dc:
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar10,lVar11,lVar12);
  }
  else {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00d417dc;
    FUN_02bcc824(plVar13,lVar10,lVar11,lVar12);
  }
  if (*(char *)(lVar6 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar6 + 0x38d488) = 1;
    *(undefined8 *)(lVar6 + 0x38d478) = 0;
    *(undefined8 *)(lVar6 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar7 = *(int *)(lVar6 + 0x38d480) + -1;
  *(int *)(lVar6 + 0x38d480) = iVar7;
  if (iVar7 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar6 + 0x38d484) = 0;
  }
LAB_00d41628:
  FUN_00d419cc(param_1 + 0x30);
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 0x20))();
  }
  if ((long *)param_1[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21] + 0x20))();
  }
  if ((long *)param_1[0x1f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1f] + 0x20))();
  }
  if ((long *)param_1[0x1b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b] + 0x20))();
  }
  if ((long *)param_1[0x19] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x19] + 0x20))();
  }
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 0x20))();
  }
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 0x20))();
  }
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x20))();
  }
  puVar1 = PTR_DAT_04379610 + 0x58;
  puVar2 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  puVar9 = (undefined8 *)param_1[0xb];
  if (puVar9 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar9 + 1);
    do {
      iVar7 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58[0] = *puVar9;
      FUN_02a44274(lVar10 + 0xd8,local_58);
    }
  }
  return;
}


