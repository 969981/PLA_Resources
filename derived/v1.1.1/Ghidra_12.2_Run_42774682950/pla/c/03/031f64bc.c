/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f64bc; name: FUN_031f64bc
 */


void FUN_031f64bc(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  
  fVar13 = (float)FUN_031f6140(param_2,param_1);
  if (*(char *)(param_1 + 0x28) == -2) {
    uVar12 = *param_2;
    *(undefined8 *)(param_1 + 0x18) = param_2[1];
    *(undefined8 *)(param_1 + 0x10) = uVar12;
    uVar12 = param_2[2];
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 0x20) = uVar12;
    FUN_031f58c0(param_2,&local_50);
    if (fVar13 < 0.0) {
      *(undefined8 *)(param_1 + 0x20) = 0xbf800000bf800000;
    }
    FUN_031f6068(param_2,param_1,local_60);
    *(undefined8 *)(param_1 + 0x30) = local_60[0];
    *(undefined8 *)(param_1 + 0x38) = local_60[0];
    return;
  }
  if (*(float *)(param_1 + 0x20) < 0.0) {
    return;
  }
  if (*(float *)(param_1 + 0x24) < 0.0) {
    return;
  }
  if (fVar13 < 0.0) {
LAB_031f679c:
    *(undefined8 *)(param_1 + 0x20) = 0xbf800000bf800000;
  }
  else {
    if (fVar13 == 0.0) {
      return;
    }
    local_48 = param_2[1];
    local_50 = *param_2;
    lVar1 = param_1 + 0x10;
    FUN_031f5d88(param_2,local_60);
    FUN_031f5a70(lVar1,&local_50,&local_50);
    FUN_031f5a70(lVar1,local_60,local_60);
    FUN_031f6380(lVar1,param_1,&local_50,&local_68);
    FUN_031f6380(lVar1,param_1,local_60,&local_70);
    iVar2 = (int)*(char *)(param_2 + 3) >> 1;
    bVar5 = *(byte *)(param_1 + 0x28);
    iVar11 = 1;
    if ((bVar5 & 1) != 0) {
      iVar11 = 2;
    }
    FUN_031f5e90(lVar1,&local_74,&local_78,&local_7c,&local_80);
    FUN_031f6068(lVar1,param_1,&local_88);
    if (iVar2 == (int)*(char *)(param_1 + 0x28) >> 1) {
      if (*(char *)(param_1 + 0x28) != *(char *)(param_2 + 3)) goto LAB_031f679c;
      if (local_74 <= local_68) {
        local_74 = local_68;
      }
      if (local_78 <= local_64) {
        local_78 = local_64;
      }
      if (local_70 <= local_7c) {
        local_7c = local_70;
      }
      if (local_6c <= local_80) {
        local_80 = local_6c;
      }
    }
    else {
      fVar13 = *(float *)(param_1 + 0x38);
      iVar11 = (iVar11 + ((int)(char)bVar5 >> 1)) % 3;
      if (fVar13 == local_88) {
        bVar8 = *(float *)(param_1 + 0x3c) != local_84;
        if (iVar11 != iVar2) goto LAB_031f6744;
LAB_031f66f4:
        fVar15 = local_68;
        if (local_70 <= local_68) {
          fVar15 = local_70;
        }
        fVar14 = local_68;
        if (local_68 <= local_70) {
          fVar14 = local_70;
        }
        if (local_74 <= fVar15) {
          local_74 = fVar15;
        }
        if (fVar14 <= local_7c) {
          local_7c = fVar14;
        }
        if (bVar8) {
          bVar8 = local_88 < fVar13;
          bVar10 = NAN(local_68) || NAN(local_88);
          bVar9 = local_68 == local_88;
          bVar7 = local_68 < local_88;
LAB_031f6790:
          if (bVar8 != (!bVar9 && bVar7 == bVar10)) goto LAB_031f679c;
        }
      }
      else {
        bVar8 = true;
        if (iVar11 == iVar2) goto LAB_031f66f4;
LAB_031f6744:
        fVar15 = local_64;
        if (local_6c <= local_64) {
          fVar15 = local_6c;
        }
        fVar14 = local_64;
        if (local_64 <= local_6c) {
          fVar14 = local_6c;
        }
        if (local_78 <= fVar15) {
          local_78 = fVar15;
        }
        if (fVar14 <= local_80) {
          local_80 = fVar14;
        }
        if (bVar8) {
          bVar8 = local_84 < *(float *)(param_1 + 0x3c);
          bVar7 = false;
          bVar9 = false;
          bVar10 = true;
          if (!NAN(local_64) && !NAN(local_84)) {
            bVar7 = local_64 < local_84;
            bVar9 = local_64 == local_84;
            bVar10 = false;
          }
          goto LAB_031f6790;
        }
      }
      pfVar3 = &local_68;
      pfVar6 = &local_70;
      if (0.0 < (local_70 - local_88) * (local_64 - local_84) -
                (local_68 - local_88) * (local_6c - local_84)) {
        pfVar3 = &local_70;
        pfVar6 = &local_68;
      }
      fVar15 = *pfVar6;
      fVar14 = pfVar6[1];
      fVar4 = pfVar3[1];
      if ((local_88 - *(float *)(param_1 + 0x30)) * (fVar4 - *(float *)(param_1 + 0x34)) -
          (*pfVar3 - *(float *)(param_1 + 0x30)) * (local_84 - *(float *)(param_1 + 0x34)) <= 0.0) {
        *(float *)(param_1 + 0x30) = *pfVar3;
        *(float *)(param_1 + 0x34) = fVar4;
      }
      if ((fVar13 - local_88) * (fVar14 - local_84) -
          (fVar15 - local_88) * (*(float *)(param_1 + 0x3c) - local_84) <= 0.0) {
        *(float *)(param_1 + 0x38) = fVar15;
        *(float *)(param_1 + 0x3c) = fVar14;
      }
    }
    FUN_031f5f84(local_74,local_78,local_7c,local_80,lVar1);
  }
  return;
}


