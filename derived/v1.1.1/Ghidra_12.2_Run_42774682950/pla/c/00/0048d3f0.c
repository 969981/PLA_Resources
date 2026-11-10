/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048d3f0; name: FUN_0048d3f0
 */


ulong FUN_0048d3f0(long param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  
  if ((199 < param_4) || ((param_4 & 7) != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("r < (25 * sizeof(A[0][0])) && (r % 8) == 0",
                  "external/openssl/crypto/sha/keccak1600.c",0x42a,"nnopenssl_SHA3_absorb");
  }
  if (param_4 <= param_3) {
    if (param_4 >> 3 == 0) {
      do {
        FUN_0048d4b0(param_1);
        param_3 = param_3 - param_4;
      } while (param_4 <= param_3);
    }
    else {
      do {
        uVar1 = 0;
        puVar3 = param_2;
        do {
          lVar2 = uVar1 * 8;
          param_2 = puVar3 + 1;
          uVar1 = uVar1 + 1;
          *(ulong *)(param_1 + lVar2) = *puVar3 ^ *(ulong *)(param_1 + lVar2);
          puVar3 = param_2;
        } while (param_4 >> 3 != uVar1);
        FUN_0048d4b0(param_1);
        param_3 = param_3 - param_4;
      } while (param_4 <= param_3);
    }
  }
  return param_3;
}


