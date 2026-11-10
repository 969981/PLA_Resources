/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cb7f0; name: FUN_004cb7f0
 */


undefined8 FUN_004cb7f0(long *param_1,void *param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 == 0) {
    return 1;
  }
  if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: pkt->subs != NULL && len != 0","external/openssl/ssl/packet.c",
                 0x2b);
  }
  if ((ulong)(param_1[4] - param_1[3]) < param_3) {
    return 0;
  }
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    puVar1 = (ulong *)*param_1;
    uVar3 = *puVar1;
    if (uVar3 - param_1[3] < param_3) {
      uVar4 = param_3;
      if (param_3 <= uVar3) {
        uVar4 = uVar3;
      }
      if ((long)uVar4 < 0) {
        lVar2 = FUN_004174d0(puVar1,0xffffffffffffffff);
        if (lVar2 == 0) {
          return 0;
        }
      }
      else {
        uVar4 = uVar4 * 2;
        if (uVar4 < 0x101) {
          uVar4 = 0x100;
        }
        lVar2 = FUN_004174d0(puVar1,uVar4);
        if (lVar2 == 0) {
          return 0;
        }
      }
      lVar2 = param_1[1];
      if (lVar2 != 0) goto LAB_004cb890;
    }
    lVar2 = *(long *)(*param_1 + 8);
  }
LAB_004cb890:
  lVar5 = param_1[2];
  param_1[3] = param_1[3] + param_3;
  param_1[2] = lVar5 + param_3;
  memcpy((void *)(lVar2 + lVar5),param_2,param_3);
  return 1;
}


