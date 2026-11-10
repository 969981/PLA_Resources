/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03278ed4; name: FUN_03278ed4
 */


void FUN_03278ed4(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  puVar6 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    if ((int)param_1[1] != 0) {
      lVar9 = *param_1;
      lVar10 = (long)(int)param_1[1] * 0x48;
      do {
        lVar1 = lVar9 + lVar10;
        *(undefined4 *)(lVar1 + -0x18) = 0;
        if ((-1 < *(int *)(lVar1 + -0x14)) && (*(long *)(lVar1 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar1 + -0x20),*(int *)(lVar1 + -0x14) << 2);
        }
        *(undefined8 *)(lVar1 + -0x20) = 0;
        *(undefined4 *)(lVar1 + -0x14) = 0x80000000;
        *(undefined4 *)(lVar1 + -0x30) = 0;
        if ((-1 < *(int *)(lVar1 + -0x2c)) && (*(long *)(lVar1 + -0x38) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x18))
                    (puVar6,*(long *)(lVar1 + -0x38),*(int *)(lVar1 + -0x2c) << 2);
        }
        lVar10 = lVar10 + -0x48;
        *(undefined8 *)(lVar1 + -0x38) = 0;
        *(undefined4 *)(lVar1 + -0x2c) = 0x80000000;
      } while (lVar10 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x18))
                (puVar6,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x48);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      FUN_03279104(puVar6,param_2);
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_032c21f8(param_1 + 2);
  iVar2 = (int)param_1[1];
  if ((int)param_1[3] * 2 < iVar2 * 3) {
    FUN_032c2334(param_1 + 2);
    iVar2 = (int)param_1[1];
  }
  if (0 < iVar2) {
    lVar10 = 0;
    do {
      piVar7 = (int *)(*param_1 + lVar10 * 0x48);
      uVar3 = piVar7[1] * -0x61c8864f;
      uVar4 = *piVar7 * -0x61c8864f;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar5 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = uVar5 + uVar3 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar3;
      lVar9 = param_1[2];
      uVar8 = (ulong)(uVar3 & *(uint *)(param_1 + 3));
      piVar7 = (int *)(lVar9 + uVar8 * 8 + 4);
      iVar2 = *piVar7;
      while (-1 < iVar2) {
        uVar8 = ((long)(uVar8 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar7 = (int *)(lVar9 + uVar8 * 8 + 4);
        iVar2 = *piVar7;
      }
      *(uint *)(lVar9 + uVar8 * 8) = uVar3;
      *piVar7 = (int)lVar10;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[1]);
  }
  return;
}


