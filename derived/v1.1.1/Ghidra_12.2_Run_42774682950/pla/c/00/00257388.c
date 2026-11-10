/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00257388; name: FUN_00257388
 */


void FUN_00257388(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  fVar13 = 0.0;
  iVar2 = *(int *)(param_1 + 0xd4);
  fVar14 = 0.0;
  if (iVar2 != 1) {
    fVar14 = *(float *)(param_1 + 0x54) * 0.5;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (puVar1 == puVar9) {
    lVar10 = 0;
    lVar8 = 0;
  }
  else {
    fVar13 = 0.0;
    bVar12 = false;
    lVar8 = 0;
    lVar10 = 0;
    puVar11 = puVar9;
    do {
      local_78 = 0;
      local_70 = 0.0;
      local_68 = 0;
      uVar6 = FUN_00257660(puVar11 + -1,&local_78);
      if ((uVar6 & 1) != 0) {
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (puVar7 = *(undefined8 **)(param_1 + 0x28), puVar7 != puVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_002574b8:
            if (puVar7 != puVar11) goto LAB_00257404;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_00257404;
LAB_002574b4:
              puVar7 = (undefined8 *)*puVar1;
              goto LAB_002574b8;
            }
            if (puVar7 != puVar11) goto LAB_002574b4;
          }
          local_70 = 0.0;
          local_78 = local_78 & 0xffffffff00000000;
        }
LAB_00257404:
        fVar5 = fVar14 - local_78._4_4_;
        if (!bVar12) {
          fVar5 = fVar14;
        }
        if (!bVar12) {
          fVar13 = fVar13 - local_78._4_4_;
        }
        fVar13 = fVar13 + local_78._4_4_ + (float)local_78;
        *(byte *)(puVar11 + 10) = *(byte *)(puVar11 + 10) | 0x10;
        fVar14 = fVar5 - (float)local_78;
        if (!bVar12) {
          lVar8 = local_68;
        }
        *(float *)((long)puVar11 + 0x2c) = (fVar5 + (float)local_78 * -0.5) - local_70;
        lVar10 = local_68;
        bVar12 = true;
      }
      puVar11 = (undefined8 *)puVar11[1];
    } while (puVar1 != puVar11);
    iVar2 = *(int *)(param_1 + 0xd4);
  }
  if ((iVar2 == 1) && (puVar1 != puVar9)) {
    bVar3 = *(byte *)(puVar9 + 10);
    while( true ) {
      if (((bVar3 & 1) == 0) || (uVar6 = FUN_00244c1c(puVar9 + -1), (uVar6 & 1) != 0)) {
        puVar9 = (undefined8 *)puVar9[1];
      }
      else {
        *(byte *)(puVar9 + 10) = *(byte *)(puVar9 + 10) | 0x10;
        *(float *)((long)puVar9 + 0x2c) = fVar13 * 0.5 + *(float *)((long)puVar9 + 0x2c);
        puVar9 = (undefined8 *)puVar9[1];
      }
      if (puVar1 == puVar9) break;
      bVar3 = *(byte *)(puVar9 + 10);
    }
  }
  if (*(char *)(param_1 + 0xdc) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xd4) != 1) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      return;
    }
    fVar13 = *(float *)(param_1 + 0x54) - fVar13;
    bVar4 = *(byte *)(lVar10 + 0x5b) >> 2 & 3;
    bVar3 = *(byte *)(lVar10 + 0x58) | 0x10;
    *(byte *)(lVar10 + 0x58) = bVar3;
    *(float *)(lVar10 + 0x54) = fVar13;
    if (bVar4 == 2) {
      fVar13 = *(float *)(lVar10 + 0x34) - fVar13;
    }
    else {
      if (bVar4 != 0) {
        return;
      }
      fVar13 = *(float *)(lVar10 + 0x34) + fVar13 * -0.5;
    }
    *(float *)(lVar10 + 0x34) = fVar13;
    *(byte *)(lVar10 + 0x58) = bVar3;
    return;
  }
  fVar13 = (*(float *)(param_1 + 0x54) - fVar13) * 0.5;
  bVar3 = *(byte *)(lVar10 + 0x58) | 0x10;
  *(byte *)(lVar10 + 0x58) = bVar3;
  bVar4 = *(byte *)(lVar10 + 0x5b) >> 2 & 3;
  *(float *)(lVar10 + 0x54) = fVar13;
  fVar14 = fVar13;
  if (bVar4 != 2) {
    if (bVar4 != 0) goto LAB_002575e4;
    fVar14 = fVar13 * 0.5;
  }
  *(float *)(lVar10 + 0x34) = *(float *)(lVar10 + 0x34) - fVar14;
  *(byte *)(lVar10 + 0x58) = bVar3;
LAB_002575e4:
  bVar4 = *(byte *)(lVar8 + 0x5b) >> 2 & 3;
  bVar3 = *(byte *)(lVar8 + 0x58) | 0x10;
  *(float *)(lVar8 + 0x54) = fVar13;
  *(byte *)(lVar8 + 0x58) = bVar3;
  if (bVar4 != 1) {
    if (bVar4 != 0) {
      return;
    }
    fVar13 = fVar13 * 0.5;
  }
  *(float *)(lVar8 + 0x34) = fVar13 + *(float *)(lVar8 + 0x34);
  *(byte *)(lVar8 + 0x58) = bVar3;
  return;
}


