/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01adf754; name: FUN_01adf754
 */


void FUN_01adf754(undefined8 *param_1,undefined8 param_2,long *param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  long *local_38;
  
  local_38 = (long *)*param_3;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_01b9b978(param_1,param_2,&local_38);
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_0423d380;
  param_1[0x16a] = 0;
  param_1[9] = &PTR_LAB_0423d510;
  param_1[10] = &PTR_LAB_0423d5f0;
  param_1[199] = &PTR_LAB_0423d678;
  param_1[0xc9] = &PTR_LAB_0423d6c0;
  param_1[0xc6] = &PTR_LAB_0423d618;
  *(undefined4 *)(param_1 + 0x168) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x16b) = 0;
  param_1[0x16c] = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined1 *)((long)param_1 + 0xba4) = 0;
  *(undefined4 *)(param_1 + 0x176) = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  *(undefined8 *)((long)param_1 + 0xb44) = 0;
  *(undefined4 *)((long)param_1 + 0x62c) = 1;
  uVar5 = FUN_01ba04e0(param_1,1);
  fVar6 = (float)param_4 / -1000.0 + 100.0;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  else if (100.0 < fVar6) {
    fVar6 = 100.0;
  }
  FUN_01ae02bc(fVar6,*(undefined4 *)(param_1 + 0x168),uVar5,1);
  *(float *)(param_1 + 0x168) = fVar6;
  return;
}


