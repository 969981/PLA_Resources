/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cb3b0; name: FUN_004cb3b0
 */


undefined8 FUN_004cb3b0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar2 = (long *)param_1[5];
  if ((plVar2 == (long *)0x0) || (*plVar2 != 0)) {
    return 0;
  }
  uVar3 = param_1[3] - plVar2[3];
  lVar7 = 0;
  if (uVar3 == 0) {
    if ((*(uint *)(plVar2 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(plVar2 + 4) >> 1 & 1) != 0) {
      lVar9 = plVar2[2];
      lVar8 = param_1[2] - lVar9;
      if (lVar8 == plVar2[1]) {
        param_1[2] = lVar8;
        param_1[3] = param_1[3] - lVar9;
      }
      plVar2[1] = 0;
      plVar2[2] = 0;
      uVar4 = plVar2[2];
      goto joined_r0x004cb4d4;
    }
  }
  uVar4 = plVar2[2];
joined_r0x004cb4d4:
  if (uVar4 != 0) {
    lVar7 = param_1[1];
    if (lVar7 == 0) {
      lVar7 = *(long *)(*param_1 + 8);
    }
    uVar5 = uVar4 - 1;
    uVar6 = uVar4 & 3;
    if (uVar6 == 0) {
      lVar7 = lVar7 + plVar2[1] + uVar5;
    }
    else {
      lVar7 = plVar2[1] + lVar7;
      do {
        *(char *)(lVar7 + -1 + uVar4) = (char)uVar3;
        uVar3 = uVar3 >> 8;
        uVar4 = uVar4 - 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar7 = lVar7 + uVar4 + -1;
    }
    if (2 < uVar5) {
      do {
        uVar1 = ((uint)uVar3 & 0xff00ff00) >> 8 | ((uint)uVar3 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x20;
        *(uint *)(lVar7 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar4 = uVar4 - 4;
        lVar7 = lVar7 + -4;
      } while (uVar4 != 0);
    }
    if (uVar3 != 0) {
      return 0;
    }
    lVar7 = *plVar2;
  }
  param_1[5] = lVar7;
  FUN_00400420(plVar2,"external/openssl/ssl/packet.c",0xdb);
  FUN_00400420(param_1[5],"external/openssl/ssl/packet.c",0x109);
  param_1[5] = 0;
  return 1;
}


