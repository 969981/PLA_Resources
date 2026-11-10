/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f8174; name: FUN_027f8174
 */


void FUN_027f8174(long param_1,char param_2,uint param_3)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x120) != 0) {
    uVar1 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x118) + uVar1) == param_2) {
        FUN_027f5e8c(*(undefined8 *)(param_1 + 200),uVar1 & 0xffffffff,param_3 & 1);
        return;
      }
      uVar1 = uVar1 + 1;
    } while (*(ulong *)(param_1 + 0x120) != uVar1);
  }
  return;
}


