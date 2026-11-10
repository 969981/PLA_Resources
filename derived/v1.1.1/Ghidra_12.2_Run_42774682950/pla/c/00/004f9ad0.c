/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f9ad0; name: FUN_004f9ad0
 */


long FUN_004f9ad0(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_00404040(param_1,0xf);
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b != NULL","external/openssl/crypto/bio/bss_bio.c",0x167,"bio_nwrite0");
  }
  if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b->peer != NULL","external/openssl/crypto/bio/bss_bio.c",0x168,"bio_nwrite0");
  }
  if (plVar4[5] == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b->buf != NULL","external/openssl/crypto/bio/bss_bio.c",0x169,"bio_nwrite0");
  }
  plVar4[6] = 0;
  if ((int)plVar4[1] != 0) {
    FUN_004014b0(0x20,0x7a,0x7c,"external/openssl/crypto/bio/bss_bio.c",0x16d);
    return -1;
  }
  uVar7 = plVar4[2];
  uVar6 = plVar4[4];
  lVar3 = uVar6 - uVar7;
  if (uVar6 < uVar7) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b->len <= b->size","external/openssl/crypto/bio/bss_bio.c",0x171,"bio_nwrite0");
  }
  if (lVar3 == 0) {
    FUN_00404060(param_1,10);
    return -1;
  }
  uVar1 = 0;
  if (uVar6 <= plVar4[3] + uVar7) {
    uVar1 = uVar6;
  }
  lVar5 = (plVar4[3] + uVar7) - uVar1;
  lVar2 = uVar6 - lVar5;
  if ((ulong)(lVar5 + lVar3) <= uVar6) {
    lVar2 = lVar3;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = plVar4[5] + lVar5;
  }
  if (uVar6 < (ulong)(lVar2 + lVar5)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("write_offset + num <= b->size","external/openssl/crypto/bio/bss_bio.c",0x186,
                  "bio_nwrite0");
  }
  return lVar2;
}


