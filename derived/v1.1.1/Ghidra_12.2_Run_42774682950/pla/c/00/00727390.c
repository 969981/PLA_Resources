/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00727390; name: FUN_00727390
 */


void FUN_00727390(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  undefined8 *local_68;
  
  local_68 = param_2;
LAB_007273bc:
  puVar13 = local_68 + -1;
  puVar17 = param_1;
LAB_007273d4:
  param_1 = puVar17;
  lVar14 = (long)local_68 - (long)param_1;
  uVar9 = lVar14 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_00727b8c_caseD_0;
  case 2:
    pbVar20 = (byte *)*param_1;
    pbVar18 = (byte *)local_68[-1];
    bVar4 = *pbVar20;
    uVar9 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar9 = *(ulong *)(pbVar20 + 8);
    }
    bVar5 = *pbVar18;
    uVar8 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar8 = *(ulong *)(pbVar18 + 8);
    }
    sVar3 = uVar9;
    if (uVar8 <= uVar9) {
      sVar3 = uVar8;
    }
    if (sVar3 != 0) {
      pbVar10 = *(byte **)(pbVar18 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar10 = pbVar18 + 1;
      }
      pbVar11 = *(byte **)(pbVar20 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar11 = pbVar20 + 1;
      }
      iVar6 = memcmp(pbVar10,pbVar11,sVar3);
      if (iVar6 != 0) {
        if (-1 < iVar6) {
          return;
        }
        goto LAB_00727cdc;
      }
    }
    if (uVar9 <= uVar8) {
      return;
    }
