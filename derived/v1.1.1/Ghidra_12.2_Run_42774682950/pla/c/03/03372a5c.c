/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03372a5c; name: FUN_03372a5c
 */


long FUN_03372a5c(long *param_1,uint param_2,long param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong local_48;
  
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
  FUN_032bd100(param_2,0x40,*param_5,&local_48);
  uVar6 = *param_5;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar8 = (undefined8 *)(lVar5 + 0x40);
      puVar9 = (undefined8 *)(param_3 + 0x40);
      do {
        uVar2 = puVar9[-2];
        uVar4 = puVar9[-1];
        lVar7 = lVar7 + 2;
        puVar8[-3] = puVar9[-3];
        puVar8[-2] = uVar2;
        puVar8[-1] = uVar4;
        uVar2 = puVar9[-6];
        uVar4 = puVar9[-5];
        puVar8[-7] = puVar9[-7];
        puVar8[-6] = uVar2;
        puVar8[-5] = uVar4;
        puVar8[-8] = puVar9[-8];
        puVar8[-4] = puVar9[-4];
        uVar2 = *puVar9;
        uVar4 = puVar9[1];
        uVar3 = puVar9[3];
        puVar8[2] = puVar9[2];
        puVar8[3] = uVar3;
        *puVar8 = uVar2;
        puVar8[1] = uVar4;
        uVar2 = puVar9[4];
        uVar4 = puVar9[5];
        puVar1 = puVar9 + 6;
        uVar3 = puVar9[7];
        puVar9 = puVar9 + 0x10;
        puVar8[6] = *puVar1;
        puVar8[7] = uVar3;
        puVar8[4] = uVar2;
        puVar8[5] = uVar4;
        puVar8 = puVar8 + 0x10;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar7);
    }
    if ((param_4 & 1) != 0) {
      puVar8 = (undefined8 *)(lVar5 + lVar7 * 0x40);
      puVar9 = (undefined8 *)(param_3 + lVar7 * 0x40);
      uVar2 = puVar9[6];
      uVar4 = puVar9[7];
      puVar8[5] = puVar9[5];
      puVar8[6] = uVar2;
      puVar8[7] = uVar4;
      uVar2 = puVar9[2];
      uVar4 = puVar9[3];
      puVar8[1] = puVar9[1];
      puVar8[2] = uVar2;
      puVar8[3] = uVar4;
      *puVar8 = *puVar9;
      puVar8[4] = puVar9[4];
    }
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar6 & 0x3fffffff) << 6);
  }
  if (local_48 < 0xfffffffc0) {
    uVar6 = (uint)(local_48 >> 6);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return lVar5;
}


