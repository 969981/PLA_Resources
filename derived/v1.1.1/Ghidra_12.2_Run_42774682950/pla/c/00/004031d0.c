/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004031d0; name: FUN_004031d0
 */


undefined8
FUN_004031d0(long *param_1,long *param_2,size_t *param_3,ulong *param_4,undefined1 param_5)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  
  if ((param_2 == (long *)0x0) && (*param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: *sbuffer != NULL || buffer != NULL",
                 "external/openssl/crypto/bio/b_print.c",0x32f);
  }
  uVar2 = *param_3;
  if (*param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: *currlen <= *maxlen","external/openssl/crypto/bio/b_print.c",
                 0x333);
  }
  if ((param_2 != (long *)0x0) && (uVar2 == *param_4)) {
    if (0x7ffffbff < uVar2) {
      return 0;
    }
    uVar2 = uVar2 + 0x400;
    *param_4 = uVar2;
    if (*param_2 == 0) {
      __dest = (void *)FUN_00400260(uVar2,"external/openssl/crypto/bio/b_print.c",0x33c);
      *param_2 = (long)__dest;
      if (__dest == (void *)0x0) {
        FUN_004014b0(0x20,0x96,0x41,"external/openssl/crypto/bio/b_print.c",0x33d);
        return 0;
      }
      if (*param_3 != 0) {
        if ((void *)*param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("Assertion failed: *sbuffer != NULL","external/openssl/crypto/bio/b_print.c",
                       0x341);
        }
        memcpy(__dest,(void *)*param_1,*param_3);
      }
      *param_1 = 0;
      uVar2 = *param_3;
      if (*param_4 <= uVar2) {
        return 1;
      }
      goto LAB_00403274;
    }
    lVar1 = FUN_00400350(*param_2,uVar2,"external/openssl/crypto/bio/b_print.c",0x348);
    if (lVar1 == 0) {
      return 0;
    }
    *param_2 = lVar1;
  }
  uVar2 = *param_3;
  if (*param_4 <= uVar2) {
    return 1;
  }
LAB_00403274:
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = *param_2;
  }
  *param_3 = uVar2 + 1;
  *(undefined1 *)(lVar1 + uVar2) = param_5;
  return 1;
}


