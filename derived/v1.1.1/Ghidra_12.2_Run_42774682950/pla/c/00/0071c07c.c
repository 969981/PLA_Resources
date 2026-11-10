/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071c07c; name: FUN_0071c07c
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_0071c07c(undefined *param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  undefined1 uVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  size_t sVar16;
  
  pbVar10 = *(byte **)(param_1 + 0x28);
  bVar2 = *pbVar10;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_0071c140;
LAB_0071c0ac:
    if ((bVar2 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
      uVar11 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar11 = *(ulong *)(pbVar10 + 8);
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar10,uVar11,1,"nn.npln.matchmaking.v1.GameSession.name");
    pbVar10 = *(byte **)(param_1 + 0x28);
    if ((*pbVar10 & 1) == 0) {
      sVar16 = (size_t)(*pbVar10 >> 1);
LAB_0071c0fc:
      if ((long)sVar16 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar16;
        pbVar12 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar12 = pbVar10 + 1;
        }
        memcpy(param_2 + 2,pbVar12,sVar16);
        param_2 = param_2 + 2 + sVar16;
        goto LAB_0071c140;
      }
    }
    else {
      sVar16 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar16 < 0x80) goto LAB_0071c0fc;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar10,param_2);
    uVar9 = *(uint *)(param_1 + 0x50);
    if (uVar9 != 0) goto LAB_0071c148;
LAB_0071c1dc:
    uVar9 = *(uint *)(param_1 + 0x54);
joined_r0x0071c23c:
    if (uVar9 == 0) goto LAB_0071c288;
LAB_0071c1e4:
    uVar11 = (ulong)uVar9;
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x18;
      if (0x7f < uVar9) goto LAB_0071c268;
LAB_0071c200:
      param_2[1] = (char)uVar11;
      param_2 = param_2 + 2;
      cVar3 = param_1[0x58];
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar9 = *(uint *)(param_1 + 0x54);
      uVar11 = (ulong)uVar9;
      *param_2 = 0x18;
      if (uVar9 < 0x80) goto LAB_0071c200;
LAB_0071c268:
      param_2[1] = (byte)uVar11 | 0x80;
      uVar13 = (ulong)(long)(int)uVar11 >> 7;
      if (uVar11 >> 0xe == 0) {
        param_2[2] = (char)uVar13;
        param_2 = param_2 + 3;
        goto LAB_0071c288;
      }
      param_2 = param_2 + 3;
      do {
        puVar7 = param_2;
        uVar11 = uVar13 >> 7;
        puVar7[-1] = (byte)uVar13 | 0x80;
        param_2 = puVar7 + 1;
        uVar14 = uVar13 >> 0xe;
        uVar13 = uVar11;
      } while (uVar14 != 0);
      *puVar7 = (char)uVar11;
      cVar3 = param_1[0x58];
    }
  }
  else {
    if (*(long *)(pbVar10 + 8) != 0) goto LAB_0071c0ac;
LAB_0071c140:
    uVar9 = *(uint *)(param_1 + 0x50);
    if (uVar9 == 0) goto LAB_0071c1dc;
LAB_0071c148:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar9 = *(uint *)(param_1 + 0x50);
      *param_2 = 0x10;
      if (uVar9 < 0x80) goto LAB_0071c164;
LAB_0071c1bc:
      param_2[1] = (byte)uVar9 | 0x80;
      if (uVar9 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar9 >> 7);
        param_2 = param_2 + 3;
        goto LAB_0071c1dc;
      }
      uVar11 = (ulong)(long)(int)uVar9 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar7 = param_2;
        uVar13 = uVar11 >> 7;
        puVar7[-1] = (byte)uVar11 | 0x80;
        param_2 = puVar7 + 1;
        uVar14 = uVar11 >> 0xe;
        uVar11 = uVar13;
      } while (uVar14 != 0);
      *puVar7 = (char)uVar13;
      uVar9 = *(uint *)(param_1 + 0x54);
      goto joined_r0x0071c23c;
    }
    *param_2 = 0x10;
    if (0x7f < uVar9) goto LAB_0071c1bc;
LAB_0071c164:
    param_2[1] = (char)uVar9;
    param_2 = param_2 + 2;
    uVar9 = *(uint *)(param_1 + 0x54);
    if (uVar9 != 0) goto LAB_0071c1e4;
