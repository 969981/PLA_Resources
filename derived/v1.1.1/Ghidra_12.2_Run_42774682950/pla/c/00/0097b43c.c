/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0097b43c; name: FUN_0097b43c
 */


void FUN_0097b43c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  lVar6 = *(long *)(param_1 + 0x68);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0xc) == 0)) {
    local_30 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar6 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar6;
    plVar7 = *(long **)(lVar6 + 0xc0);
    if (plVar7 != (long *)0x0) {
      FUN_02a439f4(plVar7[0xb]);
    }
    FUN_0097b5dc(local_40,plVar7,local_30,&local_30);
    FUN_0097d524((long *)(param_1 + 0x68),local_40);
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
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_28 = *local_40[0];
        FUN_02a44274(lVar6 + 0xd8,&local_28);
      }
    }
    if ((plVar7 != (long *)0x0) && (uVar5 = FUN_02a43a5c(plVar7[0xb]), (uVar5 & 1) != 0)) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return;
}


