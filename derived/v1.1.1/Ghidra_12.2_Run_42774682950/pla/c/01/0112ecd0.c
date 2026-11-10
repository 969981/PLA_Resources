/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112ecd0; name: FUN_0112ecd0
 */


ushort FUN_0112ecd0(long param_1,uint param_2)

{
  ulong uVar1;
  ushort uVar2;
  
  if ((int)param_2 < 0x3d5) {
    uVar2 = *(ushort *)(param_1 + (ulong)param_2 * 0x58 + 0xe4);
    if (99 < uVar2) {
      uVar1 = FUN_011357f8();
      uVar2 = 100;
      if ((uVar1 & 1) == 0) {
        uVar2 = 99;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


