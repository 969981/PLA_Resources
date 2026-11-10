/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032675c0; name: FUN_032675c0
 */


bool FUN_032675c0(long param_1,byte *param_2)

{
  long lVar1;
  
  if ((*param_2 & 3) != 0) {
    return true;
  }
  lVar1 = *(long *)(param_1 + 0x100) + (ulong)*(ushort *)(param_2 + 4) * 0x20;
  if ((*(short *)(lVar1 + 10) == *(short *)(param_2 + 8)) &&
     (*(short *)(*(long *)(param_1 + 0x100) + (ulong)*(ushort *)(param_2 + 6) * 0x20 + 10) ==
      *(short *)(param_2 + 10))) {
    return *(ushort *)(lVar1 + 0x10) == *(ushort *)(param_2 + 6);
  }
  return false;
}


