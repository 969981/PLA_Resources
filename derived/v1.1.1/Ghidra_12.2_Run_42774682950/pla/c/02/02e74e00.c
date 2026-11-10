/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e74e00; name: FUN_02e74e00
 */


uint FUN_02e74e00(char *param_1)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte local_134 [260];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  sVar1 = strlen(param_1);
  sVar2 = 0x103;
  if (sVar1 + 1 < 0x103) {
    sVar2 = sVar1 + 1;
  }
  strncpy((char *)local_134,param_1,sVar2);
  local_134[sVar2] = 0;
  sVar2 = strlen(param_1);
  if (sVar2 != 0) {
    pbVar4 = local_134;
    sVar1 = sVar2;
    do {
      if (*pbVar4 - 0x41 < 0x1a) {
        *pbVar4 = *pbVar4 + 0x20;
      }
      sVar1 = sVar1 - 1;
      pbVar4 = pbVar4 + 1;
    } while (sVar1 != 0);
  }
  uVar3 = 0x811c9dc5;
  if ((int)sVar2 != 0) {
    pbVar4 = local_134;
    do {
      pbVar5 = pbVar4 + 1;
      uVar3 = uVar3 * 0x1000193 ^ (uint)*pbVar4;
      pbVar4 = pbVar5;
    } while (pbVar5 < local_134 + (sVar2 & 0xffffffff));
  }
  return uVar3;
}


