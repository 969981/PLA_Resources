/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00256748; name: FUN_00256748
 */


void FUN_00256748(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  fVar12 = 0.0;
  iVar2 = *(int *)(param_1 + 0xd4);
  fVar13 = 0.0;
  if (iVar2 != 1) {
    fVar13 = *(float *)(param_1 + 0x50) * -0.5;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (puVar1 == puVar7) {
    lVar8 = 0;
    lVar6 = 0;
  }
  else {
    fVar12 = 0.0;
    bVar10 = false;
    lVar6 = 0;
    lVar8 = 0;
    puVar9 = puVar7;
    do {
      local_78 = 0;
      local_70 = 0.0;
      local_68 = 0;
      uVar4 = FUN_00256a10(puVar9 + -1,&local_78);
      if ((uVar4 & 1) != 0) {
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (puVar5 = *(undefined8 **)(param_1 + 0x28), puVar5 != puVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_00256878:
            if (puVar5 != puVar9) goto LAB_002567c4;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_002567c4;
LAB_00256874:
              puVar5 = (undefined8 *)*puVar1;
              goto LAB_00256878;
            }
            if (puVar5 != puVar9) goto LAB_00256874;
          }
          local_70 = 0.0;
          local_78 = local_78 & 0xffffffff00000000;
        }
LAB_002567c4:
        fVar11 = fVar13 + local_78._4_4_;
        if (!bVar10) {
          fVar11 = fVar13;
        }
        if (!bVar10) {
          fVar12 = fVar12 - local_78._4_4_;
        }
        fVar12 = fVar12 + local_78._4_4_ + (float)local_78;
        *(byte *)(puVar9 + 10) = *(byte *)(puVar9 + 10) | 0x10;
        fVar13 = fVar11 + (float)local_78;
        if (!bVar10) {
          lVar6 = local_68;
        }
        *(float *)(puVar9 + 5) = (fVar11 + (float)local_78 * 0.5) - local_70;
        lVar8 = local_68;
        bVar10 = true;
      }
      puVar9 = (undefined8 *)puVar9[1];
    } while (puVar1 != puVar9);
    iVar2 = *(int *)(param_1 + 0xd4);
  }
  if ((iVar2 == 1) && (puVar1 != puVar7)) {
    bVar3 = *(byte *)(puVar7 + 10);
    while( true ) {
      if (((bVar3 & 1) == 0) || (uVar4 = FUN_00244c1c(puVar7 + -1), (uVar4 & 1) != 0)) {
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        *(byte *)(puVar7 + 10) = *(byte *)(puVar7 + 10) | 0x10;
        *(float *)(puVar7 + 5) = *(float *)(puVar7 + 5) - fVar12 * 0.5;
        puVar7 = (undefined8 *)puVar7[1];
      }
      if (puVar1 == puVar7) break;
      bVar3 = *(byte *)(puVar7 + 10);
    }
  }
  if (*(char *)(param_1 + 0xdc) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xd4) != 1) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      return;
    }
    fVar12 = *(float *)(param_1 + 0x50) - fVar12;
    bVar3 = *(byte *)(lVar8 + 0x58) | 0x10;
    *(byte *)(lVar8 + 0x58) = bVar3;
    *(float *)(lVar8 + 0x50) = fVar12;
    if ((*(byte *)(lVar8 + 0x5b) & 3) != 2) {
      if ((*(byte *)(lVar8 + 0x5b) & 3) != 0) {
        return;
      }
      fVar12 = fVar12 * 0.5;
    }
    *(float *)(lVar8 + 0x30) = fVar12 + *(float *)(lVar8 + 0x30);
    *(byte *)(lVar8 + 0x58) = bVar3;
    return;
  }
  fVar13 = (*(float *)(param_1 + 0x50) - fVar12) * 0.5;
  bVar3 = *(byte *)(lVar8 + 0x58) | 0x10;
  *(byte *)(lVar8 + 0x58) = bVar3;
  *(float *)(lVar8 + 0x50) = fVar13;
  fVar12 = fVar13;
  if ((*(byte *)(lVar8 + 0x5b) & 3) != 2) {
    if ((*(byte *)(lVar8 + 0x5b) & 3) != 0) goto LAB_002569a0;
    fVar12 = fVar13 * 0.5;
  }
  *(float *)(lVar8 + 0x30) = fVar12 + *(float *)(lVar8 + 0x30);
  *(byte *)(lVar8 + 0x58) = bVar3;
LAB_002569a0:
  bVar3 = *(byte *)(lVar6 + 0x58) | 0x10;
  *(float *)(lVar6 + 0x50) = fVar13;
  *(byte *)(lVar6 + 0x58) = bVar3;
  if ((*(byte *)(lVar6 + 0x5b) & 3) == 1) {
    fVar13 = *(float *)(lVar6 + 0x30) - fVar13;
  }
  else {
    if ((*(byte *)(lVar6 + 0x5b) & 3) != 0) {
      return;
    }
    fVar13 = *(float *)(lVar6 + 0x30) + fVar13 * -0.5;
  }
  *(float *)(lVar6 + 0x30) = fVar13;
  *(byte *)(lVar6 + 0x58) = bVar3;
  return;
}


