/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00462760; name: FUN_00462760
 */


undefined4 * FUN_00462760(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  
  if ((param_1 == (undefined8 *)0x0) && (param_2 == 0)) {
LAB_0046277c:
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_00413930(param_2);
      if (lVar1 == 0) goto LAB_0046277c;
    }
    puVar3 = (undefined4 *)FUN_004002a0(0x20,"external/openssl/crypto/x509v3/pcy_data.c",0x34);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_004014b0(0x22,0xab,0x41,"external/openssl/crypto/x509v3/pcy_data.c",0x36);
    }
    else {
      lVar2 = FUN_004071e0();
      *(long *)(puVar3 + 6) = lVar2;
      if (lVar2 == 0) {
        FUN_00400420(puVar3,"external/openssl/crypto/x509v3/pcy_data.c",0x3b);
        FUN_00409be0(lVar1);
        FUN_004014b0(0x22,0xab,0x41,"external/openssl/crypto/x509v3/pcy_data.c",0x3d);
        puVar3 = (undefined4 *)0x0;
      }
      else {
        if (param_3 != 0) {
          *puVar3 = 0x10;
        }
        if (lVar1 == 0) {
          *(undefined8 *)(puVar3 + 2) = *param_1;
          *param_1 = 0;
        }
        else {
          *(long *)(puVar3 + 2) = lVar1;
        }
        if (param_1 != (undefined8 *)0x0) {
          *(undefined8 *)(puVar3 + 4) = param_1[1];
          param_1[1] = 0;
        }
      }
    }
  }
  return puVar3;
}


