/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ae1afc; name: FUN_01ae1afc
 */


long FUN_01ae1afc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  if ((*(long *)(param_1 + 3000) == 0) || (uVar11 = FUN_02a43a8c(), (uVar11 & 1) != 0)) {
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    puVar6 = PTR_DAT_043794c8;
    puVar5 = PTR_DAT_043794b8;
    puVar4 = PTR_DAT_043794b0;
    lVar13 = *(long *)(param_1 + 0x1a8);
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar9 = *(int *)(lVar13 + 0xc);
      do {
        plVar14 = *(long **)(lVar13 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar8 = uVar12;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar6 = puVar8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar5 = puVar6;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01ae1b3c;
          if (plVar14 == (long *)puVar5) break;
          plVar14 = (long *)*plVar14;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_80 = (long *)0x0;
            if (*(long *)(lVar13 + 0x18) != 0) {
              local_80 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
            }
            goto LAB_01ae1b40;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01ae1b3c:
    local_80 = (long *)0x0;
LAB_01ae1b40:
    FUN_00aaf168(local_78,&local_80,1);
    FUN_00ab256c(param_1 + 3000,local_78);
    if (local_78[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78[0] + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *local_78[0];
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (local_80 != (long *)0x0) {
      lVar13 = local_80[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  return param_1 + 3000;
}


