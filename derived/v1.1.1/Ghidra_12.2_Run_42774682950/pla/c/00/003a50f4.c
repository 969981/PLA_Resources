/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a50f4; name: FUN_003a50f4
 */


undefined1 * FUN_003a50f4(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  int iVar16;
  size_t sVar17;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 1 & 1) == 0) goto LAB_003a5128;
LAB_003a51d0:
    pbVar12 = *(byte **)(param_1 + 0xb8);
    if ((*pbVar12 & 1) == 0) {
      pbVar14 = pbVar12 + 1;
      uVar11 = (ulong)(*pbVar12 >> 1);
    }
    else {
      uVar11 = *(ulong *)(pbVar12 + 8);
      pbVar14 = *(byte **)(pbVar12 + 0x10);
    }
    FUN_0033b628(pbVar14,uVar11,1,"google.protobuf.FileDescriptorProto.package");
    pbVar12 = *(byte **)(param_1 + 0xb8);
    if ((*pbVar12 & 1) == 0) {
      sVar17 = (size_t)(*pbVar12 >> 1);
LAB_003a521c:
      if ((long)sVar17 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar17;
        pbVar14 = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          pbVar14 = pbVar12 + 1;
        }
        memcpy(param_2 + 2,pbVar14,sVar17);
        param_2 = param_2 + 2 + sVar17;
        iVar2 = *(int *)(param_1 + 0x20);
        goto joined_r0x003a5390;
      }
    }
    else {
      sVar17 = *(size_t *)(pbVar12 + 8);
      if ((long)sVar17 < 0x80) goto LAB_003a521c;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,2,pbVar12,param_2);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    pbVar12 = *(byte **)(param_1 + 0xb0);
    if ((*pbVar12 & 1) == 0) {
      pbVar14 = pbVar12 + 1;
      uVar11 = (ulong)(*pbVar12 >> 1);
    }
    else {
      uVar11 = *(ulong *)(pbVar12 + 8);
      pbVar14 = *(byte **)(pbVar12 + 0x10);
    }
    FUN_0033b628(pbVar14,uVar11,1,"google.protobuf.FileDescriptorProto.name");
    pbVar12 = *(byte **)(param_1 + 0xb0);
    if ((*pbVar12 & 1) == 0) {
      sVar17 = (size_t)(*pbVar12 >> 1);
LAB_003a5188:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar17) goto LAB_003a5354;
      *param_2 = 10;
      param_2[1] = (char)sVar17;
      pbVar14 = *(byte **)(pbVar12 + 0x10);
      if ((*pbVar12 & 1) == 0) {
        pbVar14 = pbVar12 + 1;
      }
      memcpy(param_2 + 2,pbVar14,sVar17);
      param_2 = param_2 + 2 + sVar17;
    }
    else {
      sVar17 = *(size_t *)(pbVar12 + 8);
      if ((long)sVar17 < 0x80) goto LAB_003a5188;
LAB_003a5354:
      param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar12,param_2);
    }
    if ((uVar1 >> 1 & 1) != 0) goto LAB_003a51d0;
LAB_003a5128:
    iVar2 = *(int *)(param_1 + 0x20);
  }
joined_r0x003a5390:
  if (0 < iVar2) {
    iVar16 = 0;
    do {
      while( true ) {
        pbVar14 = (byte *)FUN_0032b79c(param_1 + 0x18,iVar16);
        pbVar12 = *(byte **)(pbVar14 + 0x10);
        bVar5 = (*pbVar14 & 1) == 0;
        if (bVar5) {
          pbVar12 = pbVar14 + 1;
        }
        uVar10 = (uint)(*pbVar14 >> 1);
        if (!bVar5) {
          uVar10 = *(uint *)(pbVar14 + 8);
        }
        FUN_0033b628(pbVar12,uVar10,1,"google.protobuf.FileDescriptorProto.dependency");
        if ((*pbVar14 & 1) == 0) break;
        sVar17 = *(size_t *)(pbVar14 + 8);
        if ((long)sVar17 < 0x80) goto LAB_003a52d8;
LAB_003a532c:
        param_2 = (undefined1 *)FUN_00311488(param_3,3,pbVar14,param_2);
        iVar16 = iVar16 + 1;
        if (iVar2 == iVar16) goto LAB_003a5394;
      }
      sVar17 = (size_t)(*pbVar14 >> 1);
LAB_003a52d8:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar17) goto LAB_003a532c;
      *param_2 = 0x1a;
      param_2[1] = (char)sVar17;
      pbVar12 = pbVar14 + 1;
      if ((*pbVar14 & 1) != 0) {
        pbVar12 = *(byte **)(pbVar14 + 0x10);
      }
      memcpy(param_2 + 2,pbVar12,sVar17);
      param_2 = param_2 + 2 + sVar17;
      iVar16 = iVar16 + 1;
    } while (iVar2 != iVar16);
  }
