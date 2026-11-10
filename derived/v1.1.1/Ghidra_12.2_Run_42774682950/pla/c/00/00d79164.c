/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d79164; name: FUN_00d79164
 */


bool FUN_00d79164(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x240);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & uVar2;
    }
    else if (uVar2 < uVar3) {
      uVar5 = uVar2;
    }
    else {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar2 / uVar3;
      }
      uVar5 = uVar2 - uVar5 * uVar3;
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x238) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar2) {
            if (plVar6[2] == uVar2) goto LAB_00d79260;
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) goto LAB_00d79210;
          plVar6 = (long *)*plVar6;
          plVar7 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
        goto LAB_00d79264;
      }
      do {
        uVar4 = plVar6[1];
        if (uVar4 == uVar2) {
          if (plVar6[2] == uVar2) goto LAB_00d79260;
        }
        else {
          if (uVar3 <= uVar4) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar4 / uVar3;
            }
            uVar4 = uVar4 - uVar1 * uVar3;
          }
          if (uVar4 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
LAB_00d79210:
  plVar7 = (long *)0x0;
  goto LAB_00d79264;
LAB_00d79260:
  plVar7 = plVar6;
LAB_00d79264:
  return plVar7 != (long *)0x0;
}


