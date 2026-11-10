/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099421c; name: FUN_0099421c
 */


void FUN_0099421c(long param_1,byte param_2,undefined1 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x70);
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar6 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = (ulong)param_2;
    if (uVar6 < 2) {
      uVar4 = (int)uVar2 - 1 & uVar3;
    }
    else if (uVar3 < uVar2) {
      uVar4 = uVar3;
    }
    else {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar3 / uVar2;
      }
      uVar4 = uVar3 - uVar4 * uVar2;
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x68) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar5[1] == uVar3) {
            if (*(byte *)(plVar5 + 2) == param_2) {
LAB_00994310:
              *param_3 = (char)plVar5[6];
              *param_4 = *(undefined1 *)((long)plVar5 + 0x31);
              return;
            }
          }
          else if ((plVar5[1] & uVar2 - 1) != uVar4) {
            return;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar3) {
            if (*(byte *)(plVar5 + 2) == param_2) goto LAB_00994310;
          }
          else {
            if (uVar2 <= uVar6) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar6 / uVar2;
              }
              uVar6 = uVar6 - uVar1 * uVar2;
            }
            if (uVar6 != uVar4) {
              return;
            }
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  return;
}


