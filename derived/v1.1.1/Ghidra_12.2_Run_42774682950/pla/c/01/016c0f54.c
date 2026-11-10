/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016c0f54; name: FUN_016c0f54
 */


void FUN_016c0f54(long param_1)

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
      uVar11 = (ulong)((uint)uVar9 - 1) & 5;
    }
    else {
      uVar11 = 5;
      if (uVar9 < 6) {
        uVar2 = (uint)uVar9 & 0xff;
        uVar6 = 0;
        if ((uVar9 & 0xff) != 0) {
          uVar6 = 5 / uVar2;
        }
        uVar11 = (ulong)(5 - uVar6 * uVar2);
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x138) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == 5) {
            if ((int)plVar12[2] == 5) goto LAB_016c101c;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == 5) {
            if ((int)plVar12[2] == 5) goto LAB_016c101c;
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
  FUN_016c1a70();
LAB_016c10fc:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_016c101c:
  plVar12 = (long *)plVar12[3];
  if (plVar12 == (long *)0x0) {
    FUN_016c1e60(0x50);
    FUN_016c30b4();
    return;
  }
  lVar13 = plVar12[0xb];
  if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
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
    FUN_016c1e60(plVar12 + 10);
    FUN_016c30b4();
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
                    /* WARNING: Could not recover jumptable at 0x016c10a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x20))(plVar12);
      return;
    }
    return;
  }
  goto LAB_016c10fc;
}


