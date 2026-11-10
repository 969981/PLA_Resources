/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417470; name: FUN_00417470
 */


void FUN_00417470(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      FUN_00400620(lVar1,*(undefined8 *)(param_1 + 0x10),"external/openssl/crypto/buffer/buffer.c",
                   0x33);
    }
    else {
      FUN_00406700(lVar1,*(undefined8 *)(param_1 + 0x10),"external/openssl/crypto/buffer/buffer.c",
                   0x31);
    }
  }
  FUN_00400420(param_1,"external/openssl/crypto/buffer/buffer.c",0x35);
  return;
}


