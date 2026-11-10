/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293e1f0; name: FUN_0293e1f0
 */


int FUN_0293e1f0(byte param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 7;
  if ((param_1 != 0x12) && (param_2 != 0x12)) {
    iVar1 = 7;
    switch((&DAT_03a84908)[(ulong)param_2 + (ulong)param_1 * 0x12]) {
    case 0:
      return (uint)(DAT_043ecde8 != '\0') << 3;
    default:
      iVar1 = 0;
      break;
    case 2:
      iVar1 = 8;
      if (DAT_043ecde8 == '\0') {
        iVar1 = 6;
      }
      return iVar1;
    case 4:
      break;
    case 8:
      iVar1 = 6;
      if (DAT_043ecde8 == '\0') {
        iVar1 = 8;
      }
      return iVar1;
    }
  }
  return iVar1;
}


