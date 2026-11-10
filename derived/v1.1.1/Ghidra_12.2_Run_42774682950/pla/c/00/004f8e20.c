/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f8e20; name: FUN_004f8e20
 */


ulong FUN_004f8e20(long param_1,void *param_2,int param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  long *plVar7;
  
  FUN_00404040(param_1,0xf);
  sVar5 = 0;
  if (((param_3 != 0) && (param_2 != (void *)0x0)) && (*(int *)(param_1 + 0x20) != 0)) {
    plVar7 = *(long **)(param_1 + 0x38);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("b != NULL","external/openssl/crypto/bio/bss_bio.c",0x11a,"bio_write");
    }
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("b->peer != NULL","external/openssl/crypto/bio/bss_bio.c",0x11b,"bio_write");
    }
    if (plVar7[5] == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("b->buf != NULL","external/openssl/crypto/bio/bss_bio.c",0x11c,"bio_write");
    }
    plVar7[6] = 0;
    if ((int)plVar7[1] == 0) {
      uVar3 = plVar7[2];
      uVar2 = plVar7[4];
      sVar5 = uVar2 - uVar3;
      if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("b->len <= b->size","external/openssl/crypto/bio/bss_bio.c",0x125,"bio_write")
        ;
      }
      if (sVar5 == 0) {
        FUN_00404060(param_1,10);
        sVar5 = 0xffffffff;
      }
      else {
        if ((ulong)(long)param_3 <= sVar5) {
          sVar5 = (long)param_3;
        }
        if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("rest > 0","external/openssl/crypto/bio/bss_bio.c",0x134,"bio_write");
        }
        sVar6 = sVar5;
        do {
          if (uVar2 < uVar3 + sVar6) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("b->len + rest <= b->size","external/openssl/crypto/bio/bss_bio.c",0x139,
                          "bio_write");
          }
          uVar1 = 0;
          if (uVar2 <= plVar7[3] + uVar3) {
            uVar1 = uVar2;
          }
          lVar4 = (plVar7[3] + uVar3) - uVar1;
          __n = uVar2 - lVar4;
          if (lVar4 + sVar6 <= uVar2) {
            __n = sVar6;
          }
          memcpy((void *)(plVar7[5] + lVar4),param_2,__n);
          uVar3 = __n + plVar7[2];
          uVar2 = plVar7[4];
          plVar7[2] = uVar3;
          if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("b->len <= b->size","external/openssl/crypto/bio/bss_bio.c",0x14a,
                          "bio_write");
          }
          sVar6 = sVar6 - __n;
          param_2 = (void *)((long)param_2 + __n);
        } while (sVar6 != 0);
      }
    }
    else {
      FUN_004014b0(0x20,0x71,0x7c,"external/openssl/crypto/bio/bss_bio.c",0x121);
      sVar5 = 0xffffffff;
    }
  }
  return sVar5 & 0xffffffff;
}


