/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0199fa84; name: FUN_0199fa84
 */


void FUN_0199fa84(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_48 = 0;
  local_50 = (undefined8 *)0x0;
  FUN_008802f0(&local_50,*(long *)(param_2 + 0x238) + 0x58);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_019a5f1c(&local_60,&local_50);
  puVar12 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = *puVar12;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  if (local_60 == (undefined8 *)0x0) goto LAB_0199fc70;
  puVar12 = (undefined8 *)local_60[3];
  if (puVar12 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
LAB_0199fb74:
    puVar12 = local_60;
    piVar1 = (int *)(local_60 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_50 = (undefined8 *)*puVar12;
      FUN_02a44274(lVar8 + 0xd8,&local_50);
    }
  }
  else {
    puVar6 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_04382258 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04382258), puVar4 = PTR_DAT_043794d8, iVar5 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
        uVar7 = FUN_0087f8f0();
        *(undefined8 *)puVar4 = uVar7;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      puVar9 = (undefined8 *)PTR_DAT_04382260;
      *(undefined **)PTR_DAT_04382260 = puVar4;
      __cxa_guard_release(PTR_DAT_04382258);
      if (puVar6 == (undefined8 *)0x0) goto LAB_0199fcec;
LAB_0199fb60:
      do {
        if (puVar6 == puVar9) {
          puVar11 = puVar12 + -10;
          break;
        }
        puVar6 = (undefined8 *)*puVar6;
        puVar11 = (undefined8 *)0x0;
      } while (puVar6 != (undefined8 *)0x0);
    }
    else {
      puVar9 = (undefined8 *)PTR_DAT_04382260;
      if (puVar6 != (undefined8 *)0x0) goto LAB_0199fb60;
LAB_0199fcec:
      puVar11 = (undefined8 *)0x0;
    }
    if (local_60 != (undefined8 *)0x0) goto LAB_0199fb74;
  }
  if (puVar11 != (undefined8 *)0x0) {
    plVar10 = puVar11 + 0xd;
    (**(code **)(*plVar10 + 0x20))(&local_50,plVar10);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01800100(param_1,&local_50);
    puVar12 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_60 = (undefined8 *)*puVar12;
        FUN_02a44274(lVar8 + 0xd8,&local_60);
      }
    }
    param_1[2] = plVar10;
    return;
  }
LAB_0199fc70:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


