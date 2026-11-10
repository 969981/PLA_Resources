/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407370; name: FUN_00407370
 */


undefined8 FUN_00407370(int *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (-1 < param_2) {
    if (0x7fffffff - *param_1 < param_2) {
      return 0;
    }
    uVar2 = *param_1 + param_2;
    if ((int)uVar2 < 5) {
      uVar2 = 4;
    }
    if (*(long *)(param_1 + 2) == 0) {
      lVar1 = FUN_004002a0((ulong)uVar2 << 3,"external/openssl/crypto/stack/stack.c",0xb4);
      *(long *)(param_1 + 2) = lVar1;
      if (lVar1 == 0) {
        FUN_004014b0(0xf,0x81,0x41,"external/openssl/crypto/stack/stack.c",0xb5);
        return 0;
      }
      param_1[5] = uVar2;
      return 1;
    }
    if (uVar2 != param_1[5]) {
      lVar1 = FUN_00400350(*(long *)(param_1 + 2),(ulong)uVar2 << 3,
                           "external/openssl/crypto/stack/stack.c",0xc6);
      if (lVar1 == 0) {
        return 0;
      }
      *(long *)(param_1 + 2) = lVar1;
      param_1[5] = uVar2;
      return 1;
    }
  }
  return 1;
}


