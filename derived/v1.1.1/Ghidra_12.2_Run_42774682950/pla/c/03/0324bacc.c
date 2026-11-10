/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324bacc; name: FUN_0324bacc
 */


void FUN_0324bacc(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    if ((int)param_1[1] != 0) {
      lVar7 = *param_1;
      lVar8 = (long)(int)param_1[1] * 0x28;
      do {
        lVar1 = lVar7 + lVar8;
        *(undefined4 *)(lVar1 + -0x10) = 0;
        if ((-1 < *(int *)(lVar1 + -0xc)) && (*(long *)(lVar1 + -0x18) != 0)) {
          (**(code **)(*(long *)puVar4 + 0x18))
                    (puVar4,*(long *)(lVar1 + -0x18),*(int *)(lVar1 + -0xc) << 2);
        }
        lVar8 = lVar8 + -0x28;
        *(undefined8 *)(lVar1 + -0x18) = 0;
        *(undefined4 *)(lVar1 + -0xc) = 0x80000000;
      } while (lVar8 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar4 + 0x18))
                (puVar4,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x28);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      FUN_0324bcac(puVar4,param_2);
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
    lVar8 = 0;
    do {
      lVar7 = param_1[2];
      uVar3 = *(int *)(*param_1 + lVar8 * 0x28) * -0x61c8864f;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar5 = (ulong)(*(uint *)(param_1 + 3) & uVar3);
      piVar6 = (int *)(lVar7 + uVar5 * 8 + 4);
      iVar2 = *piVar6;
      while (-1 < iVar2) {
        uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar6 = (int *)(lVar7 + uVar5 * 8 + 4);
        iVar2 = *piVar6;
      }
      *(uint *)(lVar7 + uVar5 * 8) = uVar3;
      *piVar6 = (int)lVar8;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[1]);
  }
  return;
}


