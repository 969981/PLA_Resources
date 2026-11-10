/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e58c0; name: FUN_006e58c0
 */


undefined1 * FUN_006e58c0(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  byte *pbVar8;
  byte *__src;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  size_t __n;
  
  uVar7 = *(uint *)(param_1 + 0x30);
  if (uVar7 == 0) {
LAB_006e5908:
    pbVar8 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar8;
joined_r0x006e5a1c:
    uVar9 = (ulong)bVar2;
    if ((bVar2 & 1) == 0) goto LAB_006e5914;
LAB_006e5a20:
    uVar10 = *(ulong *)(pbVar8 + 8);
  }
  else {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 8;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar7 = *(uint *)(param_1 + 0x30);
      *param_2 = 8;
    }
    if (uVar7 < 0x80) {
      param_2[1] = (byte)uVar7;
      param_2 = param_2 + 2;
      goto LAB_006e5908;
    }
    param_2[1] = (byte)uVar7 | 0x80;
    if (uVar7 >> 0xe == 0) {
      param_2[2] = (char)((ulong)(long)(int)uVar7 >> 7);
      param_2 = param_2 + 3;
      pbVar8 = *(byte **)(param_1 + 0x28);
      bVar2 = *pbVar8;
      goto joined_r0x006e5a1c;
    }
    uVar9 = (ulong)(long)(int)uVar7 >> 7;
    param_2 = param_2 + 3;
    do {
      puVar6 = param_2;
      uVar10 = uVar9 >> 7;
      puVar6[-1] = (byte)uVar9 | 0x80;
      param_2 = puVar6 + 1;
      uVar11 = uVar9 >> 0xe;
      uVar9 = uVar10;
    } while (uVar11 != 0);
    *puVar6 = (char)uVar10;
    pbVar8 = *(byte **)(param_1 + 0x28);
    uVar9 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_006e5a20;
LAB_006e5914:
    uVar10 = uVar9 >> 1;
  }
  if (uVar10 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    goto joined_r0x006e5a2c;
  }
  if ((uVar9 & 1) == 0) {
    pbVar8 = pbVar8 + 1;
    uVar9 = uVar9 >> 1;
  }
  else {
    uVar9 = *(ulong *)(pbVar8 + 8);
    pbVar8 = *(byte **)(pbVar8 + 0x10);
  }
  FUN_0033b628(pbVar8,uVar9,1,"google.rpc.Status.message");
  pbVar8 = *(byte **)(param_1 + 0x28);
  if ((*pbVar8 & 1) == 0) {
    __n = (size_t)(*pbVar8 >> 1);
LAB_006e5960:
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x12;
      param_2[1] = (char)__n;
      __src = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        __src = pbVar8 + 1;
      }
      memcpy(param_2 + 2,__src,__n);
      param_2 = param_2 + 2 + __n;
      iVar1 = *(int *)(param_1 + 0x18);
      goto joined_r0x006e5a2c;
    }
  }
  else {
    __n = *(size_t *)(pbVar8 + 8);
    if ((long)__n < 0x80) goto LAB_006e5960;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar8,param_2);
  iVar1 = *(int *)(param_1 + 0x18);
joined_r0x006e5a2c:
  if (iVar1 == 0) {
LAB_006e5af0:
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      return param_2;
    }
    puVar6 = (undefined1 *)
             FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
    return puVar6;
  }
  iVar12 = 0;
  if (param_2 < (undefined1 *)*param_3) goto LAB_006e5a78;
  do {
    param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_006e5a78:
    do {
      lVar5 = FUN_006e60f4(param_1 + 0x10,iVar12);
      *param_2 = 0x1a;
      uVar7 = *(uint *)(lVar5 + 0x20);
      if (uVar7 < 0x80) {
        param_2[1] = (byte)uVar7;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar7 | 0x80;
        if (uVar7 >> 0xe == 0) {
          param_2[2] = (char)(uVar7 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar7 = uVar7 >> 7;
          do {
            puVar6 = param_2;
            uVar3 = uVar7 >> 7;
            puVar6[-1] = (byte)uVar7 | 0x80;
            param_2 = puVar6 + 1;
            uVar4 = uVar7 >> 0xe;
            uVar7 = uVar3;
          } while (uVar4 != 0);
          *puVar6 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_0060acec(lVar5,param_2,param_3);
      iVar12 = iVar12 + 1;
      if (iVar12 == iVar1) goto LAB_006e5af0;
    } while (param_2 < (undefined1 *)*param_3);
  } while( true );
}


