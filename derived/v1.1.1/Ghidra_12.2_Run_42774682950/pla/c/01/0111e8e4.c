/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111e8e4; name: FUN_0111e8e4
 */


undefined8 FUN_0111e8e4(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((5 < param_4) || (0x1d < param_5)) {
    return 0;
  }
  uVar5 = (ulong)(param_5 + param_4 * 0x1e);
  puVar3 = (ushort *)(param_1 + uVar5 * 4 + 0x68);
  if (*puVar3 == param_2) {
    puVar2 = (ushort *)(param_1 + uVar5 * 4 + 0x6a);
    uVar4 = (uint)*puVar2;
    uVar1 = uVar4 - param_3;
    if (param_3 <= uVar4) {
      *puVar2 = (ushort)uVar1;
      if ((uVar1 & 0xffff) == 0) {
        *puVar3 = 0;
      }
      return 1;
    }
  }
  return 0;
}


