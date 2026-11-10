/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047d570; name: FUN_0047d570
 */


long FUN_0047d570(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = thunk_FUN_004242f0();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0041d030(0,param_2,param_3,&DAT_0416cd90);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_00424410(lVar1);
      lVar1 = 0;
    }
    else {
      if (param_1 != (long *)0x0) {
        FUN_00424410(*param_1);
        *param_1 = lVar1;
      }
      *(undefined8 *)(lVar1 + 8) = *puVar2;
      *(undefined8 *)(lVar1 + 0x40) = puVar2[1];
      *(undefined8 *)(lVar1 + 0x10) = puVar2[2];
      *(undefined8 *)(lVar1 + 0x48) = puVar2[3];
      puVar4 = (undefined8 *)puVar2[4];
      if (puVar4 != (undefined8 *)0x0) {
        puVar3 = (undefined4 *)*puVar4;
        *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(puVar3 + 2);
        *(undefined4 *)(lVar1 + 0x58) = *puVar3;
        *(undefined8 *)(lVar1 + 0x60) = puVar4[1];
        *(undefined8 *)(puVar3 + 2) = 0;
        thunk_FUN_0040a4b0();
        FUN_00400420(puVar2[4],"external/openssl/crypto/dh/dh_asn1.c",0x6e);
        puVar2[4] = 0;
      }
      FUN_00400420(puVar2,"external/openssl/crypto/dh/dh_asn1.c",0x72);
    }
  }
  return lVar1;
}


