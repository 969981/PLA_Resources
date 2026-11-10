/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011f5654; name: FUN_011f5654
 */


void FUN_011f5654(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  short *psVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(&local_38);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_01160f90(&local_48,&local_38);
  puVar4 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
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
      local_38[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  lVar7 = FUN_011f6ee0(&local_48);
  puVar4 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
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
      local_48[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  psVar6 = (short *)FUN_011fb09c(lVar7,0);
  if ((*psVar6 != 0) && (psVar6[1] != 0)) {
    local_38._0_4_ = CONCAT22(psVar6[1],*psVar6);
    local_38 = (undefined8 *)(ulong)(uint)local_38;
    FUN_00d40348(param_1,&local_38);
    psVar6 = (short *)FUN_011fb09c(lVar7,1);
    if ((*psVar6 != 0) && (psVar6[1] != 0)) {
      local_38._0_4_ = CONCAT22(psVar6[1],*psVar6);
      local_38 = (undefined8 *)CONCAT44(1,(uint)local_38);
      FUN_00d40348(param_1,&local_38);
      psVar6 = (short *)FUN_011fb09c(lVar7,2);
      if ((*psVar6 != 0) && (psVar6[1] != 0)) {
        local_38._0_4_ = CONCAT22(psVar6[1],*psVar6);
        local_38 = (undefined8 *)CONCAT44(2,(uint)local_38);
        FUN_00d40348(param_1,&local_38);
        psVar6 = (short *)FUN_011fb09c(lVar7,3);
        if ((*psVar6 != 0) && (psVar6[1] != 0)) {
          local_38._0_4_ = CONCAT22(psVar6[1],*psVar6);
          local_38 = (undefined8 *)CONCAT44(3,(uint)local_38);
          FUN_00d40348(param_1,&local_38);
        }
      }
    }
  }
  return;
}


