/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002df6d0; name: FUN_002df6d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_002df6d0(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  size_t sVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2), *(int *)(param_1 + 0x1c) == 1)) {
      uVar10 = *(uint *)(param_1 + 0x10);
      *param_2 = 8;
      if (0x7f < uVar10) {
        param_2[1] = (byte)uVar10 | 0x80;
        uVar11 = (ulong)(long)(int)uVar10 >> 7;
        if (((ulong)(long)(int)uVar10 >> 0xe & 0x3ffff) == 0) {
          param_2[2] = (char)uVar11;
          param_2 = param_2 + 3;
          iVar1 = *(int *)(param_1 + 0x1c);
        }
        else {
          param_2 = param_2 + 3;
          do {
            puVar7 = param_2;
            uVar9 = uVar11 >> 7;
            puVar7[-1] = (byte)uVar11 | 0x80;
            param_2 = puVar7 + 1;
            uVar13 = uVar11 >> 0xe;
            uVar11 = uVar9;
          } while (uVar13 != 0);
          *puVar7 = (char)uVar9;
          iVar1 = *(int *)(param_1 + 0x1c);
        }
        goto joined_r0x002df6f8;
      }
    }
    else {
      uVar10 = 0;
      *param_2 = 8;
    }
    param_2[1] = (char)uVar10;
    param_2 = param_2 + 2;
    iVar1 = *(int *)(param_1 + 0x1c);
  }
joined_r0x002df6f8:
  if (iVar1 == 2) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2), *(int *)(param_1 + 0x1c) == 2)) {
      bVar5 = *(char *)(param_1 + 0x10) != '\0';
    }
    else {
      bVar5 = false;
    }
    *param_2 = 0x10;
    param_2[1] = bVar5;
    iVar1 = *(int *)(param_1 + 0x1c);
    param_2 = param_2 + 2;
  }
  if (iVar1 == 3) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2), *(int *)(param_1 + 0x1c) == 3)) {
      uVar11 = *(ulong *)(param_1 + 0x10);
      *param_2 = 0x18;
      if (0x7f < uVar11) {
        param_2[1] = (byte)uVar11 | 0x80;
        if (uVar11 >> 0xe == 0) {
          param_2[2] = (char)(uVar11 >> 7);
          param_2 = param_2 + 3;
          iVar1 = *(int *)(param_1 + 0x1c);
        }
        else {
          uVar11 = uVar11 >> 7;
          param_2 = param_2 + 3;
          do {
            puVar7 = param_2;
            uVar9 = uVar11 >> 7;
            puVar7[-1] = (byte)uVar11 | 0x80;
            param_2 = puVar7 + 1;
            uVar13 = uVar11 >> 0xe;
            uVar11 = uVar9;
          } while (uVar13 != 0);
          *puVar7 = (char)uVar9;
          iVar1 = *(int *)(param_1 + 0x1c);
        }
        goto joined_r0x002df8e4;
      }
    }
    else {
      uVar11 = 0;
      *param_2 = 0x18;
    }
    param_2[1] = (char)uVar11;
    param_2 = param_2 + 2;
    iVar1 = *(int *)(param_1 + 0x1c);
  }
