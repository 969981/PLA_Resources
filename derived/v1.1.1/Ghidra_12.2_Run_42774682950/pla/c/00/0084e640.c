/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084e640; name: FUN_0084e640
 */


bool FUN_0084e640(long param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = FUN_0084bbb0();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (*(ushort *)(param_1 + 0x4e0) != 0) {
      uVar2 = (param_2 - 1U) / (uint)*(ushort *)(param_1 + 0x4e0);
    }
    uVar2 = uVar2 + 1;
  }
  return uVar2 <= (uint)*(ushort *)(param_1 + 0x28) - (uint)*(ushort *)(param_1 + 0x32);
}


