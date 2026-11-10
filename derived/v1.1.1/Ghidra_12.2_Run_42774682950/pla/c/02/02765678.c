/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02765678; name: FUN_02765678
 */


void FUN_02765678(undefined8 param_1,byte *param_2)

{
  byte *local_20;
  ulong uStack_18;
  
  uStack_18 = *(ulong *)(param_2 + 8);
  local_20 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_20 = param_2 + 1;
    uStack_18 = (ulong)(*param_2 >> 1);
  }
  FUN_027656b4(param_1,&local_20);
  return;
}


