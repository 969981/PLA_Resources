/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016aca50; name: FUN_016aca50
 */


undefined8 FUN_016aca50(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar5 = *(ulong *)(param_1 + 0xa0);
  if (uVar5 == 0) {
    return 2;
  }
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar2 = *param_2;
  uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar6 < 2) {
    uVar7 = uVar5 - 1 & uVar2;
  }
  else if (uVar2 < uVar5) {
    uVar7 = uVar2;
  }
  else {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar2 / uVar5;
    }
    uVar7 = uVar2 - uVar7 * uVar5;
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x98) + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    return 2;
  }
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) {
    return 2;
  }
  if (uVar6 < 2) {
    do {
      if (plVar8[1] == uVar2) {
        if (plVar8[2] == uVar2) goto LAB_016acb48;
      }
      else if ((plVar8[1] & uVar5 - 1) != uVar7) {
        return 2;
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return 2;
      }
    } while( true );
  }
  do {
    uVar6 = plVar8[1];
    if (uVar6 == uVar2) {
      if (plVar8[2] == uVar2) {
LAB_016acb48:
        if ((undefined1 *)plVar8[3] != &DAT_cbf29ce484222645) {
          piVar3 = (int *)plVar8[5];
          if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
             (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 != 0)) {
            lVar4 = *(long *)((long)piVar3 + uVar5);
            if (lVar4 == 0x68d97d277752b795) {
              return 1;
            }
            if (lVar4 == -0x1b2f856691a10a18 || lVar4 == -0x101ce9153310dc68) {
              return 0;
            }
          }
        }
        return 2;
      }
    }
    else {
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar6 / uVar5;
        }
        uVar6 = uVar6 - uVar1 * uVar5;
      }
      if (uVar6 != uVar7) {
        return 2;
      }
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return 2;
    }
  } while( true );
}


