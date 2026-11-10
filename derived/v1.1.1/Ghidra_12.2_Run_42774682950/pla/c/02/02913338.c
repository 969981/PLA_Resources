/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02913338; name: FUN_02913338
 */


int FUN_02913338(long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                uint param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  if (*(long **)(param_1 + 0x68) == (long *)0x0) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(local_60);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_02913eb8(&local_70,local_60);
    puVar3 = local_60[0];
    if (local_60[0] != (undefined8 *)0x0) {
      piVar7 = (int *)(local_60[0] + 1);
      do {
        iVar4 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 + -1 == 0) {
        local_60[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_48 = *puVar3;
        FUN_02a44274(lVar6 + 0xd8,&local_48);
      }
    }
    puVar3 = local_70;
    if (local_70 == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      piVar7 = (int *)(local_70 + 1);
      uVar8 = *local_70;
      do {
        iVar4 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 + -1 == 0) {
        local_70[2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar4 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_60[0] = (undefined8 *)*puVar3;
        FUN_02a44274(lVar6 + 0xd8,local_60);
      }
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
  iVar4 = (**(code **)(*plVar5 + 0xc0))
                    (plVar5,*(undefined8 *)(param_2 + 8),uVar8,param_5 | 1,&LAB_0290f2d0,param_1,0,0
                     ,0);
  if (iVar4 != 0) {
    FUN_0291629c(*(undefined8 *)(param_1 + 0x178),param_2,iVar4,uVar8,param_3,param_4,param_6 & 1);
  }
  return iVar4;
}


