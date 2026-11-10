/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016acf5c; name: FUN_016acf5c
 */


undefined4 FUN_016acf5c(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar4 = *(ulong *)(param_1 + 0xa0);
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar2 = *param_2;
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar6 = uVar4 - 1 & uVar2;
  }
  else if (uVar2 < uVar4) {
    uVar6 = uVar2;
  }
  else {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar2 / uVar4;
    }
    uVar6 = uVar2 - uVar6 * uVar4;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x98) + uVar6 * 8);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  plVar7 = (long *)*plVar7;
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  if (uVar5 < 2) {
    do {
      if (plVar7[1] == uVar2) {
        if (plVar7[2] == uVar2) goto LAB_016ad054;
      }
      else if ((plVar7[1] & uVar4 - 1) != uVar6) {
        return 0;
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar5 = plVar7[1];
    if (uVar5 == uVar2) {
      if (plVar7[2] == uVar2) {
LAB_016ad054:
        if ((undefined1 *)plVar7[3] != &DAT_cbf29ce484222645) {
          piVar3 = (int *)plVar7[5];
          if ((8 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
             (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar4 != 0)) {
            return *(undefined4 *)((long)piVar3 + uVar4);
          }
        }
        return 0;
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
      if (uVar5 != uVar6) {
        return 0;
      }
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      return 0;
    }
  } while( true );
}


