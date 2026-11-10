/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a8a08; name: FUN_030a8a08
 */


long FUN_030a8a08(long *param_1,uint param_2,long param_3,ulong param_4,uint *param_5)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
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
  FUN_032bd100(param_2,1,*param_5,&local_48);
  uVar3 = *param_5;
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if (0 < (int)param_4) {
    uVar2 = param_4 & 3;
    if ((param_4 & 0xffffffff) - 1 < 3) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        puVar5 = (undefined1 *)(param_3 + 1 + lVar4);
        puVar6 = (undefined1 *)(lVar1 + 1 + lVar4);
        lVar4 = lVar4 + 4;
        puVar6[-1] = puVar5[-1];
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
      } while ((param_4 & 0xffffffff) - uVar2 != lVar4);
    }
    if (uVar2 != 0) {
      puVar5 = (undefined1 *)(lVar1 + lVar4);
      puVar6 = (undefined1 *)(param_3 + lVar4);
      do {
        uVar2 = uVar2 - 1;
        *puVar5 = *puVar6;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar2 != 0);
    }
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,uVar3 & 0x3fffffff);
  }
  if (0x3ffffffe < local_48) {
    local_48 = 0x3fffffff;
  }
  *param_5 = (uint)local_48;
  return lVar1;
}


