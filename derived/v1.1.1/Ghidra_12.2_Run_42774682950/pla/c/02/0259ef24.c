/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259ef24; name: FUN_0259ef24
 */


undefined8 FUN_0259ef24(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  puVar6 = PTR_DAT_0437a6e0;
  puVar5 = PTR_DAT_0437a6d8;
  lVar10 = *(long *)(param_1 + 8);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar11 = *(int *)(lVar10 + 0xc);
    do {
      plVar12 = *(long **)(lVar10 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar9 = FUN_00ad3750();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) {
          return 1;
        }
        if (plVar12 == (long *)puVar6) break;
        plVar12 = (long *)*plVar12;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 == 0) {
            return 1;
          }
          plVar12 = (long *)(lVar10 + -0x50);
          lVar8 = FUN_02c90d14(plVar12);
          if (((lVar8 == 0) || (*(int *)(lVar8 + 0x17c) < 1)) || (*(char *)(lVar8 + 0xc) == '\0')) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          lVar10 = *(long *)(lVar10 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
          if (bVar4) {
            return 0;
          }
          return 1;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
  return 1;
}