LAB_00727cdc:
    *param_1 = pbVar18;
    local_68[-1] = pbVar20;
    return;
  case 3:
    FUN_00727cf0(param_1,param_1 + 1,puVar13,param_3);
    return;
  case 4:
    FUN_00727f20(param_1,param_1 + 1,param_1 + 2,puVar13,param_3);
    return;
  case 5:
    FUN_007280e0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar13,param_3);
    return;
  }
  if (lVar14 < 0xf8) {
    FUN_00728320(param_1,local_68,param_3);
    return;
  }
  uVar8 = uVar9;
  if ((long)uVar9 < 0) {
    uVar8 = uVar9 + 1;
  }
  puVar17 = (undefined8 *)((long)param_1 + (uVar8 & 0x3ffffffffffffffe) * 4);
  if (lVar14 < 0x1f39) {
    iVar6 = FUN_00727cf0(param_1,puVar17,puVar13,param_3);
  }
  else {
    uVar8 = uVar9 + 3;
    if (-1 < (long)uVar9) {
      uVar8 = uVar9;
    }
    lVar14 = (uVar8 & 0x7ffffffffffffffc) * 2;
    iVar6 = FUN_007280e0(param_1,(long)param_1 + lVar14,puVar17,(long)puVar17 + lVar14,puVar13,
                         param_3);
  }
  pbVar18 = (byte *)*puVar17;
  pbVar20 = (byte *)*param_1;
  bVar4 = *pbVar18;
  bVar5 = *pbVar20;
  uVar9 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar9 = *(ulong *)(pbVar18 + 8);
  }
  uVar8 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar8 = *(ulong *)(pbVar20 + 8);
  }
  sVar3 = uVar9;
  if (uVar8 <= uVar9) {
    sVar3 = uVar8;
  }
  if (sVar3 == 0) {
LAB_0072759c:
    if (uVar9 <= uVar8) goto LAB_007274b8;
LAB_007275a4:
    puVar15 = param_1 + 1;
    puVar16 = puVar13;
    if (puVar15 < puVar13) goto LAB_007275f4;
  }
  else {
    pbVar10 = *(byte **)(pbVar20 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar10 = pbVar20 + 1;
    }
    pbVar11 = *(byte **)(pbVar18 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar11 = pbVar18 + 1;
    }
    iVar7 = memcmp(pbVar10,pbVar11,sVar3);
    if (iVar7 == 0) goto LAB_0072759c;
    if (iVar7 < 0) goto LAB_007275a4;
LAB_007274b8:
    puVar15 = local_68 + -2;
    if ((bVar4 & 1) == 0) {
      do {
        puVar16 = puVar15;
        if (param_1 == puVar16) goto LAB_00727864;
        pbVar10 = (byte *)*puVar16;
        bVar4 = *pbVar10;
        uVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar10 + 8);
        }
        sVar3 = uVar9;
        if (uVar1 <= uVar9) {
          sVar3 = uVar1;
        }
        if (sVar3 == 0) {
LAB_00727538:
          iVar7 = 0;
          if (uVar1 < uVar9) break;
        }
        else {
          pbVar11 = *(byte **)(pbVar10 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar11 = pbVar10 + 1;
          }
          iVar7 = memcmp(pbVar11,pbVar18 + 1,sVar3);
          if (iVar7 == 0) goto LAB_00727538;
        }
        puVar15 = puVar16 + -1;
      } while (-1 < iVar7);
    }
    else {
      do {
        puVar16 = puVar15;
        if (param_1 == puVar16) goto LAB_00727864;
        pbVar10 = (byte *)*puVar16;
        bVar4 = *pbVar10;
        uVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar10 + 8);
        }
        sVar3 = uVar9;
        if (uVar1 <= uVar9) {
          sVar3 = uVar1;
        }
        if (sVar3 == 0) {
LAB_007274d4:
          iVar7 = 0;
          if (uVar1 < uVar9) break;
        }
        else {
          pbVar11 = *(byte **)(pbVar10 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar11 = pbVar10 + 1;
          }
          iVar7 = memcmp(pbVar11,*(void **)(pbVar18 + 0x10),sVar3);
          if (iVar7 == 0) goto LAB_007274d4;
        }
        puVar15 = puVar16 + -1;
      } while (-1 < iVar7);
    }
    iVar6 = iVar6 + 1;
    *param_1 = *puVar16;
    *puVar16 = pbVar20;
    puVar15 = param_1 + 1;
    if (puVar15 < puVar16) {
LAB_007275f4:
      pbVar18 = (byte *)*puVar17;
      bVar4 = *pbVar18;
      uVar9 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar9 = *(ulong *)(pbVar18 + 8);
      }
      if ((bVar4 & 1) != 0) {
        do {
          pbVar20 = (byte *)*puVar15;
          bVar5 = *pbVar20;
          uVar8 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            uVar8 = *(ulong *)(pbVar20 + 8);
          }
          sVar3 = uVar9;
          if (uVar8 <= uVar9) {
            sVar3 = uVar8;
          }
          puVar19 = puVar15;
          if (sVar3 == 0) {
LAB_00727668:
            if (uVar9 <= uVar8) goto LAB_007276b4;
          }
          else {
            pbVar10 = *(byte **)(pbVar20 + 0x10);
            if ((bVar5 & 1) == 0) {
              pbVar10 = pbVar20 + 1;
            }
            iVar7 = memcmp(pbVar10,*(void **)(pbVar18 + 0x10),sVar3);
            if (iVar7 == 0) goto LAB_00727668;
            if (-1 < iVar7) goto LAB_007276b4;
          }
          puVar15 = puVar15 + 1;
        } while( true );
      }
      do {
        pbVar20 = (byte *)*puVar15;
        bVar5 = *pbVar20;
        uVar8 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          uVar8 = *(ulong *)(pbVar20 + 8);
        }
        sVar3 = uVar9;
        if (uVar8 <= uVar9) {
          sVar3 = uVar8;
        }
        puVar19 = puVar15;
        if (sVar3 == 0) {
LAB_00727618:
          if (uVar9 <= uVar8) goto LAB_007276b4;
        }
        else {
          pbVar10 = *(byte **)(pbVar20 + 0x10);
          if ((bVar5 & 1) == 0) {
            pbVar10 = pbVar20 + 1;
          }
          iVar7 = memcmp(pbVar10,pbVar18 + 1,sVar3);
          if (iVar7 == 0) goto LAB_00727618;
          if (-1 < iVar7) goto LAB_007276b4;
        }
        puVar15 = puVar15 + 1;
      } while( true );
    }
  }
LAB_00727780:
  if (puVar15 != puVar17) {
    pbVar18 = (byte *)*puVar15;
    bVar4 = *pbVar18;
    pbVar20 = (byte *)*puVar17;
    uVar9 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar9 = *(ulong *)(pbVar18 + 8);
    }
    bVar5 = *pbVar20;
    uVar8 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar8 = *(ulong *)(pbVar20 + 8);
    }
    sVar3 = uVar9;
    if (uVar8 <= uVar9) {
      sVar3 = uVar8;
    }
    if (sVar3 == 0) {
LAB_007277ec:
      if (uVar9 <= uVar8) goto LAB_00727800;
    }
    else {
      pbVar10 = *(byte **)(pbVar20 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar10 = pbVar20 + 1;
      }
      pbVar11 = *(byte **)(pbVar18 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar11 = pbVar18 + 1;
      }
      iVar7 = memcmp(pbVar10,pbVar11,sVar3);
      if (iVar7 == 0) goto LAB_007277ec;
      if (-1 < iVar7) goto LAB_00727800;
    }
    iVar6 = iVar6 + 1;
    *puVar15 = pbVar20;
    *puVar17 = pbVar18;
  }
