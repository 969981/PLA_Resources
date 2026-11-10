/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e953c; name: FUN_032e953c
 */


undefined8 FUN_032e953c(undefined8 param_1,long *param_2,byte *param_3,long *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  do {
    if ((*param_3 >> 1 & 1) != 0) {
      pbVar4 = *(byte **)(param_3 + 0x18);
      goto LAB_032e9564;
    }
    param_3 = *(byte **)(param_3 + 8);
  } while (param_3 != (byte *)0x0);
  pbVar4 = (byte *)0x0;
LAB_032e9564:
  pbVar5 = pbVar4;
  if ((*pbVar4 & 1) == 0) {
    pbVar5 = *(byte **)(pbVar4 + 8);
    bVar1 = *pbVar5;
    while ((bVar1 & 1) == 0) {
      pbVar5 = *(byte **)(pbVar5 + 8);
      bVar1 = *pbVar5;
    }
  }
  if ((((param_4[1] == 0) || (pbVar4 != (byte *)0x0 && (pbVar5[0x10] & 0x1f) == 0)) ||
      (uVar3 = FUN_032e225c(param_4[1],pbVar4), (uVar3 & 1) != 0)) || (*param_4 == 0)) {
    uVar2 = 0;
    *param_2 = *param_4;
  }
  else {
    uVar2 = 0x80040200;
  }
  return uVar2;
}


