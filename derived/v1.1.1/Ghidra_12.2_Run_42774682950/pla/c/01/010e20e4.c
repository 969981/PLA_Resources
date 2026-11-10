/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e20e4; name: FUN_010e20e4
 */


void FUN_010e20e4(long param_1,int *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 < 0x3c0) {
    uVar1 = param_2[1] + *param_2 * 0x1e;
    if (uVar1 < 0x3c0) {
      uVar3 = (ulong)(uVar1 >> 6);
      uVar2 = 1L << ((ulong)uVar1 & 0x3f);
      if ((*(ulong *)(param_1 + ((ulong)(param_3 >> 3) & 0x1ffffff8) + 0x78) &
          1L << ((ulong)param_3 & 0x3f)) == 0) {
        uVar2 = *(ulong *)(param_1 + uVar3 * 8) & (uVar2 ^ 0xffffffffffffffff);
      }
      else {
        uVar2 = *(ulong *)(param_1 + uVar3 * 8) | uVar2;
      }
      *(ulong *)(param_1 + uVar3 * 8) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_010e4430();
}


