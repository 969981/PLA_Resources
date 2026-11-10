/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da0b10; name: FUN_00da0b10
 */


void FUN_00da0b10(long param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 local_24;
  
  uVar1 = nn::hid::GetNpadStyleSet(param_2);
  if ((uVar1 >> 1 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      pcVar2 = *(code **)(param_1 + 0x10);
      if ((uVar1 >> 2 & 1) == 0) {
        if (pcVar2 == (code *)0x0) {
          return;
        }
        local_24 = 0;
      }
      else {
        if (pcVar2 == (code *)0x0) {
          return;
        }
        local_24 = 3;
      }
    }
    else {
      pcVar2 = *(code **)(param_1 + 0x10);
      if (pcVar2 == (code *)0x0) {
        return;
      }
      local_24 = 1;
    }
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x10);
    if (pcVar2 == (code *)0x0) {
      return;
    }
    local_24 = 2;
  }
  (*pcVar2)(param_1 + 0x30,&local_24,param_2);
  return;
}


