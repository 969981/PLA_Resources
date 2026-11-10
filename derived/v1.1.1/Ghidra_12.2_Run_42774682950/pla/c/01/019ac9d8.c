/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019ac9d8; name: FUN_019ac9d8
 */


void FUN_019ac9d8(long *param_1,long *param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  FUN_02a6f65c(param_1,DAT_043eef30);
  puVar4 = PTR_DAT_04382180;
  *(undefined4 *)(param_1 + 0x73) = 1;
  plVar5 = (long *)param_1[0x3b];
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[9] = (long)(puVar4 + 0xa0);
  param_1[10] = (long)(puVar4 + 0xe8);
  param_1[0x3d] = param_1[0x3d] | 1;
  if ((plVar5 == (long *)0x0) || (plVar5 == param_1)) {
    plVar5 = (long *)param_1[0x3a];
  }
  else {
    (**(code **)(*plVar5 + 0x40))(plVar5,0);
    plVar5 = (long *)param_1[0x3a];
  }
  if ((plVar5 != (long *)0x0) && (plVar5 != param_1)) {
    (**(code **)(*plVar5 + 0x40))(plVar5,0);
  }
  *param_1 = (long)&PTR_LAB_04232bf8;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[9] = (long)&PTR_LAB_04232c88;
  param_1[10] = (long)&PTR_LAB_04232cd0;
  memcpy(param_1 + 0x76,param_3,0xd0);
  lVar7 = *(long *)(*param_2 + 0x68);
  param_1[0x90] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_019acbcc;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar7 = *param_2;
  param_1[0x91] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_019acbcc;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = *(long *)(*param_2 + 0x70);
  param_1[0x92] = lVar8;
  lVar7 = 0;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_019acbcc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = param_1[0x92];
  }
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x97] = 0x1fffffffffffffff;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  param_1[0x96] = param_1[1];
  *(undefined1 *)(lVar7 + 0x214) = 0;
  return;
}


