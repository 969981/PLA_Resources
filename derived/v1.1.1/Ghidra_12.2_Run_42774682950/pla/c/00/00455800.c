/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00455800; name: FUN_00455800
 */


uint FUN_00455800(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_5 < 0xb) {
    return 0xffffffff;
  }
  if (param_5 == param_4) {
    if (*param_3 != '\0') {
      uVar2 = 0x8a;
      uVar3 = 0x43;
      goto LAB_004558ac;
    }
    param_3 = param_3 + 1;
    param_4 = param_5 + -1;
  }
  if ((param_4 + 1 == param_5) && (*param_3 == '\x01')) {
    param_4 = param_4 + -1;
    if (param_4 < 1) {
      lVar4 = 0;
      param_3 = param_3 + 1;
      if (param_4 != 0) {
LAB_004558f4:
        if ((uint)lVar4 < 8) {
          uVar2 = 0x67;
        }
        else {
          uVar1 = param_4 + ~(uint)lVar4;
          if ((int)uVar1 <= param_2) {
            memcpy(param_1,param_3,(ulong)uVar1);
            return uVar1;
          }
          uVar2 = 0x6d;
        }
        uVar3 = uVar2;
        goto LAB_004558ac;
      }
    }
    else {
      lVar4 = 0;
      do {
        if (param_3[lVar4 + 1] != -1) {
          if (param_3[lVar4 + 1] != '\0') {
            uVar2 = 0x66;
            uVar3 = 0x58;
            goto LAB_004558ac;
          }
          param_3 = param_3 + lVar4 + 2;
          if ((int)lVar4 != param_4) goto LAB_004558f4;
          break;
        }
        lVar4 = lVar4 + 1;
      } while (param_4 != (int)lVar4);
    }
    uVar2 = 0x71;
    uVar3 = 0x61;
  }
  else {
    uVar2 = 0x6a;
    uVar3 = 0x4b;
  }
LAB_004558ac:
  FUN_004014b0(4,0x70,uVar2,"external/openssl/crypto/rsa/rsa_pk1.c",uVar3);
  return 0xffffffff;
}