LAB_003a5394:
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    iVar16 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a53e8;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a53e8:
      do {
        lVar6 = FUN_00365e80(param_1 + 0x30,iVar16);
        *param_2 = 0x22;
        uVar10 = *(uint *)(lVar6 + 0x14);
        if (uVar10 < 0x80) {
          param_2[1] = (byte)uVar10;
          param_2 = param_2 + 2;
        }
        else {
          param_2[1] = (byte)uVar10 | 0x80;
          if (uVar10 >> 0xe == 0) {
            param_2[2] = (char)(uVar10 >> 7);
            param_2 = param_2 + 3;
          }
          else {
            param_2 = param_2 + 3;
            uVar10 = uVar10 >> 7;
            do {
              puVar8 = param_2;
              uVar4 = uVar10 >> 7;
              puVar8[-1] = (byte)uVar10 | 0x80;
              param_2 = puVar8 + 1;
              uVar3 = uVar10 >> 0xe;
              uVar10 = uVar4;
            } while (uVar3 != 0);
            *puVar8 = (char)uVar4;
          }
        }
        param_2 = (undefined1 *)FUN_003a9778(lVar6,param_2,param_3);
        iVar16 = iVar16 + 1;
        if (iVar16 == iVar2) goto LAB_003a5464;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a5464:
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    iVar16 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a54b4;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a54b4:
      do {
        lVar6 = FUN_00365f68(param_1 + 0x48,iVar16);
        *param_2 = 0x2a;
        uVar10 = *(uint *)(lVar6 + 0x14);
        if (uVar10 < 0x80) {
          param_2[1] = (byte)uVar10;
          param_2 = param_2 + 2;
        }
        else {
          param_2[1] = (byte)uVar10 | 0x80;
          if (uVar10 >> 0xe == 0) {
            param_2[2] = (char)(uVar10 >> 7);
            param_2 = param_2 + 3;
          }
          else {
            param_2 = param_2 + 3;
            uVar10 = uVar10 >> 7;
            do {
              puVar8 = param_2;
              uVar4 = uVar10 >> 7;
              puVar8[-1] = (byte)uVar10 | 0x80;
              param_2 = puVar8 + 1;
              uVar3 = uVar10 >> 0xe;
              uVar10 = uVar4;
            } while (uVar3 != 0);
            *puVar8 = (char)uVar4;
          }
        }
        param_2 = (undefined1 *)FUN_003af634(lVar6,param_2,param_3);
        iVar16 = iVar16 + 1;
        if (iVar16 == iVar2) goto LAB_003a552c;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a552c:
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 != 0) {
    iVar16 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a557c;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a557c:
      do {
        lVar6 = FUN_00366050(param_1 + 0x60,iVar16);
        *param_2 = 0x32;
        uVar10 = *(uint *)(lVar6 + 0x14);
        if (uVar10 < 0x80) {
          param_2[1] = (byte)uVar10;
          param_2 = param_2 + 2;
        }
        else {
          param_2[1] = (byte)uVar10 | 0x80;
          if (uVar10 >> 0xe == 0) {
            param_2[2] = (char)(uVar10 >> 7);
            param_2 = param_2 + 3;
          }
          else {
            param_2 = param_2 + 3;
            uVar10 = uVar10 >> 7;
            do {
              puVar8 = param_2;
              uVar4 = uVar10 >> 7;
              puVar8[-1] = (byte)uVar10 | 0x80;
              param_2 = puVar8 + 1;
              uVar3 = uVar10 >> 0xe;
              uVar10 = uVar4;
            } while (uVar3 != 0);
            *puVar8 = (char)uVar4;
          }
        }
        param_2 = (undefined1 *)FUN_003b1b74(lVar6,param_2,param_3);
        iVar16 = iVar16 + 1;
        if (iVar16 == iVar2) goto LAB_003a55f4;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a55f4:
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 != 0) {
    iVar16 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a5644;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a5644:
      do {
        lVar6 = FUN_00366138(param_1 + 0x78,iVar16);
        *param_2 = 0x3a;
        uVar10 = *(uint *)(lVar6 + 0x14);
        if (uVar10 < 0x80) {
          param_2[1] = (byte)uVar10;
          param_2 = param_2 + 2;
        }
        else {
          param_2[1] = (byte)uVar10 | 0x80;
          if (uVar10 >> 0xe == 0) {
            param_2[2] = (char)(uVar10 >> 7);
            param_2 = param_2 + 3;
          }
          else {
            param_2 = param_2 + 3;
            uVar10 = uVar10 >> 7;
            do {
              puVar8 = param_2;
              uVar4 = uVar10 >> 7;
              puVar8[-1] = (byte)uVar10 | 0x80;
              param_2 = puVar8 + 1;
              uVar3 = uVar10 >> 0xe;
              uVar10 = uVar4;
            } while (uVar3 != 0);
            *puVar8 = (char)uVar4;
          }
        }
        param_2 = (undefined1 *)FUN_003ac13c(lVar6,param_2,param_3);
        iVar16 = iVar16 + 1;
        if (iVar16 == iVar2) goto LAB_003a56bc;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a56bc:
  if ((uVar1 >> 3 & 1) == 0) {
joined_r0x003a5768:
    if ((uVar1 >> 4 & 1) == 0) goto LAB_003a56c4;
LAB_003a5710:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0xd0);
    *param_2 = 0x4a;
    uVar10 = *(uint *)(lVar6 + 0x28);
    if (uVar10 < 0x80) {
      param_2[1] = (byte)uVar10;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar10 | 0x80;
      if (uVar10 >> 0xe == 0) {
        param_2[2] = (char)(uVar10 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar10 = uVar10 >> 7;
        do {
          puVar8 = param_2;
          uVar4 = uVar10 >> 7;
          puVar8[-1] = (byte)uVar10 | 0x80;
          param_2 = puVar8 + 1;
          uVar3 = uVar10 >> 0xe;
          uVar10 = uVar4;
        } while (uVar3 != 0);
        *puVar8 = (char)uVar4;
      }
    }
    param_2 = (undefined1 *)FUN_003be134(lVar6,param_2,param_3);
    iVar2 = *(int *)(param_1 + 0x90);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 200);
    *param_2 = 0x42;
    uVar10 = *(uint *)(lVar6 + 0x2c);
    if (uVar10 < 0x80) {
      param_2[1] = (byte)uVar10;
      param_2 = (undefined1 *)FUN_003b4f48(lVar6,param_2 + 2,param_3);
      goto joined_r0x003a5768;
    }
    param_2[1] = (byte)uVar10 | 0x80;
    if (uVar10 >> 0xe == 0) {
      param_2[2] = (char)(uVar10 >> 7);
      param_2 = (undefined1 *)FUN_003b4f48(lVar6,param_2 + 3,param_3);
      goto joined_r0x003a5768;
    }
    puVar8 = param_2 + 3;
    uVar10 = uVar10 >> 7;
    do {
      puVar9 = puVar8;
      uVar4 = uVar10 >> 7;
      puVar9[-1] = (byte)uVar10 | 0x80;
      uVar3 = uVar10 >> 0xe;
      puVar8 = puVar9 + 1;
      uVar10 = uVar4;
    } while (uVar3 != 0);
    *puVar9 = (char)uVar4;
    param_2 = (undefined1 *)FUN_003b4f48(lVar6,puVar9 + 1,param_3);
    if ((uVar1 >> 4 & 1) != 0) goto LAB_003a5710;
LAB_003a56c4:
    iVar2 = *(int *)(param_1 + 0x90);
  }
  if (0 < iVar2) {
    iVar16 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a5840;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a5840:
      do {
        puVar7 = (uint *)FUN_00326ad0(param_1 + 0x90,iVar16);
        uVar10 = *puVar7;
        *param_2 = 0x50;
        if (uVar10 < 0x80) {
          param_2[1] = (byte)uVar10;
          param_2 = param_2 + 2;
        }
        else {
          param_2[1] = (byte)uVar10 | 0x80;
          uVar11 = (ulong)(long)(int)uVar10 >> 7;
          if (((ulong)(long)(int)uVar10 >> 0xe & 0x3ffff) == 0) {
            param_2[2] = (char)uVar11;
            param_2 = param_2 + 3;
          }
          else {
            param_2 = param_2 + 3;
            do {
              puVar8 = param_2;
              uVar13 = uVar11 >> 7;
              puVar8[-1] = (byte)uVar11 | 0x80;
              param_2 = puVar8 + 1;
              uVar15 = uVar11 >> 0xe;
              uVar11 = uVar13;
            } while (uVar15 != 0);
            *puVar8 = (char)uVar13;
          }
        }
        if (iVar16 + 1 == iVar2) goto LAB_003a58d0;
        iVar16 = iVar16 + 1;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a58d0:
  iVar2 = *(int *)(param_1 + 0xa0);
  if (0 < iVar2) {
    iVar16 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a5918;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a5918:
      do {
        puVar7 = (uint *)FUN_00326ad0(param_1 + 0xa0,iVar16);
        uVar10 = *puVar7;
        *param_2 = 0x58;
        if (uVar10 < 0x80) {
          param_2[1] = (byte)uVar10;
          param_2 = param_2 + 2;
        }
        else {
          param_2[1] = (byte)uVar10 | 0x80;
          uVar11 = (ulong)(long)(int)uVar10 >> 7;
          if (((ulong)(long)(int)uVar10 >> 0xe & 0x3ffff) == 0) {
            param_2[2] = (char)uVar11;
            param_2 = param_2 + 3;
          }
          else {
            param_2 = param_2 + 3;
            do {
              puVar8 = param_2;
              uVar13 = uVar11 >> 7;
              puVar8[-1] = (byte)uVar11 | 0x80;
              param_2 = puVar8 + 1;
              uVar15 = uVar11 >> 0xe;
              uVar11 = uVar13;
            } while (uVar15 != 0);
            *puVar8 = (char)uVar13;
          }
        }
        if (iVar16 + 1 == iVar2) goto LAB_003a59a8;
        iVar16 = iVar16 + 1;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a59a8:
  if ((uVar1 >> 2 & 1) == 0) {
LAB_003a5a3c:
    uVar11 = *(ulong *)(param_1 + 8);
  }
  else {
    pbVar12 = *(byte **)(param_1 + 0xc0);
    if ((*pbVar12 & 1) == 0) {
      pbVar14 = pbVar12 + 1;
      uVar11 = (ulong)(*pbVar12 >> 1);
    }
    else {
      uVar11 = *(ulong *)(pbVar12 + 8);
      pbVar14 = *(byte **)(pbVar12 + 0x10);
    }
    FUN_0033b628(pbVar14,uVar11,1,"google.protobuf.FileDescriptorProto.syntax");
    pbVar12 = *(byte **)(param_1 + 0xc0);
    if ((*pbVar12 & 1) == 0) {
      sVar17 = (size_t)(*pbVar12 >> 1);
LAB_003a59f8:
      if ((long)sVar17 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x62;
        param_2[1] = (char)sVar17;
        pbVar14 = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          pbVar14 = pbVar12 + 1;
        }
        memcpy(param_2 + 2,pbVar14,sVar17);
        param_2 = param_2 + 2 + sVar17;
        goto LAB_003a5a3c;
      }
    }
    else {
      sVar17 = *(size_t *)(pbVar12 + 8);
      if ((long)sVar17 < 0x80) goto LAB_003a59f8;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,0xc,pbVar12,param_2);
    uVar11 = *(ulong *)(param_1 + 8);
  }
  if ((uVar11 & 1) == 0) {
    return param_2;
  }
  puVar8 = (undefined1 *)FUN_00311a94((uVar11 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar8;
}


