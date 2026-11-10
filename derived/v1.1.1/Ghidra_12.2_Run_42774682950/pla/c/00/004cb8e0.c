/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cb8e0; name: FUN_004cb8e0
 */


undefined8 FUN_004cb8e0(long *param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = FUN_004cac70(param_1,param_4);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (param_3 != 0) {
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: pkt->subs != NULL && len != 0","external/openssl/ssl/packet.c"
                   ,0x2b);
    }
    if ((ulong)(param_1[4] - param_1[3]) < param_3) {
      return 0;
    }
    uVar6 = param_1[1];
    if (uVar6 == 0) {
      puVar3 = (ulong *)*param_1;
      uVar6 = *puVar3;
      if (uVar6 - param_1[3] < param_3) {
        uVar7 = param_3;
        if (param_3 <= uVar6) {
          uVar7 = uVar6;
        }
        if ((long)uVar7 < 0) {
          lVar4 = FUN_004174d0(puVar3,0xffffffffffffffff);
          if (lVar4 == 0) {
            return 0;
          }
        }
        else {
          uVar7 = uVar7 * 2;
          if (uVar7 < 0x101) {
            uVar7 = 0x100;
          }
          lVar4 = FUN_004174d0(puVar3,uVar7);
          if (lVar4 == 0) {
            return 0;
          }
        }
        uVar6 = param_1[1];
        if (uVar6 != 0) goto LAB_004cb97c;
        puVar3 = (ulong *)*param_1;
      }
      uVar6 = puVar3[1];
    }
LAB_004cb97c:
    lVar4 = param_1[2];
    param_1[3] = param_1[3] + param_3;
    param_1[2] = lVar4 + param_3;
    memcpy((void *)(uVar6 + lVar4),param_2,param_3);
  }
  plVar5 = (long *)param_1[5];
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    return 0;
  }
  uVar6 = param_1[3] - plVar5[3];
  if (uVar6 == 0) {
    if ((*(uint *)(plVar5 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(plVar5 + 4) >> 1 & 1) != 0) {
      lVar11 = plVar5[2];
      lVar10 = param_1[2] - lVar11;
      if (lVar10 == plVar5[1]) {
        param_1[2] = lVar10;
        param_1[3] = param_1[3] - lVar11;
      }
      plVar5[1] = 0;
      plVar5[2] = 0;
      uVar7 = plVar5[2];
      goto joined_r0x004cba78;
    }
  }
  uVar7 = plVar5[2];
joined_r0x004cba78:
  if (uVar7 != 0) {
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      lVar4 = *(long *)(*param_1 + 8);
    }
    uVar8 = uVar7 - 1;
    uVar9 = uVar7 & 3;
    if (uVar9 == 0) {
      lVar4 = lVar4 + plVar5[1] + uVar8;
    }
    else {
      lVar4 = plVar5[1] + lVar4;
      do {
        *(char *)(lVar4 + -1 + uVar7) = (char)uVar6;
        uVar6 = uVar6 >> 8;
        uVar7 = uVar7 - 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      lVar4 = lVar4 + uVar7 + -1;
    }
    if (2 < uVar8) {
      do {
        uVar1 = ((uint)uVar6 & 0xff00ff00) >> 8 | ((uint)uVar6 & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x20;
        *(uint *)(lVar4 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar7 = uVar7 - 4;
        lVar4 = lVar4 + -4;
      } while (uVar7 != 0);
    }
    if (uVar6 != 0) {
      return 0;
    }
    lVar4 = *plVar5;
  }
  param_1[5] = lVar4;
  FUN_00400420(plVar5,"external/openssl/ssl/packet.c",0xdb);
  return 1;
}


