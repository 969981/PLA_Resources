/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00418dd0; name: FUN_00418dd0
 */


void FUN_00418dd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00405540(&DAT_0439e790);
  FUN_00405560(&DAT_0439e790,0);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[0x28] != 0) {
      (**(code **)(puVar1[0x28] + 0x18))(puVar1);
    }
    FUN_00427700(puVar1[5]);
    FUN_00400180(*puVar1);
    FUN_00400e80(0xf,puVar1,puVar1 + 0x14);
    if (*(int *)(puVar1 + 2) == 0) {
      FUN_00400620(puVar1,0x168,"external/openssl/crypto/rand/drbg_lib.c",0x115);
    }
    else {
      FUN_00406700(puVar1,0x168,"external/openssl/crypto/rand/drbg_lib.c",0x113);
    }
  }
  puVar1 = (undefined8 *)FUN_00405540(&DAT_0439e788);
  FUN_00405560(&DAT_0439e788,0);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  if (puVar1[0x28] != 0) {
    (**(code **)(puVar1[0x28] + 0x18))(puVar1);
  }
  FUN_00427700(puVar1[5]);
  FUN_00400180(*puVar1);
  FUN_00400e80(0xf,puVar1,puVar1 + 0x14);
  if (*(int *)(puVar1 + 2) == 0) {
    FUN_00400620(puVar1,0x168,"external/openssl/crypto/rand/drbg_lib.c",0x115);
    return;
  }
  FUN_00406700(puVar1,0x168,"external/openssl/crypto/rand/drbg_lib.c",0x113);
  return;
}


