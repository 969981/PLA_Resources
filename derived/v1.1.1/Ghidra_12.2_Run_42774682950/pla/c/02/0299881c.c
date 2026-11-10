/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299881c; name: FUN_0299881c
 */


ulong FUN_0299881c(uint param_1,int param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined **local_20;
  uint local_18;
  
  if (param_2 == 1) {
    lVar5 = (&DAT_0428af30)[(ulong)param_1 * 6];
    if (lVar5 == 0) {
      plVar4 = &DAT_0428af30;
    }
    else {
      plVar4 = &DAT_0428af30;
      if (*(char *)(lVar5 + 0x1e1) != '\0') {
        plVar4 = &DAT_0428af30 + (ulong)param_1 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb1) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x58];
  }
  else {
    if (param_2 != 2) {
      if (param_3 < 3) {
        local_20 = &PTR_LAB_04294ec8;
        local_18 = param_1;
        uVar3 = FUN_02c8e3ec(&local_20,param_3);
        return uVar3;
      }
      return 0;
    }
    lVar5 = (&DAT_0428af30)[(ulong)param_1 * 6];
    if (lVar5 == 0) {
      plVar4 = &DAT_0428af30;
    }
    else {
      plVar4 = &DAT_0428af30;
      if (*(char *)(lVar5 + 0x1e1) != '\0') {
        plVar4 = &DAT_0428af30 + (ulong)param_1 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xa1) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x50];
  }
  if ((ulong)uVar2 == 0) {
    return 0;
  }
  return (ulong)*(byte *)((long)piVar1 + (ulong)uVar2);
}


