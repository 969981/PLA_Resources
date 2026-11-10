/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284ff5c; name: FUN_0284ff5c
 */


ulong FUN_0284ff5c(long param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  int *local_40;
  uint local_38;
  int *local_30;
  uint local_28;
  
  local_40 = (int *)0x8c756c9d7ebc8081;
  uVar2 = FUN_010868dc(&local_30,param_1 + 0x80,&local_40);
  if (local_30 == (int *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar7 = 0xff000000;
    uVar6 = 0;
  }
  else {
    if (((local_28 != 0xffffffff) && (4 < *(ushort *)((long)local_30 - (long)*local_30))) &&
       (uVar6 = (ulong)((ushort *)((long)local_30 - (long)*local_30))[2], uVar6 != 0)) {
      puVar5 = (uint *)((long)local_30 + uVar6);
      puVar5 = (uint *)((long)puVar5 + (ulong)local_28 * 4 + (ulong)*puVar5 + 4);
      piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
      puVar5 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      if ((ulong)(long)(int)param_2 < (ulong)*puVar5) {
        local_38 = puVar5[(ulong)param_2 + 1];
        local_40 = local_30;
        uVar3 = FUN_0285006c(uVar2,&local_40);
        uVar7 = uVar3 & 0xff000000;
        uVar6 = uVar3 & 0xff0000;
        uVar4 = uVar3 & 0xff00;
        uVar3 = uVar3 & 0xff;
        goto LAB_0285002c;
      }
    }
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0xff000000;
  }
LAB_0285002c:
  return uVar4 | uVar3 | uVar6 | uVar7;
}