LAB_0071c288:
    cVar3 = param_1[0x58];
  }
  if (cVar3 != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar8 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar8 = param_1[0x58];
    }
    *param_2 = 0x20;
    param_2[1] = uVar8;
    param_2 = param_2 + 2;
  }
  if (param_1[0x59] != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar8 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar8 = param_1[0x59];
    }
    *param_2 = 0x28;
    param_2[1] = uVar8;
    param_2 = param_2 + 2;
  }
  pbVar10 = *(byte **)(param_1 + 0x30);
  bVar2 = *pbVar10;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_0071c380;
LAB_0071c2ec:
    if ((bVar2 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
      uVar11 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar11 = *(ulong *)(pbVar10 + 8);
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar10,uVar11,1,"nn.npln.matchmaking.v1.GameSession.password");
    pbVar10 = *(byte **)(param_1 + 0x30);
    if ((*pbVar10 & 1) == 0) {
      sVar16 = (size_t)(*pbVar10 >> 1);
LAB_0071c33c:
      if ((long)sVar16 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x32;
        param_2[1] = (char)sVar16;
        pbVar12 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar12 = pbVar10 + 1;
        }
        memcpy(param_2 + 2,pbVar12,sVar16);
        param_2 = param_2 + 2 + sVar16;
        goto LAB_0071c380;
      }
    }
    else {
      sVar16 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar16 < 0x80) goto LAB_0071c33c;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,6,pbVar10,param_2);
    uVar9 = *(uint *)(param_1 + 0x5c);
    if (uVar9 != 0) goto LAB_0071c388;
LAB_0071c480:
    pbVar10 = *(byte **)(param_1 + 0x38);
    bVar2 = *pbVar10;
joined_r0x0071c554:
    uVar11 = (ulong)bVar2;
    if ((bVar2 & 1) == 0) goto LAB_0071c48c;
LAB_0071c558:
    uVar13 = *(ulong *)(pbVar10 + 8);
  }
  else {
    if (*(long *)(pbVar10 + 8) != 0) goto LAB_0071c2ec;
LAB_0071c380:
    uVar9 = *(uint *)(param_1 + 0x5c);
    if (uVar9 == 0) goto LAB_0071c480;
LAB_0071c388:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar9 = *(uint *)(param_1 + 0x5c);
      *param_2 = 0x38;
      if (uVar9 < 0x80) goto LAB_0071c3a4;
LAB_0071c460:
      param_2[1] = (byte)uVar9 | 0x80;
      if (uVar9 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar9 >> 7);
        param_2 = param_2 + 3;
        goto LAB_0071c480;
      }
      uVar11 = (ulong)(long)(int)uVar9 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar7 = param_2;
        uVar13 = uVar11 >> 7;
        puVar7[-1] = (byte)uVar11 | 0x80;
        param_2 = puVar7 + 1;
        uVar14 = uVar11 >> 0xe;
        uVar11 = uVar13;
      } while (uVar14 != 0);
      *puVar7 = (char)uVar13;
      pbVar10 = *(byte **)(param_1 + 0x38);
      bVar2 = *pbVar10;
      goto joined_r0x0071c554;
    }
    *param_2 = 0x38;
    if (0x7f < uVar9) goto LAB_0071c460;
LAB_0071c3a4:
    param_2[1] = (char)uVar9;
    param_2 = param_2 + 2;
    pbVar10 = *(byte **)(param_1 + 0x38);
    uVar11 = (ulong)*pbVar10;
    if ((*pbVar10 & 1) != 0) goto LAB_0071c558;
