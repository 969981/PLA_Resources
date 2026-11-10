/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a5c00; name: FUN_032a5c00
 */


void FUN_032a5c00(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_LAB_0433fa08;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_032d645c(param_2);
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  if ((int)param_5 < 1) {
    lVar5 = 0;
    uVar2 = 0;
    iVar6 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_032676cc(PTR_PTR_0434a080,param_5,0,0,(long)param_1 + 0x2c);
    param_1[4] = puVar3;
    if (param_5 != 1) {
      iVar6 = (param_5 & 1) - param_5;
      puVar4 = puVar3;
      puVar8 = param_3;
      do {
        uVar7 = puVar8[7];
        puVar3 = puVar4 + 0x10;
        param_3 = puVar8 + 0x10;
        puVar4[5] = puVar8[5];
        puVar4[7] = uVar7;
        uVar7 = puVar8[3];
        puVar4[1] = puVar8[1];
        puVar4[3] = uVar7;
        uVar7 = *puVar8;
        puVar4[2] = puVar8[2];
        *puVar4 = uVar7;
        uVar7 = puVar8[4];
        puVar4[6] = puVar8[6];
        puVar4[4] = uVar7;
        uVar7 = puVar8[0xf];
        puVar4[0xd] = puVar8[0xd];
        puVar4[0xf] = uVar7;
        uVar7 = puVar8[0xb];
        puVar4[9] = puVar8[9];
        puVar4[0xb] = uVar7;
        uVar7 = puVar8[10];
        puVar4[8] = puVar8[8];
        puVar4[10] = uVar7;
        uVar7 = puVar8[0xc];
        iVar6 = iVar6 + 2;
        puVar4[0xe] = puVar8[0xe];
        puVar4[0xc] = uVar7;
        puVar4 = puVar3;
        puVar8 = param_3;
      } while (iVar6 != 0);
    }
    if ((param_5 & 1) != 0) {
      uVar7 = param_3[7];
      puVar3[5] = param_3[5];
      puVar3[7] = uVar7;
      uVar7 = param_3[3];
      puVar3[1] = param_3[1];
      puVar3[3] = uVar7;
      uVar7 = *param_3;
      puVar3[2] = param_3[2];
      *puVar3 = uVar7;
      uVar7 = param_3[4];
      puVar3[6] = param_3[6];
      puVar3[4] = uVar7;
    }
    iVar6 = *(int *)(param_1 + 7);
    uVar2 = *(uint *)((long)param_1 + 0x3c) & 0x3fffffff;
    lVar5 = param_1[6];
  }
  iVar1 = iVar6 + param_5;
  *(uint *)(param_1 + 5) = param_5;
  if ((int)uVar2 < iVar1) {
    lVar5 = FUN_03152c04(PTR_PTR_0434a080,iVar1,lVar5,iVar6,(long)param_1 + 0x3c);
    param_1[6] = lVar5;
  }
  if (0 < (int)param_5) {
    lVar5 = lVar5 + (long)iVar6 * 8;
    do {
      FUN_032c7b0c(lVar5,param_4);
      param_5 = param_5 - 1;
      lVar5 = lVar5 + 8;
      param_4 = param_4 + 8;
    } while (param_5 != 0);
  }
  *(int *)(param_1 + 7) = iVar1;
  return;
}


