/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02570eb8; name: FUN_02570eb8
 */


bool FUN_02570eb8(long *param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 *puVar14;
  
  puVar8 = PTR_DAT_04381fd8;
  puVar7 = PTR_DAT_04381fd0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar11 = *param_1;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar13 = *(int *)(lVar11 + 0xc);
    do {
      puVar14 = *(undefined8 **)(lVar11 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      if (puVar14 == (undefined8 *)0x0) {
        return false;
      }
      while (puVar14 != (undefined8 *)puVar8) {
        puVar14 = (undefined8 *)*puVar14;
        if (puVar14 == (undefined8 *)0x0) {
          return false;
        }
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return false;
          }
          lVar12 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          bVar4 = *(int *)(param_2 + 8) < *(int *)(lVar11 + 0x1b4);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))();
            return bVar4;
          }
          return bVar4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar9;
    } while (iVar9 != 0);
  }
  return false;
}


