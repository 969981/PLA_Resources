/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec4330; name: FUN_02ec4330
 */


void FUN_02ec4330(long param_1,uint param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 *local_68;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    fVar21 = *(float *)(param_1 + 0x18);
    *(float *)(param_3 + 0x10) = fVar21;
    fVar20 = *(float *)(param_1 + 0x18);
    uVar9 = *(uint *)(param_1 + 0x1c);
    uVar16 = *(uint *)(param_1 + 4) & 0xfffffffc;
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar3 = *(uint *)(param_1 + 0x2c);
    uVar4 = uVar9 >> 1;
    uVar14 = *(int *)(param_1 + 8) + uVar16;
    uVar13 = *(int *)(param_1 + 0xc) - param_2;
    if (0.0 < fVar20) {
      fVar23 = *(float *)(param_1 + 0x20);
      if ((fVar23 <= fVar20) || (fVar23 <= 0.0)) {
        iVar18 = uVar4 + (int)(((fVar20 - fVar23) * (float)uVar4) / (1.0 - fVar23));
      }
      else {
        iVar18 = (int)((fVar20 * (float)uVar4) / fVar23);
      }
      uVar13 = iVar18 + uVar13;
      uVar14 = iVar18 + uVar14;
    }
    lVar6 = 0x18;
    if (uVar13 != 0) {
      lVar6 = 0x10;
    }
    fVar20 = *(float *)(param_1 + lVar6);
    uVar10 = uVar16 - uVar13;
    if (uVar13 <= uVar16 && uVar10 != 0) {
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      if (param_2 <= uVar10) {
        uVar10 = param_2;
      }
      uVar13 = uVar10 + uVar13;
      param_2 = param_2 - uVar10;
      *(float *)(param_3 + 0x10) = fVar21;
    }
    uVar10 = uVar4 + uVar16;
    if (uVar14 <= uVar4 + uVar16) {
      uVar10 = uVar14;
    }
    uVar8 = uVar10 - uVar13;
    if (uVar13 <= uVar10 && uVar8 != 0) {
      if (uVar4 == 0) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = *(float *)(param_1 + 0x20) / (float)uVar4;
      }
      uVar11 = param_2;
      if (uVar8 <= param_2) {
        uVar11 = uVar8;
      }
      uVar13 = uVar11 + uVar13;
      fVar21 = fVar20 + (float)uVar11 * fVar21;
      param_2 = param_2 - uVar11;
      *(float *)(param_3 + 0x10) = fVar21;
      fVar20 = fVar21;
    }
    uVar9 = (uVar9 & 0xfffffffe) + uVar16;
    if (uVar14 <= uVar9) {
      uVar9 = uVar14;
    }
    uVar8 = uVar9 - uVar13;
    if (uVar13 <= uVar9 && uVar8 != 0) {
      if (uVar4 == 0) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = (1.0 - *(float *)(param_1 + 0x20)) / (float)uVar4;
      }
      uVar11 = param_2;
      if (uVar8 <= param_2) {
        uVar11 = uVar8;
      }
      uVar13 = uVar11 + uVar13;
      fVar21 = fVar20 + (float)uVar11 * fVar21;
      param_2 = param_2 - uVar11;
      *(float *)(param_3 + 0x10) = fVar21;
      fVar20 = fVar21;
    }
    uVar8 = uVar9 + uVar2;
    uVar11 = uVar8;
    if (uVar14 <= uVar8) {
      uVar11 = uVar14;
    }
    uVar12 = uVar11 - uVar13;
    if (uVar13 <= uVar11 && uVar12 != 0) {
      if (uVar2 == 0) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = (*(float *)(param_1 + 0x24) + -1.0) / (float)uVar2;
      }
      uVar5 = param_2;
      if (uVar12 <= param_2) {
        uVar5 = uVar12;
      }
      uVar13 = uVar5 + uVar13;
      fVar21 = fVar20 + (float)uVar5 * fVar21;
      param_2 = param_2 - uVar5;
      *(float *)(param_3 + 0x10) = fVar21;
      fVar20 = fVar21;
    }
    fVar23 = *(float *)(param_1 + 0x24);
    uVar12 = uVar8 - uVar14;
    if (uVar8 < uVar14 || uVar12 == 0) {
      uVar16 = 0;
    }
    else {
      if (uVar4 == 0) {
        fVar24 = 1.0;
      }
      else {
        fVar24 = (*(float *)(param_1 + 0x20) * (float)(uVar10 - uVar16) +
                 (float)(uVar9 - uVar10) * (1.0 - *(float *)(param_1 + 0x20))) / (float)uVar4;
      }
      if (fVar24 - fVar23 <= 0.0) {
        uVar16 = 0;
        fVar23 = fVar24;
      }
      else {
        fVar24 = fVar23 - fVar24;
        fVar26 = 0.0;
        if (uVar2 == 0) {
          fVar25 = 0.0;
          uVar16 = 0;
        }
        else {
          fVar25 = (fVar23 + -1.0) / (float)uVar2;
          if (fVar25 == 0.0) {
            uVar16 = 0;
          }
          else {
            uVar16 = (uint)(fVar24 / fVar25);
          }
        }
        if (uVar16 <= uVar12) {
          uVar12 = uVar16;
        }
        uVar16 = uVar3;
        if (uVar12 <= uVar3) {
          uVar16 = uVar12;
        }
        uVar16 = uVar16 >> 1;
        if (uVar3 != 0) {
          fVar26 = -fVar23 / (float)uVar3;
        }
        fVar26 = fVar26 * (float)uVar16;
        fVar23 = fVar23 - fVar26;
        uVar2 = (uVar16 + uVar11) - uVar13;
        if (uVar13 <= uVar16 + uVar11 && uVar2 != 0) {
          if (uVar16 == 0) {
            fVar21 = 0.0;
          }
          else {
            fVar21 = (fVar24 + ((float)uVar9 - (float)uVar11) * fVar25 + fVar26) / (float)uVar16;
          }
          uVar9 = param_2;
          if (uVar2 <= param_2) {
            uVar9 = uVar2;
          }
          uVar13 = uVar9 + uVar13;
          fVar21 = fVar20 + (float)uVar9 * fVar21;
          param_2 = param_2 - uVar9;
          *(float *)(param_3 + 0x10) = fVar21;
          fVar20 = fVar21;
        }
      }
    }
    uVar2 = param_2;
    if ((int)(uVar14 - uVar13) <= (int)param_2) {
      uVar2 = uVar14 - uVar13;
    }
    if (0 < (int)uVar2) {
      fVar20 = *(float *)(param_1 + 0x24);
      if (fVar21 <= fVar20) {
        fVar21 = fVar20;
      }
      uVar13 = uVar2 + uVar13;
      param_2 = param_2 - uVar2;
      *(float *)(param_3 + 0x10) = fVar21;
    }
    uVar3 = uVar3 - uVar16;
    uVar14 = uVar3 + uVar14;
    uVar16 = uVar14 - uVar13;
    if (uVar13 <= uVar14 && uVar16 != 0) {
      if (uVar3 == 0) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = -fVar23 / (float)uVar3;
      }
      uVar2 = param_2;
      if (uVar16 <= param_2) {
        uVar2 = uVar16;
      }
      uVar13 = uVar2 + uVar13;
      fVar21 = fVar20 + (float)uVar2 * fVar21;
      param_2 = param_2 - uVar2;
      *(float *)(param_3 + 0x10) = fVar21;
      fVar20 = fVar21;
    }
    if ((param_2 != 0) && (uVar14 <= uVar13)) {
      fVar20 = 0.0;
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      *(undefined4 *)(param_3 + 8) = 3;
      *(float *)(param_3 + 0x10) = fVar21;
    }
    *(float *)(param_3 + 0xc) = fVar20;
    return;
  }
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  fVar21 = *(float *)(param_1 + 0x18);
  pfVar19 = (float *)(param_3 + 0x10);
  *pfVar19 = fVar21;
  uVar16 = *(uint *)(param_1 + 4) & 0xfffffffc;
  uVar2 = (*(uint *)(param_1 + 0x1c) >> 1) + 2 & 0xfffffffc;
  iVar18 = *(int *)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x2c);
  fVar20 = *(float *)(param_1 + 0x18);
  uVar14 = (*(int *)(param_1 + 8) + 2U & 0xfffffffc) + uVar16;
  uVar13 = *(int *)(param_1 + 0xc) - param_2;
  if (0.0 < fVar20) {
    fVar23 = *(float *)(param_1 + 0x20);
    if ((fVar23 <= fVar20) || (fVar23 <= 0.0)) {
      iVar15 = uVar2 + (int)(((fVar20 - fVar23) * (float)uVar2) / (1.0 - fVar23));
    }
    else {
      iVar15 = (int)((fVar20 * (float)uVar2) / fVar23);
    }
    uVar3 = iVar15 + 2U & 0xfffffffc;
    uVar13 = uVar3 + uVar13;
    uVar14 = uVar3 + uVar14;
  }
  lVar6 = 0x18;
  if (uVar13 != 0) {
    lVar6 = 0x10;
  }
  uVar22 = (ulong)*(uint *)(param_1 + lVar6);
  uVar3 = uVar16 - uVar13;
  local_68 = param_4;
  if (uVar13 <= uVar16 && uVar3 != 0) {
    if (param_2 <= uVar3) {
      uVar3 = param_2;
    }
    puVar1 = (undefined8 *)((long)param_4 + (ulong)uVar3 * 4);
    if (uVar3 != 0) {
      puVar17 = puVar1;
      if (puVar1 <= param_4 + 2) {
        puVar17 = param_4 + 2;
      }
      local_68 = param_4;
      memset(param_4,0,(long)puVar17 + ~(ulong)param_4 + 0x10 & 0xfffffffffffffff0);
      fVar21 = *pfVar19;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    uVar13 = uVar3 + uVar13;
    param_2 = param_2 - uVar3;
    *pfVar19 = fVar21;
    local_68 = puVar1;
  }
  uVar3 = uVar2 + uVar16;
  if (uVar14 <= uVar2 + uVar16) {
    uVar3 = uVar14;
  }
  uVar9 = uVar3 - uVar13;
  if (uVar13 <= uVar3 && uVar9 != 0) {
    if (uVar2 == 0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = *(float *)(param_1 + 0x20) / (float)uVar2;
    }
    uVar4 = param_2;
    if (uVar9 <= param_2) {
      uVar4 = uVar9;
    }
    uVar22 = FUN_02ec4be0(uVar22,fVar21,&local_68,uVar4,pfVar19);
    uVar13 = uVar4 + uVar13;
    param_2 = param_2 - uVar4;
  }
  uVar9 = uVar16 + uVar2 * 2;
  uVar4 = iVar18 + 2U & 0xfffffffc;
  if (uVar14 <= uVar9) {
    uVar9 = uVar14;
  }
  uVar10 = uVar9 - uVar13;
  if (!(uVar9 < uVar13 || uVar10 == 0)) {
    if (uVar2 == 0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = (1.0 - *(float *)(param_1 + 0x20)) / (float)uVar2;
    }
    uVar8 = param_2;
    if (uVar10 <= param_2) {
      uVar8 = uVar10;
    }
    uVar22 = FUN_02ec4be0(uVar22,fVar21,&local_68,uVar8,pfVar19);
    uVar13 = uVar8 + uVar13;
    param_2 = param_2 - uVar8;
  }
  uVar10 = uVar9 + uVar4;
  uVar8 = uVar10;
  if (uVar14 <= uVar10) {
    uVar8 = uVar14;
  }
  uVar11 = uVar8 - uVar13;
  if (uVar13 <= uVar8 && uVar11 != 0) {
    if (uVar4 == 0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = (*(float *)(param_1 + 0x24) + -1.0) / (float)uVar4;
    }
    uVar12 = param_2;
    if (uVar11 <= param_2) {
      uVar12 = uVar11;
    }
    uVar22 = FUN_02ec4be0(uVar22,fVar21,&local_68,uVar12,pfVar19);
    uVar13 = uVar12 + uVar13;
    param_2 = param_2 - uVar12;
  }
  fVar21 = *(float *)(param_1 + 0x24);
  uVar11 = iVar7 + 2U & 0xfffffffc;
  uVar12 = uVar10 - uVar14;
  if (uVar10 < uVar14 || uVar12 == 0) {
    uVar16 = 0;
  }
  else {
    if (uVar2 == 0) {
      fVar20 = 1.0;
    }
    else {
      fVar20 = (*(float *)(param_1 + 0x20) * (float)(uVar3 - uVar16) +
               (float)(uVar9 - uVar3) * (1.0 - *(float *)(param_1 + 0x20))) / (float)uVar2;
    }
    if (fVar20 - fVar21 <= 0.0) {
      uVar16 = 0;
      fVar21 = fVar20;
    }
    else {
      fVar20 = fVar21 - fVar20;
      if (uVar4 == 0) {
        uVar16 = 0;
        fVar23 = 0.0;
      }
      else {
        fVar23 = (fVar21 + -1.0) / (float)uVar4;
        if (fVar23 == 0.0) {
          uVar16 = 0;
        }
        else {
          uVar16 = (uint)(fVar20 / fVar23);
        }
      }
      if (uVar16 <= uVar12) {
        uVar12 = uVar16;
      }
      uVar16 = uVar11;
      if (uVar12 <= uVar11) {
        uVar16 = uVar12;
      }
      uVar16 = (uVar16 >> 1) + 2 & 0xfffffffc;
      fVar24 = 0.0;
      if (uVar11 != 0) {
        fVar24 = -fVar21 / (float)uVar11;
      }
      fVar24 = fVar24 * (float)uVar16;
      fVar21 = fVar21 - fVar24;
      uVar2 = (uVar16 + uVar8) - uVar13;
      if (uVar13 <= uVar16 + uVar8 && uVar2 != 0) {
        if (uVar16 == 0) {
          fVar20 = 0.0;
        }
        else {
          fVar20 = (fVar20 + ((float)uVar9 - (float)uVar8) * fVar23 + fVar24) / (float)uVar16;
        }
        uVar3 = param_2;
        if (uVar2 <= param_2) {
          uVar3 = uVar2;
        }
        uVar22 = FUN_02ec4be0(uVar22,fVar20,&local_68,uVar3,pfVar19);
        uVar13 = uVar3 + uVar13;
        param_2 = param_2 - uVar3;
      }
    }
  }
  uVar2 = param_2;
  if ((int)(uVar14 - uVar13) <= (int)param_2) {
    uVar2 = uVar14 - uVar13;
  }
  if (0 < (int)uVar2) {
    fVar20 = *(float *)(param_1 + 0x24);
    uVar22 = (ulong)(uint)fVar20;
    puVar1 = (undefined8 *)((long)local_68 + (ulong)uVar2 * 4);
    do {
      puVar17 = local_68 + 2;
      local_68[1] = CONCAT44(fVar20,fVar20);
      *local_68 = CONCAT44(fVar20,fVar20);
      local_68 = puVar17;
    } while (puVar17 < puVar1);
    fVar23 = *pfVar19;
    if (*pfVar19 <= fVar20) {
      fVar23 = fVar20;
    }
    uVar13 = uVar2 + uVar13;
    param_2 = param_2 - uVar2;
    *pfVar19 = fVar23;
    local_68 = puVar1;
  }
  uVar11 = uVar11 - uVar16;
  uVar14 = uVar11 + uVar14;
  uVar16 = uVar14 - uVar13;
  if (uVar13 <= uVar14 && uVar16 != 0) {
    if (uVar11 == 0) {
      fVar21 = 0.0;
    }
    else {
      fVar21 = -fVar21 / (float)uVar11;
    }
    uVar2 = param_2;
    if (uVar16 <= param_2) {
      uVar2 = uVar16;
    }
    uVar22 = FUN_02ec4be0(uVar22,fVar21,&local_68,uVar2,pfVar19);
    uVar13 = uVar2 + uVar13;
    param_2 = param_2 - uVar2;
  }
  uVar27 = (undefined4)uVar22;
  if ((param_2 != 0) && (uVar14 <= uVar13)) {
    puVar1 = (undefined8 *)((long)local_68 + (ulong)param_2 * 4);
    if (puVar1 <= local_68 + 2) {
      puVar1 = local_68 + 2;
    }
    memset(local_68,0,(long)puVar1 + ~(ulong)local_68 + 0x10 & 0xfffffffffffffff0);
    fVar21 = *(float *)(param_3 + 0x10);
    uVar27 = 0;
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    *(float *)(param_3 + 0x10) = fVar21;
    *(undefined4 *)(param_3 + 8) = 3;
  }
  *(undefined4 *)(param_3 + 0xc) = uVar27;
  return;
}


