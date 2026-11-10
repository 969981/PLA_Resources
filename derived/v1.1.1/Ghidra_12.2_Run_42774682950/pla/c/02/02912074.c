/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02912074; name: FUN_02912074
 */


void FUN_02912074(long param_1,undefined8 *param_2,undefined8 *param_3,undefined1 (*param_4) [16])

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x130));
  *(undefined8 *)(param_1 + 0x108) = param_2[1];
  *(undefined8 *)(param_1 + 0x100) = *param_2;
  *(undefined8 *)(param_1 + 0x118) = param_3[1];
  *(undefined8 *)(param_1 + 0x110) = *param_3;
  uVar8 = *(undefined8 *)(*param_4 + 8);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)*param_4;
  *(undefined8 *)(param_1 + 0x128) = uVar8;
  if (*(long **)(param_1 + 0x60) == (long *)0x0) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))(&local_68);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_02913eb8(&local_80,&local_68);
    if (local_68 != (undefined8 *)0x0) {
      piVar7 = (int *)(local_68 + 1);
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
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_70 = *local_68;
        FUN_02a44274(lVar6 + 0xd8,&local_70);
      }
    }
    puVar3 = local_80;
    if (local_80 == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      piVar7 = (int *)(local_80 + 1);
      uVar8 = *local_80;
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
        local_80[2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar4 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_68 = (undefined8 *)*puVar3;
        FUN_02a44274(lVar6 + 0xd8,&local_68);
      }
    }
  }
  local_50 = *(undefined4 *)param_2;
  uStack_4c = *(undefined4 *)((long)param_2 + 4);
  local_48 = *(undefined4 *)(param_2 + 1);
  local_68 = (undefined8 *)*param_3;
  auVar9._4_4_ = *(undefined4 *)(param_3 + 1);
  auVar9._0_4_ = *(undefined4 *)param_3;
  auVar9._8_4_ = *(undefined4 *)param_3;
  auVar9._12_4_ = *(undefined4 *)(param_3 + 1);
  auVar10 = NEON_ext(*param_4,*param_4,8,1);
  uStack_58 = NEON_ext(*(undefined8 *)*param_4,auVar10._0_8_,4,1);
  auVar9 = NEON_ext(auVar9,*param_4,0xc,1);
  local_60 = auVar9._0_8_;
  plVar5 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
  (**(code **)(*plVar5 + 0x60))(plVar5,uVar8,&local_68);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
  return;
}


