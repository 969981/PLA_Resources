/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe0320; name: FUN_02fe0320
 */


void FUN_02fe0320(undefined8 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar1 = (*param_3 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar1) {
    uVar1 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar1) {
    param_2 = uVar1;
  }
  FUN_032bd1d4(param_1,param_2,4,0,0,param_3);
  return;
}


