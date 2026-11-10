/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004aeb60; name: FUN_004aeb60
 */


void FUN_004aeb60(uint *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint local_18;
  uint local_14;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  local_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (param_4 == 0) {
    FUN_004ad860(&local_18,param_3);
  }
  else {
    FUN_004ad420();
  }
  uVar1 = (local_18 & 0xff00ff00) >> 8 | (local_18 & 0xff00ff) << 8;
  *param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


