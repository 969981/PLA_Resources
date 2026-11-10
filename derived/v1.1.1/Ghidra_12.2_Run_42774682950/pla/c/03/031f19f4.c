/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f19f4; name: FUN_031f19f4
 */


long FUN_031f19f4(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong local_68;
  
  uVar4 = (ulong)param_4;
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
  FUN_032bd100(param_2,0x10,*param_5,&local_68);
  uVar3 = *param_5;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
  puVar1 = PTR_PTR_0434a090;
  if (0 < (int)param_4) {
    puVar5 = param_3;
    uVar7 = uVar4;
    puVar8 = (undefined4 *)(lVar2 + 0xc);
    do {
      *(undefined8 *)(puVar8 + -3) = 0;
      *(undefined8 *)(puVar8 + -1) = 0x8000000000000000;
      if (*(int *)((long)puVar5 + 0xc) < 0) {
        FUN_032bcf84(puVar1,puVar5,0x10);
      }
      *(undefined8 *)(puVar8 + -3) = *puVar5;
      puVar8[-1] = *(undefined4 *)(puVar5 + 1);
      uVar7 = uVar7 - 1;
      *puVar8 = *(undefined4 *)((long)puVar5 + 0xc);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      puVar8 = puVar8 + 4;
    } while (uVar7 != 0);
    puVar6 = (uint *)((long)param_3 + 0xc);
    do {
      puVar6[-1] = 0;
      if ((-1 < (int)*puVar6) && (*(long *)(puVar6 + -3) != 0)) {
        FUN_032cf244(puVar1,*(long *)(puVar6 + -3),0x10,*puVar6 & 0x3fffffff);
      }
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      uVar4 = uVar4 - 1;
      *puVar6 = 0x80000000;
      puVar6 = puVar6 + 4;
    } while (uVar4 != 0);
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) << 4);
  }
  if (local_68 < 0x3fffffff0) {
    uVar3 = (uint)(local_68 >> 4);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


