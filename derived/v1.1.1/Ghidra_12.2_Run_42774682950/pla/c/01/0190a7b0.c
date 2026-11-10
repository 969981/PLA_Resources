/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0190a7b0; name: FUN_0190a7b0
 */


void FUN_0190a7b0(undefined1 param_1 [16],long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_58 = (long *)0x0;
  uStack_50 = 0;
  FUN_01912b7c(&local_58,param_2 + 0x20);
  plVar5 = local_58;
  puVar7 = PTR_DAT_0437aea0;
  puVar6 = PTR_DAT_0437ae98;
  if (local_58 != (long *)0x0) {
    if (*(int *)((long)local_58 + 0xc) != 0) {
      piVar1 = (int *)((long)local_58 + 0xc);
      iVar9 = *(int *)((long)local_58 + 0xc);
      do {
        plVar12 = (long *)plVar5[2];
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar10 = FUN_00ab38cc();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_0190a868;
          if (plVar12 == (long *)puVar7) break;
          plVar12 = (long *)*plVar12;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = plVar5[3];
            plVar5 = (long *)0x0;
            plVar12 = local_58;
            if (lVar11 != 0) {
              plVar5 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x0190a88c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_0190a868:
    plVar5 = (long *)0x0;
    plVar12 = local_58;
joined_r0x0190a88c:
    local_58 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        plVar12[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *plVar12;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar5 != (long *)0x0) {
      FUN_009c69bc(&local_58,plVar5);
      *(undefined1 *)(local_58 + 0x1c) = 1;
      local_58[0x1b] = param_1._8_8_;
      local_58[0x1a] = param_1._0_8_;
      if (local_58 != (long *)0x0) {
        lVar11 = local_58[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      lVar11 = plVar5[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  return;
}


