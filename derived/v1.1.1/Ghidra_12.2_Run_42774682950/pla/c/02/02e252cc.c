/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e252cc; name: FUN_02e252cc
 */


undefined8 FUN_02e252cc(uint *param_1,long *param_2,uint param_3)

{
  long lVar1;
  
  param_3 = param_3 & 0xfffffffc;
  *param_1 = param_3;
  if (param_3 != 0) {
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 << 2);
    *(long *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      return 0x34;
    }
  }
  param_1[4] = 0;
  return 1;
}


