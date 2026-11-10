/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046aa20; name: FUN_0046aa20
 */


undefined4 * FUN_0046aa20(void)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)FUN_004002a0(0x98,"external/openssl/crypto/x509/x509_lu.c",0xa2);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004014b0(0xb,0x9e,0x41,"external/openssl/crypto/x509/x509_lu.c",0xa5);
    return (undefined4 *)0x0;
  }
  lVar3 = FUN_00407340(&LAB_0046ab60);
  *(long *)(puVar2 + 2) = lVar3;
  if (lVar3 == 0) {
    uVar4 = 0xa9;
  }
  else {
    *puVar2 = 1;
    lVar3 = FUN_004071e0();
    *(long *)(puVar2 + 4) = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0xae;
    }
    else {
      lVar3 = FUN_0046bbe0();
      *(long *)(puVar2 + 6) = lVar3;
      if (lVar3 == 0) {
        uVar4 = 0xb3;
      }
      else {
        iVar1 = FUN_00400880(4,puVar2,puVar2 + 0x20);
        if (iVar1 == 0) {
          uVar4 = 0xb7;
        }
        else {
          lVar3 = FUN_004000a0();
          *(long *)(puVar2 + 0x24) = lVar3;
          if (lVar3 != 0) {
            puVar2[0x22] = 1;
            return puVar2;
          }
          uVar4 = 0xbd;
        }
      }
    }
  }
  FUN_004014b0(0xb,0x9e,0x41,"external/openssl/crypto/x509/x509_lu.c",uVar4);
  FUN_0046bc40(*(undefined8 *)(puVar2 + 6));
  FUN_00407010(*(undefined8 *)(puVar2 + 2));
  FUN_00407010(*(undefined8 *)(puVar2 + 4));
  FUN_00400420(puVar2,"external/openssl/crypto/x509/x509_lu.c",200);
  return (undefined4 *)0x0;
}