LAB_00727800:
  if (iVar6 == 0) {
    uVar9 = FUN_007284b0(param_1,puVar15,param_3);
    uVar8 = FUN_007284b0(puVar15 + 1,local_68,param_3);
    if ((uVar8 & 1) != 0) goto LAB_00727b6c;
    puVar17 = puVar15 + 1;
    if ((uVar9 & 1) != 0) goto LAB_007273d4;
  }
  if ((long)local_68 - (long)puVar15 <= (long)puVar15 - (long)param_1) {
    FUN_00727390(puVar15 + 1,local_68,param_3);
    local_68 = puVar15;
    goto LAB_007273bc;
  }
  FUN_00727390(param_1,puVar15,param_3);
  puVar17 = puVar15 + 1;
  goto LAB_007273d4;
LAB_00727864:
  puVar15 = param_1 + 1;
  pbVar18 = (byte *)*puVar13;
  bVar4 = *pbVar18;
  uVar9 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar9 = *(ulong *)(pbVar18 + 8);
  }
  sVar3 = uVar9;
  if (uVar8 <= uVar9) {
    sVar3 = uVar8;
  }
  if (sVar3 != 0) {
    pbVar10 = *(byte **)(pbVar20 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar10 = pbVar20 + 1;
    }
    pbVar11 = *(byte **)(pbVar18 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar11 = pbVar18 + 1;
    }
    iVar6 = memcmp(pbVar10,pbVar11,sVar3);
    if (iVar6 != 0) {
      if (iVar6 < 0) goto LAB_007279ac;
      goto LAB_007278c0;
    }
  }
  if (uVar9 <= uVar8) {
LAB_007278c0:
    if (puVar15 == puVar13) {
      return;
    }
    if ((bVar5 & 1) != 0) {
      puVar15 = param_1 + 2;
      do {
        pbVar10 = (byte *)puVar15[-1];
        bVar4 = *pbVar10;
        uVar9 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar9 = *(ulong *)(pbVar10 + 8);
        }
        sVar3 = uVar9;
        if (uVar8 <= uVar9) {
          sVar3 = uVar8;
        }
        if (sVar3 == 0) {
LAB_00727940:
          if (uVar8 < uVar9) goto LAB_00727998;
        }
        else {
          pbVar11 = *(byte **)(pbVar10 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar11 = pbVar10 + 1;
          }
          iVar6 = memcmp(*(void **)(pbVar20 + 0x10),pbVar11,sVar3);
          if (iVar6 == 0) goto LAB_00727940;
          if (iVar6 < 0) goto LAB_00727998;
        }
        puVar15 = puVar15 + 1;
        if (local_68 == puVar15) {
          return;
        }
      } while( true );
    }
    puVar15 = param_1 + 2;
    do {
      pbVar10 = (byte *)puVar15[-1];
      bVar4 = *pbVar10;
      uVar9 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar9 = *(ulong *)(pbVar10 + 8);
      }
      sVar3 = uVar9;
      if (uVar8 <= uVar9) {
        sVar3 = uVar8;
      }
      if (sVar3 == 0) {
LAB_007278dc:
        if (uVar8 < uVar9) goto LAB_00727998;
      }
      else {
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        iVar6 = memcmp(pbVar20 + 1,pbVar11,sVar3);
        if (iVar6 == 0) goto LAB_007278dc;
        if (iVar6 < 0) goto LAB_00727998;
      }
      puVar15 = puVar15 + 1;
      if (local_68 == puVar15) {
        return;
      }
    } while( true );
  }
LAB_007279ac:
  if (puVar15 == puVar13) {
    return;
  }
  puVar16 = puVar13;
LAB_007279bc:
  pbVar18 = (byte *)*param_1;
  bVar4 = *pbVar18;
  uVar9 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar9 = *(ulong *)(pbVar18 + 8);
  }
  if ((bVar4 & 1) != 0) {
    do {
      pbVar20 = (byte *)*puVar15;
      bVar5 = *pbVar20;
      uVar8 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar8;
      if (uVar9 <= uVar8) {
        sVar3 = uVar9;
      }
      puVar17 = puVar15;
      if (sVar3 == 0) {
LAB_00727a30:
        if (uVar9 < uVar8) goto LAB_00727a7c;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar6 = memcmp(*(void **)(pbVar18 + 0x10),pbVar10,sVar3);
        if (iVar6 == 0) goto LAB_00727a30;
        if (iVar6 < 0) goto LAB_00727a7c;
      }
      puVar15 = puVar15 + 1;
    } while( true );
  }
  do {
    pbVar20 = (byte *)*puVar15;
    bVar5 = *pbVar20;
    uVar8 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar8 = *(ulong *)(pbVar20 + 8);
    }
    sVar3 = uVar8;
    if (uVar9 <= uVar8) {
      sVar3 = uVar9;
    }
    puVar17 = puVar15;
    if (sVar3 == 0) {
LAB_007279e0:
      if (uVar9 < uVar8) goto LAB_00727a7c;
    }
    else {
      pbVar10 = *(byte **)(pbVar20 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar10 = pbVar20 + 1;
      }
      iVar6 = memcmp(pbVar18 + 1,pbVar10,sVar3);
      if (iVar6 == 0) goto LAB_007279e0;
      if (iVar6 < 0) goto LAB_00727a7c;
    }
    puVar15 = puVar15 + 1;
  } while( true );
