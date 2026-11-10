/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056cdd0; name: FUN_0056cdd0
 */


ulong FUN_0056cdd0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 local_28 [4];
  int local_24;
  
  local_24 = (int)param_2;
  if (*(int *)(param_1 + 0x4c) == 1) {
    if (0x7f < local_24) {
      uVar1 = FUN_00550a10(local_28,&local_24);
      uVar4 = FUN_0056b1a8(param_1,local_28[0],local_28[0],0);
      if (1 < (int)uVar1) {
        lVar6 = (ulong)uVar1 - 1;
        puVar5 = (undefined1 *)((ulong)local_28 | 1);
        do {
          uVar2 = FUN_0056b1a8(param_1,*puVar5,*puVar5,0);
          uVar4 = FUN_0056a968(param_1,uVar4,uVar2);
          lVar6 = lVar6 + -1;
          puVar5 = puVar5 + 1;
        } while (lVar6 != 0);
      }
      uVar3 = uVar4 & 0xffffffff00000000;
      goto LAB_0056ce9c;
    }
  }
  else if (*(int *)(param_1 + 0x4c) != 2) {
    uVar3 = 0;
    uVar4 = 0;
    goto LAB_0056ce9c;
  }
  uVar4 = FUN_0056b1a8(param_1,param_2,param_2 & 0xffffffff,param_3 & 1);
  uVar3 = uVar4 & 0xffffffff00000000;
LAB_0056ce9c:
  return uVar4 & 0xffffffff | uVar3;
}


