/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cb590; name: FUN_004cb590
 */


bool FUN_004cb590(long *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: size <= sizeof(unsigned int)","external/openssl/ssl/packet.c",
                 0x13a);
  }
  if ((param_3 == 0) || (param_1[5] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: pkt->subs != NULL && len != 0","external/openssl/ssl/packet.c",
                 0x2b);
  }
  if ((ulong)(param_1[4] - param_1[3]) < param_3) {
    return false;
  }
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    puVar2 = (ulong *)*param_1;
    uVar4 = *puVar2;
    if (uVar4 - param_1[3] < param_3) {
      uVar3 = param_3;
      if (param_3 <= uVar4) {
        uVar3 = uVar4;
      }
      if ((long)uVar3 < 0) {
        lVar6 = FUN_004174d0(puVar2,0xffffffffffffffff);
        if (lVar6 == 0) {
          return false;
        }
      }
      else {
        uVar3 = uVar3 * 2;
        if (uVar3 < 0x101) {
          uVar3 = 0x100;
        }
        lVar6 = FUN_004174d0(puVar2,uVar3);
        if (lVar6 == 0) {
          return false;
        }
      }
      lVar6 = param_1[1];
      if (lVar6 != 0) goto LAB_004cb628;
    }
    lVar6 = *(long *)(*param_1 + 8);
  }
LAB_004cb628:
  uVar3 = (ulong)param_2;
  lVar7 = param_1[2];
  uVar5 = param_3 - 1;
  uVar4 = param_3 & 3;
  param_1[3] = param_1[3] + param_3;
  param_1[2] = lVar7 + param_3;
  if (uVar4 == 0) {
    lVar6 = lVar6 + lVar7 + uVar5;
  }
  else {
    do {
      *(char *)(lVar7 + lVar6 + -1 + param_3) = (char)uVar3;
      uVar3 = uVar3 >> 8;
      param_3 = param_3 - 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    lVar6 = lVar7 + lVar6 + param_3 + -1;
  }
  if (2 < uVar5) {
    do {
      uVar1 = ((uint)uVar3 & 0xff00ff00) >> 8 | ((uint)uVar3 & 0xff00ff) << 8;
      uVar3 = 0;
      *(uint *)(lVar6 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
      param_3 = param_3 - 4;
      lVar6 = lVar6 + -4;
    } while (param_3 != 0);
  }
  return uVar3 == 0;
}


