/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f56240; name: FUN_01f56240
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01f56240(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  FUN_0289240c(local_38,*(undefined8 *)(param_1 + 0xa0));
  puVar4 = local_38[0];
  puVar5 = PTR_DAT_043831e8;
  if (local_38[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_38[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_38[0] + 0xc);
      puVar11 = PTR_DAT_043831f0;
      iVar8 = *(int *)((long)local_38[0] + 0xc);
      do {
        plVar12 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(puVar5), puVar11 = PTR_DAT_043831f0, iVar7 != 0)) {
          uVar9 = FUN_00fd7558();
          *(undefined8 *)PTR_DAT_043831f0 = uVar9;
          __cxa_guard_release(puVar5);
          puVar11 = PTR_DAT_043831f0;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01f563f8;
          if (plVar12 == (long *)puVar11) break;
          plVar12 = (long *)*plVar12;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar10 = puVar4[3];
            plVar12 = (long *)0x0;
            puVar4 = local_38[0];
            if (lVar10 != 0) {
              plVar12 = (long *)(lVar10 + -0x50);
            }
            goto joined_r0x01f562f4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_01f563f8:
    plVar12 = (long *)0x0;
    puVar4 = local_38[0];
joined_r0x01f562f4:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_28 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_28);
      }
    }
    if (plVar12 != (long *)0x0) {
      bVar6 = (int)plVar12[0xd] == 2;
      lVar10 = plVar12[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
        return bVar6;
      }
      return bVar6;
    }
  }
  return false;
}


