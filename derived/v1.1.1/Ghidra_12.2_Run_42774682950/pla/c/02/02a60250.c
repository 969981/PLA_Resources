/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a60250; name: FUN_02a60250
 */


void FUN_02a60250(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 local_38;
  
  lVar8 = param_1[0x7b];
  *param_1 = &PTR_FUN_0427e130;
  param_1[9] = &PTR_LAB_0427e1b8;
  param_1[10] = &PTR_LAB_0427e200;
  if (lVar8 != 0) {
    lVar7 = param_1[0x7d];
    param_1[0x7c] = lVar8;
    plVar10 = (long *)param_1[0x7e];
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar8,lVar7 - lVar8,8);
        goto LAB_02a6030c;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar7 - lVar8,8);
  }
LAB_02a6030c:
  FUN_028909f4(param_1 + 0x74);
  puVar9 = (undefined8 *)param_1[0x71];
  *param_1 = &DAT_0427e7a0;
  param_1[9] = &PTR_LAB_0427e828;
  param_1[10] = &PTR_LAB_0427e870;
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  FUN_02a6f838(param_1);
  return;
}


