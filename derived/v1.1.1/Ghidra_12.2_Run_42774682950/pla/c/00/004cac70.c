/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cac70; name: FUN_004cac70
 */


undefined8 FUN_004cac70(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: pkt->subs != NULL","external/openssl/ssl/packet.c",0x116);
  }
  plVar1 = (long *)FUN_004002a0(0x28,"external/openssl/ssl/packet.c",0x119);
  if (plVar1 == (long *)0x0) {
    FUN_004014b0(0x14,0x27a,0x41,"external/openssl/ssl/packet.c",0x11a);
    return 0;
  }
  *plVar1 = param_1[5];
  lVar6 = param_1[3];
  param_1[5] = (long)plVar1;
  plVar1[2] = param_2;
  plVar1[3] = lVar6 + param_2;
  if (param_2 == 0) {
    plVar1[1] = 0;
    return 1;
  }
  if ((ulong)(param_1[4] - lVar6) < param_2) {
    return 0;
  }
  lVar3 = param_1[1];
  lVar7 = lVar3;
  if (lVar3 == 0) {
    puVar2 = (ulong *)*param_1;
    uVar4 = *puVar2;
    if (uVar4 - lVar6 < param_2) {
      uVar5 = param_2;
      if (param_2 <= uVar4) {
        uVar5 = uVar4;
      }
      if ((long)uVar5 < 0) {
        lVar6 = FUN_004174d0(puVar2,0xffffffffffffffff);
        if (lVar6 == 0) {
          return 0;
        }
      }
      else {
        uVar5 = uVar5 * 2;
        if (uVar5 < 0x101) {
          uVar5 = 0x100;
        }
        lVar6 = FUN_004174d0(puVar2,uVar5);
        if (lVar6 == 0) {
          return 0;
        }
      }
      lVar3 = param_1[1];
      lVar7 = lVar3;
      if (lVar3 != 0) goto LAB_004cad80;
    }
    lVar3 = 0;
    lVar7 = *(long *)(*param_1 + 8);
  }
LAB_004cad80:
  lVar6 = param_1[2];
  param_1[3] = param_1[3] + param_2;
  param_1[2] = lVar6 + param_2;
  if (lVar3 == 0) {
    lVar3 = *(long *)(*param_1 + 8);
  }
  plVar1[1] = (lVar7 + lVar6) - lVar3;
  return 1;
}


