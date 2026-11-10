/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ddc04; name: FUN_031ddc04
 */


long FUN_031ddc04(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  ulong local_68;
  
  uVar7 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar6) {
    param_2 = uVar6;
  }
  FUN_032bd100(param_2,0x28,*param_5,&local_68);
  uVar6 = *param_5;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
  puVar4 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar10 = 0;
    uVar9 = uVar7;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      puVar2 = (undefined4 *)(lVar5 + lVar10);
      *puVar2 = *puVar1;
      uVar3 = puVar1[2];
      *(undefined2 *)(puVar2 + 3) = *(undefined2 *)(puVar1 + 3);
      puVar2[2] = uVar3;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0x8000000000000000;
      if ((int)puVar1[7] < 0) {
        FUN_032bcf84(puVar4,puVar1 + 4,4);
      }
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
      puVar2[6] = puVar1[6];
      puVar2[7] = puVar1[7];
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      uVar9 = uVar9 - 1;
      lVar10 = lVar10 + 0x28;
      puVar2[8] = puVar1[8];
    } while (uVar9 != 0);
    puVar8 = (uint *)(param_3 + 0x1c);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        FUN_032cf244(puVar4,*(long *)(puVar8 + -3),4,*puVar8 & 0x3fffffff);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      uVar7 = uVar7 - 1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 10;
    } while (uVar7 != 0);
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar6 & 0x3fffffff) * 0x28);
  }
  if (local_68 < 0x9ffffffd8) {
    uVar6 = (uint)(local_68 / 0x28);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return lVar5;
}


