/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ee638; name: FUN_032ee638
 */


undefined4
FUN_032ee638(undefined8 param_1,undefined8 param_2,byte *param_3,undefined4 param_4,
            undefined4 param_5,long param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  do {
    if ((*param_3 >> 1 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_3 + 0x18);
      lVar3 = *(long *)(param_6 + 8);
      goto joined_r0x032ee688;
    }
    param_3 = *(byte **)(param_3 + 8);
  } while (param_3 != (byte *)0x0);
  uVar4 = 0;
  lVar3 = *(long *)(param_6 + 8);
joined_r0x032ee688:
  if ((lVar3 == 0) || (uVar2 = FUN_032e37ec(uVar4), (uVar2 & 1) != 0)) {
    uVar1 = FUN_032ee6d8(param_1,param_2,uVar4,param_4,param_5,param_6);
    return uVar1;
  }
  return 0x80040200;
}


