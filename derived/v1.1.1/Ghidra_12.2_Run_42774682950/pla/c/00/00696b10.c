/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00696b10; name: FUN_00696b10
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00696b10(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  void *__src;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  size_t sVar13;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar9;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_00696b3c;
LAB_00696bd0:
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 != 2) goto joined_r0x006970a8;
LAB_00696c3c:
    if (((undefined1 *)*param_3 <= param_2) &&
       (param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2), *(int *)(param_1 + 0x24) != 2)) {
      uVar8 = 0;
      *param_2 = 0x10;
LAB_00696c5c:
      param_2[1] = (char)uVar8;
      param_2 = param_2 + 2;
      iVar7 = *(int *)(param_1 + 0x24);
      goto joined_r0x006970a8;
    }
    uVar8 = *(uint *)(param_1 + 0x18);
    *param_2 = 0x10;
    if (uVar8 < 0x80) goto LAB_00696c5c;
    param_2[1] = (byte)uVar8 | 0x80;
    uVar10 = (ulong)(long)(int)uVar8 >> 7;
    if (((ulong)(long)(int)uVar8 >> 0xe & 0x3ffff) != 0) {
      param_2 = param_2 + 3;
      do {
        puVar5 = param_2;
        uVar6 = uVar10 >> 7;
        puVar5[-1] = (byte)uVar10 | 0x80;
        param_2 = puVar5 + 1;
        uVar12 = uVar10 >> 0xe;
        uVar10 = uVar6;
      } while (uVar12 != 0);
      *puVar5 = (char)uVar6;
      iVar7 = *(int *)(param_1 + 0x24);
      goto joined_r0x006970a8;
    }
    param_2[2] = (char)uVar10;
    param_2 = param_2 + 3;
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 != 3) goto LAB_00696be4;
LAB_00696c70:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *param_2 = 0x1a;
    uVar8 = *(uint *)(lVar4 + 0x18);
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
          puVar5 = param_2;
          uVar2 = uVar8 >> 7;
          puVar5[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar8 >> 0xe;
          uVar8 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_002df6d0(lVar4,param_2,param_3);
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 == 4) goto LAB_00696d2c;
LAB_00696bec:
    if (iVar7 != 5) goto LAB_00696bf4;
LAB_00696db8:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *param_2 = 0x2a;
    uVar8 = *(uint *)(lVar4 + 0x18);
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
          puVar5 = param_2;
          uVar2 = uVar8 >> 7;
          puVar5[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar8 >> 0xe;
          uVar8 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_002df6d0(lVar4,param_2,param_3);
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 != 6) goto joined_r0x00696c00;
LAB_00696e44:
    pbVar9 = *(byte **)(param_1 + 0x18);
    if ((*pbVar9 & 1) == 0) {
      pbVar11 = pbVar9 + 1;
      uVar10 = (ulong)(*pbVar9 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar11 = *(byte **)(pbVar9 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar10,1,"nn.npln.gamesync.v1.FieldTransform.load_global_value");
    if (*(int *)(param_1 + 0x24) != 6) {
      bVar1 = *PTR_DAT_043730c0;
      pbVar9 = PTR_DAT_043730c0;
      if ((bVar1 & 1) == 0) goto LAB_00696ea8;
LAB_00696e88:
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00696eac;
LAB_006970b0:
      param_2 = (undefined1 *)FUN_003112b4(param_3,6,pbVar9,param_2);
      iVar7 = *(int *)(param_1 + 0x24);
      goto joined_r0x00696c00;
    }
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_00696e88;
LAB_00696ea8:
    sVar13 = (size_t)(bVar1 >> 1);
LAB_00696eac:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_006970b0;
    *param_2 = 0x32;
    param_2[1] = (char)sVar13;
    pbVar11 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar11 = pbVar9 + 1;
    }
    memcpy(param_2 + 2,pbVar11,sVar13);
    param_2 = param_2 + 2 + sVar13;
    if (*(int *)(param_1 + 0x24) != 7) goto LAB_00696c04;
LAB_00696efc:
    pbVar9 = *(byte **)(param_1 + 0x18);
    if ((*pbVar9 & 1) == 0) {
      pbVar11 = pbVar9 + 1;
      uVar10 = (ulong)(*pbVar9 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar11 = *(byte **)(pbVar9 + 0x10);
    }
    FUN_0033b628(pbVar11,uVar10,1,"nn.npln.gamesync.v1.FieldTransform.store_global_value");
    if (*(int *)(param_1 + 0x24) == 7) {
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar9;
      if ((bVar1 & 1) != 0) goto LAB_00696f40;
LAB_00696f60:
      sVar13 = (size_t)(bVar1 >> 1);
LAB_00696f64:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x3a;
        param_2[1] = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar13);
        param_2 = param_2 + 2 + sVar13;
        iVar7 = *(int *)(param_1 + 0x24);
        goto joined_r0x00696c0c;
      }
    }
    else {
      bVar1 = *PTR_DAT_043730c0;
      pbVar9 = PTR_DAT_043730c0;
      if ((bVar1 & 1) == 0) goto LAB_00696f60;
LAB_00696f40:
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00696f64;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,7,pbVar9,param_2);
    iVar7 = *(int *)(param_1 + 0x24);
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_00696bd0;
LAB_00696b3c:
    if ((bVar1 & 1) == 0) {
      pbVar9 = pbVar9 + 1;
      uVar10 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar9 + 8);
      pbVar9 = *(byte **)(pbVar9 + 0x10);
    }
    FUN_0033b628(pbVar9,uVar10,1,"nn.npln.gamesync.v1.FieldTransform.field_path");
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      sVar13 = (size_t)(*pbVar9 >> 1);
LAB_00696b8c:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar13);
        param_2 = param_2 + 2 + sVar13;
        goto LAB_00696bd0;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00696b8c;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,1,pbVar9,param_2);
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 == 2) goto LAB_00696c3c;
joined_r0x006970a8:
    if (iVar7 == 3) goto LAB_00696c70;
