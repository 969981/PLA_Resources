/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a84a0; name: FUN_030a84a0
 */


long FUN_030a84a0(long *param_1,uint param_2,long param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
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
  FUN_032bd100(param_2,8,*param_5,&local_48);
  uVar3 = *param_5;
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    uVar4 = param_4 & 3;
    if ((param_4 & 0xffffffff) - 1 < 3) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      puVar6 = (undefined8 *)(lVar2 + 0x10);
      puVar7 = (undefined8 *)(param_3 + 0x10);
      do {
        puVar6[-2] = puVar7[-2];
        puVar6[-1] = puVar7[-1];
        *puVar6 = *puVar7;
        puVar1 = puVar7 + 1;
        lVar5 = lVar5 + 4;
        puVar7 = puVar7 + 4;
        puVar6[1] = *puVar1;
        puVar6 = puVar6 + 4;
      } while ((param_4 & 0xffffffff) - uVar4 != lVar5);
    }
    if (uVar4 != 0) {
      puVar6 = (undefined8 *)(param_3 + lVar5 * 8);
      puVar7 = (undefined8 *)(lVar2 + lVar5 * 8);
      do {
        uVar4 = uVar4 - 1;
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar4 != 0);
    }
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar3 & 0x3fffffff) << 3);
  }
  uVar3 = (uint)(local_48 >> 3);
  if (0x1fffffff7 < local_48) {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


