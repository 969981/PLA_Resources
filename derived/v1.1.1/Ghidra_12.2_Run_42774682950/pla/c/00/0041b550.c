/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041b550; name: FUN_0041b550
 */


void FUN_0041b550(long *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x28);
      if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(param_1), iVar1 == 0)) goto LAB_0041b5c0;
      if (param_1[0xf] != 0) {
        if (*(int *)(*param_1 + 0x30) != 0) {
          FUN_004006a0();
        }
      }
    }
    FUN_00400420(param_1[0xf],"external/openssl/crypto/evp/evp_enc.c",0x20);
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
LAB_0041b5c0:
  FUN_00400420(param_1,"external/openssl/crypto/evp/evp_enc.c",0x30);
  return;
}


