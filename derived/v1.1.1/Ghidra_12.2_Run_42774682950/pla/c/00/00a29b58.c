/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a29b58; name: FUN_00a29b58
 */


void FUN_00a29b58(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar7 = (ulong)param_2;
  (**(code **)*param_1)();
  uVar3 = param_1[2];
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = (ulong)((int)uVar3 - 1U & param_2);
    }
    else {
      uVar5 = uVar7;
      if (uVar3 <= uVar7) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar7 / uVar3;
        }
        uVar5 = uVar7 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(param_1[1] + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar7) {
            plVar2 = plVar6;
            if (*(uint *)(plVar6 + 2) == param_2) break;
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) goto LAB_00a29c88;
          plVar6 = (long *)*plVar6;
          plVar2 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          plVar2 = plVar6;
          uVar4 = plVar2[1];
          if (uVar4 == uVar7) {
            if (*(uint *)(plVar2 + 2) == param_2) break;
          }
          else {
            if (uVar3 <= uVar4) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar4 / uVar3;
              }
              uVar4 = uVar4 - uVar1 * uVar3;
            }
            if (uVar4 != uVar5) goto LAB_00a29c88;
          }
          plVar6 = (long *)*plVar2;
          plVar2 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
      }
      goto LAB_00a29c04;
    }
  }
LAB_00a29c88:
  plVar2 = (long *)0x0;
LAB_00a29c04:
  FUN_00a2b1ac(param_1 + 1,plVar2);
  return;
}


