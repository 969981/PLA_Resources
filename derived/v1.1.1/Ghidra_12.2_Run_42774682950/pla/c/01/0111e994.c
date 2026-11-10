/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111e994; name: FUN_0111e994
 */


bool FUN_0111e994(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long local_18;
  
  if (param_2 == 6) {
    lVar2 = param_1 + 0x338;
    lVar1 = param_1;
  }
  else {
    if (5 < param_2) {
      return false;
    }
    lVar1 = param_1 + (ulong)(param_2 * 0x1e) * 4;
    lVar2 = lVar1 + 0xe0;
  }
  *(undefined1 *)(param_1 + 0x53a) = 0;
  local_18 = param_1;
  FUN_01120300(lVar1 + 0x68,lVar2,&local_18);
  return *(char *)(param_1 + 0x53a) != '\0';
}


