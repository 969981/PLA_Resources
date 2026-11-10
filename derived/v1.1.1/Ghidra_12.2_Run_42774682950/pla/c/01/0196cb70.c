/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0196cb70; name: FUN_0196cb70
 */


void FUN_0196cb70(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
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
  *param_1 = (long)&PTR_LAB_042320a8;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[9] = (long)&PTR_LAB_04232138;
  param_1[10] = (long)&PTR_LAB_04232180;
  lVar8 = *(long *)(*param_2 + 0x68);
  param_1[0x75] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0196cd2c;
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
  lVar8 = *param_2;
  param_1[0x76] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0196cd2c;
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
  lVar8 = *(long *)(*param_2 + 0x70);
  param_1[0x77] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0196cd2c:
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
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_3 + 8);
  param_1[0x79] = *(long *)(param_3 + 0x10);
  return;
}


