/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f55328; name: FUN_01f55328
 */


long * FUN_01f55328(long *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    iVar1 = *param_2;
    uVar3 = (ulong)iVar1;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar6 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar6 <= uVar3) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar3 / uVar6;
        }
        uVar5 = uVar3 - uVar5 * uVar6;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if ((int)plVar7[2] == iVar1) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar6 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar7[1];
          if (uVar4 == uVar3) {
            if ((int)plVar7[2] == iVar1) {
              return plVar7;
            }
          }
          else {
            if (uVar6 <= uVar4) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar2 * uVar6;
            }
            if (uVar4 != uVar5) {
              return (long *)0x0;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


