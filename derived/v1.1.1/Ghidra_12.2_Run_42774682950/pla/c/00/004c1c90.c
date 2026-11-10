/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c1c90; name: FUN_004c1c90
 */


undefined8 FUN_004c1c90(long param_1,void *param_2,size_t param_3,int param_4)

{
  long lVar1;
  size_t __n;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ushort *puVar5;
  size_t __n_00;
  ushort *__dest;
  
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if ((uVar2 & 0x1c8) == 0) {
    iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x18))
                      (param_1,*(long *)(param_1 + 0x508) + 0x50,param_2,param_3,
                       *(long *)(param_1 + 0x508) + 8);
    if (iVar4 != 0) {
joined_r0x004c1d54:
      uVar3 = 1;
      goto joined_r0x004c1d54;
    }
  }
  else {
    __n_00 = *(size_t *)(*(long *)(param_1 + 0xa8) + 0x2d0);
    __n = __n_00;
    if ((uVar2 & 8) == 0) {
      __n = param_3;
    }
    lVar1 = __n_00 + __n + 4;
    puVar5 = (ushort *)FUN_00400260(lVar1,"external/openssl/ssl/s3_lib.c",0x121c);
    param_3 = __n;
    if (puVar5 != (ushort *)0x0) {
      __dest = puVar5 + 1;
      *puVar5 = (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
      if ((uVar2 >> 3 & 1) == 0) {
        memcpy(__dest,param_2,__n);
      }
      else {
        memset(__dest,0,__n);
      }
      *(ushort *)((long)__dest + __n) =
           (ushort)(__n_00 >> 8) & 0xff | (ushort)(((uint)__n_00 & 0xff00ff) << 8);
      memcpy((ushort *)((long)__dest + __n) + 1,*(void **)(*(long *)(param_1 + 0xa8) + 0x2c8),__n_00
            );
      FUN_00400620(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2c8),__n_00,
                   "external/openssl/ssl/s3_lib.c",0x1229);
      *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2c8) = 0;
      iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x18))
                        (param_1,*(long *)(param_1 + 0x508) + 0x50,puVar5,lVar1,
                         *(long *)(param_1 + 0x508) + 8);
      if (iVar4 != 0) {
        FUN_00400620(puVar5,lVar1,"external/openssl/ssl/s3_lib.c",0x1232);
        goto joined_r0x004c1d54;
      }
      FUN_00400620(puVar5,lVar1,"external/openssl/ssl/s3_lib.c",0x122e);
    }
  }
  uVar3 = 0;
joined_r0x004c1d54:
  if (param_2 == (void *)0x0) {
    iVar4 = *(int *)(param_1 + 0x38);
  }
  else if (param_4 == 0) {
    FUN_004006a0(param_2,param_3);
    iVar4 = *(int *)(param_1 + 0x38);
  }
  else {
    FUN_00400620(param_2,param_3,"external/openssl/ssl/s3_lib.c",0x1244);
    iVar4 = *(int *)(param_1 + 0x38);
  }
  if (iVar4 == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2b8) = 0;
  }
  return uVar3;
}


