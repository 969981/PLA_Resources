/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00426fb0; name: FUN_00426fb0
 */


bool FUN_00426fb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong __n;
  undefined1 auStack_218 [96];
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [216];
  uint local_54;
  
  iVar3 = FUN_0040c070(param_2);
  iVar4 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    iVar4 = iVar3 + 7;
  }
  uVar1 = (iVar4 >> 3) + 8;
  lVar5 = FUN_00400260(uVar1,"external/openssl/crypto/bn/bn_rand.c",0xdf);
  if (lVar5 != 0) {
    __n = (ulong)(uint)(*(int *)(param_3 + 1) << 2);
    if ((uint)(*(int *)(param_3 + 1) << 2) < 0x61) {
      memcpy(auStack_218,(void *)*param_3,__n);
      memset(auStack_218 + __n,0,0x60 - __n);
      local_54 = 0;
      if (uVar1 != 0) {
        do {
          iVar4 = FUN_00427b20(auStack_178,0x40);
          if (iVar4 != 1) goto LAB_00427158;
          FUN_00428390(auStack_138);
          FUN_00429720(auStack_138,&local_54,4);
          FUN_00429720(auStack_138,auStack_218,0x60);
          FUN_00429720(auStack_138,param_4,param_5);
          FUN_00429720(auStack_138,auStack_178,0x40);
          FUN_004283d0(auStack_1b8,auStack_138);
          uVar7 = uVar1 - local_54;
          if (0x3f < uVar7) {
            uVar7 = 0x40;
          }
          memcpy((void *)(lVar5 + (ulong)local_54),auStack_1b8,(ulong)uVar7);
          local_54 = uVar7 + local_54;
        } while (local_54 < uVar1);
      }
      lVar6 = FUN_0040c710(lVar5,uVar1,param_1);
      if (lVar6 != 0) {
        iVar4 = FUN_0040e5a0(0,param_1,param_1,param_2,param_6);
        bVar2 = iVar4 == 1;
        goto LAB_0042715c;
      }
    }
    else {
      FUN_004014b0(3,0x8c,0x75,"external/openssl/crypto/bn/bn_rand.c",0xeb);
    }
  }
LAB_00427158:
  bVar2 = false;
LAB_0042715c:
  FUN_00400420(lVar5,"external/openssl/crypto/bn/bn_rand.c",0x109);
  FUN_004006a0(auStack_218,0x60);
  return bVar2;
}


