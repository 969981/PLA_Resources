/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e51ff4; name: FUN_01e51ff4
 */


ulong FUN_01e51ff4(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  param_3 = param_3 >> (ulong)(-(uint)*(byte *)(*(long *)(param_2 + 0x78) + 0x1c) & 0x1f);
  if (((~param_3 & 0xffff) != 0) && (uVar4 = *(ulong *)(param_1 + 0x98), uVar4 != 0)) {
    param_3 = param_3 & 0xffff;
    uVar2 = (ulong)param_3;
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = (ulong)((int)uVar4 - 1U & param_3);
    }
    else {
      uVar6 = uVar2;
      if (uVar4 <= uVar2) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar2 / uVar4;
        }
        uVar6 = uVar2 - uVar6 * uVar4;
      }
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x90) + uVar6 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar3[1] == uVar2) {
            if (*(uint *)(plVar3 + 2) == param_3) goto LAB_01e52098;
          }
          else if ((plVar3[1] & uVar4 - 1) != uVar6) {
            return 0;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar3[1];
          if (uVar5 == uVar2) {
            if (*(uint *)(plVar3 + 2) == param_3) {
LAB_01e52098:
              if (plVar3 == (long *)0x0) {
                return 0;
              }
              return uVar2;
            }
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar6) {
              return 0;
            }
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  return 0;
}


