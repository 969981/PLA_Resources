/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00152d80; name: FUN_00152d80
 */


void FUN_00152d80(long param_1,uint param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + (long)(int)~param_2 * 0x10;
  if ((param_5 == 0) || (*(short *)(param_1 + 0xc4) != 0)) {
    FUN_0015b160(param_1,lVar1,param_3);
  }
  else {
    *(long *)(*(long *)(param_1 + 0x20) + 0x20) = param_5;
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = param_4;
    FUN_0015b0e0(param_1,lVar1,param_3);
  }
  if (param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 8) < *(ulong *)(param_1 + 0x10)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 8) = *(ulong *)(param_1 + 0x10);
    }
  }
  return;
}


