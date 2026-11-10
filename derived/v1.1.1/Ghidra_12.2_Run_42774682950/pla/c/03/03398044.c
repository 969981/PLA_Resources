/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03398044; name: FUN_03398044
 */


void FUN_03398044(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_50 = 0;
  (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x50))
            ((long *)(param_3[2] & 0xfffffffffffffffe),*param_3,param_3[1],&local_50);
  if ((int)local_40 == 0) {
    if (local_48 == 0) {
      bVar1 = false;
    }
    else {
      uVar2 = FUN_032e1fec(param_3[1]);
      bVar1 = uVar2 < 2;
    }
  }
  else {
    bVar1 = true;
  }
  FUN_03398734(param_1,bVar1,param_2,param_3);
  if ((local_38 & 1) != 0) {
    FUN_032e0c40(local_38 & 0xfffffffffffffffe);
  }
  return;
}


