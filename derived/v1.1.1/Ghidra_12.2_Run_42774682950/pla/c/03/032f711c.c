/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f711c; name: FUN_032f711c
 */


void FUN_032f711c(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                 uint *param_5)

{
  uint uVar1;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar1 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar1) {
    uVar1 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar1) {
    param_2 = uVar1;
  }
  FUN_032bd1d4(param_1,param_2,8,param_3,param_4,param_5);
  return;
}


