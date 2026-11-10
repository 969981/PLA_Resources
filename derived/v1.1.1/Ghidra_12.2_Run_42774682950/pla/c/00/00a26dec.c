/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a26dec; name: FUN_00a26dec
 */


undefined8 FUN_00a26dec(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auStack_28 [24];
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar1 = *param_2;
    uVar4 = (ulong)uVar1;
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar6 = (ulong)((int)uVar5 - 1U & uVar1);
    }
    else {
      uVar6 = uVar4;
      if (uVar5 <= uVar4) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar6 = uVar4 - uVar6 * uVar5;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (*(uint *)(plVar7 + 2) == uVar1) goto LAB_00a26e90;
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar6) {
            return 0;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar3 = plVar7[1];
        if (uVar3 == uVar4) {
          if (*(uint *)(plVar7 + 2) == uVar1) {
LAB_00a26e90:
            FUN_00a26f20(auStack_28);
            FUN_00a27098(auStack_28);
            return 1;
          }
        }
        else {
          if (uVar5 <= uVar3) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar3 / uVar5;
            }
            uVar3 = uVar3 - uVar2 * uVar5;
          }
          if (uVar3 != uVar6) {
            return 0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


