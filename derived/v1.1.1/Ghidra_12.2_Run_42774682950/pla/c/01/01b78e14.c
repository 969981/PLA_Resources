/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b78e14; name: FUN_01b78e14
 */


undefined8 FUN_01b78e14(undefined8 param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_04382340;
  if (*(char *)(param_2 + 0x638) == '\0') {
    if (*(int *)(param_3 + 0xf0) == 5) {
      return 1;
    }
    if (((*(int *)(param_3 + 0xf0) == 0x27) && (lVar11 = *(long *)(param_3 + 0x108), lVar11 != 0))
       && (*(int *)(lVar11 + 0xc) != 0)) {
      piVar1 = (int *)(lVar11 + 0xc);
      puVar8 = (undefined8 *)PTR_DAT_04382338;
      iVar5 = *(int *)(lVar11 + 0xc);
      while( true ) {
        puVar10 = *(undefined8 **)(lVar11 + 0x10);
        if (((*puVar4 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(puVar4), puVar8 = (undefined8 *)PTR_DAT_04382338, iVar6 != 0
           )) {
          uVar7 = FUN_019fa6c0();
          *(undefined8 *)PTR_DAT_04382338 = uVar7;
          __cxa_guard_release(puVar4);
          puVar8 = (undefined8 *)PTR_DAT_04382338;
        }
        if (puVar10 == (undefined8 *)0x0) break;
        while (puVar10 != puVar8) {
          puVar10 = (undefined8 *)*puVar10;
          if (puVar10 == (undefined8 *)0x0) {
            return 0;
          }
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar5) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = *(long *)(lVar11 + 0x18);
            plVar9 = (long *)(lVar11 + -0x50);
            if (lVar11 == 0) {
              return 0;
            }
            iVar5 = FUN_019e3bb8(plVar9);
            lVar11 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))(plVar9);
              if (iVar5 == 0) {
                return 0;
              }
              return 1;
            }
            if (iVar5 == 0) {
              return 0;
            }
            return 1;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar5 = iVar6;
        if (iVar6 == 0) {
          return 0;
        }
      }
    }
  }
  return 0;
}


