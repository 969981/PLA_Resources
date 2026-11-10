/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e66244; name: FUN_01e66244
 */


undefined8 FUN_01e66244(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong local_18;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x70);
  uVar7 = *(ulong *)(lVar4 + 0x218);
  if (uVar7 != 0) {
    plVar1 = (long *)(lVar4 + 0x210);
    uVar5 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar7 - 1 & param_2;
    }
    else {
      uVar6 = param_2;
      if (uVar7 <= param_2) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = param_2 / uVar7;
        }
        uVar6 = param_2 - uVar6 * uVar7;
      }
    }
    plVar8 = *(long **)(*plVar1 + uVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar8[1] == param_2) {
            if (plVar8[2] == param_2) goto LAB_01e66358;
          }
          else if ((plVar8[1] & uVar7 - 1) != uVar6) {
            return 0;
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar5 = plVar8[1];
        if (uVar5 == param_2) {
          if (plVar8[2] == param_2) {
LAB_01e66358:
            local_18 = param_2;
            uVar3 = FUN_01e66378(plVar1,&local_18);
            return uVar3;
          }
        }
        else {
          if (uVar7 <= uVar5) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar2 * uVar7;
          }
          if (uVar5 != uVar6) {
            return 0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return 0;
}


