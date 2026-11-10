/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046e390; name: FUN_0046e390
 */


undefined8 * FUN_0046e390(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_004002a0(0xb8,"external/openssl/crypto/hmac/hmac.c",0x87);
  if ((puVar2 == (undefined8 *)0x0) || (iVar1 = FUN_0046e1d0(puVar2), iVar1 != 0)) {
    return puVar2;
  }
  FUN_00444880(puVar2[2]);
  FUN_00444880(puVar2[3]);
  FUN_00444880(puVar2[1]);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_004006a0((long)puVar2 + 0x24,0x90);
  FUN_00444950(puVar2[2]);
  FUN_00444950(puVar2[3]);
  FUN_00444950(puVar2[1]);
  FUN_00400420(puVar2,"external/openssl/crypto/hmac/hmac.c",0xa3);
  return (undefined8 *)0x0;
}


