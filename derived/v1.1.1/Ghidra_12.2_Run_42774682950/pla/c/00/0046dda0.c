/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046dda0; name: FUN_0046dda0
 */


bool FUN_0046dda0(long *param_1,void *param_2,uint param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  
  lVar5 = *param_1;
  if (param_4 == 0) {
    bVar1 = false;
    if (lVar5 == 0) {
      return false;
    }
    uVar3 = FUN_0041cd00(lVar5);
    param_4 = lVar5;
  }
  else {
    if (lVar5 != param_4) {
      if (param_2 == (void *)0x0) {
        return false;
      }
      if ((int)param_3 < 0) {
        return false;
      }
    }
    *param_1 = param_4;
    bVar1 = true;
    uVar3 = FUN_0041cd00(param_4);
  }
  if ((uVar3 >> 1 & 1) != 0) {
    return false;
  }
  if (param_2 == (void *)0x0) {
    if (bVar1) goto LAB_0046ded0;
    bVar1 = false;
LAB_0046e16c:
    iVar4 = FUN_00444d20(param_1[1],param_1[2]);
    bVar2 = iVar4 != 0;
    if (!bVar1) {
      return bVar2;
    }
  }
  else {
    iVar4 = FUN_0041cca0(param_4);
    if (0x90 < iVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: j <= (int)sizeof(ctx->key)",
                   "external/openssl/crypto/hmac/hmac.c",0x30);
    }
    if (iVar4 < (int)param_3) {
      iVar4 = FUN_004449b0(param_1[1],param_4,param_5);
      if ((iVar4 == 0) || (iVar4 = FUN_00444ad0(param_1[1],param_2,(long)(int)param_3), iVar4 == 0))
      {
        return false;
      }
      iVar4 = FUN_00444b90(param_1[1],(long)param_1 + 0x24,param_1 + 4);
      if (iVar4 == 0) {
        return false;
      }
      param_3 = *(uint *)(param_1 + 4);
    }
    else {
      if (0x90 < param_3) {
        return false;
      }
      memcpy((void *)((long)param_1 + 0x24),param_2,(long)(int)param_3);
      *(uint *)(param_1 + 4) = param_3;
    }
    if (param_3 != 0x90) {
      memset((void *)((long)param_1 + (ulong)param_3 + 0x24),0,(ulong)(0x90 - param_3));
    }
LAB_0046ded0:
    local_d0 = *(ulong *)((long)param_1 + 0x24) ^ 0x3636363636363636;
    uStack_c8 = *(ulong *)((long)param_1 + 0x2c) ^ 0x3636363636363636;
    uStack_c0 = *(ulong *)((long)param_1 + 0x34) ^ 0x3636363636363636;
    uStack_b8 = *(ulong *)((long)param_1 + 0x3c) ^ 0x3636363636363636;
    local_b0 = *(ulong *)((long)param_1 + 0x44) ^ 0x3636363636363636;
    uStack_a8 = *(ulong *)((long)param_1 + 0x4c) ^ 0x3636363636363636;
    uStack_a0 = *(ulong *)((long)param_1 + 0x54) ^ 0x3636363636363636;
    uStack_98 = *(ulong *)((long)param_1 + 0x5c) ^ 0x3636363636363636;
    local_90 = *(ulong *)((long)param_1 + 100) ^ 0x3636363636363636;
    uStack_88 = *(ulong *)((long)param_1 + 0x6c) ^ 0x3636363636363636;
    uStack_80 = *(ulong *)((long)param_1 + 0x74) ^ 0x3636363636363636;
    uStack_78 = *(ulong *)((long)param_1 + 0x7c) ^ 0x3636363636363636;
    local_70 = *(ulong *)((long)param_1 + 0x84) ^ 0x3636363636363636;
    uStack_68 = *(ulong *)((long)param_1 + 0x8c) ^ 0x3636363636363636;
    uStack_60 = *(ulong *)((long)param_1 + 0x94) ^ 0x3636363636363636;
    uStack_58 = *(ulong *)((long)param_1 + 0x9c) ^ 0x3636363636363636;
    local_50 = *(byte *)((long)param_1 + 0xa4) ^ 0x36;
    local_4f = *(byte *)((long)param_1 + 0xa5) ^ 0x36;
    local_4e = *(byte *)((long)param_1 + 0xa6) ^ 0x36;
    local_4d = *(byte *)((long)param_1 + 0xa7) ^ 0x36;
    local_4c = *(byte *)(param_1 + 0x15) ^ 0x36;
    local_4b = *(byte *)((long)param_1 + 0xa9) ^ 0x36;
    local_4a = *(byte *)((long)param_1 + 0xaa) ^ 0x36;
    local_49 = *(byte *)((long)param_1 + 0xab) ^ 0x36;
    local_48 = *(byte *)((long)param_1 + 0xac) ^ 0x36;
    local_47 = *(byte *)((long)param_1 + 0xad) ^ 0x36;
    local_46 = *(byte *)((long)param_1 + 0xae) ^ 0x36;
    local_45 = *(byte *)((long)param_1 + 0xaf) ^ 0x36;
    local_44 = *(byte *)(param_1 + 0x16) ^ 0x36;
    local_43 = *(byte *)((long)param_1 + 0xb1) ^ 0x36;
    local_42 = *(byte *)((long)param_1 + 0xb2) ^ 0x36;
    local_41 = *(byte *)((long)param_1 + 0xb3) ^ 0x36;
    iVar4 = FUN_004449b0(param_1[2],param_4,param_5);
    if (iVar4 != 0) {
      lVar5 = param_1[2];
      iVar4 = FUN_0041cca0(param_4);
      iVar4 = FUN_00444ad0(lVar5,&local_d0,(long)iVar4);
      if (iVar4 != 0) {
        local_d0 = *(ulong *)((long)param_1 + 0x24) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_c8 = *(ulong *)((long)param_1 + 0x2c) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_c0 = *(ulong *)((long)param_1 + 0x34) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_b8 = *(ulong *)((long)param_1 + 0x3c) ^ 0x5c5c5c5c5c5c5c5c;
        local_b0 = *(ulong *)((long)param_1 + 0x44) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_a8 = *(ulong *)((long)param_1 + 0x4c) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_a0 = *(ulong *)((long)param_1 + 0x54) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_98 = *(ulong *)((long)param_1 + 0x5c) ^ 0x5c5c5c5c5c5c5c5c;
        local_90 = *(ulong *)((long)param_1 + 100) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_88 = *(ulong *)((long)param_1 + 0x6c) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_80 = *(ulong *)((long)param_1 + 0x74) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_78 = *(ulong *)((long)param_1 + 0x7c) ^ 0x5c5c5c5c5c5c5c5c;
        local_70 = *(ulong *)((long)param_1 + 0x84) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_68 = *(ulong *)((long)param_1 + 0x8c) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_60 = *(ulong *)((long)param_1 + 0x94) ^ 0x5c5c5c5c5c5c5c5c;
        uStack_58 = *(ulong *)((long)param_1 + 0x9c) ^ 0x5c5c5c5c5c5c5c5c;
        local_50 = *(byte *)((long)param_1 + 0xa4) ^ 0x5c;
        local_4f = *(byte *)((long)param_1 + 0xa5) ^ 0x5c;
        local_4e = *(byte *)((long)param_1 + 0xa6) ^ 0x5c;
        local_4d = *(byte *)((long)param_1 + 0xa7) ^ 0x5c;
        local_4c = *(byte *)(param_1 + 0x15) ^ 0x5c;
        local_4b = *(byte *)((long)param_1 + 0xa9) ^ 0x5c;
        local_4a = *(byte *)((long)param_1 + 0xaa) ^ 0x5c;
        local_49 = *(byte *)((long)param_1 + 0xab) ^ 0x5c;
        local_48 = *(byte *)((long)param_1 + 0xac) ^ 0x5c;
        local_47 = *(byte *)((long)param_1 + 0xad) ^ 0x5c;
        local_46 = *(byte *)((long)param_1 + 0xae) ^ 0x5c;
        local_45 = *(byte *)((long)param_1 + 0xaf) ^ 0x5c;
        local_44 = *(byte *)(param_1 + 0x16) ^ 0x5c;
        local_43 = *(byte *)((long)param_1 + 0xb1) ^ 0x5c;
        local_42 = *(byte *)((long)param_1 + 0xb2) ^ 0x5c;
        local_41 = *(byte *)((long)param_1 + 0xb3) ^ 0x5c;
        iVar4 = FUN_004449b0(param_1[3],param_4,param_5);
        if (iVar4 != 0) {
          lVar5 = param_1[3];
          iVar4 = FUN_0041cca0(param_4);
          iVar4 = FUN_00444ad0(lVar5,&local_d0,(long)iVar4);
          if (iVar4 != 0) {
            bVar1 = true;
            goto LAB_0046e16c;
          }
        }
      }
    }
    bVar2 = false;
  }
  FUN_004006a0(&local_d0,0x90);
  return bVar2;
}


