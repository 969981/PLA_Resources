/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bbc94; name: FUN_003bbc94
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_003bbc94(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  size_t sVar14;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar13 = 0;
    if (param_2 < (undefined1 *)*param_3) goto LAB_003bbd00;
    do {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
LAB_003bbd00:
      do {
        lVar4 = FUN_003669e8(param_1 + 0x18,iVar13);
        *param_2 = 0x12;
        uVar6 = *(uint *)(lVar4 + 0x14);
        if (uVar6 < 0x80) {
          param_2[1] = (byte)uVar6;
          param_2 = param_2 + 2;
        }
        else {
          param_2[1] = (byte)uVar6 | 0x80;
          if (uVar6 >> 0xe == 0) {
            param_2[2] = (char)(uVar6 >> 7);
            param_2 = param_2 + 3;
          }
          else {
            param_2 = param_2 + 3;
            uVar6 = uVar6 >> 7;
            do {
              puVar5 = param_2;
              uVar2 = uVar6 >> 7;
              puVar5[-1] = (byte)uVar6 | 0x80;
              param_2 = puVar5 + 1;
              uVar3 = uVar6 >> 0xe;
              uVar6 = uVar2;
            } while (uVar3 != 0);
            *puVar5 = (char)uVar2;
          }
        }
        param_2 = (undefined1 *)FUN_003bade4(lVar4,param_2,param_3);
        iVar13 = iVar13 + 1;
        if (iVar13 == iVar1) goto LAB_003bbd78;
      } while (param_2 < (undefined1 *)*param_3);
    } while( true );
  }
LAB_003bbd78:
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x30);
    if ((*pbVar9 & 1) == 0) {
      pbVar10 = pbVar9 + 1;
      uVar7 = (ulong)(*pbVar9 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar9 + 8);
      pbVar10 = *(byte **)(pbVar9 + 0x10);
    }
    FUN_0033b628(pbVar10,uVar7,1,"google.protobuf.UninterpretedOption.identifier_value");
    pbVar9 = *(byte **)(param_1 + 0x30);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_003bbe00:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x1a;
        param_2[1] = (char)sVar14;
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
        memcpy(param_2 + 2,pbVar10,sVar14);
        param_2 = param_2 + 2 + sVar14;
        goto joined_r0x003bbe44;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_003bbe00;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,3,pbVar9,param_2);
  }
joined_r0x003bbe44:
  if ((uVar6 >> 3 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    uVar7 = *(ulong *)(param_1 + 0x48);
    *param_2 = 0x20;
    if (uVar7 < 0x80) {
      param_2[1] = (byte)uVar7;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar7 | 0x80;
      if (uVar7 >> 0xe == 0) {
        param_2[2] = (char)(uVar7 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        uVar7 = uVar7 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar5 = param_2;
          uVar11 = uVar7 >> 7;
          puVar5[-1] = (byte)uVar7 | 0x80;
          param_2 = puVar5 + 1;
          uVar12 = uVar7 >> 0xe;
          uVar7 = uVar11;
        } while (uVar12 != 0);
        *puVar5 = (char)uVar11;
      }
    }
  }
  if ((uVar6 >> 4 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    uVar7 = *(ulong *)(param_1 + 0x50);
    *param_2 = 0x28;
    if (uVar7 < 0x80) {
      param_2[1] = (byte)uVar7;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar7 | 0x80;
      if (uVar7 >> 0xe == 0) {
        param_2[2] = (char)(uVar7 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        uVar7 = uVar7 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar5 = param_2;
          uVar11 = uVar7 >> 7;
          puVar5[-1] = (byte)uVar7 | 0x80;
          param_2 = puVar5 + 1;
          uVar12 = uVar7 >> 0xe;
          uVar7 = uVar11;
        } while (uVar12 != 0);
        *puVar5 = (char)uVar11;
      }
    }
  }
  if ((uVar6 >> 5 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    *param_2 = 0x31;
    *(undefined8 *)(param_2 + 1) = uVar8;
    param_2 = param_2 + 9;
  }
  if ((uVar6 >> 1 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x38);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_003bbf2c:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x3a;
        *(char *)((long)param_2 + 1) = (char)sVar14;
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 2),pbVar10,sVar14);
        param_2 = (undefined1 *)((long)param_2 + 2) + sVar14;
        goto joined_r0x003bc0b8;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_003bbf2c;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,7,pbVar9,param_2);
  }
joined_r0x003bc0b8:
  if ((uVar6 >> 2 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    goto joined_r0x003bc0d8;
  }
  pbVar9 = *(byte **)(param_1 + 0x40);
  if ((*pbVar9 & 1) == 0) {
    pbVar10 = pbVar9 + 1;
    uVar7 = (ulong)(*pbVar9 >> 1);
  }
  else {
    uVar7 = *(ulong *)(pbVar9 + 8);
    pbVar10 = *(byte **)(pbVar9 + 0x10);
  }
  FUN_0033b628(pbVar10,uVar7,1,"google.protobuf.UninterpretedOption.aggregate_value");
  pbVar9 = *(byte **)(param_1 + 0x40);
  if ((*pbVar9 & 1) == 0) {
    sVar14 = (size_t)(*pbVar9 >> 1);
LAB_003bbfc0:
    if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x42;
      param_2[1] = (char)sVar14;
      pbVar10 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar10 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar10,sVar14);
      param_2 = param_2 + 2 + sVar14;
      uVar7 = *(ulong *)(param_1 + 8);
      goto joined_r0x003bc0d8;
    }
  }
  else {
    sVar14 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar14 < 0x80) goto LAB_003bbfc0;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,8,pbVar9,param_2);
  uVar7 = *(ulong *)(param_1 + 8);
joined_r0x003bc0d8:
  if ((uVar7 & 1) == 0) {
    return param_2;
  }
  puVar5 = (undefined1 *)FUN_00311a94((uVar7 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar5;
}


