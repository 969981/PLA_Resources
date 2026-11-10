/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041b980; name: FUN_0041b980
 */


undefined8 FUN_0041b980(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (*param_1 == 0) {
    uVar1 = 0x83;
    uVar2 = 0x268;
  }
  else {
    pcVar3 = *(code **)(*param_1 + 0x48);
    if (pcVar3 == (code *)0x0) {
      uVar1 = 0x84;
      uVar2 = 0x26d;
    }
    else {
      uVar1 = (*pcVar3)();
      if ((int)uVar1 != -1) {
        return uVar1;
      }
      uVar1 = 0x85;
      uVar2 = 0x274;
    }
  }
  FUN_004014b0(6,0x7c,uVar1,"external/openssl/crypto/evp/evp_enc.c",uVar2);
  return 0;
}


