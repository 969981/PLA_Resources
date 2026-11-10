/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030cf29c; name: FUN_030cf29c
 */


long FUN_030cf29c(long *param_1,uint param_2,long param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong local_48;
  
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
  FUN_032bd100(param_2,0x20,*param_5,&local_48);
  uVar5 = *param_5;
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar9 = (undefined8 *)(param_3 + 0x20);
      puVar7 = (undefined8 *)(lVar4 + 0x20);
      do {
        uVar8 = puVar9[-1];
        lVar6 = lVar6 + 2;
        puVar7[-3] = puVar9[-3];
        puVar7[-1] = uVar8;
        uVar8 = puVar9[-4];
        puVar7[-2] = puVar9[-2];
        puVar7[-4] = uVar8;
        uVar8 = *puVar9;
        uVar2 = puVar9[1];
        puVar1 = puVar9 + 2;
        uVar3 = puVar9[3];
        puVar9 = puVar9 + 8;
        puVar7[2] = *puVar1;
        puVar7[3] = uVar3;
        *puVar7 = uVar8;
        puVar7[1] = uVar2;
        puVar7 = puVar7 + 8;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar6);
    }
    if ((param_4 & 1) != 0) {
      puVar9 = (undefined8 *)(lVar4 + lVar6 * 0x20);
      puVar7 = (undefined8 *)(param_3 + lVar6 * 0x20);
      uVar8 = puVar7[3];
      puVar9[1] = puVar7[1];
      puVar9[3] = uVar8;
      uVar8 = *puVar7;
      puVar9[2] = puVar7[2];
      *puVar9 = uVar8;
    }
  }
  if (-1 < (int)uVar5) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar5 & 0x3fffffff) << 5);
  }
  if (local_48 < 0x7ffffffe0) {
    uVar5 = (uint)(local_48 >> 5);
  }
  else {
    uVar5 = 0x3fffffff;
  }
  *param_5 = uVar5;
  return lVar4;
}


