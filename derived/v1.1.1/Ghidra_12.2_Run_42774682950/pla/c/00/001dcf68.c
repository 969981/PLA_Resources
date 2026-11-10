/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dcf68; name: FUN_001dcf68
 */


ulong FUN_001dcf68(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  if (sVar2 < sVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_001f8b48(param_1,param_2 + (sVar2 - sVar1));
    if ((int)uVar3 != 0) {
      if (sVar2 == sVar1) {
        uVar3 = 1;
      }
      else {
        uVar3 = (ulong)((param_2 + (sVar2 - sVar1))[-1] == '.');
      }
    }
  }
  return uVar3;
}


