/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ec204; name: FUN_001ec204
 */


ushort FUN_001ec204(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x180);
  if (iVar1 < 400 || (*(ulong *)(lVar2 + 0xf40) & 0x10000) == 0) {
    return 0;
  }
  if (iVar1 == 0x197) {
    if ((*(byte *)((long)param_1 + 0x3fd) & 1) != 0) goto LAB_001ec250;
  }
  else if ((iVar1 == 0x191) && (*(char *)((long)param_1 + 0x3fc) < '\0')) {
LAB_001ec250:
    return *(ushort *)(lVar2 + 0x15a4) >> 5 & 1;
  }
  return 1;
}


