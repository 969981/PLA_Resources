/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a3764; name: FUN_007a3764
 */


undefined1 * FUN_007a3764(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  size_t sVar7;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_007a3790;
LAB_007a37a8:
    pbVar3 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar3;
joined_r0x007a390c:
    uVar5 = (ulong)bVar1;
    if ((bVar1 & 1) != 0) goto LAB_007a3878;
LAB_007a37b4:
    uVar6 = uVar5 >> 1;
  }
  else {
    if (*(long *)(pbVar3 + 8) == 0) goto LAB_007a37a8;
LAB_007a3790:
    if ((bVar1 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar3 + 8);
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    FUN_0033b628(pbVar3,uVar5,1,"nn.npln.hydro.v1.DeleteContentRequest.name");
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((*pbVar3 & 1) != 0) {
      sVar7 = *(size_t *)(pbVar3 + 8);
      if ((long)sVar7 < 0x80) goto LAB_007a3828;
LAB_007a38f0:
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar3,param_2);
      pbVar3 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar3;
      goto joined_r0x007a390c;
    }
    sVar7 = (size_t)(*pbVar3 >> 1);
LAB_007a3828:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar7) goto LAB_007a38f0;
    *param_2 = 10;
    param_2[1] = (char)sVar7;
    pbVar4 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar4 = pbVar3 + 1;
    }
    memcpy(param_2 + 2,pbVar4,sVar7);
    param_2 = param_2 + 2 + sVar7;
    pbVar3 = *(byte **)(param_1 + 0x18);
    uVar5 = (ulong)*pbVar3;
    if ((*pbVar3 & 1) == 0) goto LAB_007a37b4;
LAB_007a3878:
    uVar6 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar6 == 0) {
LAB_007a38d4:
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar5 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
      uVar5 = uVar5 >> 1;
    }
    else {
      uVar5 = *(ulong *)(pbVar3 + 8);
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    FUN_0033b628(pbVar3,uVar5,1,"nn.npln.hydro.v1.DeleteContentRequest.etag");
    pbVar3 = *(byte **)(param_1 + 0x18);
    if ((*pbVar3 & 1) == 0) {
      sVar7 = (size_t)(*pbVar3 >> 1);
LAB_007a3890:
      if ((long)sVar7 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar7;
        pbVar4 = *(byte **)(pbVar3 + 0x10);
        if ((*pbVar3 & 1) == 0) {
          pbVar4 = pbVar3 + 1;
        }
        memcpy(param_2 + 2,pbVar4,sVar7);
        param_2 = param_2 + 2 + sVar7;
        goto LAB_007a38d4;
      }
    }
    else {
      sVar7 = *(size_t *)(pbVar3 + 8);
      if ((long)sVar7 < 0x80) goto LAB_007a3890;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar3,param_2);
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar5 + 8) & 1) == 0) {
      __src = (void *)(uVar5 + 9);
      uVar6 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar5 + 0x10);
      __src = *(void **)(uVar5 + 0x18);
    }
    sVar7 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar7) {
      puVar2 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar6,param_2);
      return puVar2;
    }
    memcpy(param_2,__src,sVar7);
    param_2 = param_2 + sVar7;
  }
  return param_2;
}


