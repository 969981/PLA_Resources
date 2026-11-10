/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009351b8; name: FUN_009351b8
 */


int FUN_009351b8(undefined8 param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 6) {
    return 0;
  }
  iVar2 = 3;
  if (0x17 < param_2) {
    iVar2 = (uint)(param_2 < 0x1e) << 2;
  }
  iVar1 = 1;
  if (0x11 < param_2) {
    iVar1 = iVar2;
  }
  iVar2 = 2;
  if (0xb < param_2) {
    iVar2 = iVar1;
  }
  return iVar2;
}


