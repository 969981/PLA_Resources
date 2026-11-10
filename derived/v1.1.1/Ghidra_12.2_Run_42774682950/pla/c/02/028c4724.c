/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c4724; name: FUN_028c4724
 */


undefined8 FUN_028c4724(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(param_1 + 0x70);
  if (lVar7 == 0) {
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 0x38);
      if (lVar7 == 0) {
        return 0;
      }
      if (*(char *)(lVar7 + 0x1e1) == '\0') {
        return 0;
      }
      uVar2 = FUN_028c86fc();
      return uVar2;
    }
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 == 0) {
      return 0;
    }
    if (*(char *)(lVar7 + 0x1e1) == '\0') {
      return 0;
    }
    if (*(long *)(lVar7 + 0x2a8) == 0) {
      return 0;
    }
    if (*(char *)(*(long *)(lVar7 + 0x2a8) + 0x1e1) == '\0') {
      return 0;
    }
    uVar2 = FUN_028c86fc();
    return uVar2;
  }
  uVar4 = *(ulong *)(lVar7 + 0x10);
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar3 = *param_2;
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar6 = uVar4 - 1 & uVar3;
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
  plVar8 = *(long **)(*(long *)(lVar7 + 8) + uVar6 * 8);
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  if (uVar5 < 2) {
    do {
      if (plVar8[1] == uVar3) {
        if (plVar8[2] == uVar3) {
LAB_028c4860:
          if ((undefined8 *)plVar8[6] == (undefined8 *)0x0) {
            return 0;
          }
          return *(undefined8 *)plVar8[6];
        }
      }
      else if ((plVar8[1] & uVar4 - 1) != uVar6) {
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
    if (uVar5 == uVar3) {
      if (plVar8[2] == uVar3) goto LAB_028c4860;
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
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return 0;
    }
  } while( true );
}


