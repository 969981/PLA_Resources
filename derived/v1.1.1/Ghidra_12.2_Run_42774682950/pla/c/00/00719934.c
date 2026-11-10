/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00719934; name: FUN_00719934
 */


undefined1 * FUN_00719934(undefined *param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  size_t sVar15;
  
  pbVar9 = *(byte **)(param_1 + 0x40);
  bVar2 = *pbVar9;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_00719980;
LAB_00719968:
    if ((bVar2 & 1) == 0) {
      pbVar9 = pbVar9 + 1;
      uVar10 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar9 = *(byte **)(pbVar9 + 0x10);
    }
    FUN_0033b628(pbVar9,uVar10,1,"nn.npln.matchmaking.v1.MatchmakingTicket.name");
    pbVar9 = *(byte **)(param_1 + 0x40);
    if ((*pbVar9 & 1) == 0) {
      sVar15 = (size_t)(*pbVar9 >> 1);
LAB_00719a00:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar15) goto LAB_00719cfc;
      *param_2 = 10;
      param_2[1] = (char)sVar15;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar15);
      param_2 = param_2 + 2 + sVar15;
      pbVar9 = *(byte **)(param_1 + 0x48);
      bVar2 = *pbVar9;
    }
    else {
      sVar15 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar15 < 0x80) goto LAB_00719a00;
LAB_00719cfc:
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar9,param_2);
      pbVar9 = *(byte **)(param_1 + 0x48);
      bVar2 = *pbVar9;
    }
    uVar10 = (ulong)bVar2;
    if ((bVar2 & 1) != 0) goto LAB_00719a50;
LAB_0071998c:
    uVar12 = uVar10 >> 1;
  }
  else {
    if (*(long *)(pbVar9 + 8) != 0) goto LAB_00719968;
LAB_00719980:
    pbVar9 = *(byte **)(param_1 + 0x48);
    uVar10 = (ulong)*pbVar9;
    if ((*pbVar9 & 1) == 0) goto LAB_0071998c;
LAB_00719a50:
    uVar12 = *(ulong *)(pbVar9 + 8);
  }
  puVar5 = PTR_DAT_043765e0;
  if (uVar12 != 0) {
    if ((uVar10 & 1) == 0) {
      pbVar9 = pbVar9 + 1;
      uVar10 = uVar10 >> 1;
    }
    else {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar9 = *(byte **)(pbVar9 + 0x10);
    }
    FUN_0033b628(pbVar9,uVar10,1,"nn.npln.matchmaking.v1.MatchmakingTicket.matchmaking_config");
    pbVar9 = *(byte **)(param_1 + 0x48);
    if ((*pbVar9 & 1) == 0) {
      sVar15 = (size_t)(*pbVar9 >> 1);
LAB_00719a68:
      if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar15;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar15);
        param_2 = param_2 + 2 + sVar15;
        puVar5 = PTR_DAT_043765e0;
        goto joined_r0x00719d40;
      }
    }
    else {
      sVar15 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar15 < 0x80) goto LAB_00719a68;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar9,param_2);
    puVar5 = PTR_DAT_043765e0;
  }
