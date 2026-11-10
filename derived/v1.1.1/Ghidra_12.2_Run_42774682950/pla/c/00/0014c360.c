/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014c360; name: FUN_0014c360
 */


void FUN_0014c360(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)(param_1 + 0x378);
  while ((param_2 < *puVar2 || (uVar1 = *puVar2 + puVar2[1], uVar1 <= param_2))) {
    puVar2 = (ulong *)puVar2[2];
    if (puVar2 == (ulong *)0x0) {
LAB_0014c390:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  uVar3 = *(ulong *)(param_2 + 8);
  if (((((int)param_2 + 0x10U & 0xf) == 0) || (uVar3 == 0xb)) &&
     ((((*(ulong *)(param_1 + 0x18) <= param_2 &&
        (uVar4 = uVar3 & 0xfffffffffffffffc, uVar4 == *(ulong *)(param_1 + 0x10))) && (uVar4 != 0))
      && (((uVar4 == (-0x50 - param_2) + uVar1 && ((uVar3 & 1) != 0)) &&
          ((*(byte *)(param_2 + uVar4 + 8) & 1) == 0)))))) {
    return;
  }
  goto LAB_0014c390;
}


