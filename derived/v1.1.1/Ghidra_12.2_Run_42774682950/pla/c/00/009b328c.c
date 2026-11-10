/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b328c; name: FUN_009b328c
 */


void FUN_009b328c(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long local_38;
  undefined1 auStack_30 [16];
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar8 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar5 = (ulong)param_2;
    if (uVar8 < 2) {
      uVar6 = (ulong)((int)uVar4 - 1U & param_2);
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar6 = uVar5 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar7[1] == uVar5) {
            plVar3 = plVar7;
            if (*(uint *)(plVar7 + 2) == param_2) break;
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) goto LAB_009b33d8;
          plVar7 = (long *)*plVar7;
          plVar3 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          plVar3 = plVar7;
          uVar8 = plVar3[1];
          if (uVar8 == uVar5) {
            if (*(uint *)(plVar3 + 2) == param_2) break;
          }
          else {
            if (uVar4 <= uVar8) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar1 * uVar4;
            }
            if (uVar8 != uVar6) goto LAB_009b33d8;
          }
          plVar7 = (long *)*plVar3;
          plVar3 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
      goto LAB_009b332c;
    }
  }
LAB_009b33d8:
  plVar3 = (long *)0x0;
LAB_009b332c:
  FUN_009b33e0(&local_38,(long *)(param_1 + 8),plVar3);
  lVar2 = local_38;
  local_38 = 0;
  if (lVar2 != 0) {
    FUN_009b3558(auStack_30);
  }
  return;
}


