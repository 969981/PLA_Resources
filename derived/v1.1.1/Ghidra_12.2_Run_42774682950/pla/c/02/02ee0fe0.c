/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee0fe0; name: FUN_02ee0fe0
 */


undefined8
FUN_02ee0fe0(undefined8 param_1,undefined4 *param_2,float *param_3,float *param_4,long *param_5,
            int *param_6,uint param_7,uint param_8)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  
  fVar17 = (float)param_1;
  if (param_3 != (float *)0x0) {
    pfVar6 = param_3;
    if (*param_3 != fVar17) goto LAB_02ee102c;
    bVar2 = false;
LAB_02ee1048:
    puVar9 = *(undefined8 **)(param_2 + 0x10);
    if (puVar9 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      puVar13 = puVar9;
      do {
        if (((((puVar13[4] == *param_5) && (*(int *)(puVar13 + 5) == (int)param_5[1])) &&
             (*(int *)(puVar13 + 6) == (int)param_5[2])) &&
            ((*(char *)(puVar13 + 7) == (char)param_5[3] &&
             (*(char *)(puVar13 + 8) == (char)param_5[4])))) && (puVar13[9] == param_5[5])) {
          puVar11 = (undefined8 *)(param_2 + 0x10);
          if (puVar9 != puVar13) {
            puVar11 = puVar10 + 1;
          }
          *puVar11 = puVar13[1];
          lVar7 = puVar13[2];
          *puVar13 = &PTR_LAB_042aaa60;
          if (lVar7 == 0) goto LAB_02ee133c;
          puVar10 = *(undefined8 **)(lVar7 + 0x28);
          uVar8 = *(uint *)(lVar7 + 0x30);
          puVar9 = puVar10 + uVar8;
          if ((uVar8 == 0) || ((undefined8 *)*puVar10 == puVar13)) goto joined_r0x02ee1370;
          lVar12 = (ulong)uVar8 * 8;
          puVar11 = puVar10;
          goto LAB_02ee13b8;
        }
        puVar11 = puVar13 + 1;
        puVar10 = puVar13;
        puVar13 = (undefined8 *)*puVar11;
      } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
    }
    if (!bVar2 && (param_7 & 1) == 0) {
      return 1;
    }
    goto LAB_02ee105c;
  }
  if (param_4 == (float *)0x0) {
    pfVar6 = (float *)(param_2 + 4);
  }
  else {
    pfVar6 = param_4;
  }
LAB_02ee102c:
  fVar14 = *pfVar6;
  iVar5 = param_2[5];
  if ((iVar5 != 0) && ((char)param_6[2] == '\0')) {
    if (iVar5 == 1) {
      if (fVar14 < fVar17) {
        fVar15 = (float)param_2[6];
        if (fVar15 != 0.0) {
          fVar16 = fVar17 - fVar14;
          goto LAB_02ee1158;
        }
      }
      else {
        fVar15 = (float)param_2[7];
        if (fVar15 != 0.0) {
          fVar16 = fVar14 - fVar17;
LAB_02ee1158:
          fVar15 = (fVar16 * 1000.0) / fVar15;
          goto LAB_02ee1168;
        }
      }
LAB_02ee118c:
      iVar5 = 0;
    }
    else {
      if (iVar5 != 2) goto LAB_02ee118c;
      if (fVar17 <= fVar14) {
        fVar15 = (float)param_2[7];
      }
      else {
        fVar15 = (float)param_2[6];
      }
      fVar15 = fVar15 * 1000.0;
LAB_02ee1168:
      iVar5 = (int)fVar15;
    }
    if (iVar5 < *param_6) {
      iVar5 = *param_6;
    }
    *param_6 = iVar5;
  }
  if (*param_6 < 1) {
    bVar2 = true;
    goto LAB_02ee1048;
  }
  if (param_3 != (float *)0x0) goto LAB_02ee11a4;
  if (param_5[5] == 0) {
    if ((int)param_5[1] == 0) {
      if (*param_5 != 0) {
        lVar7 = *param_5 + 0x18;
        puVar4 = auStack_60;
        goto LAB_02ee122c;
      }
    }
    else {
      uVar3 = FUN_02edd98c(DAT_0440a170,(int)param_5[1],*param_2);
      if ((uVar3 & 1) == 0) goto LAB_02ee1240;
    }
LAB_02ee11a4:
    uVar3 = FUN_02ee13f4(fVar14,param_1,param_2,param_5,param_6,param_7 & 1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    goto LAB_02ee105c;
  }
  lVar7 = param_5[5] + 0x1b8;
  puVar4 = auStack_5c;
LAB_02ee122c:
  lVar7 = FUN_02eddc48(fVar14,lVar7,*param_2,puVar4);
  if (lVar7 != 0) goto LAB_02ee11a4;
LAB_02ee1240:
  if (param_4 == (float *)0x0) {
    param_4 = (float *)(param_2 + 4);
  }
  if ((param_7 & 1) != 0) {
    return 1;
  }
  fVar14 = *param_4;
  if (param_5[5] == 0) {
    if ((int)param_5[1] != 0) {
      uVar3 = FUN_02edd98c(DAT_0440a170,(int)param_5[1],*param_2);
      uVar3 = uVar3 & 1;
      goto joined_r0x02ee12bc;
    }
    if (*param_5 != 0) {
      lVar7 = *param_5 + 0x18;
      puVar4 = auStack_58;
      goto LAB_02ee1274;
    }
  }
  else {
    lVar7 = param_5[5] + 0x1b8;
    puVar4 = auStack_54;
LAB_02ee1274:
    uVar3 = FUN_02eddc48(lVar7,*param_2,puVar4);
joined_r0x02ee12bc:
    if (uVar3 == 0) {
      return 1;
    }
  }
  param_3 = (float *)FUN_02ee1b20(param_2 + 8,param_5);
  if (param_3 == (float *)0x0) {
    return 1;
  }
  goto LAB_02ee1068;
  while (puVar10 = puVar11 + 1, puVar1 = puVar11 + 1, puVar11 = puVar10,
        (undefined8 *)*puVar1 != puVar13) {
LAB_02ee13b8:
    lVar12 = lVar12 + -8;
    if (lVar12 == 0) goto LAB_02ee133c;
  }
joined_r0x02ee1370:
  if (puVar9 != puVar10) {
    if (1 < uVar8) {
      *puVar10 = puVar9[-1];
      uVar8 = *(uint *)(lVar7 + 0x30);
    }
    *(uint *)(lVar7 + 0x30) = uVar8 - 1;
    if (uVar8 - 1 == 0) {
      *(undefined4 *)(lVar7 + 0x3c) = 6;
    }
  }
LAB_02ee133c:
  (*DAT_0442d150)(0);
  if (!bVar2 && (param_7 & 1) == 0) {
    return 1;
  }
LAB_02ee105c:
  if (param_3 == (float *)0x0) goto LAB_02ee1240;
  fVar14 = *param_3;
  if ((param_7 & 1) != 0) {
    FUN_02edf018(param_2 + 8,param_5);
    goto joined_r0x02ee12d4;
  }
LAB_02ee1068:
  *param_3 = fVar17;
joined_r0x02ee12d4:
  if (fVar14 != fVar17) {
    FUN_02ee1bec(fVar14,param_1,param_2,param_5,param_8 & 1);
  }
  return 1;
}


