/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9a03c; name: FUN_02e9a03c
 */


void FUN_02e9a03c(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x88))();
  *(uint *)((long)param_1 + 0xaa) =
       *(uint *)((long)param_1 + 0xaa) & 0xfffc0000 |
       *(uint *)((long)param_1 + 0xaa) & 0x1ffff | (uint)(iVar1 == 0 || iVar1 == 10) << 0x11;
  FUN_02ed46d8(param_1);
  return;
}


