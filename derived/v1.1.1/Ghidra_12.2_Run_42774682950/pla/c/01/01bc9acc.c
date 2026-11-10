/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bc9acc; name: FUN_01bc9acc
 */


bool FUN_01bc9acc(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  
  puVar8 = PTR_DAT_0437a258;
  puVar7 = PTR_DAT_0437a250;
  puVar6 = PTR_DAT_043795e0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if (((param_1 != (int *)0x0) && (lVar12 = *(long *)(param_1 + 2), lVar12 != 0)) &&
     (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar15 = *(int *)(lVar12 + 0xc);
    do {
      puVar14 = *(undefined8 **)(lVar12 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar6 = puVar5;
          __cxa_guard_release(PTR_DAT_043795d8);
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
      iVar10 = *piVar1;
      if (iVar10 == iVar15) {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return false;
          }
          if (*(char *)(lVar12 + 0x1b0) == '\0') {
            bVar9 = *param_1 == 1;
          }
          else {
            bVar9 = false;
          }
          lVar13 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
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
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))();
            return bVar9;
          }
          return bVar9;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar15 = iVar10;
    } while (iVar10 != 0);
  }
  return false;
}


