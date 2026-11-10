/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a9960; name: FUN_007a9960
 */


undefined1 * FUN_007a9960(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  size_t sVar13;
  
  pbVar9 = *(byte **)(param_1 + 0x28);
  bVar2 = *pbVar9;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_007a9a24;
LAB_007a9990:
    if ((bVar2 & 1) == 0) {
      pbVar9 = pbVar9 + 1;
      uVar10 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar9 = *(byte **)(pbVar9 + 0x10);
    }
    FUN_0033b628(pbVar9,uVar10,1,"nn.npln.hydro.v1.TransformContentRequest.name");
    pbVar9 = *(byte **)(param_1 + 0x28);
    if ((*pbVar9 & 1) == 0) {
      sVar13 = (size_t)(*pbVar9 >> 1);
LAB_007a99e0:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar13);
        param_2 = param_2 + 2 + sVar13;
        goto LAB_007a9a24;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_007a99e0;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar9,param_2);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    if (*(long *)(pbVar9 + 8) != 0) goto LAB_007a9990;
LAB_007a9a24:
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    iVar12 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_007a9a74;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_007a9a74:
      do {
        lVar5 = FUN_007b1be0(param_1 + 0x10,iVar12);
        *param_2 = 0x12;
        uVar8 = *(uint *)(lVar5 + 0x20);
        if (uVar8 < 0x80) {
          param_2[1] = (byte)uVar8;
          param_2 = param_2 + 2;
        }
        else {
          param_2[1] = (byte)uVar8 | 0x80;
          if (uVar8 >> 0xe == 0) {
            param_2[2] = (char)(uVar8 >> 7);
            param_2 = param_2 + 3;
          }
          else {
            param_2 = param_2 + 3;
            uVar8 = uVar8 >> 7;
            do {
              puVar6 = param_2;
              uVar3 = uVar8 >> 7;
              puVar6[-1] = (byte)uVar8 | 0x80;
              param_2 = puVar6 + 1;
              uVar4 = uVar8 >> 0xe;
              uVar8 = uVar3;
            } while (uVar4 != 0);
            *puVar6 = (char)uVar3;
          }
        }
        param_2 = (undefined1 *)FUN_007aea88(lVar5,param_2,param_3);
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar1) goto LAB_007a9b08;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_007a9b08:
  pbVar9 = *(byte **)(param_1 + 0x30);
  bVar2 = *pbVar9;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_007a9b1c:
      if ((bVar2 & 1) == 0) {
        pbVar9 = pbVar9 + 1;
        uVar10 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar10 = *(ulong *)(pbVar9 + 8);
        pbVar9 = *(byte **)(pbVar9 + 0x10);
      }
      FUN_0033b628(pbVar9,uVar10,1,"nn.npln.hydro.v1.TransformContentRequest.etag");
      pbVar9 = *(byte **)(param_1 + 0x30);
      if ((*pbVar9 & 1) == 0) {
        sVar13 = (size_t)(*pbVar9 >> 1);
LAB_007a9b6c:
        if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x1a;
          param_2[1] = (char)sVar13;
          pbVar11 = *(byte **)(pbVar9 + 0x10);
          if ((*pbVar9 & 1) == 0) {
            pbVar11 = pbVar9 + 1;
          }
          memcpy(param_2 + 2,pbVar11,sVar13);
          param_2 = param_2 + 2 + sVar13;
          goto LAB_007a9bb0;
        }
      }
      else {
        sVar13 = *(size_t *)(pbVar9 + 8);
        if ((long)sVar13 < 0x80) goto LAB_007a9b6c;
      }
      param_2 = (undefined1 *)FUN_003112b4(param_3,3,pbVar9,param_2);
      uVar10 = *(ulong *)(param_1 + 8);
      goto joined_r0x007a9bb4;
    }
  }
  else if (*(long *)(pbVar9 + 8) != 0) goto LAB_007a9b1c;
LAB_007a9bb0:
  uVar10 = *(ulong *)(param_1 + 8);
joined_r0x007a9bb4:
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar7 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar13 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar13) {
      puVar6 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar7,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,sVar13);
    param_2 = param_2 + sVar13;
  }
  return param_2;
}


