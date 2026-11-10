/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03279984; name: FUN_03279984
 */


void FUN_03279984(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar6 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    if ((int)param_1[1] != 0) {
      lVar13 = *param_1;
      lVar12 = 0;
      lVar14 = (long)(int)param_1[1] * 0x20;
      do {
        lVar1 = lVar13 + lVar14;
        *(undefined4 *)(lVar1 + -8) = 0;
        if ((-1 < *(int *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar1 + -0x10),*(int *)(lVar1 + -4) << 2);
        }
        *(undefined8 *)(lVar1 + -0x10) = 0;
        *(undefined4 *)(lVar1 + -4) = 0x80000000;
        *(undefined4 *)(lVar1 + -0x18) = 0;
        if ((-1 < *(int *)(lVar1 + -0x14)) && (*(long *)(lVar1 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar1 + -0x20),*(int *)(lVar1 + -0x14) << 2);
        }
        lVar12 = lVar12 + 0x20;
        lVar13 = lVar13 + -0x20;
        *(undefined8 *)(lVar1 + -0x20) = 0;
        *(undefined4 *)(lVar1 + -0x14) = 0x80000000;
      } while (lVar14 != lVar12);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x18))
                (puVar6,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 5);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      FUN_03279c1c(puVar6,param_2);
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_032c21f8(param_1 + 2);
  iVar3 = (int)param_1[1];
  if ((int)param_1[3] * 2 < iVar3 * 3) {
    FUN_032c2334(param_1 + 2);
    iVar3 = (int)param_1[1];
  }
  if (0 < iVar3) {
    lVar12 = 0;
    do {
      puVar2 = (undefined8 *)(*param_1 + lVar12 * 0x20);
      iVar3 = *(int *)(puVar2 + 1);
      uVar7 = 0;
      if (iVar3 != 0) {
        piVar8 = (int *)*puVar2;
        uVar5 = (long)iVar3 * 4 - 4;
        uVar11 = (uVar5 >> 2) + 1;
        uVar7 = 0;
        uVar10 = uVar11 & 1;
        if (uVar5 != 0) {
          lVar13 = uVar11 - uVar10;
          piVar9 = piVar8;
          do {
            piVar8 = piVar9 + 2;
            uVar4 = (*piVar9 * -0x61c8864f & 0xff00ff00U) >> 8 |
                    (*piVar9 * -0x61c8864f & 0xff00ffU) << 8;
            uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
            uVar7 = uVar7 * 0x40 + -0x61c88647 + uVar4 + (uVar4 >> 2) ^ uVar7;
            uVar4 = (piVar9[1] * -0x61c8864f & 0xff00ff00U) >> 8 |
                    (piVar9[1] * -0x61c8864f & 0xff00ffU) << 8;
            uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
            uVar7 = uVar7 * 0x40 + -0x61c88647 + uVar4 + (uVar4 >> 2) ^ uVar7;
            lVar13 = lVar13 + -2;
            piVar9 = piVar8;
          } while (lVar13 != 0);
        }
        if (uVar10 != 0) {
          uVar4 = (*piVar8 * -0x61c8864f & 0xff00ff00U) >> 8 |
                  (*piVar8 * -0x61c8864f & 0xff00ffU) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          uVar7 = uVar7 * 0x40 + uVar4 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar7;
        }
      }
      uVar11 = (ulong)(*(uint *)(param_1 + 3) & uVar7);
      lVar13 = param_1[2];
      piVar8 = (int *)(lVar13 + uVar11 * 8 + 4);
      iVar3 = *piVar8;
      while (-1 < iVar3) {
        uVar11 = ((long)(uVar11 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar8 = (int *)(lVar13 + uVar11 * 8 + 4);
        iVar3 = *piVar8;
      }
      *(uint *)(lVar13 + uVar11 * 8) = uVar7;
      *piVar8 = (int)lVar12;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[1]);
  }
  return;
}


