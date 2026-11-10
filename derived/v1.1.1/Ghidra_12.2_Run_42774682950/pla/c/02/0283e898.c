/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283e898; name: FUN_0283e898
 */


void FUN_0283e898(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = param_1[4];
  lVar6 = param_2;
  if (lVar11 != param_4 && lVar11 != 0) {
    lVar8 = lVar11;
    do {
      FUN_0283dde8(param_1,lVar6,lVar8);
      lVar8 = lVar8 + 0x30;
      lVar6 = lVar6 + 0x30;
    } while (param_4 != lVar8);
  }
  FUN_0283dde8(param_1,lVar6,param_6);
  lVar6 = lVar6 + param_5 * 0x30;
  if (lVar11 != 0) {
    lVar8 = param_1[5];
    lVar9 = lVar11 + lVar8 * 0x30;
    if (lVar9 != param_4) {
      do {
        FUN_0283dde8(param_1,lVar6,param_4);
        param_4 = param_4 + 0x30;
        lVar6 = lVar6 + 0x30;
      } while (lVar9 != param_4);
      lVar8 = param_1[5];
    }
    while (lVar8 != 0) {
      plVar10 = *(long **)(lVar11 + 0x20);
      if (plVar10 != (long *)0x0) {
        lVar9 = plVar10[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
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
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
      }
      lVar8 = lVar8 + -1;
      if (*(long **)(lVar11 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar11 + 0x18) + 0x20))();
      }
      lVar11 = lVar11 + 0x30;
    }
    lVar11 = param_1[6];
    plVar10 = (long *)*param_1;
    uVar7 = param_1[4];
    uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar5 & 1) != 0) {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar10,uVar7,lVar11 * 0x30,8);
        goto LAB_0283ea34;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,uVar7,lVar11 * 0x30,8);
  }
LAB_0283ea34:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (lVar6 - param_2 >> 4) * -0x5555555555555555;
  return;
}


