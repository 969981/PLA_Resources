/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1f930; name: FUN_01f1f930
 */


void FUN_01f1f930(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_8;
  float local_4;
  
  lVar4 = *(long *)(param_2 + 0x40);
  bVar3 = true;
  if (lVar4 < 0x2208c8f97f5bff6d) {
    if (lVar4 < -0x3b833644f85d819e) {
      if (((lVar4 != -0x7d221732069b6fa1) && (lVar4 != -0x730a4df14d6436b4)) &&
         (lVar4 != -0x64bd20e1c4608922)) goto LAB_01f1fa80;
    }
    else if ((lVar4 != -0x3749e69e0ba5a179) && (lVar4 != -0x3b833644f85d819e)) {
LAB_01f1fa80:
      bVar3 = false;
    }
  }
  else if (lVar4 < 0x66c9187234b2b4e1) {
    if ((lVar4 != 0x2208c8f97f5bff6d) && (lVar4 != 0x311437a7ba604481)) goto LAB_01f1fa80;
  }
  else if ((lVar4 != 0x66c9187234b2b4e1) &&
          ((lVar4 != 0x72e3be5f50a3f4de && (lVar4 != 0x73e0a8677bef8b0b)))) goto LAB_01f1fa80;
  bVar1 = false;
  if (lVar4 < 0x5d486426e00af3fc) {
    if (((lVar4 != -0x730a4df14d6436b4) && (lVar4 != -0x730a14f14d63d5d9)) &&
       (lVar4 != 0x2208c8f97f5bff6d)) goto LAB_01f1fb04;
  }
  else if (lVar4 != 0x5d486426e00af3fc) {
LAB_01f1fb04:
    bVar1 = true;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  bVar2 = false;
  if (lVar4 < 0x4c6cadd419973531) {
    if ((lVar4 == -0x568b134c514d985f) || (lVar4 == -0x5be9f1ae26d98a45)) goto LAB_01f1fb90;
  }
  else if ((lVar4 == 0x4c6cadd419973531) || (lVar4 == 0x73e0a8677bef8b0b)) goto LAB_01f1fb90;
  bVar2 = true;
LAB_01f1fb90:
  fVar7 = *(float *)(param_2 + 0x48);
  pfVar6 = (float *)(param_1 + 0x48);
  fVar8 = *pfVar6;
  if (bVar1) {
    fVar9 = fVar7 * fVar8;
    if (!bVar3) {
      fVar9 = fVar7 + fVar8;
    }
    *pfVar6 = fVar9;
    if (bVar2) {
      fVar7 = *(float *)(param_2 + 0x4c) * *(float *)(param_1 + 0x4c);
      if (!bVar3) {
        fVar7 = *(float *)(param_2 + 0x4c) + *(float *)(param_1 + 0x4c);
      }
      *(float *)(param_1 + 0x4c) = fVar7;
      fVar7 = *(float *)(param_2 + 0x50) * *(float *)(param_1 + 0x50);
      if (!bVar3) {
        fVar7 = *(float *)(param_2 + 0x50) + *(float *)(param_1 + 0x50);
      }
      *(float *)(param_1 + 0x50) = fVar7;
      fVar8 = *(float *)(param_2 + 0x54) + *(float *)(param_1 + 0x54);
      fVar7 = *(float *)(param_2 + 0x54) * *(float *)(param_1 + 0x54);
    }
    else {
      pfVar5 = &local_8;
      if (fVar9 <= 1.0) {
        pfVar5 = pfVar6;
      }
      local_8 = 1.0;
      local_4 = 0.0;
      if (fVar9 < 0.0) {
        pfVar5 = &local_4;
      }
      *(float *)(param_1 + 0x48) = *pfVar5;
      pfVar6 = (float *)(param_1 + 0x4c);
      fVar7 = *(float *)(param_2 + 0x4c) * *pfVar6;
      if (!bVar3) {
        fVar7 = *(float *)(param_2 + 0x4c) + *pfVar6;
      }
      *pfVar6 = fVar7;
      local_8 = 1.0;
      local_4 = 0.0;
      pfVar5 = &local_8;
      if (fVar7 <= 1.0) {
        pfVar5 = pfVar6;
      }
      if (fVar7 < 0.0) {
        pfVar5 = &local_4;
      }
      *(float *)(param_1 + 0x4c) = *pfVar5;
      pfVar6 = (float *)(param_1 + 0x50);
      fVar7 = *(float *)(param_2 + 0x50) * *pfVar6;
      if (!bVar3) {
        fVar7 = *(float *)(param_2 + 0x50) + *pfVar6;
      }
      *pfVar6 = fVar7;
      local_8 = 1.0;
      local_4 = 0.0;
      pfVar5 = &local_8;
      if (fVar7 <= 1.0) {
        pfVar5 = pfVar6;
      }
      if (fVar7 < 0.0) {
        pfVar5 = &local_4;
      }
      *(float *)(param_1 + 0x50) = *pfVar5;
      fVar8 = *(float *)(param_2 + 0x54) + *(float *)(param_1 + 0x54);
      fVar7 = *(float *)(param_2 + 0x54) * *(float *)(param_1 + 0x54);
    }
    if (!bVar3) {
      fVar7 = fVar8;
    }
    *(float *)(param_1 + 0x54) = fVar7;
    return;
  }
  if (bVar3) {
    fVar7 = fVar7 * fVar8;
    pfVar5 = &local_8;
    if (fVar7 <= 1.0) {
      pfVar5 = pfVar6;
    }
    *(float *)(param_1 + 0x48) = fVar7;
    local_8 = 1.0;
    local_4 = 0.0;
    if (fVar7 < 0.0) {
      pfVar5 = &local_4;
    }
    *(float *)(param_1 + 0x48) = *pfVar5;
    pfVar5 = (float *)(param_1 + 0x4c);
    fVar7 = *(float *)(param_2 + 0x4c) * *pfVar5;
    *pfVar5 = fVar7;
    local_8 = 1.0;
    local_4 = 0.0;
    pfVar6 = &local_8;
    if (fVar7 <= 1.0) {
      pfVar6 = pfVar5;
    }
    if (fVar7 < 0.0) {
      pfVar6 = &local_4;
    }
    *(float *)(param_1 + 0x4c) = *pfVar6;
    pfVar5 = (float *)(param_1 + 0x50);
    fVar7 = *(float *)(param_2 + 0x50) * *pfVar5;
    *pfVar5 = fVar7;
    pfVar6 = &local_8;
    if (fVar7 <= 1.0) {
      pfVar6 = pfVar5;
    }
    local_8 = 1.0;
    local_4 = 0.0;
    if (fVar7 < 0.0) {
      pfVar6 = &local_4;
    }
    *(float *)(param_1 + 0x50) = *pfVar6;
    fVar7 = *(float *)(param_2 + 0x54) * *(float *)(param_1 + 0x54);
  }
  else {
    fVar7 = fVar7 + fVar8;
    pfVar5 = &local_8;
    if (fVar7 <= 1.0) {
      pfVar5 = pfVar6;
    }
    *(float *)(param_1 + 0x48) = fVar7;
    local_8 = 1.0;
    local_4 = 0.0;
    if (fVar7 < 0.0) {
      pfVar5 = &local_4;
    }
    *(float *)(param_1 + 0x48) = *pfVar5;
    pfVar5 = (float *)(param_1 + 0x4c);
    fVar7 = *(float *)(param_2 + 0x4c) + *pfVar5;
    *pfVar5 = fVar7;
    local_8 = 1.0;
    local_4 = 0.0;
    pfVar6 = &local_8;
    if (fVar7 <= 1.0) {
      pfVar6 = pfVar5;
    }
    if (fVar7 < 0.0) {
      pfVar6 = &local_4;
    }
    *(float *)(param_1 + 0x4c) = *pfVar6;
    pfVar5 = (float *)(param_1 + 0x50);
    fVar7 = *(float *)(param_2 + 0x50) + *pfVar5;
    *pfVar5 = fVar7;
    pfVar6 = &local_8;
    if (fVar7 <= 1.0) {
      pfVar6 = pfVar5;
    }
    local_8 = 1.0;
    local_4 = 0.0;
    if (fVar7 < 0.0) {
      pfVar6 = &local_4;
    }
    *(float *)(param_1 + 0x50) = *pfVar6;
    fVar7 = *(float *)(param_2 + 0x54) + *(float *)(param_1 + 0x54);
  }
  pfVar5 = (float *)(param_1 + 0x54);
  *pfVar5 = fVar7;
  local_8 = 1.0;
  local_4 = 0.0;
  pfVar6 = &local_8;
  if (fVar7 <= 1.0) {
    pfVar6 = pfVar5;
  }
  if (fVar7 < 0.0) {
    pfVar6 = &local_4;
  }
  *pfVar5 = *pfVar6;
  return;
}


