/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f21e4; name: FUN_001f21e4
 */


undefined4 FUN_001f21e4(time_t param_1,void *param_2)

{
  tm *__src;
  undefined4 uVar1;
  time_t local_28;
  
  local_28 = param_1;
  __src = gmtime(&local_28);
  if (__src != (tm *)0x0) {
    memcpy(param_2,__src,0x38);
  }
  uVar1 = 0;
  if (__src == (tm *)0x0) {
    uVar1 = 0x2b;
  }
  return uVar1;
}


