/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019aa438; name: FUN_019aa438
 */


void FUN_019aa438(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar8 = 0;
  if (*param_2 != 0) {
    lVar8 = *param_2 + 0x48;
  }
  FUN_02a68230(param_1,lVar8,0);
  puVar1 = PTR_DAT_04382180 + 0x10;
  plVar6 = (long *)param_1[0x3b];
  puVar2 = PTR_DAT_04382180 + 0xe8;
  param_1[9] = (long)(PTR_DAT_04382180 + 0xa0);
  param_1[10] = (long)puVar2;
  *param_1 = (long)puVar1;
  param_1[0x3d] = param_1[0x3d] | 1;
  if ((plVar6 == (long *)0x0) || (plVar6 == param_1)) {
    plVar6 = (long *)param_1[0x3a];
  }
  else {
    (**(code **)(*plVar6 + 0x40))(plVar6,0);
    plVar6 = (long *)param_1[0x3a];
  }
  if ((plVar6 != (long *)0x0) && (plVar6 != param_1)) {
    (**(code **)(*plVar6 + 0x40))(plVar6,0);
  }
  *param_1 = (long)&PTR_LAB_04232af8;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[9] = (long)&PTR_LAB_04232b88;
  param_1[10] = (long)&PTR_LAB_04232bd0;
  lVar8 = *(long *)(*param_2 + 0x70);
  param_1[0x75] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar3 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = *piVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[0x76] = 0x12c00000000;
  param_1[0x77] = 0x12c0000012c;
  local_40 = 0xd5a0d90665ea081a;
  pcStack_38 = "Area::SleepJob";
  local_30 = 0xe;
  local_28 = (long *)0x0;
  FUN_00d16210(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


