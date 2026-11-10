/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d0a10; name: FUN_004d0a10
 */


undefined8 FUN_004d0a10(long param_1,ulong *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004d0a90(param_1 + 0x1790,param_2 + 1);
  if ((iVar1 < 1) &&
     ((0x3f < (uint)-iVar1 || ((*param_2 & 1L << ((ulong)(uint)-iVar1 & 0x3f)) != 0)))) {
    return 0;
  }
  FUN_004ce3d0(param_1 + 0xd40,param_1 + 0x1790);
  return 1;
}


