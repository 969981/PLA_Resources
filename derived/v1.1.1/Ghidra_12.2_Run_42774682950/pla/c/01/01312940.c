/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01312940; name: FUN_01312940
 */


void FUN_01312940(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_38;
  float local_24;
  
  lVar6 = *(long *)(param_1 + 0x5c0);
  lVar8 = *(long *)(lVar6 + 0x78);
  local_38 = 0x41d8000000000000;
  uVar7 = *(undefined8 *)(lVar6 + 0x114);
  if (*(char *)(param_1 + 0x1e08) != '\0') {
    if (*(char *)(lVar6 + 0x110) == '\0') {
      if (*(char *)(lVar8 + 8) != '\0') {
        iVar4 = *(int *)(lVar6 + 0x84);
        iVar5 = FUN_0131a338();
        if (iVar5 == 7) {
          if (iVar4 != 5) goto LAB_01312bb0;
        }
        else if (iVar4 != iVar5) goto LAB_01312bb0;
        if (*(int *)(lVar8 + 0xc) < 7) {
          lVar6 = (long)*(int *)(lVar8 + 0xc) * 0x10;
          fVar9 = *(float *)(&DAT_03a7ac58 + lVar6);
          fVar10 = *(float *)(&DAT_03a7ac50 + lVar6);
          fVar11 = *(float *)(&DAT_03a7ac5c + lVar6);
          fVar12 = *(float *)(&DAT_03a7ac54 + lVar6);
          local_24 = (float)*(undefined8 *)(lVar8 + 0x10);
          fVar13 = (float)*(undefined8 *)(lVar8 + 0x18);
          pfVar2 = (float *)(&DAT_03a7ac58 + lVar6);
          if (local_24 <= fVar9) {
            pfVar2 = &local_24;
          }
          pfVar1 = (float *)(&DAT_03a7ac50 + lVar6);
          if (fVar10 <= local_24) {
            pfVar1 = pfVar2;
          }
          local_24 = fVar13;
          pfVar2 = (float *)(&DAT_03a7ac5c + lVar6);
          if (fVar13 <= fVar11) {
            pfVar2 = &local_24;
          }
          pfVar3 = (float *)(&DAT_03a7ac54 + lVar6);
          if (fVar12 <= fVar13) {
            pfVar3 = pfVar2;
          }
          fVar9 = ((*pfVar1 - fVar10) / (fVar9 - fVar10)) * 2000.0 + -1000.0;
          fVar10 = 1027.0 - ((*pfVar3 - fVar12) / (fVar11 - fVar12)) * 2000.0;
        }
        else {
          fVar10 = 0.0;
          fVar9 = 0.0;
        }
        local_38 = CONCAT44(fVar10,fVar9);
      }
    }
    else {
      local_38 = uVar7;
      if (*(char *)(lVar6 + 0x11c) != '\0') {
        *(undefined8 *)(param_1 + 0x1e28) = *(undefined8 *)(lVar6 + 0x120);
        FUN_01312c38(param_1,&local_38,0);
        return;
      }
    }
LAB_01312bb0:
    FUN_01312c38(param_1,&local_38,1);
    return;
  }
  if (*(char *)(lVar6 + 0x110) == '\0') {
    if (*(char *)(lVar8 + 8) == '\0') goto LAB_01312ab4;
    iVar4 = *(int *)(lVar6 + 0x84);
    iVar5 = FUN_0131a338();
    if (iVar5 == 7) {
      if (iVar4 != 5) goto LAB_01312ab4;
    }
    else if (iVar4 != iVar5) goto LAB_01312ab4;
    if (*(int *)(lVar8 + 0xc) < 7) {
      lVar6 = (long)*(int *)(lVar8 + 0xc) * 0x10;
      fVar9 = *(float *)(&DAT_03a7ac58 + lVar6);
      fVar10 = *(float *)(&DAT_03a7ac50 + lVar6);
      fVar11 = *(float *)(&DAT_03a7ac5c + lVar6);
      fVar12 = *(float *)(&DAT_03a7ac54 + lVar6);
      local_24 = (float)*(undefined8 *)(lVar8 + 0x10);
      fVar13 = (float)*(undefined8 *)(lVar8 + 0x18);
      pfVar2 = (float *)(&DAT_03a7ac58 + lVar6);
      if (local_24 <= fVar9) {
        pfVar2 = &local_24;
      }
      pfVar1 = (float *)(&DAT_03a7ac50 + lVar6);
      if (fVar10 <= local_24) {
        pfVar1 = pfVar2;
      }
      local_24 = fVar13;
      pfVar2 = (float *)(&DAT_03a7ac5c + lVar6);
      if (fVar13 <= fVar11) {
        pfVar2 = &local_24;
      }
      pfVar3 = (float *)(&DAT_03a7ac54 + lVar6);
      if (fVar12 <= fVar13) {
        pfVar3 = pfVar2;
      }
      fVar9 = ((*pfVar1 - fVar10) / (fVar9 - fVar10)) * 2000.0 + -1000.0;
      fVar10 = 1027.0 - ((*pfVar3 - fVar12) / (fVar11 - fVar12)) * 2000.0;
    }
    else {
      fVar10 = 0.0;
      fVar9 = 0.0;
    }
  }
  else {
    fVar9 = (float)uVar7;
    fVar10 = (float)((ulong)uVar7 >> 0x20);
  }
  local_38 = CONCAT44(((fVar10 + -1027.0) / 2000.0) * 936.0 + 495.0,
                      ((fVar9 + 1000.0) / 2000.0) * 936.0 + -468.0);
LAB_01312ab4:
  FUN_01312d60(param_1,&local_38);
  return;
}


