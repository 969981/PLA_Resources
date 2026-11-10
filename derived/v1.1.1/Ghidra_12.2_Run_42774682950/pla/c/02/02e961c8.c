/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e961c8; name: FUN_02e961c8
 */


int FUN_02e961c8(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  if ((param_3 & 3) != 0) {
    iVar1 = 0xc - (param_3 & 3);
  }
  psVar2 = *(short **)(param_1 + 8);
  if (*psVar2 == -1 || *psVar2 == 0x3040) {
    return iVar1 + param_3 + *(int *)(psVar2 + 0xc) * (uint)(ushort)psVar2[1] * 2;
  }
  return 0;
}


