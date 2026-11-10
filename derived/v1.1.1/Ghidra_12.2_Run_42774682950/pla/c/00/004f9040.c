/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f9040; name: FUN_004f9040
 */


ulong FUN_004f9040(long param_1,void *param_2,int param_3)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_00404040(param_1,0xf);
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(long **)(param_1 + 0x38) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("b != NULL","external/openssl/crypto/bio/bss_bio.c",0x7b,"bio_read");
    }
    lVar3 = **(long **)(param_1 + 0x38);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("b->peer != NULL","external/openssl/crypto/bio/bss_bio.c",0x7c,"bio_read");
    }
    lVar3 = *(long *)(lVar3 + 0x38);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("peer_b != NULL","external/openssl/crypto/bio/bss_bio.c",0x7e,"bio_read");
    }
    if (*(long *)(lVar3 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("peer_b->buf != NULL","external/openssl/crypto/bio/bss_bio.c",0x7f,"bio_read");
    }
    uVar5 = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    if ((param_2 == (void *)0x0) || (param_3 == 0)) goto LAB_004f915c;
    uVar4 = *(ulong *)(lVar3 + 0x10);
    uVar6 = (ulong)param_3;
    if (uVar4 != 0) {
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = uVar6;
      }
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("rest > 0","external/openssl/crypto/bio/bss_bio.c",0x9e,"bio_read");
      }
      uVar6 = uVar5;
      if (uVar5 <= uVar4) {
        do {
          lVar2 = *(long *)(lVar3 + 0x18);
          uVar4 = *(ulong *)(lVar3 + 0x20);
          __n = uVar4 - lVar2;
          if (lVar2 + uVar6 <= uVar4) {
            __n = uVar6;
          }
          if (uVar4 < __n + lVar2) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("peer_b->offset + chunk <= peer_b->size",
                          "external/openssl/crypto/bio/bss_bio.c",0xa8,"bio_read");
          }
          memcpy(param_2,(void *)(*(long *)(lVar3 + 0x28) + lVar2),__n);
          uVar4 = *(long *)(lVar3 + 0x10) - __n;
          *(ulong *)(lVar3 + 0x10) = uVar4;
          if (uVar4 == 0) {
            if (uVar6 != __n) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("chunk == rest","external/openssl/crypto/bio/bss_bio.c",0xb5,"bio_read")
              ;
            }
            *(undefined8 *)(lVar3 + 0x18) = 0;
          }
          else {
            uVar1 = *(long *)(lVar3 + 0x18) + __n;
            *(ulong *)(lVar3 + 0x18) = uVar1;
            if (*(ulong *)(lVar3 + 0x20) < uVar1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("peer_b->offset <= peer_b->size","external/openssl/crypto/bio/bss_bio.c"
                            ,0xaf,"bio_read");
            }
            if (uVar1 == *(ulong *)(lVar3 + 0x20)) {
              *(undefined8 *)(lVar3 + 0x18) = 0;
            }
            param_2 = (void *)((long)param_2 + __n);
          }
          uVar6 = uVar6 - __n;
          if (uVar6 == 0) goto LAB_004f915c;
        } while (uVar6 <= uVar4);
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("rest <= peer_b->len","external/openssl/crypto/bio/bss_bio.c",0xa2,"bio_read");
    }
    if (*(int *)(lVar3 + 8) == 0) {
      FUN_00404060(param_1,9);
      uVar4 = *(ulong *)(lVar3 + 0x20);
      if (uVar6 <= *(ulong *)(lVar3 + 0x20)) {
        uVar4 = uVar6;
      }
      uVar5 = 0xffffffff;
      *(ulong *)(lVar3 + 0x30) = uVar4;
      goto LAB_004f915c;
    }
  }
  uVar5 = 0;
LAB_004f915c:
  return uVar5 & 0xffffffff;
}


