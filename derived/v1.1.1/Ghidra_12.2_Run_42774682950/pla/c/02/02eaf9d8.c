/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaf9d8; name: FUN_02eaf9d8
 */


void FUN_02eaf9d8(float param_1,long param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  float local_58;
  float local_54;
  
  plVar2 = *(long **)(param_2 + 8);
  if (plVar2 == (long *)0x0) {
    return;
  }
  local_54 = param_1;
  if (param_6 == 1) {
    lVar6 = *plVar2;
    pfVar4 = &local_54;
    goto LAB_02eafb2c;
  }
  if (param_6 == 3) {
    fVar11 = 1.0;
  }
  else {
    fVar11 = 0.0;
  }
  piVar3 = *(int **)(param_2 + 0x48);
  uVar9 = (ulong)*(uint *)(param_2 + 0x50);
  piVar5 = piVar3 + uVar9 * 4;
  piVar7 = piVar3;
  local_58 = fVar11;
  if (*(uint *)(param_2 + 0x50) == 0) {
    uVar8 = 0;
  }
  else if (param_6 == 4) {
    do {
      if (*(ushort *)(piVar7 + 2) == param_5) {
        if ((*piVar7 == param_3) && (piVar7[1] == param_4)) {
          piVar7[3] = (int)param_1;
          piVar5 = piVar7;
        }
        if (*piVar7 != 0) {
          fVar11 = (float)piVar7[3] + fVar11;
          local_58 = fVar11;
        }
      }
      piVar3 = *(int **)(param_2 + 0x48);
      piVar7 = piVar7 + 4;
      uVar8 = *(uint *)(param_2 + 0x50);
    } while (piVar7 != piVar3 + (ulong)uVar8 * 4);
  }
  else if (param_6 == 3) {
    fVar11 = 1.0;
    do {
      if (*(ushort *)(piVar7 + 2) == param_5) {
        if ((*piVar7 == param_3) && (piVar7[1] == param_4)) {
          piVar7[3] = (int)param_1;
          piVar3 = *(int **)(param_2 + 0x48);
          uVar9 = (ulong)*(uint *)(param_2 + 0x50);
          piVar5 = piVar7;
        }
        fVar11 = (float)piVar7[3] * fVar11;
        local_58 = fVar11;
      }
      uVar8 = (uint)uVar9;
      piVar7 = piVar7 + 4;
    } while (piVar7 != piVar3 + uVar9 * 4);
  }
  else {
    fVar11 = 0.0;
    do {
      if (*(ushort *)(piVar7 + 2) == param_5) {
        if ((*piVar7 == param_3) && (piVar7[1] == param_4)) {
          piVar7[3] = (int)param_1;
          piVar3 = *(int **)(param_2 + 0x48);
          uVar9 = (ulong)*(uint *)(param_2 + 0x50);
          piVar5 = piVar7;
        }
        fVar11 = (float)piVar7[3] + fVar11;
        local_58 = fVar11;
      }
      uVar8 = (uint)uVar9;
      piVar7 = piVar7 + 4;
    } while (piVar7 != piVar3 + uVar9 * 4);
  }
  if (piVar7 == piVar5) {
    uVar10 = *(uint *)(param_2 + 0x54);
    if (uVar10 <= uVar8) {
      iVar1 = uVar10 + (uVar10 >> 1);
      if (uVar10 == 0) {
        iVar1 = 1;
      }
      uVar10 = iVar1 + uVar10;
      piVar3 = (int *)(*DAT_0442d148)(0,piVar3,(ulong)uVar10 << 4);
      if (piVar3 == (int *)0x0) goto LAB_02eafb20;
      *(int **)(param_2 + 0x48) = piVar3;
      *(uint *)(param_2 + 0x54) = uVar10;
    }
    if (uVar8 < uVar10) {
      uVar9 = (ulong)*(uint *)(param_2 + 0x50);
      *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) + 1;
      if (piVar3 + uVar9 * 4 != (int *)0x0) {
        piVar3[uVar9 * 4] = param_3;
        piVar3[uVar9 * 4 + 1] = param_4;
        *(short *)(piVar3 + uVar9 * 4 + 2) = (short)param_5;
        piVar3[uVar9 * 4 + 3] = (int)param_1;
        fVar11 = local_58 + local_54;
        local_58 = local_58 * local_54;
        if (param_6 != 3) {
          local_58 = fVar11;
        }
      }
    }
  }
LAB_02eafb20:
  plVar2 = *(long **)(param_2 + 8);
  pfVar4 = &local_58;
  lVar6 = *plVar2;
LAB_02eafb2c:
  (**(code **)(lVar6 + 0x10))(plVar2,param_5,pfVar4,4);
  return;
}


