/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db410; name: FUN_032db410
 */


int FUN_032db410(long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ulong local_28;
  
  if (((*(byte *)(param_1 + 2) >> 4 & 1) == 0) ||
     (puVar3 = (uint *)FUN_032e2008(param_1,0x100000), puVar3 == (uint *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar3;
  }
  local_28 = (ulong)uVar1;
  iVar2 = FUN_032db4d0(&local_28,param_3);
  if (iVar2 <= param_2) {
    iVar2 = param_2;
  }
  return iVar2;
}


