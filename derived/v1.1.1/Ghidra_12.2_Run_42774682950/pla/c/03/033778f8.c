/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033778f8; name: FUN_033778f8
 */


long FUN_033778f8(long *param_1,uint param_2,long param_3,ulong param_4,uint *param_5)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong local_48;
  
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
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      puVar5 = (undefined8 *)(lVar2 + 0x10);
      puVar6 = (undefined8 *)(param_3 + 0x10);
      do {
        uVar1 = puVar6[-1];
        lVar4 = lVar4 + 2;
        puVar5[-2] = puVar6[-2];
        puVar5[-1] = uVar1;
        uVar1 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5 = puVar5 + 4;
        puVar6 = puVar6 + 4;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar4);
    }
    if ((param_4 & 1) != 0) {
      puVar5 = (undefined8 *)(lVar2 + lVar4 * 0x10);
      puVar6 = (undefined8 *)(param_3 + lVar4 * 0x10);
      uVar1 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar1;
    }
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
  return lVar2;
}


