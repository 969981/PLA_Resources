/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01862280; name: FUN_01862280
 */


void FUN_01862280(long *param_1,long *param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN_02a6f65c(param_1,DAT_043eef30);
  *(undefined4 *)(param_1 + 0x73) = 1;
  *param_1 = (long)&PTR_LAB_04229568;
  param_1[9] = (long)&PTR_LAB_042295f8;
  param_1[10] = (long)&PTR_LAB_04229640;
  plVar4 = (long *)param_1[0x3b];
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  param_1[0x3d] = param_1[0x3d] | 1;
  if ((plVar4 == (long *)0x0) || (plVar4 == param_1)) {
    plVar4 = (long *)param_1[0x3a];
  }
  else {
    (**(code **)(*plVar4 + 0x40))(plVar4,0);
    plVar4 = (long *)param_1[0x3a];
  }
  if ((plVar4 != (long *)0x0) && (plVar4 != param_1)) {
    (**(code **)(*plVar4 + 0x40))(plVar4,0);
  }
  *param_1 = (long)&PTR_LAB_04229468;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[9] = (long)&PTR_LAB_042294f8;
  param_1[10] = (long)&PTR_LAB_04229540;
  memcpy(param_1 + 0x76,param_3,0xd0);
  *(undefined1 *)(param_1 + 0x90) = 0;
  lVar6 = *param_2;
  param_1[0x91] = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) goto LAB_01862400;
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(*param_2 + 0xd0);
  param_1[0x92] = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
LAB_01862400:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x93] = 0;
  return;
}


