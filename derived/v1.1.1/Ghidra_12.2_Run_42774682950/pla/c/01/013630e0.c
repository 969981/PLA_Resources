/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013630e0; name: FUN_013630e0
 */


undefined1 FUN_013630e0(long param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (param_2 == 2) {
    if (*(int *)(param_1 + 0x78) == 0x286) {
      return *(ushort *)(param_1 + 0x7c) - 1 < 2;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
    if (param_2 != 0) {
      uVar1 = 3;
    }
    if (*(int *)(param_1 + 0x78) == 0x286) {
      uVar2 = 4;
      if (param_2 != 0) {
        uVar2 = 5;
      }
      if (1 < *(ushort *)(param_1 + 0x7c) - 1) {
        uVar2 = uVar1;
      }
      return uVar2;
    }
  }
  return uVar1;
}


