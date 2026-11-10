/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea95b4; name: FUN_02ea95b4
 */


void FUN_02ea95b4(undefined4 param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar4 = *(long *)(param_2 + 8);
  iVar3 = (int)param_3;
  plVar1 = (long *)(lVar4 + 0x148);
  plVar5 = plVar1;
  if (iVar3 != 5) {
    plVar5 = (long *)0x0;
  }
  fVar10 = 0.0;
  fVar11 = 0.0;
  plVar6 = (long *)(lVar4 + 0x120);
  if (iVar3 != 0) {
    plVar6 = plVar5;
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 != (long *)0x0) {
    fVar11 = 0.0;
    do {
      fVar11 = *(float *)(plVar6 + 5) + fVar11;
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  fVar12 = *(float *)(lVar4 + 0xf0);
  *(undefined4 *)(param_2 + 0x18) = param_1;
  if (fVar12 <= fVar11) {
    fVar12 = fVar11;
  }
  if (iVar3 != 5) {
    plVar1 = (long *)0x0;
  }
  plVar5 = (long *)(lVar4 + 0x120);
  if (iVar3 != 0) {
    plVar5 = plVar1;
  }
  plVar5 = (long *)*plVar5;
  if (plVar5 != (long *)0x0) {
    fVar10 = 0.0;
    do {
      fVar10 = *(float *)(plVar5 + 5) + fVar10;
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  fVar11 = *(float *)(lVar4 + 0xf0);
  if (*(float *)(lVar4 + 0xf0) <= fVar10) {
    fVar11 = fVar10;
  }
  fVar12 = fVar11 - fVar12;
  if ((param_4 & 1) != 0) {
    if (*(char *)(param_2 + 0x1c) != '\0') {
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  if (fVar12 != 0.0) {
    lVar4 = *(long *)(lVar4 + 0x178);
    uVar7 = (ulong)*(uint *)(&DAT_03a9f0d0 + param_3 * 4);
    uVar2 = *(uint *)(lVar4 + 0x18);
    uVar8 = 1L << (uVar7 & 0x3f);
    puVar9 = *(ulong **)(lVar4 + 0x10);
    if ((*(ulong *)(lVar4 + 8) & uVar8) == 0) {
      if (uVar2 != 0) {
        if ((*puVar9 & uVar8) != 0) {
          (**(code **)(*(long *)puVar9[1] + 0x10))(fVar11,fVar12,(long *)puVar9[1],uVar7);
        }
        if (uVar2 != 1) {
          if ((puVar9[2] & uVar8) != 0) {
            (**(code **)(*(long *)puVar9[3] + 0x10))(fVar11,fVar12,(long *)puVar9[3],uVar7);
          }
          if (uVar2 != 2) {
            if ((puVar9[4] & uVar8) != 0) {
              (**(code **)(*(long *)puVar9[5] + 0x10))(fVar11,fVar12,(long *)puVar9[5],uVar7);
            }
            if (uVar2 != 3) {
              lVar4 = (ulong)uVar2 * 0x10 + -0x30;
              puVar9 = puVar9 + 7;
              do {
                if ((puVar9[-1] & uVar8) != 0) {
                  (**(code **)(*(long *)*puVar9 + 0x10))(fVar11,fVar12,(long *)*puVar9,uVar7);
                }
                lVar4 = lVar4 + -0x10;
                puVar9 = puVar9 + 2;
              } while (lVar4 != 0);
            }
          }
        }
      }
    }
    else if ((uVar2 != 0) &&
            ((**(code **)(*(long *)puVar9[1] + 0x10))(fVar11,fVar12,(long *)puVar9[1],uVar7),
            uVar2 != 1)) {
      lVar4 = (ulong)uVar2 * 0x10 + -0x10;
      puVar9 = puVar9 + 3;
      do {
        (**(code **)(*(long *)*puVar9 + 0x10))(fVar11,fVar12,(long *)*puVar9,uVar7);
        lVar4 = lVar4 + -0x10;
        puVar9 = puVar9 + 2;
      } while (lVar4 != 0);
    }
  }
  return;
}


