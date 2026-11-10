/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03210de0; name: FUN_03210de0
 */


long FUN_03210de0(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong local_68;
  
  uVar5 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar4 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar4) {
    param_2 = uVar4;
  }
  FUN_032bd100(param_2,0x20,*param_5,&local_68);
  uVar4 = *param_5;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
  puVar1 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    puVar6 = (undefined8 *)(param_3 + 0x10);
    uVar8 = uVar5;
    puVar9 = (undefined4 *)(lVar2 + 0x1c);
    do {
      uVar3 = puVar6[-2];
      puVar9[-5] = *(undefined4 *)(puVar6 + -1);
      *(undefined8 *)(puVar9 + -7) = uVar3;
      *(undefined8 *)(puVar9 + -3) = 0;
      *(undefined8 *)(puVar9 + -1) = 0x8000000000000000;
      if (*(int *)((long)puVar6 + 0xc) < 0) {
        FUN_032bcf84(puVar1,puVar6,4);
      }
      *(undefined8 *)(puVar9 + -3) = *puVar6;
      puVar9[-1] = *(undefined4 *)(puVar6 + 1);
      uVar8 = uVar8 - 1;
      *puVar9 = *(undefined4 *)((long)puVar6 + 0xc);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = puVar6 + 4;
      puVar9 = puVar9 + 8;
    } while (uVar8 != 0);
    piVar7 = (int *)(param_3 + 0x1c);
    do {
      piVar7[-1] = 0;
      if ((-1 < *piVar7) && (*(long *)(piVar7 + -3) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1,*(long *)(piVar7 + -3),*piVar7 << 2);
      }
      piVar7[-3] = 0;
      piVar7[-2] = 0;
      uVar5 = uVar5 - 1;
      *piVar7 = -0x80000000;
      piVar7 = piVar7 + 8;
    } while (uVar5 != 0);
  }
  if (-1 < (int)uVar4) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar4 & 0x3fffffff) << 5);
  }
  if (local_68 < 0x7ffffffe0) {
    uVar4 = (uint)(local_68 >> 5);
  }
  else {
    uVar4 = 0x3fffffff;
  }
  *param_5 = uVar4;
  return lVar2;
}


