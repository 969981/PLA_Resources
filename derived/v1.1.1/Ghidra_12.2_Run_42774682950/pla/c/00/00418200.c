/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00418200; name: FUN_00418200
 */


undefined8 * FUN_00418200(int param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 == 0) {
    puVar5 = (undefined8 *)FUN_004002a0(0x168,"external/openssl/crypto/rand/drbg_lib.c",0xc0);
  }
  else {
    puVar5 = (undefined8 *)thunk_FUN_004002a0(0x168,"external/openssl/crypto/rand/drbg_lib.c",0xbf);
  }
  if (puVar5 == (undefined8 *)0x0) {
    FUN_004014b0(0x24,0x6d,0x41,"external/openssl/crypto/rand/drbg_lib.c",0xc3);
  }
  else {
    if (param_1 == 0) {
      uVar6 = 0;
    }
    else {
      iVar4 = FUN_00406740(puVar5);
      uVar6 = (uint)(iVar4 != 0);
    }
    *(uint *)(puVar5 + 2) = uVar6;
    puVar2 = PTR_LAB_043741c8;
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)PTR_DAT_043741c0;
    puVar3 = PTR_LAB_043741d0;
    puVar5[1] = param_4;
    puVar5[0x29] = puVar2;
    puVar5[0x2a] = puVar3;
    puVar2 = PTR_LAB_043741e0;
    if (param_4 == (long *)0x0) {
      puVar5[0x2b] = PTR_LAB_043741d8;
      puVar5[0x2c] = puVar2;
      puVar7 = &DAT_04163890;
      puVar8 = &DAT_04163898;
    }
    else {
      puVar7 = &DAT_04163894;
      puVar8 = &DAT_041638a0;
    }
    *(undefined4 *)((long)puVar5 + 0x74) = *puVar7;
    puVar5[0x10] = *puVar8;
    iVar4 = FUN_004180f0(puVar5,param_2,param_3);
    if (iVar4 != 0) {
      if (param_4 == (long *)0x0) {
        return puVar5;
      }
      if (*param_4 == 0) {
        if (*(int *)(puVar5 + 6) <= (int)param_4[6]) {
          return puVar5;
        }
      }
      else {
        FUN_00400140();
        iVar4 = *(int *)(puVar5 + 6);
        lVar1 = param_4[6];
        if (*param_4 != 0) {
          FUN_00400160();
        }
        if (iVar4 <= (int)lVar1) {
          return puVar5;
        }
      }
      FUN_004014b0(0x24,0x6d,0x83,"external/openssl/crypto/rand/drbg_lib.c",0xec);
    }
    if (puVar5[0x28] != 0) {
      (**(code **)(puVar5[0x28] + 0x18))(puVar5);
    }
    FUN_00427700(puVar5[5]);
    FUN_00400180(*puVar5);
    FUN_00400e80(0xf,puVar5,puVar5 + 0x14);
    if (*(int *)(puVar5 + 2) == 0) {
      FUN_00400620(puVar5,0x168,"external/openssl/crypto/rand/drbg_lib.c",0x115);
    }
    else {
      FUN_00406700(puVar5,0x168,"external/openssl/crypto/rand/drbg_lib.c",0x113);
    }
  }
  return (undefined8 *)0x0;
}


