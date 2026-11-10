/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053ee00; name: FUN_0053ee00
 */


long FUN_0053ee00(long param_1,long param_2)

{
  void *__s;
  ulong uVar1;
  long lVar2;
  
  __s = *(void **)(param_2 + 8);
  uVar1 = (ulong)((uint)*(ushort *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 0x14) * -8 + 0x27) &
          0x3fff0;
  if ((ulong)(*(long *)(param_2 + 0x10) - (long)__s) < uVar1) {
    __s = (void *)FUN_0053f330(param_2,uVar1);
  }
  else {
    *(ulong *)(param_2 + 8) = (long)__s + uVar1;
  }
  if (__s == (void *)0x0) {
    return 0;
  }
  lVar2 = (ulong)*(byte *)(param_1 + 0x14) * -8 + 0x18;
  memset(__s,0,lVar2 + (ulong)*(ushort *)(param_1 + 0x10));
  return (long)__s + lVar2;
}


