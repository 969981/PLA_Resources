/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029170cc; name: FUN_029170cc
 */


bool FUN_029170cc(long *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xd));
  uVar2 = param_1[1];
  if (uVar2 == 0) {
LAB_029171e0:
    plVar5 = (long *)0x0;
  }
  else {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar7 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = (ulong)param_2;
    if (uVar7 < 2) {
      uVar6 = (ulong)((int)uVar2 - 1U & param_2);
    }
    else {
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar3 / uVar2;
        }
        uVar6 = uVar3 - uVar6 * uVar2;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar6 * 8);
    plVar5 = (long *)0x0;
    if ((plVar4 != (long *)0x0) && (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar5[1] == uVar3) {
            if (*(uint *)(plVar5 + 2) == param_2) break;
          }
          else if ((plVar5[1] & uVar2 - 1) != uVar6) goto LAB_029171e0;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar5[1];
          if (uVar7 == uVar3) {
            if (*(uint *)(plVar5 + 2) == param_2) break;
          }
          else {
            if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
            }
            if (uVar7 != uVar6) goto LAB_029171e0;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd));
  return plVar5 != (long *)0x0;
}


