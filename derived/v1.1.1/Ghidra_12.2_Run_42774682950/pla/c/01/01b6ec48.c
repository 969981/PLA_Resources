/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b6ec48; name: FUN_01b6ec48
 */


void FUN_01b6ec48(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *local_58 [3];
  
  FUN_016c24d0(local_58,param_1 + 0x5b0);
  if ((local_58[0] != (long *)0x0) && (FUN_01836814(local_58[0],0), local_58[0] != (long *)0x0)) {
    lVar6 = local_58[0][0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_58[0] + 0x20))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x660);
  *(undefined8 *)(param_1 + 0x660) = 0;
  if (plVar7 == (long *)0x0) {
    return;
  }
  FUN_02bcbe58(local_58,0);
  (**(code **)(*plVar7 + 0x58))(plVar7);
  plVar10 = *(long **)(param_1 + 0x668);
  uVar9 = *(undefined8 *)(param_1 + 0x670);
  uVar8 = *(undefined8 *)(param_1 + 0x678);
  uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  lVar6 = tpidr_el0;
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar10,plVar7,uVar9,uVar8);
      goto LAB_01b6ed64;
    }
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar7,uVar9,uVar8);
LAB_01b6ed64:
  if (*(char *)(lVar6 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar6 + 0x38d488) = 1;
    *(undefined8 *)(lVar6 + 0x38d478) = 0;
    *(undefined8 *)(lVar6 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar6 + 0x38d480) + -1;
  *(int *)(lVar6 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar6 + 0x38d484) = 0;
  }
  return;
}


