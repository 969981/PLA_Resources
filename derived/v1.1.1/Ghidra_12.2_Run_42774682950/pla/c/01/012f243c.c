/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f243c; name: FUN_012f243c
 */


void FUN_012f243c(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  local_60 = (undefined8 *)&DAT_1e5b5b2eb6bc8833;
  pcStack_58 = "ViewTop";
  local_50 = 7;
  local_48 = (long *)0x0;
  lVar6 = FUN_012f758c(*(undefined8 *)(param_1 + 0x4c8),&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (lVar6 != 0) {
    (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(&local_60);
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_01160f90(&local_40,&local_60);
    puVar2 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar5 = *piVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *puVar2;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
    lVar8 = FUN_012f4b10(&local_40);
    puVar2 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
      do {
        iVar5 = *piVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 + -1 == 0) {
        local_40[2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar5 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_60 = (undefined8 *)*puVar2;
        FUN_02a44274(lVar9 + 0xd8,&local_60);
      }
    }
    if (lVar8 != 0) {
      if (*(char *)(param_1 + 0x721) == '\0') {
        cVar4 = FUN_00d40390(param_1);
        if (cVar4 == '\x02') {
          bVar3 = *(char *)(lVar8 + 0x6a) != '\0';
          uVar7 = 1;
        }
        else {
          bVar3 = *(char *)(lVar8 + 0x6a) != '\0';
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 1;
        bVar3 = false;
      }
      FUN_012f37e8(lVar6,uVar7,bVar3);
      FUN_01302758(lVar6,*(undefined8 *)(param_1 + 0x728));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


