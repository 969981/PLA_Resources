/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a88454; name: FUN_01a88454
 */


void FUN_01a88454(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01a9e404(&local_40,param_1 + 0xc1);
  FUN_01a821fc(&local_30,&local_40);
  puVar4 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_40[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  if (local_30 != (long *)0x0) {
    fVar8 = (float)FUN_01830208();
    if (0.0 < fVar8 != (bool)(char)param_1[0x16e]) {
      if (fVar8 <= 0.0) {
        (**(code **)(*param_1 + 0x3a0))(param_1);
      }
      else {
        uVar5 = FUN_01830438(local_30);
        (**(code **)(*param_1 + 0x398))(param_1,uVar5 & 1);
      }
      *(bool *)(param_1 + 0x16e) = 0.0 < fVar8;
    }
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
      }
    }
  }
  return;
}


