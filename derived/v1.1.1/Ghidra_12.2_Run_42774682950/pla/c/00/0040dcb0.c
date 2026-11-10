/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040dcb0; name: FUN_0040dcb0
 */


undefined4 * FUN_0040dcb0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_00400120(param_2);
  puVar5 = (undefined4 *)*param_1;
  FUN_00400160(param_2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_00400260(0x60,"external/openssl/crypto/bn/bn_mont.c",0xe8);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_004014b0(3,0x95,0x41,"external/openssl/crypto/bn/bn_mont.c",0xe9);
    }
    else {
      puVar1 = puVar5 + 2;
      *puVar5 = 0;
      FUN_0040c250(puVar1);
      puVar2 = puVar5 + 8;
      FUN_0040c250(puVar2);
      puVar3 = puVar5 + 0xe;
      FUN_0040c250(puVar3);
      *(undefined8 *)(puVar5 + 0x14) = 0;
      puVar5[0x16] = 1;
      iVar4 = FUN_0040d9b0(puVar5,param_3,param_4);
      if (iVar4 == 0) {
        FUN_0040c140(puVar1);
        FUN_0040c140(puVar2);
        FUN_0040c140(puVar3);
        if ((*(byte *)(puVar5 + 0x16) & 1) == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          FUN_00400420(puVar5,"external/openssl/crypto/bn/bn_mont.c",0x104);
          puVar5 = (undefined4 *)0x0;
        }
      }
      else {
        FUN_00400140(param_2);
        if (*param_1 == 0) {
          *param_1 = (long)puVar5;
        }
        else {
          FUN_0040c140(puVar1);
          FUN_0040c140(puVar2);
          FUN_0040c140(puVar3);
          if ((*(byte *)(puVar5 + 0x16) & 1) != 0) {
            FUN_00400420(puVar5,"external/openssl/crypto/bn/bn_mont.c",0x104);
          }
          puVar5 = (undefined4 *)*param_1;
        }
        FUN_00400160(param_2);
      }
    }
  }
  return puVar5;
}


