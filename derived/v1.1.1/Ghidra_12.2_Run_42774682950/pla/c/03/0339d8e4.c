/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339d8e4; name: FUN_0339d8e4
 */


long FUN_0339d8e4(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_48;
  
  uVar6 = (ulong)param_4;
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
  FUN_032bd100(param_2,0x10,*param_5,&local_48);
  uVar3 = *param_5;
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    puVar2 = (undefined8 *)(param_3 + 8);
    puVar4 = (undefined8 *)(lVar1 + 8);
    uVar5 = uVar6;
    do {
      puVar4[-1] = puVar2[-1];
      uVar5 = uVar5 - 1;
      puVar2[-1] = 0;
      *puVar4 = *puVar2;
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
    } while (uVar5 != 0);
    lVar7 = param_3;
    do {
      FUN_032c7b9c(lVar7 + 8);
      FUN_032c7b9c(lVar7);
      uVar6 = uVar6 - 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar6 != 0);
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) << 4);
  }
  if (local_48 < 0x3fffffff0) {
    uVar3 = (uint)(local_48 >> 4);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar1;
}


