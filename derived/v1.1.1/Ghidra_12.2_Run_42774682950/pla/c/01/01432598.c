/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01432598; name: FUN_01432598
 */


void FUN_01432598(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined4 uVar10;
  
  lVar7 = *(long *)(param_1 + 0x4d8);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    piVar1 = (int *)(lVar7 + 0xc);
    iVar8 = *(int *)(lVar7 + 0xc);
    do {
      plVar9 = *(long **)(lVar7 + 0x10);
      lVar6 = FUN_00b65f6c();
      while( true ) {
        if (plVar9 == (long *)0x0) {
          return;
        }
        if (plVar9 == (long *)lVar6) break;
        plVar9 = (long *)*plVar9;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x18);
          if (lVar7 == 0) {
            return;
          }
          uVar10 = *(undefined4 *)(lVar7 + 0x7b0);
          bVar5 = FUN_01441aa8(uVar10,*(undefined8 *)(param_1 + 0x348),
                               *(undefined4 *)(lVar7 + 0x7c8));
          FUN_01442628(uVar10,*(undefined8 *)(param_1 + 0x348));
          *(byte *)(lVar7 + 0x7cc) = bVar5 & 1;
          lVar6 = *(long *)(lVar7 + 8);
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x014326b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar7 + -0x50) + 0x20))((long *)(lVar7 + -0x50));
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


