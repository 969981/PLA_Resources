/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269c688; name: FUN_0269c688
 */


void FUN_0269c688(long param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  iVar5 = *param_2;
  if (iVar5 == 1) {
    local_30 = (undefined8 *)0x0;
    uStack_28 = 0;
    FUN_00aeb228(&local_30,param_1 + 0x1f8);
    FUN_01a0ac80(param_3,&local_30);
    if (local_30 == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_30 + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar7 = local_30;
    } while (cVar2 != '\0');
  }
  else if (iVar5 == 2) {
    if ((char)param_2[1] == '\0') {
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_00aeb228(&local_50,param_1 + 0x208);
      FUN_01a0ac80(param_3,&local_50);
      if (local_50 == (undefined8 *)0x0) {
        return;
      }
      piVar1 = (int *)(local_50 + 1);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puVar7 = local_50;
      } while (cVar2 != '\0');
    }
    else {
      local_40 = (undefined8 *)0x0;
      uStack_38 = 0;
      FUN_00aeb228(&local_40,param_1 + 0x218);
      FUN_01a0ac80(param_3,&local_40);
      if (local_40 == (undefined8 *)0x0) {
        return;
      }
      piVar1 = (int *)(local_40 + 1);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puVar7 = local_40;
      } while (cVar2 != '\0');
    }
  }
  else {
    if (iVar5 != 3) {
      return;
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_00aeb228(&local_60,param_1 + 0x228);
    FUN_01a0ac80(param_3,&local_60);
    if (local_60 == (undefined8 *)0x0) {
      return;
    }
    piVar1 = (int *)(local_60 + 1);
    do {
      bVar4 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar7 = local_60;
    } while (cVar2 != '\0');
  }
  if (bVar4) {
    puVar7[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar6 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar6;
    local_18 = *puVar7;
    FUN_02a44274(lVar6 + 0xd8,&local_18);
  }
  return;
}


