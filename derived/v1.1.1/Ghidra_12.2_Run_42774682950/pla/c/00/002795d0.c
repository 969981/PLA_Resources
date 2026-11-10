/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002795d0; name: FUN_002795d0
 */


ulong FUN_002795d0(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (0 < iVar1) {
    uVar3 = 0;
    plVar4 = (long *)(*(long *)(param_1 + 0x58) + 0x10);
    do {
      iVar2 = strcmp(param_2,(char *)(*plVar4 + 0x10));
      if (iVar2 == 0) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 7;
    } while ((long)uVar3 < (long)iVar1);
  }
  return 0xffffffff;
}