joined_r0x00719d40:
  PTR_DAT_043765e0 = puVar5;
  if ((param_1 != puVar5) && (lVar6 = *(long *)(param_1 + 0x50), lVar6 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      lVar6 = *(long *)(param_1 + 0x50);
    }
    *param_2 = 0x1a;
    uVar8 = *(uint *)(lVar6 + 0x24);
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
          puVar7 = param_2;
          uVar4 = uVar8 >> 7;
          puVar7[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar7 + 1;
          uVar3 = uVar8 >> 0xe;
          uVar8 = uVar4;
        } while (uVar3 != 0);
        *puVar7 = (char)uVar4;
      }
    }
    param_2 = (undefined1 *)FUN_0071af80(lVar6,param_2,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar14 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_00719b90;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_00719b90:
      do {
        lVar6 = FUN_0071272c(param_1 + 0x10,iVar14);
        *param_2 = 0x22;
        uVar8 = *(uint *)(lVar6 + 0x30);
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
              puVar7 = param_2;
              uVar4 = uVar8 >> 7;
              puVar7[-1] = (byte)uVar8 | 0x80;
              param_2 = puVar7 + 1;
              uVar3 = uVar8 >> 0xe;
              uVar8 = uVar4;
            } while (uVar3 != 0);
            *puVar7 = (char)uVar4;
          }
        }
        param_2 = (undefined1 *)FUN_0071e368(lVar6,param_2,param_3);
        iVar14 = iVar14 + 1;
        if (iVar14 == iVar1) goto LAB_00719c08;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_00719c08:
  uVar8 = *(uint *)(param_1 + 0x68);
  if (uVar8 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x28;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x68);
      *param_2 = 0x28;
    }
    if (0x7f < uVar8) {
      param_2[1] = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 3;
        iVar1 = *(int *)(param_1 + 0x30);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar7 = param_2;
          uVar12 = uVar10 >> 7;
          puVar7[-1] = (byte)uVar10 | 0x80;
          param_2 = puVar7 + 1;
          uVar13 = uVar10 >> 0xe;
          uVar10 = uVar12;
        } while (uVar13 != 0);
        *puVar7 = (char)uVar12;
        iVar1 = *(int *)(param_1 + 0x30);
      }
      goto joined_r0x00719e20;
    }
    param_2[1] = (byte)uVar8;
    param_2 = param_2 + 2;
  }
  iVar1 = *(int *)(param_1 + 0x30);
joined_r0x00719e20:
  if (iVar1 != 0) {
    iVar14 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_00719c84;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_00719c84:
      do {
        lVar6 = FUN_00712814(param_1 + 0x28,iVar14);
        *param_2 = 0x32;
        uVar8 = *(uint *)(lVar6 + 0x28);
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
              puVar7 = param_2;
              uVar4 = uVar8 >> 7;
              puVar7[-1] = (byte)uVar8 | 0x80;
              param_2 = puVar7 + 1;
              uVar3 = uVar8 >> 0xe;
              uVar8 = uVar4;
            } while (uVar3 != 0);
            *puVar7 = (char)uVar4;
          }
        }
        param_2 = (undefined1 *)FUN_0071d27c(lVar6,param_2,param_3);
        iVar14 = iVar14 + 1;
        if (iVar14 == iVar1) goto LAB_00719d94;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_00719d94:
  if (param_1 != puVar5) {
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x58);
      }
      *param_2 = 0x3a;
      uVar8 = *(uint *)(lVar6 + 100);
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
            puVar7 = param_2;
            uVar4 = uVar8 >> 7;
            puVar7[-1] = (byte)uVar8 | 0x80;
            param_2 = puVar7 + 1;
            uVar3 = uVar8 >> 0xe;
            uVar8 = uVar4;
          } while (uVar3 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_0071c07c(lVar6,param_2,param_3);
    }
    lVar6 = *(long *)(param_1 + 0x60);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x60);
      }
      *param_2 = 0x42;
      uVar8 = *(uint *)(lVar6 + 0x34);
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
            puVar7 = param_2;
            uVar4 = uVar8 >> 7;
            puVar7[-1] = (byte)uVar8 | 0x80;
            param_2 = puVar7 + 1;
            uVar3 = uVar8 >> 0xe;
            uVar8 = uVar4;
          } while (uVar3 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_006e58c0(lVar6,param_2,param_3);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar12 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar12 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar15 = (size_t)(int)uVar12;
    if (*param_3 - (long)param_2 < (long)sVar15) {
      puVar7 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar12,param_2);
      return puVar7;
    }
    memcpy(param_2,__src,sVar15);
    param_2 = param_2 + sVar15;
  }
  return param_2;
}


