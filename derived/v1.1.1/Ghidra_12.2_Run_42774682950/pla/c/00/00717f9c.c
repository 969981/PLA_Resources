/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00717f9c; name: FUN_00717f9c
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00717f9c(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  size_t sVar13;
  
  pbVar8 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_00717fcc;
LAB_00717fe4:
    pbVar8 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar8;
joined_r0x00718320:
    uVar10 = (ulong)bVar2;
    if ((bVar2 & 1) != 0) goto LAB_007180b4;
LAB_00717ff0:
    uVar11 = uVar10 >> 1;
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_00717fe4;
LAB_00717fcc:
    if ((bVar2 & 1) == 0) {
      pbVar8 = pbVar8 + 1;
      uVar10 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar8 + 8);
      pbVar8 = *(byte **)(pbVar8 + 0x10);
    }
    FUN_0033b628(pbVar8,uVar10,1,"nn.npln.matchmaking.v1.UserSession.name");
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((*pbVar8 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00718064;
LAB_00718304:
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar8,param_2);
      pbVar8 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar8;
      goto joined_r0x00718320;
    }
    sVar13 = (size_t)(*pbVar8 >> 1);
LAB_00718064:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_00718304;
    *param_2 = 10;
    param_2[1] = (char)sVar13;
    pbVar9 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar9 = pbVar8 + 1;
    }
    memcpy(param_2 + 2,pbVar9,sVar13);
    param_2 = param_2 + 2 + sVar13;
    pbVar8 = *(byte **)(param_1 + 0x18);
    uVar10 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) == 0) goto LAB_00717ff0;
LAB_007180b4:
    uVar11 = *(ulong *)(pbVar8 + 8);
  }
  puVar5 = PTR_DAT_043766b8;
  if (uVar11 != 0) {
    if ((uVar10 & 1) == 0) {
      pbVar8 = pbVar8 + 1;
      uVar10 = uVar10 >> 1;
    }
    else {
      uVar10 = *(ulong *)(pbVar8 + 8);
      pbVar8 = *(byte **)(pbVar8 + 0x10);
    }
    FUN_0033b628(pbVar8,uVar10,1,"nn.npln.matchmaking.v1.UserSession.user");
    pbVar8 = *(byte **)(param_1 + 0x18);
    if ((*pbVar8 & 1) == 0) {
      sVar13 = (size_t)(*pbVar8 >> 1);
LAB_007180cc:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar13;
        pbVar9 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar9 = pbVar8 + 1;
        }
        memcpy(param_2 + 2,pbVar9,sVar13);
        param_2 = param_2 + 2 + sVar13;
        puVar5 = PTR_DAT_043766b8;
        goto joined_r0x00718348;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_007180cc;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar8,param_2);
    puVar5 = PTR_DAT_043766b8;
  }
joined_r0x00718348:
  PTR_DAT_043766b8 = puVar5;
  if (param_1 != puVar5) {
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x28);
      }
      *param_2 = 0x1a;
      uVar1 = *(uint *)(lVar6 + 0x28);
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
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_0071edd0(lVar6,param_2,param_3);
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x30);
      }
      *param_2 = 0x22;
      uVar1 = *(uint *)(lVar6 + 0x1c);
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
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_006025b8(lVar6,param_2,param_3);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 == 0) {
LAB_0071825c:
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
joined_r0x007183bc:
    uVar10 = (ulong)bVar2;
    if ((bVar2 & 1) == 0) goto LAB_00718268;
LAB_007183c0:
    uVar11 = *(ulong *)(pbVar8 + 8);
  }
  else {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x28;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x40);
      *param_2 = 0x28;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
      goto LAB_0071825c;
    }
    param_2[1] = (byte)uVar1 | 0x80;
    if (uVar1 >> 0xe == 0) {
      param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
      param_2 = param_2 + 3;
      pbVar8 = *(byte **)(param_1 + 0x20);
      bVar2 = *pbVar8;
      goto joined_r0x007183bc;
    }
    uVar10 = (ulong)(long)(int)uVar1 >> 7;
    param_2 = param_2 + 3;
    do {
      puVar7 = param_2;
      uVar11 = uVar10 >> 7;
      puVar7[-1] = (byte)uVar10 | 0x80;
      param_2 = puVar7 + 1;
      uVar12 = uVar10 >> 0xe;
      uVar10 = uVar11;
    } while (uVar12 != 0);
    *puVar7 = (char)uVar11;
    pbVar8 = *(byte **)(param_1 + 0x20);
    uVar10 = (ulong)*pbVar8;
    if ((*pbVar8 & 1) != 0) goto LAB_007183c0;
LAB_00718268:
    uVar11 = uVar10 >> 1;
  }
  if (uVar11 == 0) goto joined_r0x00718368;
  if ((uVar10 & 1) == 0) {
    pbVar8 = pbVar8 + 1;
    uVar10 = uVar10 >> 1;
  }
  else {
    uVar10 = *(ulong *)(pbVar8 + 8);
    pbVar8 = *(byte **)(pbVar8 + 0x10);
  }
  FUN_0033b628(pbVar8,uVar10,1,"nn.npln.matchmaking.v1.UserSession.team");
  pbVar8 = *(byte **)(param_1 + 0x20);
  if ((*pbVar8 & 1) == 0) {
    sVar13 = (size_t)(*pbVar8 >> 1);
LAB_007182b4:
    if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x32;
      param_2[1] = (char)sVar13;
      pbVar9 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar9 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar9,sVar13);
      param_2 = param_2 + 2 + sVar13;
      goto joined_r0x00718368;
    }
  }
  else {
    sVar13 = *(size_t *)(pbVar8 + 8);
    if ((long)sVar13 < 0x80) goto LAB_007182b4;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,6,pbVar8,param_2);
joined_r0x00718368:
  if ((param_1 != puVar5) && (lVar6 = *(long *)(param_1 + 0x38), lVar6 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      lVar6 = *(long *)(param_1 + 0x38);
    }
    *param_2 = 0x3a;
    uVar1 = *(uint *)(lVar6 + 0x28);
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
          puVar7 = param_2;
          uVar3 = uVar1 >> 7;
          puVar7[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_002e12d8(lVar6,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar11 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar11 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar13 = (size_t)(int)uVar11;
    if (*param_3 - (long)param_2 < (long)sVar13) {
      puVar7 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar11,param_2);
      return puVar7;
    }
    memcpy(param_2,__src,sVar13);
    param_2 = param_2 + sVar13;
  }
  return param_2;
}


