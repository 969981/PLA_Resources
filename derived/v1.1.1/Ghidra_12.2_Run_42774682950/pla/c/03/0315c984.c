/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315c984; name: FUN_0315c984
 */


long FUN_0315c984(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong local_58;
  
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
  FUN_032bd100(param_2,0x10,*param_5,&local_58);
  uVar3 = *param_5;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_58,&local_58);
  if (0 < (int)param_4) {
    lVar5 = lVar2;
    lVar6 = param_3;
    uVar8 = uVar4;
    do {
      FUN_0315c820(lVar5,lVar6);
      puVar1 = PTR_PTR_0434a080;
      uVar8 = uVar8 - 1;
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + 0x10;
    } while (uVar8 != 0);
    puVar7 = (uint *)(param_3 + 0xc);
    do {
      puVar7[-1] = 0;
      if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
        FUN_032cf244(puVar1,*(long *)(puVar7 + -3),4,*puVar7 & 0x3fffffff);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      uVar4 = uVar4 - 1;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + 4;
    } while (uVar4 != 0);
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) << 4);
  }
  if (local_58 < 0x3fffffff0) {
    uVar3 = (uint)(local_58 >> 4);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


