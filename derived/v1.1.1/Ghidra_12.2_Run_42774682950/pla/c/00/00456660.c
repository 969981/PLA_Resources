/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00456660; name: FUN_00456660
 */


uint FUN_00456660(void *param_1,undefined8 param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_5 != param_4) || ((*param_3 & 0xfe) != 0x6a)) {
    uVar4 = 0x89;
    uVar5 = 0x3d;
    goto LAB_004566d0;
  }
  if (*param_3 == 0x6b) {
    uVar2 = param_5 - 3;
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        uVar6 = uVar7;
        if (param_3[uVar6 + 1] != 0xbb) {
          if (param_3[uVar6 + 1] != 0xba) {
            uVar4 = 0x8a;
            uVar5 = 0x48;
            goto LAB_004566d0;
          }
          uVar7 = uVar6;
          uVar3 = (uint)uVar6;
          goto joined_r0x0045671c;
        }
        uVar7 = uVar6 + 1;
      } while (uVar2 != (uint)(uVar6 + 1));
      uVar7 = (ulong)uVar2;
      uVar3 = uVar2;
joined_r0x0045671c:
      if (uVar3 != 0) {
        uVar2 = uVar2 - (int)uVar7;
        param_3 = param_3 + uVar6 + 2;
        bVar1 = param_3[(int)uVar2];
        goto joined_r0x004566fc;
      }
    }
    uVar4 = 0x8a;
    uVar5 = 0x50;
  }
  else {
    param_3 = param_3 + 1;
    uVar2 = param_5 - 2;
    bVar1 = param_3[(int)uVar2];
joined_r0x004566fc:
    if (bVar1 == 0xcc) {
      memcpy(param_1,param_3,(ulong)uVar2);
      return uVar2;
    }
    uVar4 = 0x8b;
    uVar5 = 0x59;
  }
LAB_004566d0:
  FUN_004014b0(4,0x80,uVar4,"external/openssl/crypto/rsa/rsa_x931.c",uVar5);
  return 0xffffffff;
}