LAB_00696be4:
    if (iVar7 != 4) goto LAB_00696bec;
LAB_00696d2c:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *param_2 = 0x22;
    uVar8 = *(uint *)(lVar4 + 0x18);
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
          puVar5 = param_2;
          uVar2 = uVar8 >> 7;
          puVar5[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar8 >> 0xe;
          uVar8 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_002df6d0(lVar4,param_2,param_3);
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 == 5) goto LAB_00696db8;
LAB_00696bf4:
    if (iVar7 == 6) goto LAB_00696e44;
joined_r0x00696c00:
    if (iVar7 == 7) goto LAB_00696efc;
LAB_00696c04:
    iVar7 = *(int *)(param_1 + 0x24);
  }
joined_r0x00696c0c:
  if (iVar7 != 8) {
    uVar10 = *(ulong *)(param_1 + 8);
    goto joined_r0x00696c14;
  }
  pbVar9 = *(byte **)(param_1 + 0x18);
  if ((*pbVar9 & 1) == 0) {
    pbVar11 = pbVar9 + 1;
    uVar10 = (ulong)(*pbVar9 >> 1);
  }
  else {
    uVar10 = *(ulong *)(pbVar9 + 8);
    pbVar11 = *(byte **)(pbVar9 + 0x10);
  }
  FUN_0033b628(pbVar11,uVar10,1,"nn.npln.gamesync.v1.FieldTransform.clear_global_value");
  if (*(int *)(param_1 + 0x24) == 8) {
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_00696ff8;
LAB_00697018:
    sVar13 = (size_t)(bVar1 >> 1);
LAB_0069701c:
    if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x42;
      param_2[1] = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar13);
      param_2 = param_2 + 2 + sVar13;
      uVar10 = *(ulong *)(param_1 + 8);
      goto joined_r0x00696c14;
    }
  }
  else {
    bVar1 = *PTR_DAT_043730c0;
    pbVar9 = PTR_DAT_043730c0;
    if ((bVar1 & 1) == 0) goto LAB_00697018;
LAB_00696ff8:
    sVar13 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar13 < 0x80) goto LAB_0069701c;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,8,pbVar9,param_2);
  uVar10 = *(ulong *)(param_1 + 8);
joined_r0x00696c14:
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar6 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar13 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar13) {
      puVar5 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar6,param_2);
      return puVar5;
    }
    memcpy(param_2,__src,sVar13);
    param_2 = param_2 + sVar13;
  }
  return param_2;
}


