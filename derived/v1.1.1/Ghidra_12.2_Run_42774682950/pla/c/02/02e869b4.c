/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e869b4; name: FUN_02e869b4
 */


undefined8 FUN_02e869b4(long param_1,uint param_2)

{
  long lVar1;
  
  if (param_2 == 1) {
    *(long *)(param_1 + 8) = param_1;
    lVar1 = param_1;
  }
  else {
    if (param_2 == 0) {
      return 1;
    }
    lVar1 = FUN_02f59e40(4,(ulong)param_2 << 3,8);
    *(long *)(param_1 + 8) = lVar1;
  }
  if (lVar1 == 0) {
    return 0x34;
  }
  *(uint *)(param_1 + 0x14) = param_2;
  return 1;
}


