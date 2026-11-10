/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b79c68; name: FUN_01b79c68
 */


void FUN_01b79c68(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar9 = *(long *)(param_1 + 8);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar10 = *(int *)(lVar9 + 0xc);
    do {
      plVar11 = *(long **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar8 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar11 == (long *)0x0) {
          return;
        }
        if (plVar11 == (long *)puVar5) break;
        plVar11 = (long *)*plVar11;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          plVar11 = (long *)(lVar9 + -0x50);
          if (lVar9 == 0) {
            return;
          }
          lVar7 = FUN_02c90d14(plVar11);
          if (lVar7 != 0) {
            if (*(char *)(param_1 + 0x98) == '\0') {
              FUN_02c90b3c(plVar11);
            }
            else {
              FUN_02c90b30(plVar11);
            }
            if (*(char *)(param_1 + 0x50) != '\0') {
              FUN_00266968(lVar7,param_1 + 0x60);
            }
            if (*(char *)(param_1 + 0x70) != '\0') {
              FUN_0026698c(lVar7,param_1 + 0x80);
            }
            FUN_01b79b1c(param_1);
          }
          lVar9 = *(long *)(lVar9 + 8);
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b79dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar11 + 0x20))(plVar11);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
  return;
}


