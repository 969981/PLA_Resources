/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d62910; name: FUN_00d62910
 */


void FUN_00d62910(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_0283c824(&local_70);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_008802f0(&local_58,local_70 + 0xb);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_00d62bb8(&local_68,&local_58);
  puVar8 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar12 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_48 = *puVar8;
      FUN_02a44274(lVar13 + 0xd8,&local_48);
    }
  }
  uVar2 = *param_4;
  uVar4 = param_4[1];
  uVar3 = param_4[2];
  plVar5 = (long *)param_4[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00d62eb8(param_1,&local_68);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = plVar5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = param_2;
  param_1[7] = uVar2;
  param_1[8] = uVar4;
  param_1[9] = uVar3;
  puVar11 = PTR_LAB_0437b398;
  puVar10 = PTR_LAB_0437b390;
  puVar9 = PTR_LAB_0437b388;
  if (plVar5 == (long *)0x0) {
    param_1[2] = PTR_FUN_0437b380;
    param_1[3] = puVar9;
    param_1[4] = puVar10;
    param_1[5] = puVar11;
    puVar8 = local_68;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    puVar9 = PTR_LAB_0437b388;
    param_1[2] = PTR_FUN_0437b380;
    param_1[3] = puVar9;
    puVar9 = PTR_LAB_0437b398;
    param_1[4] = PTR_LAB_0437b390;
    param_1[5] = puVar9;
    (**(code **)(*plVar5 + 0x20))(plVar5);
    puVar8 = local_68;
  }
  local_68 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
    do {
      iVar12 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  if (local_70 != (long *)0x0) {
    lVar13 = local_70[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


