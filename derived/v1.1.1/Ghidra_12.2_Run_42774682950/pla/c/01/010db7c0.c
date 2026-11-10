/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010db7c0; name: FUN_010db7c0
 */


undefined8 FUN_010db7c0(long param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  
  uVar1 = FUN_010dac08();
  if (param_2 == 0) {
    param_1 = param_1 + 0x68;
  }
  else if (param_2 == 1) {
    param_1 = param_1 + 0xaf4;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    param_1 = param_1 + 0xc84;
  }
  if (param_3 < uVar1) {
    *param_4 = *(undefined4 *)(param_1 + (ulong)param_3 * 4);
    return 1;
  }
  return 0;
}


