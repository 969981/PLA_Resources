/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042d990; name: FUN_0042d990
 */


undefined8 * FUN_0042d990(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 == (byte *)0x0) {
    FUN_004014b0(0x10,0x6c,0x6c,"external/openssl/crypto/ec/ec_lib.c",0x19);
    return (undefined8 *)0x0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    FUN_004014b0(0x10,0x6c,0x42,"external/openssl/crypto/ec/ec_lib.c",0x1d);
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)FUN_004002a0(0xa8,"external/openssl/crypto/ec/ec_lib.c",0x21);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_004014b0(0x10,0x6c,0x41,"external/openssl/crypto/ec/ec_lib.c",0x23);
    return (undefined8 *)0x0;
  }
  *puVar2 = param_1;
  if ((*param_1 >> 1 & 1) == 0) {
    lVar3 = FUN_0040c260();
    puVar2[2] = lVar3;
    if (lVar3 == 0) goto LAB_0042da80;
    lVar3 = FUN_0040c260();
    puVar2[3] = lVar3;
    if (lVar3 == 0) goto LAB_0042da80;
  }
  *(undefined8 *)((long)puVar2 + 0x24) = DAT_0388a5b0;
  iVar1 = (**(code **)(param_1 + 8))(puVar2);
  if (iVar1 != 0) {
    return puVar2;
  }
LAB_0042da80:
  FUN_0040c1e0(puVar2[2]);
  FUN_0040c1e0(puVar2[3]);
  FUN_00400420(puVar2,"external/openssl/crypto/ec/ec_lib.c",0x39);
  return (undefined8 *)0x0;
}


