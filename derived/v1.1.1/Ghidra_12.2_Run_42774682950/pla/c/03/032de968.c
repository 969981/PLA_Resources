/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032de968; name: FUN_032de968
 */


long FUN_032de968(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  ulong local_68;
  
  uVar6 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar5 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar5) {
    param_2 = uVar5;
  }
  FUN_032bd100(param_2,0x18,*param_5,&local_68);
  uVar5 = *param_5;
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
  puVar3 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar9 = 0;
    uVar8 = uVar6;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar9);
      puVar2 = (undefined8 *)(lVar4 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = 0;
      puVar2[2] = 0x8000000000000000;
      if (*(int *)((long)puVar1 + 0x14) < 0) {
        FUN_032deb54(puVar3,puVar1 + 1);
      }
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      uVar8 = uVar8 - 1;
      lVar9 = lVar9 + 0x18;
      *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)((long)puVar1 + 0x14);
      puVar1[1] = 0;
      puVar1[2] = 0;
    } while (uVar8 != 0);
    puVar7 = (uint *)(param_3 + 0x14);
    do {
      puVar7[-1] = 0;
      if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(puVar7 + -3),((ulong)*puVar7 & 0x3fffffff) << 4);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      uVar6 = uVar6 - 1;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + 6;
    } while (uVar6 != 0);
  }
  if (-1 < (int)uVar5) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar5 & 0x3fffffff) * 0x18);
  }
  if (local_68 < 0x5ffffffe8) {
    uVar5 = (uint)(local_68 / 0x18);
  }
  else {
    uVar5 = 0x3fffffff;
  }
  *param_5 = uVar5;
  return lVar4;
}


