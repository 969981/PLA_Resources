/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c86fc; name: FUN_028c86fc
 */


undefined8 FUN_028c86fc(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *(long *)(param_1 + 0x270);
  if ((lVar6 != 0) && (uVar3 = *(ulong *)(lVar6 + 0x10), uVar3 != 0)) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & uVar2;
    }
    else {
      uVar5 = uVar2;
      if (uVar3 <= uVar2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar2 / uVar3;
        }
        uVar5 = uVar2 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(lVar6 + 8) + uVar5 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar7[1] == uVar2) {
            if (plVar7[2] == uVar2) {
LAB_028c87f8:
              if ((undefined8 *)plVar7[6] == (undefined8 *)0x0) {
                return 0;
              }
              return *(undefined8 *)plVar7[6];
            }
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) {
            return 0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar7[1];
          if (uVar4 == uVar2) {
            if (plVar7[2] == uVar2) goto LAB_028c87f8;
          }
          else {
            if (uVar3 <= uVar4) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar4 / uVar3;
              }
              uVar4 = uVar4 - uVar1 * uVar3;
            }
            if (uVar4 != uVar5) {
              return 0;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return 0;
}


