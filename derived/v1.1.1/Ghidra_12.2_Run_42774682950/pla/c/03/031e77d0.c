/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e77d0; name: FUN_031e77d0
 */


long FUN_031e77d0(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
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
  puVar1 = PTR_PTR_0434a090;
  if (0 < (int)param_4) {
    piVar8 = (int *)(lVar2 + 0x10);
    uVar7 = uVar5;
    piVar9 = (int *)(param_3 + 0x14);
    do {
      piVar8[-4] = piVar9[-5];
      piVar6 = piVar9 + -3;
      piVar8[-2] = 0;
      piVar8[-1] = 0;
      piVar8[0] = 0;
      piVar8[1] = -0x80000000;
      if (*piVar9 < 0) {
        FUN_031e79a8(puVar1,piVar6);
      }
      *(undefined8 *)(piVar8 + -2) = *(undefined8 *)(piVar9 + -3);
      *piVar8 = piVar9[-1];
      piVar8[1] = *piVar9;
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 6;
      piVar6[0] = 0;
      piVar6[1] = 0;
      piVar9[-1] = 0;
      piVar9[0] = 0;
      piVar9 = piVar9 + 6;
    } while (uVar7 != 0);
    puVar4 = (uint *)(param_3 + 0x14);
    do {
      puVar4[-1] = 0;
      if ((-1 < (int)*puVar4) && (*(long *)(puVar4 + -3) != 0)) {
        FUN_032cf244(puVar1,*(long *)(puVar4 + -3),8,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      uVar5 = uVar5 - 1;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + 6;
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


