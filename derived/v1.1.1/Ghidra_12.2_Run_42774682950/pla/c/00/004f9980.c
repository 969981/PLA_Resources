/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f9980; name: FUN_004f9980
 */


long FUN_004f9980(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_14 [4];
  
  FUN_00404040(param_1,0xf);
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  if (*(long **)(param_1 + 0x38) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b != NULL","external/openssl/crypto/bio/bss_bio.c",0xd5,"bio_nread0");
  }
  lVar4 = **(long **)(param_1 + 0x38);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b->peer != NULL","external/openssl/crypto/bio/bss_bio.c",0xd6,"bio_nread0");
  }
  lVar4 = *(long *)(lVar4 + 0x38);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("peer_b != NULL","external/openssl/crypto/bio/bss_bio.c",0xd8,"bio_nread0");
  }
  if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("peer_b->buf != NULL","external/openssl/crypto/bio/bss_bio.c",0xd9,"bio_nread0");
  }
  lVar5 = *(long *)(lVar4 + 0x10);
  *(undefined8 *)(lVar4 + 0x30) = 0;
  if (lVar5 == 0) {
    iVar3 = FUN_004f9040(param_1,auStack_14,1);
    return (long)iVar3;
  }
  lVar2 = *(long *)(lVar4 + 0x18);
  lVar1 = *(ulong *)(lVar4 + 0x20) - lVar2;
  if ((ulong)(lVar2 + lVar5) <= *(ulong *)(lVar4 + 0x20)) {
    lVar1 = lVar5;
  }
  if (lVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("num > 0","external/openssl/crypto/bio/bss_bio.c",0xe8,"bio_nread0");
  }
  if (param_2 != (long *)0x0) {
    *param_2 = *(long *)(lVar4 + 0x28) + lVar2;
  }
  return lVar1;
}


