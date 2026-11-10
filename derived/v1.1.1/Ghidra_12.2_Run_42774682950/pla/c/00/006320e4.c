/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006320e4; name: FUN_006320e4
 */


undefined1 * FUN_006320e4(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  size_t sVar11;
  
  pbVar7 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar7;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_00632110;
LAB_00632128:
    pbVar7 = *(byte **)(param_1 + 0x18);
    uVar9 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) == 0) goto LAB_00632134;
LAB_006321f8:
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_00632200;
LAB_0063213c:
    if ((uVar9 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
      uVar9 = uVar9 >> 1;
    }
    else {
      uVar9 = *(ulong *)(pbVar7 + 8);
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
    FUN_0033b628(pbVar7,uVar9,1,"nn.npln.friends.v1.FriendUser.friend_user");
    pbVar7 = *(byte **)(param_1 + 0x18);
    if ((*pbVar7 & 1) == 0) {
      sVar11 = (size_t)(*pbVar7 >> 1);
LAB_00632230:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_006323f4;
      *param_2 = 0x12;
      param_2[1] = (char)sVar11;
      pbVar8 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar8 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar8,sVar11);
      param_2 = param_2 + 2 + sVar11;
      pbVar7 = *(byte **)(param_1 + 0x20);
      bVar2 = *pbVar7;
    }
    else {
      sVar11 = *(size_t *)(pbVar7 + 8);
      if ((long)sVar11 < 0x80) goto LAB_00632230;
LAB_006323f4:
      param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar7,param_2);
      pbVar7 = *(byte **)(param_1 + 0x20);
      bVar2 = *pbVar7;
    }
    uVar9 = (ulong)bVar2;
    if ((bVar2 & 1) == 0) goto LAB_0063220c;
LAB_00632280:
    uVar10 = *(ulong *)(pbVar7 + 8);
  }
  else {
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_00632128;
LAB_00632110:
    if ((bVar2 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
      uVar9 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar9 = *(ulong *)(pbVar7 + 8);
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
    FUN_0033b628(pbVar7,uVar9,1,"nn.npln.friends.v1.FriendUser.name");
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      sVar11 = (size_t)(*pbVar7 >> 1);
LAB_006321a8:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_006323d0;
      *param_2 = 10;
      param_2[1] = (char)sVar11;
      pbVar8 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar8 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar8,sVar11);
      param_2 = param_2 + 2 + sVar11;
      pbVar7 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar7;
    }
    else {
      sVar11 = *(size_t *)(pbVar7 + 8);
      if ((long)sVar11 < 0x80) goto LAB_006321a8;
LAB_006323d0:
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar7,param_2);
      pbVar7 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar7;
    }
    uVar9 = (ulong)bVar2;
    if ((bVar2 & 1) != 0) goto LAB_006321f8;
LAB_00632134:
    if (uVar9 >> 1 != 0) goto LAB_0063213c;
LAB_00632200:
    pbVar7 = *(byte **)(param_1 + 0x20);
    uVar9 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) != 0) goto LAB_00632280;
LAB_0063220c:
    uVar10 = uVar9 >> 1;
  }
  if (uVar10 == 0) goto joined_r0x00632438;
  if ((uVar9 & 1) == 0) {
    pbVar7 = pbVar7 + 1;
    uVar9 = uVar9 >> 1;
  }
  else {
    uVar9 = *(ulong *)(pbVar7 + 8);
    pbVar7 = *(byte **)(pbVar7 + 0x10);
  }
  FUN_0033b628(pbVar7,uVar9,1,"nn.npln.friends.v1.FriendUser.nsa_id");
  pbVar7 = *(byte **)(param_1 + 0x20);
  if ((*pbVar7 & 1) == 0) {
    sVar11 = (size_t)(*pbVar7 >> 1);
LAB_006322c0:
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x1a;
      param_2[1] = (char)sVar11;
      pbVar8 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar8 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar8,sVar11);
      param_2 = param_2 + 2 + sVar11;
      goto joined_r0x00632438;
    }
  }
  else {
    sVar11 = *(size_t *)(pbVar7 + 8);
    if ((long)sVar11 < 0x80) goto LAB_006322c0;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,3,pbVar7,param_2);
joined_r0x00632438:
  if ((param_1 != PTR_DAT_04375638) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      lVar5 = *(long *)(param_1 + 0x28);
    }
    *param_2 = 0x22;
    uVar1 = *(uint *)(lVar5 + 0x14);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar6 = param_2;
          uVar3 = uVar1 >> 7;
          puVar6[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar6 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar6 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_00631648(lVar5,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      __src = (void *)(uVar9 + 9);
      uVar10 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    else {
      uVar10 = *(ulong *)(uVar9 + 0x10);
      __src = *(void **)(uVar9 + 0x18);
    }
    sVar11 = (size_t)(int)uVar10;
    if (*param_3 - (long)param_2 < (long)sVar11) {
      puVar6 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar10,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,sVar11);
    param_2 = param_2 + sVar11;
  }
  return param_2;
}


