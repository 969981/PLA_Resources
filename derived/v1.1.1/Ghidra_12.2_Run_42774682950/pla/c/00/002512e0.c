/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002512e0; name: FUN_002512e0
 */


char * FUN_002512e0(char *param_1)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  
  sVar1 = strlen(param_1);
  if (0 < (int)sVar1) {
    uVar2 = 0;
    lVar3 = sVar1 << 0x20;
    do {
      if (param_1[(int)(~(uint)uVar2 + (int)sVar1)] == '%') {
        return param_1 + (lVar3 >> 0x20);
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + -0x100000000;
    } while ((sVar1 & 0xffffffff) != uVar2);
  }
  return param_1;
}


