/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab0b68; name: FUN_01ab0b68
 */


bool FUN_01ab0b68(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 *puVar16;
  
  puVar9 = PTR_DAT_0437a258;
  puVar8 = PTR_DAT_0437a250;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043795d8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar13 = *(long *)(param_1 + 0x208);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar15 = *(int *)(lVar13 + 0xc);
    do {
      puVar16 = *(undefined8 **)(lVar13 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar12;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      if (puVar16 == (undefined8 *)0x0) {
        return true;
      }
      while (puVar16 != (undefined8 *)puVar9) {
        puVar16 = (undefined8 *)*puVar16;
        if (puVar16 == (undefined8 *)0x0) {
          return true;
        }
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar15) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 == 0) {
            return true;
          }
          bVar10 = *(char *)(lVar13 + 0x1b0) != '\0';
          lVar14 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*(long *)(lVar13 + -0x50) + 0x20))();
            return bVar10;
          }
          return bVar10;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar11;
    } while (iVar11 != 0);
  }
  return true;
}


