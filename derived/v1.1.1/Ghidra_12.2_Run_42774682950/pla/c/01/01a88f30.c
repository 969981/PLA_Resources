/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a88f30; name: FUN_01a88f30
 */


uint FUN_01a88f30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  
  puVar7 = PTR_DAT_0437a668;
  puVar6 = PTR_DAT_0437a660;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar11 = *(long *)(param_1 + 0x260);
  uVar8 = 0;
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0xc) == 0) {
LAB_01a89070:
      uVar8 = 0;
    }
    else {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar13 = *(int *)(lVar11 + 0xc);
      do {
        puVar14 = *(undefined8 **)(lVar11 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar6 = puVar5;
          __cxa_guard_release(puVar7);
        }
        if (puVar14 == (undefined8 *)0x0) goto LAB_01a89070;
        while (puVar14 != (undefined8 *)puVar6) {
          puVar14 = (undefined8 *)*puVar14;
          uVar8 = 0;
          if (puVar14 == (undefined8 *)0x0) goto LAB_01a88f54;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar13) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = *(long *)(lVar11 + 0x18);
            if (lVar11 != 0) {
              plVar12 = (long *)(lVar11 + -0x50);
              uVar8 = FUN_01e44a14(plVar12,param_2,param_3,param_4);
              lVar11 = *(long *)(lVar11 + 8);
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar13 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))(plVar12);
              }
              break;
            }
            goto LAB_01a89070;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar8 = 0;
        iVar13 = iVar9;
      } while (iVar9 != 0);
    }
  }
LAB_01a88f54:
  return uVar8 & 1;
}


