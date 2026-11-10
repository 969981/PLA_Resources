/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b27a0; name: FUN_002b27a0
 */


undefined1 * FUN_002b27a0(undefined *param_1,undefined1 *param_2,long *param_3)

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
    if (bVar2 >> 1 != 0) goto LAB_002b27cc;
LAB_002b27e4:
    pbVar7 = *(byte **)(param_1 + 0x18);
    uVar9 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) == 0) goto LAB_002b27f0;
LAB_002b28b4:
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_002b28bc;
LAB_002b27f8:
    if ((uVar9 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
      uVar9 = uVar9 >> 1;
    }
    else {
      uVar9 = *(ulong *)(pbVar7 + 8);
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
    FUN_0033b628(pbVar7,uVar9,1,"nn.npln.auth.v1.Token.access_token");
    pbVar7 = *(byte **)(param_1 + 0x18);
    if ((*pbVar7 & 1) == 0) {
      sVar11 = (size_t)(*pbVar7 >> 1);
LAB_002b28ec:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_002b2ab0;
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
      if ((long)sVar11 < 0x80) goto LAB_002b28ec;
LAB_002b2ab0:
      param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar7,param_2);
      pbVar7 = *(byte **)(param_1 + 0x20);
      bVar2 = *pbVar7;
    }
    uVar9 = (ulong)bVar2;
    if ((bVar2 & 1) == 0) goto LAB_002b28c8;
LAB_002b293c:
    uVar10 = *(ulong *)(pbVar7 + 8);
  }
  else {
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_002b27e4;
LAB_002b27cc:
    if ((bVar2 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
      uVar9 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar9 = *(ulong *)(pbVar7 + 8);
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
    FUN_0033b628(pbVar7,uVar9,1,"nn.npln.auth.v1.Token.user");
    pbVar7 = *(byte **)(param_1 + 0x10);
    if ((*pbVar7 & 1) == 0) {
      sVar11 = (size_t)(*pbVar7 >> 1);
LAB_002b2864:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_002b2a8c;
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
      if ((long)sVar11 < 0x80) goto LAB_002b2864;
LAB_002b2a8c:
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar7,param_2);
      pbVar7 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar7;
    }
    uVar9 = (ulong)bVar2;
    if ((bVar2 & 1) != 0) goto LAB_002b28b4;
LAB_002b27f0:
    if (uVar9 >> 1 != 0) goto LAB_002b27f8;
LAB_002b28bc:
    pbVar7 = *(byte **)(param_1 + 0x20);
    uVar9 = (ulong)*pbVar7;
    if ((*pbVar7 & 1) != 0) goto LAB_002b293c;
LAB_002b28c8:
    uVar10 = uVar9 >> 1;
  }
  if (uVar10 == 0) goto joined_r0x002b2af4;
  if ((uVar9 & 1) == 0) {
    pbVar7 = pbVar7 + 1;
    uVar9 = uVar9 >> 1;
  }
  else {
    uVar9 = *(ulong *)(pbVar7 + 8);
    pbVar7 = *(byte **)(pbVar7 + 0x10);
  }
  FUN_0033b628(pbVar7,uVar9,1,"nn.npln.auth.v1.Token.refresh_token");
  pbVar7 = *(byte **)(param_1 + 0x20);
  if ((*pbVar7 & 1) == 0) {
    sVar11 = (size_t)(*pbVar7 >> 1);
LAB_002b297c:
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x1a;
      param_2[1] = (char)sVar11;
      pbVar8 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar8 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar8,sVar11);
      param_2 = param_2 + 2 + sVar11;
      goto joined_r0x002b2af4;
    }
  }
  else {
    sVar11 = *(size_t *)(pbVar7 + 8);
    if ((long)sVar11 < 0x80) goto LAB_002b297c;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,3,pbVar7,param_2);
joined_r0x002b2af4:
  if ((param_1 != PTR_DAT_04373190) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      lVar5 = *(long *)(param_1 + 0x28);
    }
    *param_2 = 0x22;
    uVar1 = *(uint *)(lVar5 + 0x1c);
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
    param_2 = (undefined1 *)FUN_0030c17c(lVar5,param_2,param_3);
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