LAB_0071c48c:
    uVar13 = uVar11 >> 1;
  }
  if (uVar13 == 0) {
    uVar9 = *(uint *)(param_1 + 0x60);
    goto joined_r0x0071c520;
  }
  if ((uVar11 & 1) == 0) {
    pbVar10 = (byte *)((long)pbVar10 + 1);
    uVar11 = uVar11 >> 1;
  }
  else {
    uVar11 = *(ulong *)((long)pbVar10 + 8);
    pbVar10 = *(byte **)((long)pbVar10 + 0x10);
  }
  FUN_0033b628(pbVar10,uVar11,1,"nn.npln.matchmaking.v1.GameSession.host");
  pbVar10 = *(byte **)(param_1 + 0x38);
  if ((*pbVar10 & 1) == 0) {
    sVar16 = (size_t)(*pbVar10 >> 1);
LAB_0071c4d8:
    if ((long)sVar16 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x42;
      *(char *)((long)param_2 + 1) = (char)sVar16;
      pbVar12 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        pbVar12 = pbVar10 + 1;
      }
      memcpy((undefined1 *)((long)param_2 + 2),pbVar12,sVar16);
      param_2 = (undefined1 *)((long)param_2 + 2) + sVar16;
      uVar9 = *(uint *)(param_1 + 0x60);
      goto joined_r0x0071c520;
    }
  }
  else {
    sVar16 = *(size_t *)(pbVar10 + 8);
    if ((long)sVar16 < 0x80) goto LAB_0071c4d8;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,8,pbVar10,param_2);
  uVar9 = *(uint *)(param_1 + 0x60);
joined_r0x0071c520:
  if (uVar9 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x48;
    }
    else {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
      uVar9 = *(uint *)(param_1 + 0x60);
      *param_2 = 0x48;
    }
    if (uVar9 < 0x80) {
      param_2[1] = (byte)uVar9;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar9 | 0x80;
      if (uVar9 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar9 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        uVar11 = (ulong)(long)(int)uVar9 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar7 = param_2;
          uVar13 = uVar11 >> 7;
          puVar7[-1] = (byte)uVar11 | 0x80;
          param_2 = puVar7 + 1;
          uVar14 = uVar11 >> 0xe;
          uVar11 = uVar13;
        } while (uVar14 != 0);
        *puVar7 = (char)uVar13;
      }
    }
  }
  if (param_1 != PTR_DAT_04376270) {
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x40);
      }
      *param_2 = 0x52;
      uVar9 = *(uint *)(lVar6 + 0x1c);
      if (uVar9 < 0x80) {
        param_2[1] = (byte)uVar9;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar9 | 0x80;
        if (uVar9 >> 0xe == 0) {
          param_2[2] = (char)(uVar9 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar9 = uVar9 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar9 >> 7;
            puVar7[-1] = (byte)uVar9 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar9 >> 0xe;
            uVar9 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_006025b8(lVar6,param_2,param_3);
    }
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x48);
      }
      *param_2 = 0x5a;
      uVar9 = *(uint *)(lVar6 + 0x28);
      if (uVar9 < 0x80) {
        param_2[1] = (byte)uVar9;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar9 | 0x80;
        if (uVar9 >> 0xe == 0) {
          param_2[2] = (char)(uVar9 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar9 = uVar9 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar9 >> 7;
            puVar7[-1] = (byte)uVar9 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar9 >> 0xe;
            uVar9 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_002e12d8(lVar6,param_2,param_3);
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
LAB_0071c824:
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      uVar11 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
      if ((*(byte *)(uVar11 + 8) & 1) == 0) {
        __src = (void *)(uVar11 + 9);
        uVar13 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
      }
      else {
        uVar13 = *(ulong *)(uVar11 + 0x10);
        __src = *(void **)(uVar11 + 0x18);
      }
      sVar16 = (size_t)(int)uVar13;
      if (*param_3 - (long)param_2 < (long)sVar16) {
        puVar7 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar13,param_2);
        return puVar7;
      }
      memcpy(param_2,__src,sVar16);
      param_2 = param_2 + sVar16;
    }
    return param_2;
  }
  iVar15 = 0;
  if (param_2 < (undefined1 *)*param_3) goto LAB_0071c7ac;
  do {
    param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_0071c7ac:
    do {
      lVar6 = FUN_007128fc(param_1 + 0x10,iVar15);
      *param_2 = 0x62;
      uVar9 = *(uint *)(lVar6 + 0x44);
      if (uVar9 < 0x80) {
        param_2[1] = (byte)uVar9;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar9 | 0x80;
        if (uVar9 >> 0xe == 0) {
          param_2[2] = (char)(uVar9 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar9 = uVar9 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar9 >> 7;
            puVar7[-1] = (byte)uVar9 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar9 >> 0xe;
            uVar9 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_00717f9c(lVar6,param_2,param_3);
      iVar15 = iVar15 + 1;
      if (iVar15 == iVar1) goto LAB_0071c824;
    } while (param_2 < (undefined1 *)*param_3);
  } while( true );
}


