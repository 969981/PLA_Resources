/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259d684; name: FUN_0259d684
 */


undefined8 FUN_0259d684(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar8 = PTR_DAT_04379d88;
  puVar7 = PTR_DAT_04379d80;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0x88);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      puVar16 = *(undefined8 **)(lVar14 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      if (puVar16 == (undefined8 *)0x0) {
        return 0;
      }
      while (puVar16 != (undefined8 *)puVar8) {
        puVar16 = (undefined8 *)*puVar16;
        if (puVar16 == (undefined8 *)0x0) {
          return 0;
        }
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 == 0) {
            return 0;
          }
          plVar13 = (long *)(lVar14 + -0x50);
          uVar9 = FUN_025acbdc(plVar13);
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          pbVar4 = PTR_DAT_0437eed8;
          puVar16 = (undefined8 *)PTR_DAT_0437eee0;
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
            pbVar4 = PTR_DAT_0437eed8;
            puVar16 = (undefined8 *)PTR_DAT_0437eee0;
          }
          if (1 < uVar9) {
            PTR_DAT_0437eed8 = pbVar4;
            PTR_DAT_0437eee0 = (undefined *)puVar16;
            return 0;
          }
          lVar14 = *(long *)(param_1 + 0x98);
          if (lVar14 == 0) {
            PTR_DAT_0437eed8 = pbVar4;
            PTR_DAT_0437eee0 = (undefined *)puVar16;
            return 0;
          }
          if (*(int *)(lVar14 + 0xc) == 0) {
            PTR_DAT_0437eed8 = pbVar4;
            PTR_DAT_0437eee0 = (undefined *)puVar16;
            return 0;
          }
          piVar1 = (int *)(lVar14 + 0xc);
          iVar10 = *(int *)(lVar14 + 0xc);
          PTR_DAT_0437eed8 = pbVar4;
          PTR_DAT_0437eee0 = (undefined *)puVar16;
          do {
            puVar15 = *(undefined8 **)(lVar14 + 0x10);
            if (((*pbVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar4), iVar11 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar12;
                __cxa_guard_release(puVar5);
              }
              *puVar16 = puVar6;
              __cxa_guard_release(pbVar4);
            }
            if (puVar15 == (undefined8 *)0x0) {
              return 0;
            }
            while (puVar15 != puVar16) {
              puVar15 = (undefined8 *)*puVar15;
              if (puVar15 == (undefined8 *)0x0) {
                return 0;
              }
            }
            iVar11 = *piVar1;
            if (iVar11 == iVar10) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar14 = *(long *)(lVar14 + 0x18);
                if (lVar14 == 0) {
                  return 0;
                }
                plVar13 = (long *)(lVar14 + -0x50);
                iVar10 = FUN_025993f4(plVar13);
                lVar14 = *(long *)(lVar14 + 8);
                piVar1 = (int *)(lVar14 + 0xc);
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
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*plVar13 + 0x20))(plVar13);
                }
                if (iVar10 == 5) {
                  return 1;
                }
                return 0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar11;
            if (iVar11 == 0) {
              return 0;
            }
          } while( true );
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
  return 0;
}


