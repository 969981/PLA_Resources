/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f98a0; name: FUN_004f98a0
 */


void FUN_004f98a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if ((plVar1 != (long *)0x0) && (lVar3 = *plVar1, lVar3 != 0)) {
    plVar2 = *(long **)(lVar3 + 0x38);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("peer_b != NULL","external/openssl/crypto/bio/bss_bio.c",0x29a,
                    "bio_destroy_pair");
    }
    if (*plVar2 != param_1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("peer_b->peer == bio","external/openssl/crypto/bio/bss_bio.c",0x29b,
                    "bio_destroy_pair");
    }
    *plVar2 = 0;
    *(undefined4 *)(lVar3 + 0x20) = 0;
    if (plVar2[5] == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("peer_b->buf != NULL","external/openssl/crypto/bio/bss_bio.c",0x29f,
                    "bio_destroy_pair");
    }
    plVar2[2] = 0;
    plVar2[3] = 0;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (plVar1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("b->buf != NULL","external/openssl/crypto/bio/bss_bio.c",0x2a5,
                    "bio_destroy_pair");
    }
    plVar1[2] = 0;
    plVar1[3] = 0;
  }
  return;
}


