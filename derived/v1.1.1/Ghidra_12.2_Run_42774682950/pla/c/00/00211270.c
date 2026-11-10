/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211270; name: FUN_00211270
 */


void FUN_00211270(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = param_2 ^ param_2 >> 0xc ^ param_2 >> 0x14;
  for (plVar2 = *(long **)(*param_1 +
                          (ulong)((int)param_1[3] - 1U & (uVar1 ^ uVar1 >> 4 ^ uVar1 >> 7)) * 8);
      (plVar2 != (long *)0x0 && (*(uint *)(plVar2 + 1) != param_2)); plVar2 = (long *)*plVar2) {
  }
  return;
}


