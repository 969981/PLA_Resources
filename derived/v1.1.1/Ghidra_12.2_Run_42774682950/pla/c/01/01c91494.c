/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c91494; name: FUN_01c91494
 */


void FUN_01c91494(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  puVar1 = (ulong *)(param_1 + 1);
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_01c901fc(puVar1);
    }
    *puVar1 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xb8))();
    }
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      FUN_01c901fc(puVar1);
    }
    uVar7 = param_2 - 1;
    uVar5 = param_2 & 3;
    *puVar1 = param_2;
    if (uVar7 < 3) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar4 = lVar3 * 8;
        lVar3 = lVar3 + 4;
        *(undefined8 *)(*param_1 + lVar4) = 0;
        *(undefined8 *)(*param_1 + lVar4 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar4 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
      } while (param_2 - uVar5 != lVar3);
    }
    if (uVar5 != 0) {
      lVar3 = lVar3 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar3) = 0;
        uVar5 = uVar5 - 1;
        lVar3 = lVar3 + 8;
      } while (uVar5 != 0);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar5 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar8 = plVar6[1];
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar5 < 2) {
        uVar8 = uVar8 & uVar7;
      }
      else if (param_2 <= uVar8) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar8 / param_2;
        }
        uVar8 = uVar8 - uVar2 * param_2;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 6;
      plVar9 = (long *)*plVar6;
      if (plVar9 != (long *)0x0) {
        if (uVar5 < 2) {
          do {
            uVar5 = plVar9[1] & uVar7;
            if (uVar5 != uVar8) {
              plVar11 = plVar9;
              if (*(long *)(*param_1 + uVar5 * 8) == 0) {
                *(long **)(*param_1 + uVar5 * 8) = plVar6;
                uVar8 = uVar5;
              }
              else {
                do {
                  plVar10 = plVar11;
                  plVar11 = (long *)*plVar10;
                  if (plVar11 == (long *)0x0) break;
                } while (plVar9[2] == plVar11[2]);
                *plVar6 = (long)plVar11;
                *plVar10 = **(long **)(*param_1 + uVar5 * 8);
                **(undefined8 **)(*param_1 + uVar5 * 8) = plVar9;
                plVar9 = plVar6;
              }
            }
            plVar11 = (long *)*plVar9;
            plVar6 = plVar9;
            plVar9 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar9[1];
            if (param_2 <= uVar5) {
              uVar7 = 0;
              if (param_2 != 0) {
                uVar7 = uVar5 / param_2;
              }
              uVar5 = uVar5 - uVar7 * param_2;
            }
            if (uVar5 != uVar8) {
              if (*(long *)(*param_1 + uVar5 * 8) == 0) {
                *(long **)(*param_1 + uVar5 * 8) = plVar6;
                uVar8 = uVar5;
              }
              else {
                plVar11 = plVar9;
                do {
                  plVar10 = plVar11;
                  plVar11 = (long *)*plVar10;
                  if (plVar11 == (long *)0x0) break;
                } while (plVar9[2] == plVar11[2]);
                *plVar6 = (long)plVar11;
                *plVar10 = **(long **)(*param_1 + uVar5 * 8);
                **(undefined8 **)(*param_1 + uVar5 * 8) = plVar9;
                plVar9 = plVar6;
              }
            }
            plVar11 = (long *)*plVar9;
            plVar6 = plVar9;
            plVar9 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
  }
  return;
}


