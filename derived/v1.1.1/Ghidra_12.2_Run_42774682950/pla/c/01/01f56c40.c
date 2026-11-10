/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f56c40; name: FUN_01f56c40
 */


undefined4 FUN_01f56c40(void)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  int iVar11;
  undefined8 *puVar12;
  
  lVar7 = DAT_043d4a80;
  if ((DAT_043d4a80 != 0) && (*(int *)(DAT_043d4a80 + 0xc) != 0)) {
    piVar1 = (int *)(DAT_043d4a80 + 0xc);
    puVar9 = (undefined8 *)PTR_DAT_043831f0;
    pbVar10 = PTR_DAT_043831e8;
    iVar11 = *(int *)(DAT_043d4a80 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar7 + 0x10);
      if (((*pbVar10 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_043831e8), pbVar10 = PTR_DAT_043831e8,
         puVar9 = (undefined8 *)PTR_DAT_043831f0, iVar5 != 0)) {
        uVar6 = FUN_00fd7558();
        *(undefined8 *)PTR_DAT_043831f0 = uVar6;
        __cxa_guard_release(PTR_DAT_043831e8);
        pbVar10 = PTR_DAT_043831e8;
        puVar9 = (undefined8 *)PTR_DAT_043831f0;
      }
      if (puVar12 == (undefined8 *)0x0) {
        return 0;
      }
      while (puVar12 != puVar9) {
        puVar12 = (undefined8 *)*puVar12;
        if (puVar12 == (undefined8 *)0x0) {
          return 0;
        }
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x18);
          if (lVar7 == 0) {
            return 0;
          }
          uVar2 = *(undefined4 *)(lVar7 + 0x88);
          lVar8 = *(long *)(lVar7 + 8);
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*(long *)(lVar7 + -0x50) + 0x20))();
          }
          return uVar2;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar5;
    } while (iVar5 != 0);
  }
  return 0;
}


