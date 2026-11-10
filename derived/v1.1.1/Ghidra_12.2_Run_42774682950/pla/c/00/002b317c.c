/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b317c; name: FUN_002b317c
 */


undefined1 * FUN_002b317c(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  size_t sVar8;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar7 = pbVar6 + 1;
      uVar5 = (ulong)(*pbVar6 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar6 + 8);
      pbVar7 = *(byte **)(pbVar6 + 0x10);
    }
    FUN_0033b628(pbVar7,uVar5,1,"nn.npln.auth.v1.ExternalIdToken.nsa_id_token");
    if (*(int *)(param_1 + 0x1c) == 1) {
      pbVar6 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar6;
      if ((bVar2 & 1) != 0) goto LAB_002b31f8;
LAB_002b3218:
      sVar8 = (size_t)(bVar2 >> 1);
LAB_002b321c:
      if ((long)sVar8 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar8;
        pbVar7 = *(byte **)(pbVar6 + 0x10);
        if ((*pbVar6 & 1) == 0) {
          pbVar7 = pbVar6 + 1;
        }
        memcpy(param_2 + 2,pbVar7,sVar8);
        param_2 = param_2 + 2 + sVar8;
        iVar1 = *(int *)(param_1 + 0x1c);
        goto joined_r0x002b3350;
      }
    }
    else {
      bVar2 = *PTR_DAT_043730c0;
      pbVar6 = PTR_DAT_043730c0;
      if ((bVar2 & 1) == 0) goto LAB_002b3218;
LAB_002b31f8:
      sVar8 = *(size_t *)(pbVar6 + 8);
      if ((long)sVar8 < 0x80) goto LAB_002b321c;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar6,param_2);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
joined_r0x002b3350:
  if (iVar1 != 2) {
    uVar5 = *(ulong *)(param_1 + 8);
    goto joined_r0x002b331c;
  }
  pbVar6 = *(byte **)(param_1 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar7 = pbVar6 + 1;
    uVar5 = (ulong)(*pbVar6 >> 1);
  }
  else {
    uVar5 = *(ulong *)(pbVar6 + 8);
    pbVar7 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_0033b628(pbVar7,uVar5,1,"nn.npln.auth.v1.ExternalIdToken.dummy_ext_id_token");
  if (*(int *)(param_1 + 0x1c) == 2) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar6;
    if ((bVar2 & 1) != 0) goto LAB_002b32b0;
LAB_002b32d0:
    sVar8 = (size_t)(bVar2 >> 1);
LAB_002b32d4:
    if ((long)sVar8 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x12;
      param_2[1] = (char)sVar8;
      pbVar7 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar7 = pbVar6 + 1;
      }
      memcpy(param_2 + 2,pbVar7,sVar8);
      param_2 = param_2 + 2 + sVar8;
      uVar5 = *(ulong *)(param_1 + 8);
      goto joined_r0x002b331c;
    }
  }
  else {
    bVar2 = *PTR_DAT_043730c0;
    pbVar6 = PTR_DAT_043730c0;
    if ((bVar2 & 1) == 0) goto LAB_002b32d0;
LAB_002b32b0:
    sVar8 = *(size_t *)(pbVar6 + 8);
    if ((long)sVar8 < 0x80) goto LAB_002b32d4;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar6,param_2);
  uVar5 = *(ulong *)(param_1 + 8);
joined_r0x002b331c:
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar5 + 8) & 1) == 0) {
      __src = (void *)(uVar5 + 9);
      uVar4 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar5 + 0x10);
      __src = *(void **)(uVar5 + 0x18);
    }
    sVar8 = (size_t)(int)uVar4;
    if (*param_3 - (long)param_2 < (long)sVar8) {
      puVar3 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar4,param_2);
      return puVar3;
    }
    memcpy(param_2,__src,sVar8);
    param_2 = param_2 + sVar8;
  }
  return param_2;
}


