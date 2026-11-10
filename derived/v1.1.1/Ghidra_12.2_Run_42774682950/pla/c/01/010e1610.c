/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e1610; name: FUN_010e1610
 */


void FUN_010e1610(long param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_2[1] + *param_2 * 0x1e;
  if (uVar1 < 0x3c0) {
    uVar2 = param_3[1] + *param_3 * 0x1e;
    if (uVar2 < 0x3c0) {
      uVar3 = 1L << ((ulong)uVar1 & 0x3f);
      uVar5 = *(ulong *)(param_1 + (ulong)(uVar1 >> 6) * 8);
      uVar4 = uVar5 & (uVar3 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_1 + ((ulong)(uVar2 >> 3) & 0x1ffffff8)) & 1L << ((ulong)uVar2 & 0x3f))
          != 0) {
        uVar4 = uVar5 | uVar3;
      }
      *(ulong *)(param_1 + (ulong)(uVar1 >> 6) * 8) = uVar4;
      uVar1 = param_3[1] + *param_3 * 0x1e;
      if (uVar1 < 0x3c0) {
        uVar4 = (ulong)(uVar1 >> 6);
        uVar6 = 1L << ((ulong)uVar1 & 0x3f);
        if ((uVar5 & uVar3) == 0) {
          uVar6 = *(ulong *)(param_1 + uVar4 * 8) & (uVar6 ^ 0xffffffffffffffff);
        }
        else {
          uVar6 = *(ulong *)(param_1 + uVar4 * 8) | uVar6;
        }
        *(ulong *)(param_1 + uVar4 * 8) = uVar6;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_010e4430();
}


