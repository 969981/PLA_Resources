/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031047d0; name: FUN_031047d0
 */


long FUN_031047d0(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  ulong local_68;
  
  uVar5 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar3 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar3) {
    param_2 = uVar3;
  }
  FUN_032bd100(param_2,0x18,*param_5,&local_68);
  uVar3 = *param_5;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
  puVar1 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    piVar4 = (int *)(lVar2 + 0x10);
    uVar7 = uVar5;
    piVar8 = (int *)(param_3 + 0x14);
    do {
      piVar4[-4] = piVar8[-5];
      piVar6 = piVar8 + -3;
      piVar4[-2] = 0;
      piVar4[-1] = 0;
      piVar4[0] = 0;
      piVar4[1] = -0x80000000;
      if (*piVar8 < 0) {
        FUN_032bcf84(puVar1,piVar6,4);
      }
      *(undefined8 *)(piVar4 + -2) = *(undefined8 *)(piVar8 + -3);
      *piVar4 = piVar8[-1];
      piVar4[1] = *piVar8;
      uVar7 = uVar7 - 1;
      piVar4 = piVar4 + 6;
      piVar6[0] = 0;
      piVar6[1] = 0;
      piVar8[-1] = 0;
      piVar8[0] = 0;
      piVar8 = piVar8 + 6;
    } while (uVar7 != 0);
    piVar4 = (int *)(param_3 + 0x14);
    do {
      piVar4[-1] = 0;
      if ((-1 < *piVar4) && (*(long *)(piVar4 + -3) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1,*(long *)(piVar4 + -3),*piVar4 << 2);
      }
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      uVar5 = uVar5 - 1;
      *piVar4 = -0x80000000;
      piVar4 = piVar4 + 6;
    } while (uVar5 != 0);
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) * 0x18);
  }
  if (local_68 < 0x5ffffffe8) {
    uVar3 = (uint)(local_68 / 0x18);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


