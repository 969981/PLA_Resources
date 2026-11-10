/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02916db8; name: FUN_02916db8
 */


void FUN_02916db8(long *param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  code *local_d0;
  code *local_c8;
  undefined1 auStack_b0 [96];
  long local_50;
  undefined8 uStack_48;
  undefined4 local_34;
  
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  nn::os::LockMutex((MutexType *)(param_1 + 0xd));
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar5 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = (ulong)param_4;
    if (uVar5 < 2) {
      uVar4 = (ulong)((int)uVar2 - 1U & param_4);
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar4 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar6[1] == uVar3) {
            if (*(uint *)(plVar6 + 2) == param_4) goto LAB_02916f38;
          }
          else if ((plVar6[1] & uVar2 - 1) != uVar4) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar6[1];
          if (uVar5 == uVar3) {
            if (*(uint *)(plVar6 + 2) == param_4) goto LAB_02916f38;
          }
          else {
            if (uVar2 <= uVar5) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar5 / uVar2;
              }
              uVar5 = uVar5 - uVar1 * uVar2;
            }
            if (uVar5 != uVar4) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  lVar7 = 0;
LAB_02916ee8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd));
  if (local_d0 != (code *)0x0) {
    local_50 = lVar7;
    uStack_48 = param_3;
    local_34 = param_2;
    (*local_d0)(auStack_b0,&local_34,&uStack_48,&local_50);
  }
  if (local_c8 != (code *)0x0) {
    (*local_c8)(auStack_b0);
  }
  return;
LAB_02916f38:
  if ((code *)plVar6[10] != (code *)0x0) {
    (*(code *)plVar6[10])(plVar6 + 0xc,auStack_b0);
    local_d0 = (code *)plVar6[8];
    local_c8 = (code *)plVar6[9];
  }
  lVar7 = plVar6[0x18];
  goto LAB_02916ee8;
}


