/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046adb0; name: FUN_0046adb0
 */


long FUN_0046adb0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  iVar1 = FUN_00407950(uVar5);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = FUN_00407970(uVar5,iVar1);
      if (*(long *)(lVar3 + 8) == param_2) {
        return lVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(uVar5);
    } while (iVar1 < iVar2);
  }
  lVar3 = FUN_004002a0(0x20,"external/openssl/crypto/x509/x509_lu.c",0x14);
  if (lVar3 == 0) {
    FUN_004014b0(0xb,0x9b,0x41,"external/openssl/crypto/x509/x509_lu.c",0x17);
  }
  else {
    *(long *)(lVar3 + 8) = param_2;
    if ((*(code **)(param_2 + 8) == (code *)0x0) ||
       (iVar1 = (**(code **)(param_2 + 8))(lVar3), iVar1 != 0)) {
      *(long *)(lVar3 + 0x18) = param_1;
      iVar1 = FUN_00407800(*(undefined8 *)(param_1 + 0x10),lVar3);
      if (iVar1 != 0) {
        return lVar3;
      }
      FUN_004014b0(0xb,0x9d,0x41,"external/openssl/crypto/x509/x509_lu.c",0x10d);
      if ((*(long *)(lVar3 + 8) != 0) &&
         (pcVar4 = *(code **)(*(long *)(lVar3 + 8) + 0x10), pcVar4 != (code *)0x0)) {
        (*pcVar4)(lVar3);
      }
      FUN_00400420(lVar3,"external/openssl/crypto/x509/x509_lu.c",0x29);
      return 0;
    }
    FUN_00400420(lVar3,"external/openssl/crypto/x509/x509_lu.c",0x1d);
  }
  FUN_004014b0(0xb,0x9d,0x41,"external/openssl/crypto/x509/x509_lu.c",0x105);
  return 0;
}


