/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01500024; name: FUN_01500024
 */


void FUN_01500024(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  uVar9 = param_1[1];
  if (0x10f < uVar9) {
    uVar10 = 0;
    puVar1 = PTR_DAT_0437f850 + 0x10;
    do {
      plVar7 = (long *)(param_2 + uVar10 * 0x110);
      plVar6 = (long *)plVar7[0x21];
      *plVar7 = (long)puVar1;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = *(long **)(param_2 + uVar10 * 0x110 + 0xe8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = *(long **)(param_2 + uVar10 * 0x110 + 200);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = *(long **)(param_2 + uVar10 * 0x110 + 0xa8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = *(long **)(param_2 + uVar10 * 0x110 + 0x88);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = *(long **)(param_2 + uVar10 * 0x110 + 0x68);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = *(long **)(param_2 + uVar10 * 0x110 + 0x48);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = *(long **)(param_2 + uVar10 * 0x110 + 0x20);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 10;
        do {
          iVar4 = (int)*plVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *(int *)plVar7 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      plVar6 = *(long **)(param_2 + uVar10 * 0x110 + 0x18);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 10;
        do {
          iVar4 = (int)*plVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *(int *)plVar7 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      plVar6 = *(long **)(param_2 + uVar10 * 0x110 + 8);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 10;
        do {
          iVar4 = (int)*plVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *(int *)plVar7 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9 / 0x110);
    uVar9 = param_1[1];
  }
  plVar6 = (long *)*param_1;
  uVar8 = param_1[2];
  uVar10 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  lVar5 = tpidr_el0;
  if ((uVar10 & 1) != 0) {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar6,param_2,uVar9,uVar8);
      goto LAB_01500224;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,param_2,uVar9,uVar8);
LAB_01500224:
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
  return;
}


