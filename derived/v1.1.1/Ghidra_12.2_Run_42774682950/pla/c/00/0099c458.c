/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099c458; name: FUN_0099c458
 */


bool FUN_0099c458(long param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x70);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    bVar1 = *param_2;
    uVar3 = (ulong)bVar1;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = (int)uVar4 - 1 & uVar3;
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x68) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (*(byte *)(plVar7 + 2) == bVar1) goto LAB_0099c550;
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) goto LAB_0099c560;
          plVar7 = (long *)*plVar7;
          plVar8 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar3) {
            if (*(byte *)(plVar7 + 2) == bVar1) goto LAB_0099c550;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar2 * uVar4;
            }
            if (uVar5 != uVar6) goto LAB_0099c560;
          }
          plVar7 = (long *)*plVar7;
          plVar8 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
      goto LAB_0099c554;
    }
  }
LAB_0099c560:
  plVar8 = (long *)0x0;
  goto LAB_0099c554;
LAB_0099c550:
  plVar8 = plVar7;
LAB_0099c554:
  return plVar8 != (long *)0x0;
}


