/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f3ae0; name: FUN_001f3ae0
 */


void FUN_001f3ae0(long param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined1 auStack_1f8 [128];
  char acStack_154 [260];
  
  if (((*(byte *)(param_1 + 0xf43) >> 2 & 1) != 0) || (*(long *)(param_1 + 0x678) != 0)) {
    FUN_001e53d0(acStack_154,0x100,param_2,auStack_1f8 + 0x80);
    sVar1 = strlen(acStack_154);
    if ((*(char **)(param_1 + 0x678) != (char *)0x0) &&
       ((*(byte *)(param_1 + 0x15a4) >> 3 & 1) == 0)) {
      strcpy(*(char **)(param_1 + 0x678),acStack_154);
      *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 8;
    }
    if ((*(byte *)(param_1 + 0xf43) >> 2 & 1) != 0) {
      (acStack_154 + sVar1)[0] = '\n';
      (acStack_154 + sVar1)[1] = '\0';
      FUN_001f3a38(param_1,0,acStack_154,sVar1 + 1);
    }
  }
  return;
}


