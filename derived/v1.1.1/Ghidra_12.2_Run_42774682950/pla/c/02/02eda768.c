/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eda768; name: FUN_02eda768
 */


void FUN_02eda768(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar9;
  uint uVar8;
  ulong uVar10;
  float fVar11;
  float local_1c;
  float local_18;
  float local_14;
  
  local_18 = 0.0;
  pfVar6 = *(float **)(param_1 + 0x98);
  pfVar7 = pfVar6;
  if (pfVar6 != (float *)0x0) {
    uVar10 = 0;
    pfVar7 = (float *)((long)pfVar6 + ((ulong)(*(byte *)pfVar6 + 4) & 0x1fc));
    do {
      if (*(byte *)((long)pfVar6 + uVar10 + 1) == 0xc) goto LAB_02eda7b8;
      uVar10 = uVar10 + 1;
      pfVar7 = pfVar7 + 1;
    } while (uVar10 < *(byte *)pfVar6);
    pfVar7 = (float *)0x0;
  }
LAB_02eda7b8:
  pfVar6 = &local_18;
  if (pfVar7 != (float *)0x0) {
    pfVar6 = pfVar7;
  }
  *param_3 = *pfVar6;
  local_14 = 0.0;
  pfVar6 = *(float **)(param_1 + 0x98);
  pfVar7 = pfVar6;
  if (pfVar6 != (float *)0x0) {
    uVar10 = 0;
    pfVar7 = (float *)((long)pfVar6 + ((ulong)(*(byte *)pfVar6 + 4) & 0x1fc));
    do {
      if (*(byte *)((long)pfVar6 + uVar10 + 1) == 0xd) goto LAB_02eda810;
      uVar10 = uVar10 + 1;
      pfVar7 = pfVar7 + 1;
    } while (uVar10 < *(byte *)pfVar6);
    pfVar7 = (float *)0x0;
  }
LAB_02eda810:
  if (pfVar7 == (float *)0x0) {
    pfVar7 = &local_14;
  }
  param_3[1] = *pfVar7;
  if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
    lVar1 = param_1 + 0x30;
    uVar8 = (uint)**(undefined8 **)(param_1 + 0x38);
    iVar9 = (int)lVar1;
    if ((uVar8 >> 0x12 & 1) != 0) {
      fVar11 = 0.0;
      uVar8 = *(uint *)(DAT_0440a160 + 0x20);
      if (uVar8 != 0) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = (iVar9 + 0x12U) / uVar8;
        }
        for (plVar5 = *(long **)(*(long *)(DAT_0440a160 + 0x18) +
                                (ulong)((iVar9 + 0x12U) - uVar3 * uVar8) * 8); plVar5 != (long *)0x0
            ; plVar5 = (long *)plVar5[2]) {
          if ((*plVar5 == lVar1) && ((int)plVar5[1] == 0x12)) {
            if (*(int *)((long)plVar5 + 0x4c) == 3) {
              fVar11 = (float)FUN_02eb1180(DAT_0440a160,plVar5,param_2);
            }
            else {
              fVar11 = (float)FUN_02eb1334(DAT_0440a160,plVar5,param_2);
            }
            break;
          }
        }
      }
      *param_3 = *param_3 + fVar11;
      if (*(undefined8 **)(param_1 + 0x38) == (undefined8 *)0x0) goto LAB_02eda83c;
      uVar8 = (uint)**(undefined8 **)(param_1 + 0x38);
    }
    if ((uVar8 >> 0x13 & 1) != 0) {
      fVar11 = 0.0;
      uVar8 = *(uint *)(DAT_0440a160 + 0x20);
      if (uVar8 != 0) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = (iVar9 + 0x13U) / uVar8;
        }
        for (plVar5 = *(long **)(*(long *)(DAT_0440a160 + 0x18) +
                                (ulong)((iVar9 + 0x13U) - uVar3 * uVar8) * 8); plVar5 != (long *)0x0
            ; plVar5 = (long *)plVar5[2]) {
          if ((*plVar5 == lVar1) && ((int)plVar5[1] == 0x13)) {
            if (*(int *)((long)plVar5 + 0x4c) == 3) {
              fVar11 = (float)FUN_02eb1180(DAT_0440a160,plVar5,param_2);
            }
            else {
              fVar11 = (float)FUN_02eb1334(DAT_0440a160,plVar5,param_2);
            }
            break;
          }
        }
      }
      param_3[1] = param_3[1] + fVar11;
      if (*(undefined8 **)(param_1 + 0x38) == (undefined8 *)0x0) goto LAB_02eda83c;
      uVar8 = (uint)**(undefined8 **)(param_1 + 0x38);
    }
    if ((uVar8 >> 0x18 & 1) != 0) {
      uVar8 = *(uint *)(DAT_0440a160 + 0x20);
      fVar11 = 0.0;
      if (uVar8 != 0) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = (iVar9 + 0x18U) / uVar8;
        }
        for (plVar5 = *(long **)(*(long *)(DAT_0440a160 + 0x18) +
                                (ulong)((iVar9 + 0x18U) - uVar3 * uVar8) * 8); plVar5 != (long *)0x0
            ; plVar5 = (long *)plVar5[2]) {
          if ((*plVar5 == lVar1) && ((int)plVar5[1] == 0x18)) {
            if (*(int *)((long)plVar5 + 0x4c) == 3) {
              fVar11 = (float)FUN_02eb1180(DAT_0440a160,plVar5,param_2);
            }
            else {
              fVar11 = (float)FUN_02eb1334();
            }
            break;
          }
        }
      }
      param_3[2] = fVar11;
      goto LAB_02eda894;
    }
  }
LAB_02eda83c:
  local_1c = 0.0;
  pfVar6 = *(float **)(param_1 + 0x98);
  pfVar7 = pfVar6;
  if (pfVar6 != (float *)0x0) {
    uVar10 = 0;
    pfVar7 = (float *)((long)pfVar6 + ((ulong)(*(byte *)pfVar6 + 4) & 0x1fc));
    do {
      if (*(byte *)((long)pfVar6 + uVar10 + 1) == 0xe) goto LAB_02eda880;
      uVar10 = uVar10 + 1;
      pfVar7 = pfVar7 + 1;
    } while (uVar10 < *(byte *)pfVar6);
    pfVar7 = (float *)0x0;
  }
LAB_02eda880:
  pfVar6 = &local_1c;
  if (pfVar7 != (float *)0x0) {
    pfVar6 = pfVar7;
  }
  param_3[2] = *pfVar6;
LAB_02eda894:
  bVar2 = *(byte *)(param_3 + 3);
  bVar4 = (byte)(*(uint *)(param_1 + 0xaa) >> 0x14) & 7;
  *(byte *)(param_3 + 3) = bVar2 & 0xf8 | bVar4;
  *(byte *)(param_3 + 3) = *(byte *)(param_1 + 0xac) & 8 | bVar2 & 0xf0 | bVar4;
  return;
}


