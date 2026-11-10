/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004de950; name: FUN_004de950
 */


undefined8 FUN_004de950(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 1 & 1) == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x488) == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  if (param_3 == 0) {
    uVar1 = FUN_004de840(param_2,lVar2 + 0x2e8,lVar2 + 0x2f8);
    return uVar1;
  }
  uVar1 = FUN_004de840(param_2,lVar2 + 0x2f0,lVar2 + 0x300);
  return uVar1;
}


