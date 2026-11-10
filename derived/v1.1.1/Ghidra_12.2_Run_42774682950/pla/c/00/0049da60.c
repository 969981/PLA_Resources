/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0049da60; name: FUN_0049da60
 */


ulong FUN_0049da60(long param_1,void *param_2,size_t *param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t __n;
  long lVar8;
  uint local_38 [2];
  
  lVar8 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar8 + 0x20) == 0) {
    uVar4 = FUN_004568a0(param_5 & 0xffffffff,param_4,param_2,
                         *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                         *(undefined4 *)(lVar8 + 0x1c));
    local_38[0] = (uint)uVar4;
joined_r0x0049db5c:
    if ((int)local_38[0] < 0) {
      return uVar4;
    }
    __n = (size_t)(int)uVar4;
LAB_0049dba0:
    uVar4 = 1;
    *param_3 = __n;
  }
  else {
    if (*(int *)(lVar8 + 0x1c) == 1) {
      uVar6 = FUN_0041ccb0();
      iVar2 = FUN_0049fcc0(uVar6,0,0,param_2,local_38,param_4,param_5,
                           *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
      if (0 < iVar2) {
        uVar4 = (ulong)local_38[0];
        goto joined_r0x0049db5c;
      }
    }
    else {
      if (*(int *)(lVar8 + 0x1c) != 5) {
        return 0xffffffff;
      }
      lVar5 = *(long *)(lVar8 + 0x38);
      if (lVar5 == 0) {
        iVar2 = FUN_00422d70(*(undefined8 *)(param_1 + 0x10));
        lVar5 = FUN_00400260((long)iVar2,"external/openssl/crypto/rsa/rsa_pmeth.c",0x6a);
        *(long *)(lVar8 + 0x38) = lVar5;
        if (lVar5 == 0) {
          FUN_004014b0(4,0xa7,0x41,"external/openssl/crypto/rsa/rsa_pmeth.c",0x6b);
          return 0xffffffff;
        }
      }
      iVar2 = FUN_004568a0(param_5 & 0xffffffff,param_4,lVar5,
                           *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),5);
      if (0 < iVar2) {
        __n = (long)iVar2 - 1;
        bVar1 = *(byte *)(*(long *)(lVar8 + 0x38) + __n);
        FUN_0041ccb0(*(undefined8 *)(lVar8 + 0x20));
        uVar3 = FUN_00456770();
        if (uVar3 == bVar1) {
          iVar2 = FUN_0041ccc0(*(undefined8 *)(lVar8 + 0x20));
          if ((int)__n == iVar2) {
            if (param_2 != (void *)0x0) {
              memcpy(param_2,*(void **)(lVar8 + 0x38),__n);
            }
            goto LAB_0049dba0;
          }
          uVar6 = 0x8f;
          uVar7 = 0xd7;
        }
        else {
          uVar6 = 100;
          uVar7 = 0xd2;
        }
        FUN_004014b0(4,0x8d,uVar6,"external/openssl/crypto/rsa/rsa_pmeth.c",uVar7);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


