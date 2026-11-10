/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cab10; name: FUN_004cab10
 */


undefined8 FUN_004cab10(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = FUN_004cac70(param_1,param_4);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar2 = FUN_004ca940(param_1,param_2,param_3);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  plVar3 = (long *)param_1[5];
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  lVar6 = *plVar3;
  if (lVar6 == 0) {
    return 0;
  }
  uVar4 = param_1[3] - plVar3[3];
  if (uVar4 == 0) {
    if ((*(uint *)(plVar3 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(plVar3 + 4) >> 1 & 1) != 0) {
      lVar10 = plVar3[2];
      lVar9 = param_1[2] - lVar10;
      if (lVar9 == plVar3[1]) {
        param_1[2] = lVar9;
        param_1[3] = param_1[3] - lVar10;
      }
      plVar3[1] = 0;
      plVar3[2] = 0;
      uVar5 = plVar3[2];
      goto joined_r0x004cac1c;
    }
  }
  uVar5 = plVar3[2];
joined_r0x004cac1c:
  if (uVar5 != 0) {
    lVar6 = param_1[1];
    if (lVar6 == 0) {
      lVar6 = *(long *)(*param_1 + 8);
    }
    uVar7 = uVar5 - 1;
    uVar8 = uVar5 & 3;
    if (uVar8 == 0) {
      lVar6 = lVar6 + plVar3[1] + uVar7;
    }
    else {
      lVar6 = plVar3[1] + lVar6;
      do {
        *(char *)(lVar6 + -1 + uVar5) = (char)uVar4;
        uVar4 = uVar4 >> 8;
        uVar5 = uVar5 - 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      lVar6 = lVar6 + uVar5 + -1;
    }
    if (2 < uVar7) {
      do {
        uVar1 = ((uint)uVar4 & 0xff00ff00) >> 8 | ((uint)uVar4 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x20;
        *(uint *)(lVar6 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar5 = uVar5 - 4;
        lVar6 = lVar6 + -4;
      } while (uVar5 != 0);
    }
    if (uVar4 != 0) {
      return 0;
    }
    lVar6 = *plVar3;
  }
  param_1[5] = lVar6;
  FUN_00400420(plVar3,"external/openssl/ssl/packet.c",0xdb);
  return 1;
}


