/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024e46c; name: FUN_0024e46c
 */


void FUN_0024e46c(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_94;
  char local_58 [4];
  char local_54 [4];
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x9c);
  if (uVar1 == 0) {
    return;
  }
  fVar12 = (float)FUN_0024f7b0(param_1,&local_94,param_2);
  pfVar8 = *(float **)(param_1 + 0x150);
  uVar3 = *(ushort *)(param_1 + 0x114);
  uVar7 = (uint)uVar3;
  fVar14 = *pfVar8;
  if (((uVar3 ^ 0xffff) & 0x9000) == 0) {
    if (pfVar8[7] == 2.8026e-45) {
      fVar14 = (fVar14 + pfVar8[1]) - fVar12 * local_94;
    }
    else if (pfVar8[7] == 1.4013e-45) {
      fVar14 = fVar14 + (pfVar8[1] - fVar12 * local_94) * 0.5;
    }
  }
  else if ((~uVar3 & 0x3000) == 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x148) + 0x9c);
    if (pfVar8[7] == 2.8026e-45) {
      fVar14 = (fVar14 + pfVar8[1]) - pfVar8[6] * (float)uVar2;
    }
    else if (pfVar8[7] == 1.4013e-45) {
      fVar14 = fVar14 + (pfVar8[1] - pfVar8[6] * (float)uVar2) * 0.5;
    }
  }
  puVar9 = *(undefined2 **)(param_1 + 0xd8);
  uVar11 = 0;
  puVar10 = puVar9;
  if (((uVar3 ^ 0xffff) & 0x9000) == 0) goto LAB_0024e5c0;
LAB_0024e60c:
  if ((~uVar7 & 0x3000) == 0) {
    fVar14 = fVar12 * 0.5 + fVar14;
  }
  else {
    puVar10 = puVar9;
    if ((uVar7 >> 9 & 1) != 0) {
      while (puVar9 = (undefined2 *)(**(code **)(*param_2 + 0x70))(param_2,local_58,puVar10),
            local_58[0] == '\0') {
        if (puVar9 <= puVar10) {
          return;
        }
        puVar10 = puVar9;
        if ((undefined2 *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112) * 2) <
            puVar9) {
          return;
        }
      }
      if (puVar9 == (undefined2 *)0x0) {
        return;
      }
      iVar5 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))(*(long **)(param_1 + 0xf0),*puVar10)
      ;
      fVar15 = *(float *)(param_1 + 0x104) + (float)iVar5;
      if ((*(byte *)(param_1 + 0x115) >> 4 & 1) == 0) {
        if (uVar11 != 0) {
          fVar13 = fVar12 * fVar15;
          goto LAB_0024e670;
        }
      }
      else {
        fVar14 = fVar14 + fVar12 * fVar15 * 0.5;
      }
      goto LAB_0024e698;
    }
    fVar14 = fVar12 * (float)(uVar11 & 0xffffffff) + **(float **)(param_1 + 0x150);
  }
  fVar15 = 0.0;
LAB_0024e698:
  do {
    FUN_0024f29c(fVar14,param_1,*(long *)(*(long *)(param_1 + 0x150) + 8) + uVar11 * 0x34);
    uVar7 = (uint)*(ushort *)(param_1 + 0x114);
    if (((uVar7 ^ 0xffffffff) & 0x9000) == 0) {
LAB_0024e5a0:
      fVar14 = fVar14 + fVar12 * fVar15 * 0.5;
    }
    else if ((~uVar7 & 0x3000) == 0) {
      fVar14 = fVar12 * 0.5 + fVar14;
    }
    else if (((uVar7 ^ 0xffffffff) & 0x1200) == 0) goto LAB_0024e5a0;
    if (uVar11 + 1 == (ulong)uVar1) {
      return;
    }
    uVar11 = uVar11 + 1;
    puVar10 = puVar9;
    if (((uVar7 ^ 0xffffffff) & 0x9000) != 0) goto LAB_0024e60c;
LAB_0024e5c0:
    while (puVar9 = (undefined2 *)(**(code **)(*param_2 + 0x70))(param_2,local_54,puVar10),
          local_54[0] == '\0') {
      if (puVar9 <= puVar10) {
        return;
      }
      puVar10 = puVar9;
      if ((undefined2 *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112) * 2) <
          puVar9) {
        return;
      }
    }
    if (puVar9 == (undefined2 *)0x0) {
      return;
    }
    fVar15 = *(float *)(param_1 + 0xf8);
    uVar4 = *puVar10;
    iVar5 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x20))();
    iVar6 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))(*(long **)(param_1 + 0xf0),uVar4);
    fVar15 = (fVar15 / (float)iVar5) * (*(float *)(param_1 + 0x104) + (float)iVar6);
    fVar13 = fVar12 * fVar15 * 0.5;
LAB_0024e670:
    fVar14 = fVar14 + fVar13;
  } while( true );
}


