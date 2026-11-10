/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01847304; name: FUN_01847304
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01847304(long param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *extraout_x10;
  undefined1 *puVar11;
  long lVar12;
  
  if (param_2 != &DAT_cbf29ce484222645) {
    puVar7 = *(undefined1 **)(param_1 + 0xa8);
    if (puVar7 != (undefined1 *)0x0) {
      uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        puVar9 = (undefined1 *)((ulong)(puVar7 + -1) & (ulong)param_2);
      }
      else {
        puVar9 = param_2;
        if (puVar7 <= param_2) {
          uVar5 = 0;
          if (puVar7 != (undefined1 *)0x0) {
            uVar5 = (ulong)param_2 / (ulong)puVar7;
          }
          puVar9 = param_2 + -(uVar5 * (long)puVar7);
        }
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0xa0) + (long)puVar9 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        if (uVar8 < 2) {
          do {
            if ((undefined1 *)plVar10[1] == param_2) {
              if ((undefined1 *)plVar10[2] == param_2) goto LAB_0184741c;
            }
            else if ((undefined1 *)((ulong)plVar10[1] & (ulong)(puVar7 + -1)) != puVar9) break;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            puVar11 = (undefined1 *)plVar10[1];
            if (puVar11 == param_2) {
              if ((undefined1 *)plVar10[2] == param_2) goto LAB_0184741c;
            }
            else {
              if (puVar7 <= puVar11) {
                uVar8 = 0;
                if (puVar7 != (undefined1 *)0x0) {
                  uVar8 = (ulong)puVar11 / (ulong)puVar7;
                }
                puVar11 = puVar11 + -(uVar8 * (long)puVar7);
              }
              if (puVar11 != puVar9) break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
    FUN_0184bde0();
    plVar10 = extraout_x10;
LAB_0184741c:
    plVar10 = (long *)plVar10[3];
    if (plVar10 == (long *)0x0) {
      FUN_01836814(_DAT_00000070,0);
      return;
    }
    lVar12 = plVar10[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_01836814(plVar10[0xe],0);
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x018474a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x20))(plVar10);
      return;
    }
  }
  return;
}


