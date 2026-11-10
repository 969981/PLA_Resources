/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ca940; name: FUN_004ca940
 */


undefined8 FUN_004ca940(long *param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((param_2 == 0) || (param_1[5] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: pkt->subs != NULL && len != 0","external/openssl/ssl/packet.c",
                 0x2b);
  }
  if ((ulong)(param_1[4] - param_1[3]) < param_2) {
    return 0;
  }
  if (param_1[1] == 0) {
    puVar1 = (ulong *)*param_1;
    uVar4 = *puVar1;
    if (uVar4 - param_1[3] < param_2) {
      uVar3 = param_2;
      if (param_2 <= uVar4) {
        uVar3 = uVar4;
      }
      if ((long)uVar3 < 0) {
        lVar2 = FUN_004174d0(puVar1,0xffffffffffffffff);
        if (lVar2 == 0) {
          return 0;
        }
      }
      else {
        uVar3 = uVar3 * 2;
        if (uVar3 < 0x101) {
          uVar3 = 0x100;
        }
        lVar2 = FUN_004174d0(puVar1,uVar3);
        if (lVar2 == 0) {
          return 0;
        }
      }
    }
  }
  if (param_3 == (long *)0x0) {
    lVar2 = param_1[2];
  }
  else {
    lVar5 = param_1[1];
    if (lVar5 == 0) {
      lVar5 = *(long *)(*param_1 + 8);
    }
    lVar2 = param_1[2];
    *param_3 = lVar5 + lVar2;
  }
  param_1[2] = lVar2 + param_2;
  param_1[3] = param_1[3] + param_2;
  return 1;
}


