/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cff52c; name: FUN_00cff52c
 */


void FUN_00cff52c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  param_1[3] = 0;
  param_1[2] = 0;
  memset(param_1 + 10,0,500);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  uVar7 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar7;
  FUN_008c4b3c(param_1 + 2,param_2 + 2);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar7 = param_2[5];
  param_1[7] = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar7 = param_2[6];
  *(undefined4 *)(param_1 + 8) = uVar2;
  param_1[6] = uVar7;
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
  (**(code **)(*(long *)*param_3 + 0x18))(local_58);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_0087f944(&local_68,local_58);
  puVar5 = local_58[0];
  if (local_58[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58[0] + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_48 = *puVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_48);
    }
  }
  FUN_0087fcf0(param_1 + 0x4a,&local_68);
  puVar5 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_58[0] = (undefined8 *)*puVar5;
      FUN_02a44274(lVar8 + 0xd8,local_58);
    }
  }
  FUN_00d00a64(param_1 + 0x4d,param_4);
  return;
}


