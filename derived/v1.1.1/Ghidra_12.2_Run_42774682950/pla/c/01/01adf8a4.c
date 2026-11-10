/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01adf8a4; name: FUN_01adf8a4
 */


void FUN_01adf8a4(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 long *param_5,uint param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  long *local_58;
  long *local_48;
  
  local_48 = (long *)*param_3;
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_58 = (long *)*param_5;
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01b9bcdc(param_1,param_2,&local_48,param_4,&local_58);
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 10;
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
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
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
  uVar6 = FUN_01ba04e0(param_1,1);
  fVar8 = (float)param_6 / -1000.0 + 100.0;
  if (fVar8 < 0.0) {
    fVar8 = 0.0;
  }
  else if (100.0 < fVar8) {
    fVar8 = 100.0;
  }
  FUN_01ae02bc(fVar8,*(undefined4 *)(param_1 + 0x168),uVar6,1);
  *(float *)(param_1 + 0x168) = fVar8;
  return;
}


