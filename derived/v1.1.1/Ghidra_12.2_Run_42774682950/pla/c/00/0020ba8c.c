/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020ba8c; name: FUN_0020ba8c
 */


int FUN_0020ba8c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0020bad0();
  if (iVar1 == 0) {
    lVar2 = FUN_00205cf4(param_1,1);
    *(ushort *)(lVar2 + 0xe2) = *(ushort *)(lVar2 + 0xe2) | 0x400;
  }
  return iVar1;
}


