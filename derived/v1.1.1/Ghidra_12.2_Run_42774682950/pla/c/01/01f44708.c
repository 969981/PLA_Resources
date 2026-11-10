/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f44708; name: FUN_01f44708
 */


void FUN_01f44708(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  uVar9 = *(ulong *)(param_1 + 0x140);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = (ulong)((uint)uVar9 - 1) & 0xd;
    }
    else {
      uVar11 = 0xd;
      if (uVar9 < 0xe) {
        uVar2 = (uint)uVar9 & 0xff;
        uVar6 = 0;
        if ((uVar9 & 0xff) != 0) {
          uVar6 = 0xd / uVar2;
        }
        uVar11 = (ulong)(0xd - uVar6 * uVar2);
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x138) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == 0xd) {
            if ((int)plVar12[2] == 0xd) {
LAB_01f44798:
              plVar12 = (long *)plVar12[3];
              if (plVar12 == (long *)0x0) {
                bVar5 = true;
              }
              else {
                lVar13 = plVar12[0xb];
                if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar13 + 0x10) == 0) {
                  uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                  *(undefined8 *)(lVar13 + 0x10) = uVar8;
                }
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                bVar5 = false;
              }
              (**(code **)plVar12[10])();
              uVar9 = FUN_01f4b05c();
              if ((uVar9 & 1) == 0) {
                FUN_01f54fb4(0);
              }
              else {
                FUN_01f54fb4(plVar12);
              }
              if (!bVar5) {
                lVar13 = plVar12[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01f44870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar12 + 0x20))(plVar12);
                  return;
                }
              }
              return;
            }
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == 0xd) {
            if ((int)plVar12[2] == 0xd) goto LAB_01f44798;
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
  FUN_01f49f10();
}


