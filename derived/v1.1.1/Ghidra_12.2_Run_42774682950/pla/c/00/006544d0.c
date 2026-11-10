/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006544d0; name: FUN_006544d0
 */


bool FUN_006544d0(undefined8 *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  if (*(long *)(pbVar2 + 0x60) == 0) {
    return false;
  }
  uVar1 = (ulong)(*pbVar2 >> 1);
  if ((*pbVar2 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar2 + 8);
  }
  return uVar1 != 0;
}


