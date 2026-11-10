/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315eecc; name: FUN_0315eecc
 */


/* WARNING: Removing unreachable block (ram,0x0315f01c) */
/* WARNING: Removing unreachable block (ram,0x0315f08c) */

void FUN_0315eecc(float param_1,float param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  byte local_140 [255];
  undefined1 local_41;
  
  puVar2 = PTR_PTR_0434a080;
  fVar8 = *(float *)(param_3 + 0x1c);
  if (param_2 < fVar8 + 0.001) {
    *(undefined4 *)(param_3 + 0x58) = 0;
    if ((-1 < (int)*(uint *)(param_3 + 0x5c)) && (*(long *)(param_3 + 0x50) != 0)) {
      FUN_032cf244(puVar2,*(long *)(param_3 + 0x50),2,*(uint *)(param_3 + 0x5c) & 0x3fffffff);
    }
    *(undefined8 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x5c) = 0x80000000;
    *(undefined4 *)(param_3 + 0x40) = 0;
    if ((-1 < (int)*(uint *)(param_3 + 0x44)) && (*(long *)(param_3 + 0x38) != 0)) {
      FUN_032cf244(puVar2,*(long *)(param_3 + 0x38),1,*(uint *)(param_3 + 0x44) & 0x3fffffff);
    }
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined4 *)(param_3 + 0x44) = 0x80000000;
    *(undefined4 *)(param_3 + 0x68) = 0;
    if ((-1 < (int)*(uint *)(param_3 + 0x6c)) && (*(long *)(param_3 + 0x60) != 0)) {
      FUN_032cf244(puVar2,*(long *)(param_3 + 0x60),1,*(uint *)(param_3 + 0x6c) & 0x3fffffff);
    }
    *(undefined8 *)(param_3 + 0x60) = 0;
    *(undefined4 *)(param_3 + 0x6c) = 0x80000000;
    return;
  }
  fVar8 = (param_1 - fVar8) / (param_2 - fVar8);
  if (8.45466e+06 < fVar8) {
    FUN_0315e684(param_3);
    return;
  }
  lVar6 = 1;
  local_140[0] = 0;
  local_41 = 0xff;
  do {
    fVar7 = (float)FUN_032c8fd0(fVar8 * (float)(int)lVar6);
    iVar3 = (int)fVar7;
    if (0xfd < iVar3) {
      iVar3 = 0xfe;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    local_140[lVar6] = (byte)iVar3;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xff);
  uVar1 = *(uint *)(param_3 + 0x40);
  if (0 < (int)uVar1) {
    lVar6 = *(long *)(param_3 + 0x38);
    if (uVar1 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        pbVar5 = (byte *)(lVar6 + lVar4);
        lVar4 = lVar4 + 2;
        *pbVar5 = local_140[*pbVar5];
        pbVar5[1] = local_140[pbVar5[1]];
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar4);
      if ((uVar1 & 1) == 0) goto LAB_0315f068;
    }
    *(byte *)(lVar6 + lVar4) = local_140[*(byte *)(lVar6 + lVar4)];
  }
LAB_0315f068:
  uVar1 = *(uint *)(param_3 + 0x68);
  if (0 < (int)uVar1) {
    lVar6 = *(long *)(param_3 + 0x60);
    if (uVar1 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        pbVar5 = (byte *)(lVar6 + lVar4);
        lVar4 = lVar4 + 2;
        *pbVar5 = local_140[*pbVar5];
        pbVar5[1] = local_140[pbVar5[1]];
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar4);
      if ((uVar1 & 1) == 0) goto LAB_0315f0d8;
    }
    *(byte *)(lVar6 + lVar4) = local_140[*(byte *)(lVar6 + lVar4)];
  }
LAB_0315f0d8:
  uVar1 = *(uint *)(param_3 + 0x58);
  if (0 < (int)uVar1) {
    lVar6 = *(long *)(param_3 + 0x50);
    if (uVar1 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      pbVar5 = (byte *)(lVar6 + 3);
      do {
        lVar4 = lVar4 + 2;
        pbVar5[-2] = local_140[pbVar5[-2]];
        *pbVar5 = local_140[*pbVar5];
        pbVar5 = pbVar5 + 4;
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar4);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    lVar6 = lVar6 + lVar4 * 2;
    *(byte *)(lVar6 + 1) = local_140[*(byte *)(lVar6 + 1)];
  }
  return;
}


