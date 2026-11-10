/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c220; name: FUN_02f0c220
 */


undefined4 FUN_02f0c220(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_02f0c264(param_1 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x34;
  }
  else {
    uVar1 = FUN_02f0c2bc(param_1);
    uVar2 = 0x34;
    if ((uVar1 & 1) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


