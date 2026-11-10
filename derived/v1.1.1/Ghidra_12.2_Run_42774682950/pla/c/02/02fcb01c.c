/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fcb01c; name: FUN_02fcb01c
 */


long FUN_02fcb01c(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong local_68;
  
  uVar8 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar7 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar7) {
    uVar7 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar7) {
    param_2 = uVar7;
  }
  FUN_032bd100(param_2,0x40,*param_5,&local_68);
  uVar7 = *param_5;
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
  puVar5 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    puVar12 = (undefined8 *)(lVar6 + 8);
    puVar9 = param_3;
    uVar11 = uVar8;
    do {
      puVar12[-1] = 0;
      *puVar12 = 0x8000000000000000;
      if (*(int *)((long)puVar9 + 0xc) < 0) {
        FUN_032bcf84(puVar5,puVar9,4);
      }
      puVar12[-1] = *puVar9;
      *(undefined4 *)puVar12 = *(undefined4 *)(puVar9 + 1);
      *(undefined4 *)((long)puVar12 + 4) = *(undefined4 *)((long)puVar9 + 0xc);
      uVar2 = puVar9[4];
      uVar3 = puVar9[5];
      uVar4 = *(undefined4 *)(puVar9 + 6);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar12[2] = puVar9[3];
      puVar12[3] = uVar2;
      *(undefined4 *)(puVar12 + 5) = uVar4;
      puVar12[4] = uVar3;
      puVar1 = puVar9 + 2;
      uVar11 = uVar11 - 1;
      puVar9 = puVar9 + 8;
      puVar12[1] = *puVar1;
      puVar12 = puVar12 + 8;
    } while (uVar11 != 0);
    piVar10 = (int *)((long)param_3 + 0xc);
    do {
      piVar10[-1] = 0;
      if ((-1 < *piVar10) && (*(long *)(piVar10 + -3) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5,*(long *)(piVar10 + -3),*piVar10 << 2);
      }
      piVar10[-3] = 0;
      piVar10[-2] = 0;
      uVar8 = uVar8 - 1;
      *piVar10 = -0x80000000;
      piVar10 = piVar10 + 0x10;
    } while (uVar8 != 0);
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar7 & 0x3fffffff) << 6);
  }
  if (local_68 < 0xfffffffc0) {
    uVar7 = (uint)(local_68 >> 6);
  }
  else {
    uVar7 = 0x3fffffff;
  }
  *param_5 = uVar7;
  return lVar6;
}


