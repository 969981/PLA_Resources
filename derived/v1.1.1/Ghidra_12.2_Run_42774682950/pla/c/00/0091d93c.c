/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091d93c; name: FUN_0091d93c
 */


void FUN_0091d93c(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined *local_40;
  undefined1 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_00926734();
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_40 = PTR_DAT_04379c50;
  *param_1 = &PTR_LAB_041b7578;
  param_1[9] = &PTR_LAB_041b75c0;
  param_1[10] = &PTR_LAB_041b7608;
  local_40 = local_40 + 0x10;
  puStack_38 = &DAT_f4b17a579f18960;
  local_30 = 0x82a2b175229d6a5b;
  uStack_28 = 0;
  FUN_029546dc(&local_40);
  uVar8 = param_1[1];
  local_48 = FUN_0295473c(&local_40);
  lVar6 = FUN_009204e0(uVar8,&local_48);
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  param_1[0xf] = lVar6;
  return;
}


