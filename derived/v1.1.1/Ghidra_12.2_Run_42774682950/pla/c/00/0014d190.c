/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014d190; name: FUN_0014d190
 */


void FUN_0014d190(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (((((int)param_2 + 0x10U & 0xf) == 0) || (param_2[1] == 0xb)) &&
     (*(long **)(param_1 + 0x18) <= param_2)) {
    uVar2 = param_2[1];
    uVar1 = uVar2 & 3;
    if ((uVar1 != 1) && ((*(byte *)((long)param_2 + (uVar2 & 0xfffffffffffffff8) + 8) & 1) != 0)) {
      if ((uVar1 == 0) || ((uVar2 & 1) != 0)) {
        if (uVar1 == 0) {
          FUN_0014f540();
          return;
        }
      }
      else if ((long *)((long)param_2 +
                       ((*(ulong *)((long)param_2 + (8 - *param_2)) & 0xfffffffffffffff8) - *param_2
                       )) != param_2) goto LAB_0014d200;
      return;
    }
  }
LAB_0014d200:
                    /* WARNING: Subroutine does not return */
  abort();
}


