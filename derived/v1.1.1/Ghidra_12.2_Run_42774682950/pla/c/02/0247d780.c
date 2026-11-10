/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0247d780; name: FUN_0247d780
 */


void FUN_0247d780(undefined8 param_1,long *param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 *local_40 [2];
  undefined8 local_30;
  byte *pbStack_28;
  
  pcVar8 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  (*pcVar8)(&local_60);
  FUN_0014ff10(param_1,0);
  pbVar5 = (byte *)FUN_0247d960();
  pbStack_28 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbStack_28 = pbVar5 + 1;
  }
  local_30 = param_1;
  puVar6 = (undefined8 *)FUN_0247dbb0(param_1);
  puVar6[3] = 0;
  *puVar6 = local_60;
  puVar6[1] = uStack_58;
  puVar6[2] = 0;
  FUN_00b5fc1c(puVar6 + 2,local_50);
  puVar6[4] = 0;
  puVar6[5] = 0;
  FUN_019c96f0(puVar6 + 4,local_40);
  FUN_0247ddc4(&local_30);
  if (local_40[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40[0] + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      local_40[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_30 = *local_40[0];
      FUN_02a44274(lVar7 + 0xd8,&local_30);
    }
  }
  if (local_50[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50[0] + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      local_50[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_30 = *local_50[0];
      FUN_02a44274(lVar7 + 0xd8,&local_30);
    }
  }
  return;
}


