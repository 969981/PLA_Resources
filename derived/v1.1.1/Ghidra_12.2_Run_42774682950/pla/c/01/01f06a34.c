/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f06a34; name: FUN_01f06a34
 */


void FUN_01f06a34(long param_1)

{
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    local_18 = 0x4000000001;
    FUN_016bf8e4(&local_18);
    *(undefined1 *)(param_1 + 0x88) = 1;
    local_18 = 0x4000000100;
    FUN_016bb230(&local_18);
  }
  return;
}


