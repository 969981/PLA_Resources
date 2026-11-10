/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e2068; name: FUN_010e2068
 */


void FUN_010e2068(long param_1,uint param_2,int *param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = param_3[1] + *param_3 * 0x1e;
  if ((0x3bf < uVar2) || (0x3bf < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_010e4430();
  }
  puVar1 = (ulong *)(param_1 + ((ulong)(param_2 >> 3) & 0x1ffffff8) + 0x78);
  uVar3 = 1L << ((ulong)param_2 & 0x3f);
  if ((*(ulong *)(param_1 + ((ulong)(uVar2 >> 3) & 0x1ffffff8)) & 1L << ((ulong)uVar2 & 0x3f)) == 0)
  {
    uVar3 = *puVar1 & (uVar3 ^ 0xffffffffffffffff);
  }
  else {
    uVar3 = *puVar1 | uVar3;
  }
  *puVar1 = uVar3;
  return;
}


