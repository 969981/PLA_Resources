/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048d650; name: FUN_0048d650
 */


void FUN_0048d650(long param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if ((199 < param_4) || ((param_4 & 7) != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("r < (25 * sizeof(A[0][0])) && (r % 8) == 0",
                  "external/openssl/crypto/sha/keccak1600.c",0x446,"nnopenssl_SHA3_squeeze");
  }
  if (param_3 != 0) {
    if (param_4 >> 3 == 0) {
      do {
        FUN_0048d4b0(param_1);
      } while( true );
    }
    lVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    while( true ) {
      uVar4 = *(ulong *)(param_1 + uVar5 * 8);
      puVar2 = (undefined1 *)(param_2 + uVar6);
      if (param_3 + lVar7 < 8) break;
      puVar2[1] = (char)(uVar4 >> 8);
      puVar2[2] = (char)(uVar4 >> 0x10);
      puVar2[3] = (char)(uVar4 >> 0x18);
      puVar2[4] = (char)(uVar4 >> 0x20);
      *puVar2 = (char)uVar4;
      puVar2[5] = (char)(uVar4 >> 0x28);
      puVar2[6] = (char)(uVar4 >> 0x30);
      puVar2[7] = (char)(uVar4 >> 0x38);
      if ((param_3 - 8 == uVar6) || (uVar5 = uVar5 + 1, param_4 >> 3 <= uVar5)) {
        if (param_3 - 8 == uVar6) {
          return;
        }
        FUN_0048d4b0(param_1);
        uVar5 = 0;
      }
      uVar6 = uVar6 + 8;
      lVar7 = lVar7 + -8;
    }
    uVar5 = param_3 & 3;
    if (2 < ~uVar6 + param_3) {
      lVar7 = 0;
      do {
        lVar3 = param_2 + lVar7 + uVar6;
        puVar2[lVar7] = (char)uVar4;
        *(char *)(lVar3 + 1) = (char)(uVar4 >> 8);
        lVar1 = lVar7 + 4;
        *(char *)(lVar3 + 2) = (char)(uVar4 >> 0x10);
        puVar2[lVar7 + 3] = (char)(uVar4 >> 0x18);
        uVar4 = uVar4 >> 0x20;
        lVar7 = lVar1;
      } while ((param_3 - (param_3 & 3)) - uVar6 != lVar1);
      puVar2 = puVar2 + lVar1;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar2 = (char)uVar4;
      uVar4 = uVar4 >> 8;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}


