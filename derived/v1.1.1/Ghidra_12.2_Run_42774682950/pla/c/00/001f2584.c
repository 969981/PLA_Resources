/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f2584; name: FUN_001f2584
 */


undefined8 FUN_001f2584(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
    plVar2 = (long *)FUN_001e95e8(*(long *)(param_1 + 0xd8));
    for (lVar4 = *plVar2; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
      sVar3 = strlen((char *)(lVar4 + 0x18));
      iVar1 = FUN_001f8bec((char *)(lVar4 + 0x18),param_2,sVar3);
      if (iVar1 != 0) {
        FUN_001f3934(param_1,"Server %s is blacklisted\n",param_2);
        return 1;
      }
    }
  }
  return 0;
}


