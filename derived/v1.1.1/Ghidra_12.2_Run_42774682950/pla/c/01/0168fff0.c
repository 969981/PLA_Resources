/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0168fff0; name: FUN_0168fff0
 */


void FUN_0168fff0(long param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar5 = *(ulong *)(param_1 + 0x140);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = (ulong)((uint)uVar5 - 1) & 7;
    }
    else {
      uVar7 = 7;
      if (uVar5 < 8) {
        uVar1 = (uint)uVar5 & 0xff;
        uVar3 = 0;
        if ((uVar5 & 0xff) != 0) {
          uVar3 = 7 / uVar1;
        }
        uVar7 = (ulong)(7 - uVar3 * uVar1);
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x138) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == 7) {
            if ((int)plVar8[2] == 7) goto LAB_016900b4;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == 7) {
            if ((int)plVar8[2] == 7) {
LAB_016900b4:
              plVar8 = (long *)plVar8[3];
              if (plVar8 != (long *)0x0) {
                FUN_02a439f4(plVar8[0xb]);
              }
              (**(code **)plVar8[10])();
              uVar5 = FUN_0169022c();
              plVar2 = plVar8;
              if ((uVar5 & 1) == 0) {
                plVar2 = (long *)0x0;
              }
              FUN_0169016c(plVar2);
              if ((plVar8 != (long *)0x0) && (uVar5 = FUN_02a43a5c(plVar8[0xb]), (uVar5 & 1) != 0))
              {
                    /* WARNING: Could not recover jumptable at 0x01690118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar8 + 0x20))(plVar8);
                return;
              }
              return;
            }
          }
          else {
            if (uVar5 <= uVar6) {
              uVar4 = 0;
              if (uVar5 != 0) {
                uVar4 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar4 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  FUN_01690220();
  return;
}


