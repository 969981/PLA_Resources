/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183a050; name: FUN_0183a050
 */


void FUN_0183a050(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  FUN_018416bc(param_1 + 0x280);
  puVar5 = PTR_DAT_0437a5f0;
  puVar4 = PTR_DAT_0437a5e8;
  lVar8 = *(long *)(param_1 + 0x280);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar10 = *(int *)(lVar8 + 0xc);
    do {
      plVar11 = *(long **)(lVar8 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar7 = FUN_018415dc();
        *(undefined8 *)puVar5 = uVar7;
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
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 == 0) {
            return;
          }
          if (*(char *)(lVar8 + 0x214) == '\0') {
            *(undefined1 *)(param_1 + 0x202) = 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x366) = 0;
          }
          lVar9 = *(long *)(lVar8 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0183a15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar8 + -0x50) + 0x20))();
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


