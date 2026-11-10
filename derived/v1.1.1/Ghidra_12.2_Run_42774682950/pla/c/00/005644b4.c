/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005644b4; name: FUN_005644b4
 */


void FUN_005644b4(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  if (((9 < param_3) && ((int)param_2 < 0xb)) && ((param_4 & 0x804) != 4)) {
    if ((int)param_2 < 10) {
      if ((param_4 & 1) == 0) {
        FUN_0055fb58();
      }
      else {
        FUN_005647e0(param_1,param_2,9,0);
      }
    }
    if (param_3 < 0xb) {
      return;
    }
    param_2 = 0xb;
  }
  if ((param_4 & 1) == 0) {
    FUN_0055fb58(param_1,param_2,param_3);
    return;
  }
  FUN_005647e0(param_1,param_2,param_3,0);
  return;
}


