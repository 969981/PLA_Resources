/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e630c; name: FUN_011e630c
 */


void FUN_011e630c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  code *pcVar8;
  long *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  long *local_28;
  
  FUN_00d58ef0(*(undefined8 *)(param_1 + 0x90),param_2,0);
  local_40 = 0;
  local_36 = 0;
  local_38 = 0x101;
  FUN_00d591fc(&local_28,*(undefined8 *)(param_1 + 0x90));
  local_48 = local_28;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  FUN_00d42690(*(undefined8 *)(param_1 + 0xa0),1,1);
  FUN_00d428b0(*(undefined8 *)(param_1 + 0xa0),0);
  FUN_00d67ea8(*(undefined8 *)(param_1 + 0xa0),&local_48);
  FUN_00d6bb6c(*(undefined8 *)(param_1 + 0xb0),3,0);
  pcVar8 = *(code **)(param_1 + 200);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    (*pcVar8)(param_1 + 0xe0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0xe0);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[3];
    *(undefined8 *)(param_1 + 0xd0) = param_3[2];
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    *(undefined8 *)(param_1 + 200) = uVar3;
  }
  *(undefined8 *)(param_1 + 0xb8) = 2;
  return;
}


