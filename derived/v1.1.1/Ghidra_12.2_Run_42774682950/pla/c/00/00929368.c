/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00929368; name: FUN_00929368
 */


ulong FUN_00929368(long param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long *plVar6;
  ulong uVar7;
  
  lVar3 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  if ((param_4 == 0x1c1) && (*(short *)(*(long *)(lVar3 + 0x70) + 0x70) == 0x1ed)) {
    uVar4 = FUN_00923c58(*(undefined8 *)(param_1 + 0x68));
    uVar7 = FUN_0091c0cc(uVar4,param_2,param_3);
    return uVar7;
  }
  pbVar5 = *(byte **)(param_1 + 0x70);
  pbVar2 = *(byte **)(param_1 + 0x78);
  if (pbVar5 == pbVar2) {
LAB_009293ec:
    if (pbVar5 != pbVar2) {
      return (ulong)pbVar5[8];
    }
  }
  else {
    do {
      if ((((uint)*pbVar5 == (param_2 & 0xff)) && (*(uint *)(pbVar5 + 4) == param_4)) &&
         ((uint)pbVar5[1] == (param_3 & 0xff))) goto LAB_009293ec;
      pbVar5 = pbVar5 + 0xc;
    } while (pbVar2 != pbVar5);
  }
  lVar3 = (&DAT_0428af30)[(ulong)param_4 * 6];
  if (lVar3 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar3 + 0x1e1) != '\0') {
      plVar6 = &DAT_0428af30 + (ulong)param_4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar7 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)*(byte *)((long)piVar1 + uVar7);
  }
  return uVar7;
}