LAB_00727998:
  uVar12 = puVar15[-1];
  puVar15[-1] = pbVar18;
  *puVar13 = uVar12;
  goto LAB_007279ac;
LAB_00727a7c:
  puVar15 = puVar16 + -1;
  if ((bVar4 & 1) == 0) {
    do {
      puVar16 = puVar15;
      pbVar20 = (byte *)*puVar16;
      bVar4 = *pbVar20;
      uVar8 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar8;
      if (uVar9 <= uVar8) {
        sVar3 = uVar9;
      }
      if (sVar3 == 0) {
LAB_00727a88:
        iVar6 = -1;
        if (uVar8 <= uVar9) break;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar6 = memcmp(pbVar18 + 1,pbVar10,sVar3);
        if (iVar6 == 0) goto LAB_00727a88;
      }
      puVar15 = puVar16 + -1;
    } while (iVar6 < 0);
  }
  else {
    do {
      puVar16 = puVar15;
      pbVar20 = (byte *)*puVar16;
      bVar4 = *pbVar20;
      uVar8 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar8;
      if (uVar9 <= uVar8) {
        sVar3 = uVar9;
      }
      if (sVar3 == 0) {
LAB_00727ae0:
        iVar6 = -1;
        if (uVar8 <= uVar9) break;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar6 = memcmp(*(void **)(pbVar18 + 0x10),pbVar10,sVar3);
        if (iVar6 == 0) goto LAB_00727ae0;
      }
      puVar15 = puVar16 + -1;
    } while (iVar6 < 0);
  }
  if (puVar16 <= puVar17) goto LAB_007273d4;
  uVar12 = *puVar17;
  puVar15 = puVar17 + 1;
  *puVar17 = *puVar16;
  *puVar16 = uVar12;
  goto LAB_007279bc;
LAB_007276b4:
  puVar15 = puVar16 + -1;
  if ((bVar4 & 1) == 0) {
    do {
      puVar16 = puVar15;
      pbVar20 = (byte *)*puVar16;
      bVar4 = *pbVar20;
      uVar8 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar9;
      if (uVar8 <= uVar9) {
        sVar3 = uVar8;
      }
      if (sVar3 == 0) {
LAB_007276c0:
        iVar7 = 0;
        if (uVar8 < uVar9) break;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar7 = memcmp(pbVar10,pbVar18 + 1,sVar3);
        if (iVar7 == 0) goto LAB_007276c0;
      }
      puVar15 = puVar16 + -1;
    } while (-1 < iVar7);
  }
  else {
    do {
      puVar16 = puVar15;
      pbVar20 = (byte *)*puVar16;
      bVar4 = *pbVar20;
      uVar8 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar9;
      if (uVar8 <= uVar9) {
        sVar3 = uVar8;
      }
      if (sVar3 == 0) {
LAB_0072771c:
        iVar7 = 0;
        if (uVar8 < uVar9) break;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar7 = memcmp(pbVar10,*(void **)(pbVar18 + 0x10),sVar3);
        if (iVar7 == 0) goto LAB_0072771c;
      }
      puVar15 = puVar16 + -1;
    } while (-1 < iVar7);
  }
  puVar15 = puVar19;
  if (puVar16 < puVar19) goto LAB_00727780;
  uVar12 = *puVar19;
  iVar6 = iVar6 + 1;
  puVar2 = puVar16;
  if (puVar17 != puVar19) {
    puVar2 = puVar17;
  }
  puVar15 = puVar19 + 1;
  *puVar19 = *puVar16;
  *puVar16 = uVar12;
  puVar17 = puVar2;
  goto LAB_007275f4;
LAB_00727b6c:
  local_68 = puVar15;
  if ((uVar9 & 1) != 0) {
switchD_00727b8c_caseD_0:
    return;
  }
  goto LAB_007273bc;
}


