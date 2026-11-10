/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283e034; name: FUN_0283e034
 */


void FUN_0283e034(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = param_1[4];
  lVar7 = param_2;
  if (lVar11 != param_4 && lVar11 != 0) {
    lVar9 = lVar11;
    do {
      FUN_0283dbfc(param_1,lVar7,lVar9);
      lVar9 = lVar9 + 0x28;
      lVar7 = lVar7 + 0x28;
    } while (param_4 != lVar9);
  }
  FUN_0283dbfc(param_1,lVar7,param_6);
  lVar7 = lVar7 + param_5 * 0x28;
  if (lVar11 == 0) goto LAB_0283e204;
  lVar9 = param_1[5];
  lVar10 = lVar11 + lVar9 * 0x28;
  if (lVar10 != param_4) {
    do {
      FUN_0283dbfc(param_1,lVar7,param_4);
      param_4 = param_4 + 0x28;
      lVar7 = lVar7 + 0x28;
    } while (lVar10 != param_4);
    lVar9 = param_1[5];
  }
  if (lVar9 != 0) {
    plVar5 = *(long **)(lVar11 + 0x20);
    if (plVar5 == (long *)0x0) {
LAB_0283e120:
      plVar5 = *(long **)(lVar11 + 0x18);
    }
    else {
      lVar10 = plVar5[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 != 0) goto LAB_0283e120;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      plVar5 = *(long **)(lVar11 + 0x18);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    if (lVar9 != 1) {
      plVar5 = *(long **)(lVar11 + 0x48);
      if (plVar5 != (long *)0x0) {
        lVar10 = plVar5[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
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
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      lVar9 = lVar9 + -2;
      if (*(long **)(lVar11 + 0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar11 + 0x40) + 0x20))();
      }
      if (lVar9 != 0) {
        lVar11 = lVar11 + 0x50;
        do {
          plVar5 = *(long **)(lVar11 + 0x20);
          if (plVar5 != (long *)0x0) {
            lVar10 = plVar5[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
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
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar5 + 0x20))();
            }
          }
          lVar9 = lVar9 + -1;
          if (*(long **)(lVar11 + 0x18) != (long *)0x0) {
            (**(code **)(**(long **)(lVar11 + 0x18) + 0x20))();
          }
          lVar11 = lVar11 + 0x28;
        } while (lVar9 != 0);
      }
    }
  }
  lVar11 = param_1[6];
  plVar5 = (long *)*param_1;
  uVar8 = param_1[4];
  uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar6 & 1) != 0) {
    lVar9 = tpidr_el0;
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar5,uVar8,lVar11 * 0x28,8);
      goto LAB_0283e204;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,uVar8,lVar11 * 0x28,8);
LAB_0283e204:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (lVar7 - param_2 >> 3) * -0x3333333333333333;
  return;
}


