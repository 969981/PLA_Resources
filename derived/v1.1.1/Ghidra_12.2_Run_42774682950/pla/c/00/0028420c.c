/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028420c; name: FUN_0028420c
 */


undefined8 FUN_0028420c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 9) == '\0')) {
    return 0xffffffff;
  }
  uVar2 = FUN_002795d0();
  return uVar2;
}


