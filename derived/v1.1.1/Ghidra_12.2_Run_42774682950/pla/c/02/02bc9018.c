/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc9018; name: FUN_02bc9018
 */


void FUN_02bc9018(undefined8 *param_1,long param_2,int *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  nn::os::LockMutex((MutexType *)&DAT_043f1110);
  plVar2 = *(long **)(param_2 + 0x170);
  lVar7 = *(long *)(param_2 + 0x178);
  plVar8 = plVar2;
  if (lVar7 != 0) {
    lVar9 = lVar7 << 3;
    plVar10 = plVar2 + 1;
    lVar11 = *plVar2;
    if (lVar11 != 0) goto LAB_02bc907c;
    do {
      do {
        plVar8 = plVar10;
        lVar9 = lVar9 + -8;
        plVar10 = plVar8 + 1;
        if (lVar9 == 0) goto LAB_02bc9124;
        lVar11 = *plVar8;
      } while (lVar11 == 0);
LAB_02bc907c:
    } while (*(int *)(lVar11 + 0x68) != *param_3);
  }
  if (plVar8 == plVar2 + lVar7) {
LAB_02bc9124:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_008802f0(&local_40,*plVar8 + 0x58);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_02bcad30(param_1,&local_40);
    puVar5 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
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
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_043f1110);
  return;
}