joined_r0x002df8e4:
  if (iVar1 == 4) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2), *(int *)(param_1 + 0x1c) == 4)) {
      uVar15 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar15 = 0;
    }
    *param_2 = 0x25;
    *(undefined4 *)(param_2 + 1) = uVar15;
    iVar1 = *(int *)(param_1 + 0x1c);
    param_2 = param_2 + 5;
  }
  if (iVar1 == 5) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2), *(int *)(param_1 + 0x1c) == 5)) {
      uVar16 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      uVar16 = 0;
    }
    *param_2 = 0x29;
    *(undefined8 *)(param_2 + 1) = uVar16;
    iVar1 = *(int *)(param_1 + 0x1c);
    param_2 = param_2 + 9;
  }
  if (iVar1 == 6) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x10);
    *param_2 = 0x32;
    uVar10 = *(uint *)(lVar6 + 0x1c);
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
          puVar7 = param_2;
          uVar3 = uVar10 >> 7;
          puVar7[-1] = (byte)uVar10 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar10 >> 0xe;
          uVar10 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_006025b8(lVar6,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar1 == 7) {
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar12 = pbVar8 + 1;
      uVar11 = (ulong)(*pbVar8 >> 1);
    }
    else {
      uVar11 = *(ulong *)(pbVar8 + 8);
      pbVar12 = *(byte **)(pbVar8 + 0x10);
    }
    FUN_0033b628(pbVar12,uVar11,1,"nn.npln.common.Value.string_value");
    if (*(int *)(param_1 + 0x1c) == 7) {
      pbVar8 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar8;
      if ((bVar2 & 1) != 0) goto LAB_002df96c;
LAB_002df98c:
      sVar14 = (size_t)(bVar2 >> 1);
LAB_002df990:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x3a;
        *(char *)((long)param_2 + 1) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar12 = pbVar8 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 2),pbVar12,sVar14);
        param_2 = (undefined1 *)((long)param_2 + 2) + sVar14;
        iVar1 = *(int *)(param_1 + 0x1c);
        goto joined_r0x002df9dc;
      }
    }
    else {
      bVar2 = *PTR_DAT_043730c0;
      pbVar8 = PTR_DAT_043730c0;
      if ((bVar2 & 1) == 0) goto LAB_002df98c;
LAB_002df96c:
      sVar14 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar14 < 0x80) goto LAB_002df990;
    }
    param_2 = (undefined1 *)FUN_003112b4(param_3,7,pbVar8,param_2);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
joined_r0x002df9dc:
  if (iVar1 != 8) {
    iVar1 = *(int *)(param_1 + 0x1c);
    goto joined_r0x002dfc3c;
  }
  pbVar8 = *(byte **)(param_1 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    sVar14 = (size_t)(*pbVar8 >> 1);
LAB_002dfa00:
    if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x42;
      param_2[1] = (char)sVar14;
      pbVar12 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar12 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar12,sVar14);
      param_2 = param_2 + 2 + sVar14;
      iVar1 = *(int *)(param_1 + 0x1c);
      goto joined_r0x002dfc3c;
    }
  }
  else {
    sVar14 = *(size_t *)(pbVar8 + 8);
    if ((long)sVar14 < 0x80) goto LAB_002dfa00;
  }
  param_2 = (undefined1 *)FUN_003112b4(param_3,8,pbVar8,param_2);
  iVar1 = *(int *)(param_1 + 0x1c);
joined_r0x002dfc3c:
  if (iVar1 == 9) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x10);
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
          puVar7 = param_2;
          uVar3 = uVar10 >> 7;
          puVar7[-1] = (byte)uVar10 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar10 >> 0xe;
          uVar10 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_002e0a30(lVar6,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar1 == 10) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_00310ec4(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x10);
    *param_2 = 0x52;
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
          puVar7 = param_2;
          uVar3 = uVar10 >> 7;
          puVar7[-1] = (byte)uVar10 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar10 >> 0xe;
          uVar10 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_002e12d8(lVar6,param_2,param_3);
    uVar11 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar11 = *(ulong *)(param_1 + 8);
  }
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      __src = (void *)(uVar11 + 9);
      uVar9 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    else {
      uVar9 = *(ulong *)(uVar11 + 0x10);
      __src = *(void **)(uVar11 + 0x18);
    }
    sVar14 = (size_t)(int)uVar9;
    if (*param_3 - (long)param_2 < (long)sVar14) {
      puVar7 = (undefined1 *)FUN_00310fe4(param_3,__src,uVar9,param_2);
      return puVar7;
    }
    memcpy(param_2,__src,sVar14);
    param_2 = param_2 + sVar14;
  }
  return param_2;
}


