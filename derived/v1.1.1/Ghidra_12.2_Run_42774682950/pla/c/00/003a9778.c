/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a9778; name: FUN_003a9778
 */


undefined1 * FUN_003a9778(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  size_t sVar13;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 & 1) == 0) {
LAB_003a9834:
    iVar1 = *(int *)(param_1 + 0x20);
  }
  else {
    pbVar10 = *(byte **)(param_1 + 0xd8);
    if ((*pbVar10 & 1) == 0) {
      pbVar11 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar11 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar7,1,"google.protobuf.DescriptorProto.name");
    pbVar10 = *(byte **)(param_1 + 0xd8);
    if ((*pbVar10 & 1) == 0) {
      sVar13 = (size_t)(*pbVar10 >> 1);
LAB_003a97f0:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar13;
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar13);
        param_2 = param_2 + 2 + sVar13;
        goto LAB_003a9834;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar13 < 0x80) goto LAB_003a97f0;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar10,param_2);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (iVar1 != 0) {
    iVar12 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a9884;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a9884:
      do {
        lVar5 = FUN_00366138(param_1 + 0x18,iVar12);
        *param_2 = 0x12;
        uVar8 = *(uint *)(lVar5 + 0x14);
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
              uVar2 = uVar8 >> 0xe;
              uVar8 = uVar3;
            } while (uVar2 != 0);
            *puVar6 = (char)uVar3;
          }
        }
        param_2 = (undefined1 *)FUN_003ac13c(lVar5,param_2,param_3);
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar1) goto LAB_003a9918;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a9918:
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    iVar12 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a9968;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a9968:
      do {
        lVar5 = FUN_00365e80(param_1 + 0x30,iVar12);
        *param_2 = 0x1a;
        uVar8 = *(uint *)(lVar5 + 0x14);
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
              uVar2 = uVar8 >> 0xe;
              uVar8 = uVar3;
            } while (uVar2 != 0);
            *puVar6 = (char)uVar3;
          }
        }
        param_2 = (undefined1 *)FUN_003a9778(lVar5,param_2,param_3);
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar1) goto LAB_003a99e0;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a99e0:
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    iVar12 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a9a30;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a9a30:
      do {
        lVar5 = FUN_00365f68(param_1 + 0x48,iVar12);
        *param_2 = 0x22;
        uVar8 = *(uint *)(lVar5 + 0x14);
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
              uVar2 = uVar8 >> 0xe;
              uVar8 = uVar3;
            } while (uVar2 != 0);
            *puVar6 = (char)uVar3;
          }
        }
        param_2 = (undefined1 *)FUN_003af634(lVar5,param_2,param_3);
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar1) goto LAB_003a9aa8;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a9aa8:
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    iVar12 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a9af8;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a9af8:
      do {
        lVar5 = FUN_00366308(param_1 + 0x60,iVar12);
        *param_2 = 0x2a;
        uVar8 = *(uint *)(lVar5 + 0x14);
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
              uVar2 = uVar8 >> 0xe;
              uVar8 = uVar3;
            } while (uVar2 != 0);
            *puVar6 = (char)uVar3;
          }
        }
        param_2 = (undefined1 *)FUN_003a71d0(lVar5,param_2,param_3);
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar1) goto LAB_003a9b70;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a9b70:
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 != 0) {
    iVar12 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a9bc0;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a9bc0:
      do {
        lVar5 = FUN_00366138(param_1 + 0x78,iVar12);
        *param_2 = 0x32;
        uVar8 = *(uint *)(lVar5 + 0x14);
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
              uVar2 = uVar8 >> 0xe;
              uVar8 = uVar3;
            } while (uVar2 != 0);
            *puVar6 = (char)uVar3;
          }
        }
        param_2 = (undefined1 *)FUN_003ac13c(lVar5,param_2,param_3);
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar1) goto LAB_003a9c38;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a9c38:
  if ((uVar9 >> 1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar5 = *(long *)(param_1 + 0xe0);
    *param_2 = 0x3a;
    uVar9 = *(uint *)(lVar5 + 0x2c);
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
          puVar6 = param_2;
          uVar8 = uVar9 >> 7;
          puVar6[-1] = (byte)uVar9 | 0x80;
          param_2 = puVar6 + 1;
          uVar3 = uVar9 >> 0xe;
          uVar9 = uVar8;
        } while (uVar3 != 0);
        *puVar6 = (char)uVar8;
      }
    }
    param_2 = (undefined1 *)FUN_003b6654(lVar5,param_2,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 != 0) {
    iVar12 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a9d0c;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a9d0c:
      do {
        lVar5 = FUN_00366220(param_1 + 0x90,iVar12);
        *param_2 = 0x42;
        uVar9 = *(uint *)(lVar5 + 0x14);
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
              puVar6 = param_2;
              uVar8 = uVar9 >> 7;
              puVar6[-1] = (byte)uVar9 | 0x80;
              param_2 = puVar6 + 1;
              uVar3 = uVar9 >> 0xe;
              uVar9 = uVar8;
            } while (uVar3 != 0);
            *puVar6 = (char)uVar8;
          }
        }
        param_2 = (undefined1 *)FUN_003ad988(lVar5,param_2,param_3);
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar1) goto LAB_003a9d84;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a9d84:
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 != 0) {
    iVar12 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003a9dd4;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003a9dd4:
      do {
        lVar5 = FUN_003663f0(param_1 + 0xa8,iVar12);
        *param_2 = 0x4a;
        uVar9 = *(uint *)(lVar5 + 0x14);
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
              puVar6 = param_2;
              uVar8 = uVar9 >> 7;
              puVar6[-1] = (byte)uVar9 | 0x80;
              param_2 = puVar6 + 1;
              uVar3 = uVar9 >> 0xe;
              uVar9 = uVar8;
            } while (uVar3 != 0);
            *puVar6 = (char)uVar8;
          }
        }
        param_2 = (undefined1 *)FUN_003a7d8c(lVar5,param_2,param_3);
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar1) goto LAB_003a9e4c;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003a9e4c:
  iVar1 = *(int *)(param_1 + 200);
  if (0 < iVar1) {
    iVar12 = 0;
    do {
      while( true ) {
        pbVar11 = (byte *)FUN_0032b79c(param_1 + 0xc0,iVar12);
        pbVar10 = *(byte **)(pbVar11 + 0x10);
        bVar4 = (*pbVar11 & 1) == 0;
        if (bVar4) {
          pbVar10 = pbVar11 + 1;
        }
        uVar9 = (uint)(*pbVar11 >> 1);
        if (!bVar4) {
          uVar9 = *(uint *)(pbVar11 + 8);
        }
        FUN_0033b628(pbVar10,uVar9,1,"google.protobuf.DescriptorProto.reserved_name");
        if ((*pbVar11 & 1) == 0) break;
        sVar13 = *(size_t *)(pbVar11 + 8);
        if ((long)sVar13 < 0x80) goto LAB_003a9ec0;
LAB_003a9f14:
        param_2 = (undefined1 *)FUN_00311488(param_3,10,pbVar11,param_2);
        iVar12 = iVar12 + 1;
        if (iVar1 == iVar12) goto LAB_003a9f38;
      }
      sVar13 = (size_t)(*pbVar11 >> 1);
LAB_003a9ec0:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_003a9f14;
      *param_2 = 0x52;
      param_2[1] = (char)sVar13;
      pbVar10 = pbVar11 + 1;
      if ((*pbVar11 & 1) != 0) {
        pbVar10 = *(byte **)(pbVar11 + 0x10);
      }
      memcpy(param_2 + 2,pbVar10,sVar13);
      param_2 = param_2 + 2 + sVar13;
      iVar12 = iVar12 + 1;
    } while (iVar1 != iVar12);
  }
LAB_003a9f38:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar6 = (undefined1 *)
           FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar6;
}


