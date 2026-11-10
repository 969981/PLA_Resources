/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cb030; name: FUN_004cb030
 */


undefined8 FUN_004cb030(long *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = 0xffffffffffffffff;
  if (param_4 - 1 < 7) {
    uVar4 = ~(-1L << ((param_4 & 7) << 3)) + param_4;
  }
  if ((param_2 == 0) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: buf != NULL && len > 0","external/openssl/ssl/packet.c",0x7c);
  }
  if (param_3 <= uVar4) {
    uVar4 = param_3;
  }
  param_1[4] = uVar4;
  *param_1 = 0;
  param_1[1] = param_2;
  plVar6 = param_1 + 2;
  *plVar6 = 0;
  param_1[3] = 0;
  lVar1 = FUN_004002a0(0x28,"external/openssl/ssl/packet.c",0x61);
  param_1[5] = lVar1;
  if (lVar1 == 0) {
    FUN_004014b0(0x14,0x279,0x41,"external/openssl/ssl/packet.c",0x62);
    return 0;
  }
  if (param_4 == 0) {
    return 1;
  }
  *(ulong *)(lVar1 + 0x10) = param_4;
  *(ulong *)(lVar1 + 0x18) = param_4;
  if ((ulong)(param_1[4] - param_1[3]) < param_4) {
LAB_004cb0e0:
    FUN_00400420(lVar1,"external/openssl/ssl/packet.c",0x6d);
    param_1[5] = 0;
    return 0;
  }
  lVar3 = param_1[1];
  lVar1 = lVar3;
  if (lVar3 == 0) {
    puVar2 = (ulong *)*param_1;
    uVar4 = *puVar2;
    if (uVar4 - param_1[3] < param_4) {
      uVar5 = param_4;
      if (param_4 <= uVar4) {
        uVar5 = uVar4;
      }
      if ((long)uVar5 < 0) {
        lVar1 = FUN_004174d0(puVar2,0xffffffffffffffff);
      }
      else {
        uVar5 = uVar5 * 2;
        if (uVar5 < 0x101) {
          uVar5 = 0x100;
        }
        lVar1 = FUN_004174d0(puVar2,uVar5);
      }
      if (lVar1 == 0) {
        lVar1 = param_1[5];
        goto LAB_004cb0e0;
      }
      lVar3 = param_1[1];
      lVar1 = lVar3;
      if (lVar3 != 0) goto LAB_004cb19c;
    }
    lVar3 = 0;
    lVar1 = *(long *)(*param_1 + 8);
  }
LAB_004cb19c:
  lVar7 = *plVar6;
  param_1[3] = param_1[3] + param_4;
  *plVar6 = lVar7 + param_4;
  if (lVar3 == 0) {
    lVar3 = *(long *)(*param_1 + 8);
  }
  *(long *)(param_1[5] + 8) = (lVar1 + lVar7) - lVar3;
  return 1;
}


