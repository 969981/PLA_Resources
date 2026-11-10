/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a26978; name: FUN_01a26978
 */


undefined8 FUN_01a26978(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  
  puVar6 = PTR_DAT_0437ef50;
  puVar5 = PTR_DAT_0437ef48;
  lVar12 = *(long *)(param_1 + 0x70);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar13 = *(int *)(lVar12 + 0xc);
    do {
      puVar14 = *(undefined8 **)(lVar12 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar9 = FUN_009cdcc0();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      if (puVar14 == (undefined8 *)0x0) {
        return 0;
      }
      while (puVar14 != (undefined8 *)puVar6) {
        puVar14 = (undefined8 *)*puVar14;
        if (puVar14 == (undefined8 *)0x0) {
          return 0;
        }
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return 0;
          }
          plVar11 = *(long **)(lVar12 + 0x48);
          uVar2 = *(uint *)(param_1 + 0x58);
          uVar7 = (**(code **)(*plVar11 + 0x38))(plVar11);
          if (uVar2 < uVar7) {
            uVar9 = (**(code **)(*plVar11 + 0x40))(plVar11,*(undefined4 *)(param_1 + 0x58));
          }
          else {
            uVar9 = 0;
          }
          lVar10 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
          }
          return uVar9;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar8;
    } while (iVar8 != 0);
  }
  return 0;
}


