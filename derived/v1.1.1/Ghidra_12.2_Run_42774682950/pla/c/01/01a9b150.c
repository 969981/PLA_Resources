/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9b150; name: FUN_01a9b150
 */


bool FUN_01a9b150(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar5 = PTR_DAT_04379e80;
  puVar4 = PTR_DAT_04379e78;
  lVar9 = *(long *)(param_1 + 0x220);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar11 = *(int *)(lVar9 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar8 = FUN_0095a420();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      if (puVar12 == (undefined8 *)0x0) {
        return false;
      }
      while (puVar12 != (undefined8 *)puVar5) {
        puVar12 = (undefined8 *)*puVar12;
        if (puVar12 == (undefined8 *)0x0) {
          return false;
        }
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar11) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 == 0) {
            return false;
          }
          bVar6 = *(int *)(lVar9 + 0x1c0) == 0;
          lVar10 = *(long *)(lVar9 + 8);
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
            (**(code **)(*(long *)(lVar9 + -0x50) + 0x20))();
            return bVar6;
          }
          return bVar6;
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


