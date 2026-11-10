/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257b998; name: FUN_0257b998
 */


void FUN_0257b998(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  long *local_40;
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_1 + 0x5c0);
  FUN_0257bb60(&local_50);
  if (CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50)) == 0) {
    local_40 = (long *)0x0;
  }
  else {
    FUN_011a5e18(&local_40);
    puVar4 = (undefined8 *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
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
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
  }
  if ((local_40 != (long *)0x0) && (FUN_01917ea4(local_40,param_1 + 0x5c0), local_40 != (long *)0x0)
     ) {
    lVar7 = local_40[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  lVar6 = *(long *)(param_1 + 0x5c8);
  uVar8 = (lVar6 - *(long *)(param_1 + 0x5c0) >> 1) * -0x5555555555555555;
  lVar7 = uVar8 - 2;
  *(bool *)(param_1 + 0x742) = 1 < uVar8;
  uStack_4c = 0;
  local_50 = 0;
  if (uVar8 < 2 || lVar7 == 0) {
    while( true ) {
      if (lVar6 == *(long *)(param_1 + 0x5d0)) {
        FUN_0257db24(param_1 + 0x5c0,&local_50);
      }
      else {
        FUN_0191c614(param_1 + 0x5d8,lVar6,&local_50);
        *(long *)(param_1 + 0x5c8) = *(long *)(param_1 + 0x5c8) + 6;
      }
      if (lVar7 == 0) break;
      lVar6 = *(long *)(param_1 + 0x5c8);
      lVar7 = lVar7 + 1;
    }
  }
  return;
}


