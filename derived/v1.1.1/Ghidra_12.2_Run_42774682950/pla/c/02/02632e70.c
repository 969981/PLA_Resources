/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02632e70; name: FUN_02632e70
 */


void FUN_02632e70(long param_1,ulong param_2,undefined4 param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  uint local_18;
  undefined4 local_14;
  
  uVar2 = (ulong)param_4;
  if (((*(char *)(param_1 + 0x80) == '\0') || (*(long *)(param_1 + 0x68) == 0)) ||
     (*(long *)(param_1 + 0x70) == 0)) {
    lVar3 = *(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x68);
    uVar4 = *(ulong *)(lVar3 + 0x88);
    if (uVar4 != 0) {
      uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar5 < 2) {
        uVar6 = (ulong)((int)uVar4 - 1U & param_4);
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
      plVar7 = *(long **)(*(long *)(lVar3 + 0x80) + uVar6 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        if (uVar5 < 2) {
          do {
            if (plVar7[1] == uVar2) {
              if (*(uint *)(plVar7 + 2) == param_4) {
                return;
              }
            }
            else if ((plVar7[1] & uVar4 - 1) != uVar6) break;
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar7[1];
            if (uVar5 == uVar2) {
              if (*(uint *)(plVar7 + 2) == param_4) {
                return;
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
              if (uVar5 != uVar6) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
    }
    local_18 = param_4;
    local_14 = param_3;
    FUN_026335c0(lVar3 + 0x80,uVar2,&local_18,&local_14);
  }
  return;
}


