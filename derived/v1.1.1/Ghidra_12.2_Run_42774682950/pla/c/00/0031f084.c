/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031f084; name: FUN_0031f084
 */


void FUN_0031f084(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  if (param_2 != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)(*param_1 >> 1);
    }
    FUN_00291910(param_2,pbVar2,uVar1);
  }
  return;
}


