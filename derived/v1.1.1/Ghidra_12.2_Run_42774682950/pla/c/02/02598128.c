/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02598128; name: FUN_02598128
 */


void FUN_02598128(long param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  
  uVar9 = *(ulong *)(param_1 + 0x140);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = (ulong)((uint)uVar9 - 1) & 0x25;
    }
    else {
      uVar11 = 0x25;
      if (uVar9 < 0x26) {
        uVar2 = (uint)uVar9 & 0xff;
        uVar6 = 0;
        if ((uVar9 & 0xff) != 0) {
          uVar6 = 0x25 / uVar2;
        }
        uVar11 = (ulong)(0x25 - uVar6 * uVar2);
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x138) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == 0x25) {
            if ((int)plVar12[2] == 0x25) goto LAB_025981c8;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == 0x25) {
            if ((int)plVar12[2] == 0x25) {
LAB_025981c8:
              plVar12 = (long *)plVar12[3];
              if (plVar12 == (long *)0x0) {
                bVar13 = true;
              }
              else {
                lVar14 = plVar12[0xb];
                if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar14 + 0x10) == 0) {
                  uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                  *(undefined8 *)(lVar14 + 0x10) = uVar8;
                }
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  cVar5 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar13) {
                    *piVar1 = *piVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                bVar13 = false;
              }
              (**(code **)plVar12[10])();
              uVar9 = FUN_0259b3d4();
              plVar3 = plVar12;
              if ((uVar9 & 1) == 0) {
                plVar3 = (long *)0x0;
              }
              FUN_0259b258(plVar3,param_2);
              if (!bVar13) {
                lVar14 = plVar12[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar4 = *piVar1;
                  cVar5 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar13) {
                    *piVar1 = iVar4 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar4 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0259827c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar12 + 0x20))(plVar12);
                  return;
                }
              }
              return;
            }
          }
          else {
            if (uVar9 <= uVar10) {
              uVar7 = 0;
              if (uVar9 != 0) {
                uVar7 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar7 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0259a940();
}


