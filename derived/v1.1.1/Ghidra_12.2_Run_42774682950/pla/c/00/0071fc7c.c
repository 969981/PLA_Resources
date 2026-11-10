/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071fc7c; name: FUN_0071fc7c
 */


undefined1 * FUN_0071fc7c(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  undefined1 *puVar5;
  void *__src;
  ulong uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  size_t sVar12;
  
  pbVar8 = *(byte **)(param_1 + 0x40);
  bVar3 = *pbVar8;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) {
LAB_0071fcb4:
      if ((bVar3 & 1) == 0) {
        pbVar8 = pbVar8 + 1;
        uVar9 = (ulong)(bVar3 >> 1);
      }
      else {
        uVar9 = *(ulong *)(pbVar8 + 8);
        pbVar8 = *(byte **)(pbVar8 + 0x10);
      }
      FUN_0033b628(pbVar8,uVar9,1,"nn.npln.matchmaking.v1.Acceptance.name");
      pbVar8 = *(byte **)(param_1 + 0x40);
      if ((*pbVar8 & 1) == 0) {
        sVar12 = (size_t)(*pbVar8 >> 1);
LAB_0071fd04:
        if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 10;
          param_2[1] = (char)sVar12;
          pbVar10 = *(byte **)(pbVar8 + 0x10);
          if ((*pbVar8 & 1) == 0) {
            pbVar10 = pbVar8 + 1;
          }
          memcpy(param_2 + 2,pbVar10,sVar12);
          param_2 = param_2 + 2 + sVar12;
          goto LAB_0071fd48;
        }
      }
      else {
        sVar12 = *(size_t *)(pbVar8 + 8);
        if ((long)sVar12 < 0x80) goto LAB_0071fd04;
      }
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar8,param_2);
      iVar2 = *(int *)(param_1 + 0x18);
      goto joined_r0x0071fe54;
    }
  }
  else if (*(long *)(pbVar8 + 8) != 0) goto LAB_0071fcb4;
LAB_0071fd48:
  iVar2 = *(int *)(param_1 + 0x18);
joined_r0x0071fe54:
  if (0 < iVar2) {
    iVar11 = 0;
    do {
      while( true ) {
        pbVar10 = (byte *)FUN_0032b79c(param_1 + 0x10,iVar11);
        pbVar8 = *(byte **)(pbVar10 + 0x10);
        bVar4 = (*pbVar10 & 1) == 0;
        if (bVar4) {
          pbVar8 = pbVar10 + 1;
        }
        uVar1 = (uint)(*pbVar10 >> 1);
        if (!bVar4) {
          uVar1 = *(uint *)(pbVar10 + 8);
        }
        FUN_0033b628(pbVar8,uVar1,1,"nn.npln.matchmaking.v1.Acceptance.users");
        if ((*pbVar10 & 1) == 0) break;
        sVar12 = *(size_t *)(pbVar10 + 8);
        if ((long)sVar12 < 0x80) goto LAB_0071fdbc;
LAB_0071fe10:
        param_2 = (undefined1 *)FUN_00311488(param_3,2,pbVar10,param_2);
        iVar11 = iVar11 + 1;
        if (iVar2 == iVar11) goto LAB_0071fe58;
      }
      sVar12 = (size_t)(*pbVar10 >> 1);
LAB_0071fdbc:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar12) goto LAB_0071fe10;
      *param_2 = 0x12;
      param_2[1] = (char)sVar12;
      pbVar8 = pbVar10 + 1;
      if ((*pbVar10 & 1) != 0) {
        pbVar8 = *(byte **)(pbVar10 + 0x10);
      }
      memcpy(param_2 + 2,pbVar8,sVar12);
      param_2 = param_2 + 2 + sVar12;
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar11);
  }
LAB_0071fe58:
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar7 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar7 = *(undefined1 *)(param_1 + 0x48);
    }
    *param_2 = 0x18;
    param_2[1] = uVar7;
    param_2 = param_2 + 2;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    iVar11 = 0;
    do {
      while( true ) {
        pbVar10 = (byte *)FUN_0032b79c(param_1 + 0x28,iVar11);
        pbVar8 = *(byte **)(pbVar10 + 0x10);
        bVar4 = (*pbVar10 & 1) == 0;
        if (bVar4) {
          pbVar8 = pbVar10 + 1;
        }
        uVar1 = (uint)(*pbVar10 >> 1);
        if (!bVar4) {
          uVar1 = *(uint *)(pbVar10 + 8);
        }
        FUN_0033b628(pbVar8,uVar1,1,"nn.npln.matchmaking.v1.Acceptance.user_delegation_tokens");
        if ((*pbVar10 & 1) == 0) break;
        sVar12 = *(size_t *)(pbVar10 + 8);
        if ((long)sVar12 < 0x80) goto LAB_0071fef4;
LAB_0071ff48:
        param_2 = (undefined1 *)FUN_00311488(param_3,4,pbVar10,param_2);
        iVar11 = iVar11 + 1;
        if (iVar2 == iVar11) goto LAB_0071ff6c;
      }
      sVar12 = (size_t)(*pbVar10 >> 1);
LAB_0071fef4:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar12) goto LAB_0071ff48;
      *param_2 = 0x22;
      param_2[1] = (char)sVar12;
      pbVar8 = pbVar10 + 1;
      if ((*pbVar10 & 1) != 0) {
        pbVar8 = *(byte **)(pbVar10 + 0x10);
      }
      memcpy(param_2 + 2,pbVar8,sVar12);
      param_2 = param_2 + 2 + sVar12;
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar11);
  }
LAB_0071ff6c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      __src = (void *)(uVar9 + 9);
      uVar6 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar9 + 0x10);
      __src = *(void **)(uVar9 + 0x18);
    }
    sVar12 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar12) {
      puVar5 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar6,param_2);
      return puVar5;
    }
    memcpy(param_2,__src,sVar12);
    param_2 = param_2 + sVar12;
  }
  return param_2;
}


