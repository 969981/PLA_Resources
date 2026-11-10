/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080a878; name: FUN_0080a878
 */


undefined4 FUN_0080a878(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [16];
  int local_18 [2];
  
  uVar1 = FUN_007f0ee4(*(long *)(param_1 + 0x30) + (param_2 & 0xffff) * 0x20);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_007f0fc8(auStack_50,*(long *)(param_1 + 0x30) + (param_2 & 0xffff) * 0x20);
    local_18[0] = 0;
    FUN_007e3524(auStack_30,auStack_50,local_18);
    uVar2 = 0;
    if (local_18[0] != *(int *)(param_1 + 0x108)) {
      if (local_18[0] == *(int *)(param_1 + 0x148)) {
        uVar2 = 1;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x188)) {
        uVar2 = 2;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x1c8)) {
        uVar2 = 3;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x208)) {
        uVar2 = 4;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x248)) {
        uVar2 = 5;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x288)) {
        uVar2 = 6;
      }
      else {
        uVar2 = 7;
        if (local_18[0] != *(int *)(param_1 + 0x2c8)) {
          uVar2 = 0xffffffff;
        }
      }
    }
    FUN_007e34a4(auStack_50);
  }
  return uVar2;
}


