/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e06420; name: FUN_01e06420
 */


undefined8 FUN_01e06420(long *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined1 auStack_70 [8];
  long local_68;
  
  puVar6 = PTR_DAT_0437a6e0;
  puVar5 = PTR_DAT_0437a6d8;
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar10 = *(int *)(lVar9 + 0xc);
    do {
      plVar11 = *(long **)(lVar9 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar8 = FUN_00ad3750();
        *(undefined8 *)puVar6 = uVar8;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar11 == (long *)0x0) {
          return 1;
        }
        if (plVar11 == (long *)puVar6) break;
        plVar11 = (long *)*plVar11;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 == 0) {
            return 1;
          }
          plVar11 = (long *)(lVar9 + -0x50);
          FUN_02c90a30(auStack_70,plVar11);
          if (local_68 == 0) {
            FUN_00984b00(auStack_70);
          }
          else {
            cVar3 = *(char *)(local_68 + 0x1e1);
            FUN_00984b00(auStack_70);
            if (cVar3 != '\0') {
              bVar4 = true;
              goto LAB_01e06504;
            }
          }
          bVar4 = false;
LAB_01e06504:
          lVar9 = *(long *)(lVar9 + 8);
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          if (bVar4) {
            return 1;
          }
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar7;
    } while (iVar7 != 0);
  }
  return 1;
}


