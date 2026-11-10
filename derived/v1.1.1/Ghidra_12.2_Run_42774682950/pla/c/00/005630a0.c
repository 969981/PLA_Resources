/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005630a0; name: FUN_005630a0
 */


char * FUN_005630a0(char *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined8 *__dest;
  char *pcVar3;
  
  if (*param_1 != '\x02') {
    if ((*param_1 == '\x05') && (1 < *(ushort *)(param_1 + 6))) {
      __dest = *(undefined8 **)(param_1 + 8);
      if (*(char *)*__dest != '\x02') {
        FUN_0055de34();
        *__dest = 0;
        if (*(short *)(param_1 + 6) == 2) {
          pcVar3 = (char *)__dest[1];
          __dest[1] = 0;
          FUN_0055de34(param_1);
          return pcVar3;
        }
        uVar2 = *(short *)(param_1 + 6) - 1;
        *(ushort *)(param_1 + 6) = uVar2;
        memmove(__dest,__dest + 1,(ulong)uVar2 << 3);
        return param_1;
      }
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 2);
      FUN_0055de34(param_1);
      param_1 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x28);
      if (param_1 != (char *)0x0) {
        FUN_0055da3c(param_1,2,uVar1);
      }
    }
  }
  return param_1;
}


