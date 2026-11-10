/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb5de4; name: FUN_02eb5de4
 */


undefined8
FUN_02eb5de4(long param_1,long param_2,float *param_3,long *param_4,long *param_5,long param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  float fVar16;
  float fVar17;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  uint local_48;
  int local_44;
  
  fVar16 = param_3[0x20];
  uVar11 = (uint)param_1;
  if ((((uint)fVar16 >> 6 & 1) == 0) || (-1 < *(char *)(param_1 + 0x28))) {
    if (((uint)fVar16 & 1) != 0) goto LAB_02eb5e2c;
LAB_02eb5e34:
    if (((uint)fVar16 >> 2 & 1) == 0) goto LAB_02eb5e40;
LAB_02eb5e38:
    if ((*(byte *)(param_1 + 0x28) >> 2 & 1) == 0) goto LAB_02eb5e40;
    uVar12 = *(uint *)(DAT_0440a160 + 4);
    fVar17 = 0.0;
    if (uVar12 != 0) {
      uVar3 = 0;
      if (uVar12 != 0) {
        uVar3 = (uVar11 + 2) / uVar12;
      }
      for (plVar5 = *(long **)(DAT_0440a160[3] + (ulong)((uVar11 + 2) - uVar3 * uVar12) * 8);
          plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if ((*plVar5 == param_1) && ((int)plVar5[1] == 2)) {
          if (*(int *)((long)plVar5 + 0x4c) == 3) {
            fVar17 = (float)FUN_02eb1180(DAT_0440a160,plVar5,param_5);
          }
          else {
            fVar17 = (float)FUN_02eb1334();
          }
          break;
        }
      }
    }
    fVar16 = param_3[0x20];
    param_3[1] = param_3[1] + fVar17;
    if (((uint)fVar16 >> 3 & 1) != 0) goto LAB_02eb5e44;
LAB_02eb5e4c:
    if (((uint)fVar16 >> 4 & 1) == 0) goto LAB_02eb5e58;
LAB_02eb5e50:
    if ((*(byte *)(param_1 + 0x28) >> 4 & 1) == 0) goto LAB_02eb5e58;
    uVar12 = *(uint *)(DAT_0440a160 + 4);
    fVar16 = 0.0;
    if (uVar12 != 0) {
      uVar3 = 0;
      if (uVar12 != 0) {
        uVar3 = (uVar11 + 4) / uVar12;
      }
      for (plVar5 = *(long **)(DAT_0440a160[3] + (ulong)((uVar11 + 4) - uVar3 * uVar12) * 8);
          plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if ((*plVar5 == param_1) && ((int)plVar5[1] == 4)) {
          if (*(int *)((long)plVar5 + 0x4c) == 3) {
            fVar16 = (float)FUN_02eb1180(DAT_0440a160,plVar5,param_5);
          }
          else {
            fVar16 = (float)FUN_02eb1334();
          }
          break;
        }
      }
    }
    param_3[3] = param_3[3] + fVar16;
    uVar12 = *(uint *)(param_1 + 0x38);
  }
  else {
    uVar12 = *(uint *)(DAT_0440a160 + 4);
    fVar17 = 0.0;
    if (uVar12 != 0) {
      uVar3 = 0;
      if (uVar12 != 0) {
        uVar3 = (uVar11 + 7) / uVar12;
      }
      for (plVar5 = *(long **)(DAT_0440a160[3] + (ulong)((uVar11 + 7) - uVar3 * uVar12) * 8);
          plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if ((*plVar5 == param_1) && ((int)plVar5[1] == 7)) {
          if (*(int *)((long)plVar5 + 0x4c) == 3) {
            fVar17 = (float)FUN_02eb1180(DAT_0440a160,plVar5,param_5);
          }
          else {
            fVar17 = (float)FUN_02eb1334();
          }
          break;
        }
      }
    }
    fVar16 = param_3[0x20];
    param_3[5] = param_3[5] + fVar17;
    if (((uint)fVar16 & 1) == 0) goto LAB_02eb5e34;
LAB_02eb5e2c:
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto LAB_02eb5e34;
    uVar12 = *(uint *)(DAT_0440a160 + 4);
    fVar17 = 0.0;
    if (uVar12 != 0) {
      uVar3 = 0;
      if (uVar12 != 0) {
        uVar3 = uVar11 / uVar12;
      }
      for (plVar5 = *(long **)(DAT_0440a160[3] + (ulong)(uVar11 - uVar3 * uVar12) * 8);
          plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if ((*plVar5 == param_1) && ((int)plVar5[1] == 0)) {
          if (*(int *)((long)plVar5 + 0x4c) == 3) {
            fVar17 = (float)FUN_02eb1180(DAT_0440a160,plVar5,param_5);
          }
          else {
            fVar17 = (float)FUN_02eb1334();
          }
          break;
        }
      }
    }
    fVar16 = param_3[0x20];
    *param_3 = *param_3 + fVar17;
    if (((uint)fVar16 >> 2 & 1) != 0) goto LAB_02eb5e38;
LAB_02eb5e40:
    if (((uint)fVar16 >> 3 & 1) == 0) goto LAB_02eb5e4c;
LAB_02eb5e44:
    if ((*(byte *)(param_1 + 0x28) >> 3 & 1) == 0) goto LAB_02eb5e4c;
    uVar12 = *(uint *)(DAT_0440a160 + 4);
    fVar16 = 0.0;
    if (uVar12 != 0) {
      uVar3 = 0;
      if (uVar12 != 0) {
        uVar3 = (uVar11 + 3) / uVar12;
      }
      for (plVar5 = *(long **)(DAT_0440a160[3] + (ulong)((uVar11 + 3) - uVar3 * uVar12) * 8);
          plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if ((*plVar5 == param_1) && ((int)plVar5[1] == 3)) {
          if (*(int *)((long)plVar5 + 0x4c) == 3) {
            fVar16 = (float)FUN_02eb1180(DAT_0440a160,plVar5,param_5);
          }
          else {
            fVar16 = (float)FUN_02eb1334();
          }
          break;
        }
      }
    }
    param_3[2] = param_3[2] + fVar16;
    if (((uint)param_3[0x20] >> 4 & 1) != 0) goto LAB_02eb5e50;
LAB_02eb5e58:
    uVar12 = *(uint *)(param_1 + 0x38);
  }
  if (uVar12 == 0) goto LAB_02eb5f98;
  piVar7 = *(int **)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x20);
  if ((uVar3 == 0) || (*piVar7 == *(int *)(param_2 + 0x10))) {
    piVar15 = piVar7;
  }
  else {
    lVar10 = (ulong)uVar3 * 0x38;
    piVar9 = piVar7;
    do {
      lVar10 = lVar10 + -0x38;
      if (lVar10 == 0) {
        piVar15 = piVar7 + (ulong)uVar3 * 0xe;
        break;
      }
      piVar15 = piVar9 + 0xe;
      piVar1 = piVar9 + 0xe;
      piVar9 = piVar15;
    } while (*piVar1 != *(int *)(param_2 + 0x10));
  }
  if (*(long *)(piVar15 + 6) == 0) goto LAB_02eb5f98;
  local_80 = *param_5;
  lStack_78 = param_5[1];
  local_70 = param_5[2];
  lStack_68 = param_5[3];
  local_60 = param_5[4];
  lStack_58 = param_5[5];
  uVar3 = *(uint *)(DAT_0440a160 + 1);
  if (uVar3 != 0) {
    uVar14 = 0;
    if (uVar3 != 0) {
      uVar14 = uVar12 / uVar3;
    }
    for (puVar8 = *(uint **)(*DAT_0440a160 + (ulong)(uVar12 - uVar14 * uVar3) * 8);
        puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 2)) {
      if (*puVar8 == uVar12) {
        puVar8 = (uint *)FUN_02eb14e4(puVar8 + 8,&local_80);
        if (puVar8 == (uint *)0x0) goto LAB_02eb6000;
        local_48 = *puVar8;
        goto LAB_02eb5f10;
      }
    }
  }
  uVar4 = FUN_02ede964(uVar12,&local_80,&local_48);
  if ((uVar4 & 1) == 0) {
LAB_02eb6000:
    local_48 = 0;
    uVar12 = *(uint *)(DAT_0440a160 + 1);
    if (uVar12 != 0) {
      uVar3 = *(uint *)(param_1 + 0x38);
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar3 / uVar12;
      }
      for (puVar8 = *(uint **)(*DAT_0440a160 + (ulong)(uVar3 - uVar14 * uVar12) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 2)) {
        if (*puVar8 == uVar3) {
          local_48 = puVar8[4];
          break;
        }
      }
    }
    uVar12 = 0;
  }
  else {
LAB_02eb5f10:
    uVar12 = (uint)(local_80 != 0);
  }
  local_44 = piVar15[10];
  fVar16 = (float)FUN_02e74568(local_48,piVar15 + 6,&local_44);
  piVar15[10] = local_44;
  if ((uVar12 == 0) && (fVar16 == 1.0)) goto LAB_02eb5f98;
  plVar6 = (long *)*param_4;
  uVar3 = *(uint *)(param_4 + 1);
  plVar5 = plVar6;
  if (uVar3 == 0) {
LAB_02eb5f84:
    if (plVar5 == plVar6 + (ulong)uVar3 * 3) goto LAB_02eb6070;
  }
  else {
    lVar10 = (ulong)uVar3 * 0x18;
    do {
      if ((*plVar5 == param_1) && (uVar12 != (*(byte *)(plVar5 + 1) & 1))) goto LAB_02eb5f84;
      lVar10 = lVar10 + -0x18;
      plVar5 = plVar5 + 3;
    } while (lVar10 != 0);
LAB_02eb6070:
    uVar14 = *(uint *)((long)param_4 + 0xc);
    if (uVar14 <= uVar3) {
      iVar2 = uVar14 + (uVar14 >> 1);
      if (uVar14 == 0) {
        iVar2 = 1;
      }
      uVar14 = iVar2 + uVar14;
      plVar6 = (long *)(*DAT_0442d148)(0,plVar6,(ulong)uVar14 * 0x18);
      if (plVar6 == (long *)0x0) goto LAB_02eb5f98;
      *param_4 = (long)plVar6;
      *(uint *)((long)param_4 + 0xc) = uVar14;
    }
    if (uVar14 <= uVar3) goto LAB_02eb5f98;
    uVar3 = *(uint *)(param_4 + 1);
    *(uint *)(param_4 + 1) = uVar3 + 1;
    if (plVar6 + (ulong)uVar3 * 3 == (long *)0x0) goto LAB_02eb5f98;
    plVar6[(ulong)uVar3 * 3] = param_1;
    plVar5 = plVar6 + (ulong)uVar3 * 3;
    plVar5[1] = (ulong)(uVar12 ^ 1);
  }
  *(float *)(plVar5 + 2) = fVar16;
LAB_02eb5f98:
  if ((param_6 != 0) && (uVar12 = *(uint *)(DAT_0440a180 + 1), uVar12 != 0)) {
    uVar3 = 0;
    if (uVar12 != 0) {
      uVar3 = uVar11 / uVar12;
    }
    lVar10 = *(long *)(*DAT_0440a180 + (ulong)(uVar11 - uVar3 * uVar12) * 8);
    if (lVar10 != 0) {
      lVar13 = *(long *)(param_1 + 0x30);
      do {
        if (*(long *)(lVar10 + 0x10) == param_1) {
          plVar5 = (long *)FUN_02ec6414(param_6);
          if (plVar5 == (long *)0x0) {
            return 1;
          }
          *plVar5 = param_1;
          plVar5[1] = lVar13;
          plVar5[2] = 4;
          plVar5[3] = lVar10;
          return 1;
        }
        lVar10 = *(long *)(lVar10 + 0x18);
      } while (lVar10 != 0);
    }
  }
  return 1;
}


