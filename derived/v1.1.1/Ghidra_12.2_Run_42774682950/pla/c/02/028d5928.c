/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d5928; name: FUN_028d5928
 */


void FUN_028d5928(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_0437ace8 + 0x10;
  *param_1 = &PTR_LAB_04273578;
  param_1[1] = puVar1;
  FUN_00937ea0(param_1 + 2,param_2 + 0x10);
  lVar8 = *(long *)(param_2 + 0x20);
  param_1[4] = lVar8;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x28);
  param_1[5] = lVar8;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x30);
  param_1[6] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[1] = &PTR_LAB_04273598;
  lVar8 = *(long *)(param_2 + 0x38);
  param_1[7] = lVar8;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  plVar7 = *(long **)(param_2 + 0x60);
  param_1[0xc] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  plVar7 = *(long **)(param_2 + 0x80);
  param_1[0x10] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  plVar7 = *(long **)(param_2 + 0xa0);
  param_1[0x14] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  uVar3 = *(undefined4 *)(param_2 + 0xa8);
  *(undefined1 *)((long)param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x15) = uVar3;
  return;
}


