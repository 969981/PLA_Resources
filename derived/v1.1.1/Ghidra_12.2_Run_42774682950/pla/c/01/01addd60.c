/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01addd60; name: FUN_01addd60
 */


void FUN_01addd60(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58 [2];
  long *local_48;
  
  (**(code **)(**(long **)(param_1 + 0x600) + 0x10))(local_58);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_01ade564(&local_68,local_58);
  plVar10 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar9 = local_58[0] + 1;
    do {
      iVar7 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_48 = (long *)*plVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_48);
    }
  }
  if (local_68 == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_00ca2a50(&local_48);
    puVar6 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68 + 1);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_58[0] = (long *)*puVar6;
        FUN_02a44274(lVar8 + 0xd8,local_58);
      }
    }
  }
  if (local_48 != (long *)0x0) {
    FUN_01adda34(local_58,param_1);
    if (local_58[0] == (long *)0x0) {
      local_70 = (long *)0x0;
      plVar10 = local_48;
    }
    else {
      FUN_00ba1e00(&local_70);
      plVar9 = local_58[0];
      plVar10 = local_48;
      if (local_58[0] != (long *)0x0) {
        plVar2 = local_58[0] + 1;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          local_58[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_68 = (undefined8 *)*plVar9;
          FUN_02a44274(lVar8 + 0xd8,&local_68);
          plVar10 = local_48;
        }
      }
    }
    local_48 = plVar10;
    if (local_70 != (long *)0x0) {
      iVar7 = *(int *)((long)plVar10 + 0x74);
      lVar8 = plVar10[0xf];
      cVar4 = *(char *)((long)plVar10 + 0x7c);
      cVar3 = *(char *)((long)plVar10 + 0x7d);
      plVar9 = (long *)plVar10[0x13];
      if (plVar9 == (long *)0x0) {
        plVar10 = (long *)plVar10[0x1a];
      }
      else {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        plVar10 = (long *)plVar10[0x1a];
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      if (0 < iVar7) {
        FUN_01c047d0(local_70,1,iVar7);
      }
      FUN_01c00ae0(local_70,cVar4 != '\0');
      if (0 < (int)lVar8) {
        FUN_01c01684(local_70,(int)lVar8);
      }
      if (cVar3 != '\0') {
        FUN_01c04404(local_70);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      if (local_70 != (long *)0x0) {
        lVar8 = local_70[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_70 + 0x20))();
        }
      }
    }
    if (local_48 != (long *)0x0) {
      lVar8 = local_48[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  return;
}


