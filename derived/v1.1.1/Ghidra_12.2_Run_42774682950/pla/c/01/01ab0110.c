/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab0110; name: FUN_01ab0110
 */


bool FUN_01ab0110(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar6 = PTR_DAT_0437aea0;
  puVar5 = PTR_DAT_0437ae98;
  lVar9 = *(long *)(param_1 + 0x1f8);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar11 = *(int *)(lVar9 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar9 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar8 = FUN_00ab38cc();
        *(undefined8 *)puVar6 = uVar8;
        __cxa_guard_release(puVar5);
      }
      if (puVar12 == (undefined8 *)0x0) {
        return false;
      }
      while (puVar12 != (undefined8 *)puVar6) {
        puVar12 = (undefined8 *)*puVar12;
        if (puVar12 == (undefined8 *)0x0) {
          return false;
        }
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 == 0) {
            return false;
          }
          uVar4 = *(int *)(lVar9 + 0x218) - 1;
          lVar10 = *(long *)(lVar9 + 8);
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*(long *)(lVar9 + -0x50) + 0x20))();
          }
          return (uVar4 & 0x1f) == 1 || 4 < uVar4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
  return false;
}


