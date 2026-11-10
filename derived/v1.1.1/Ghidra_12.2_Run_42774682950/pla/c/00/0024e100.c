/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024e100; name: FUN_0024e100
 */


void FUN_0024e100(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_a0;
  char local_9c [4];
  char *local_98;
  uint local_58;
  char local_54 [4];
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x9c);
  if (uVar1 == 0) {
    return;
  }
  fVar12 = (float)FUN_0024f550(param_1,&local_a0,param_2);
  pfVar8 = *(float **)(param_1 + 0x150);
  uVar3 = *(ushort *)(param_1 + 0x114);
  uVar7 = (uint)uVar3;
  fVar14 = *pfVar8;
  if (((uVar3 ^ 0xffff) & 0x9000) == 0) {
    if (pfVar8[7] == 2.8026e-45) {
      fVar14 = (fVar14 + pfVar8[1]) - fVar12 * local_a0;
    }
    else if (pfVar8[7] == 1.4013e-45) {
      fVar14 = fVar14 + (pfVar8[1] - fVar12 * local_a0) * 0.5;
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
  pcVar9 = *(char **)(param_1 + 0xd8);
  uVar11 = 0;
LAB_0024e228:
  do {
    pcVar10 = pcVar9;
    if (((uVar7 ^ 0xffffffff) & 0x9000) == 0) {
      while (pcVar9 = (char *)(**(code **)(*param_2 + 0x70))(param_2,local_9c,pcVar10),
            local_9c[0] == '\0') {
        bVar4 = pcVar9 <= pcVar10;
        pcVar10 = pcVar9;
        if (bVar4 || (char *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112)) <
                     pcVar9) {
          return;
        }
      }
      local_54[0] = '\0';
      local_54[1] = '\0';
      local_54[2] = '\0';
      local_54[3] = '\0';
      local_98 = pcVar10;
      nn::util::PickOutCharacterFromUtf8String(local_54,&local_98);
      local_58 = 0;
      nn::util::ConvertCharacterUtf8ToUtf32(&local_58,local_54);
      uVar7 = local_58;
      if (pcVar9 == (char *)0x0) {
        return;
      }
      fVar15 = *(float *)(param_1 + 0xf8);
      iVar5 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x20))();
      iVar6 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))(*(long **)(param_1 + 0xf0),uVar7);
      fVar15 = (fVar15 / (float)iVar5) * (*(float *)(param_1 + 0x104) + (float)iVar6);
      fVar13 = fVar12 * fVar15 * 0.5;
LAB_0024e2fc:
      fVar14 = fVar14 + fVar13;
    }
    else {
      if ((~uVar7 & 0x3000) == 0) {
        fVar14 = fVar12 * 0.5 + fVar14;
      }
      else {
        if ((uVar7 >> 9 & 1) != 0) {
          while (pcVar9 = (char *)(**(code **)(*param_2 + 0x70))(param_2,local_9c,pcVar10),
                local_9c[0] == '\0') {
            bVar4 = pcVar9 <= pcVar10;
            pcVar10 = pcVar9;
            if (bVar4 || (char *)(*(long *)(param_1 + 0xd8) + (ulong)*(ushort *)(param_1 + 0x112)) <
                         pcVar9) {
              return;
            }
          }
          local_54[0] = '\0';
          local_54[1] = '\0';
          local_54[2] = '\0';
          local_54[3] = '\0';
          local_98 = pcVar10;
          nn::util::PickOutCharacterFromUtf8String(local_54,&local_98);
          local_58 = 0;
          nn::util::ConvertCharacterUtf8ToUtf32(&local_58,local_54);
          if (pcVar9 == (char *)0x0) {
            return;
          }
          iVar5 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x80))
                            (*(long **)(param_1 + 0xf0),local_58);
          fVar15 = *(float *)(param_1 + 0x104) + (float)iVar5;
          if ((*(byte *)(param_1 + 0x115) >> 4 & 1) == 0) {
            if (uVar11 != 0) {
              fVar13 = fVar12 * fVar15;
              goto LAB_0024e2fc;
            }
          }
          else {
            fVar14 = fVar14 + fVar12 * fVar15 * 0.5;
          }
          goto LAB_0024e324;
        }
        fVar14 = fVar12 * (float)(uVar11 & 0xffffffff) + **(float **)(param_1 + 0x150);
      }
      fVar15 = 0.0;
    }
LAB_0024e324:
    FUN_0024f29c(fVar14,param_1,*(long *)(*(long *)(param_1 + 0x150) + 8) + uVar11 * 0x34);
    uVar7 = (uint)*(ushort *)(param_1 + 0x114);
    if (((uVar7 ^ 0xffffffff) & 0x9000) == 0) {
LAB_0024e3b4:
      fVar14 = fVar14 + fVar12 * fVar15 * 0.5;
LAB_0024e3c0:
      uVar11 = uVar11 + 1;
      if (uVar11 == uVar1) {
        return;
      }
      goto LAB_0024e228;
    }
    if ((~uVar7 & 0x3000) != 0) {
      if (((uVar7 ^ 0xffffffff) & 0x1200) == 0) goto LAB_0024e3b4;
      goto LAB_0024e3c0;
    }
    fVar14 = fVar12 * 0.5 + fVar14;
    uVar11 = uVar11 + 1;
    if (uVar11 == uVar1) {
      return;
    }
  } while( true );
}


