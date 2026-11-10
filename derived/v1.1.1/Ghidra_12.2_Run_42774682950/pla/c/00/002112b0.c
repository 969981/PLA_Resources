/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002112b0; name: FUN_002112b0
 */


undefined8 FUN_002112b0(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = param_2 ^ param_2 >> 0xc ^ param_2 >> 0x14;
  plVar1 = (long *)(*param_1 + (ulong)((int)param_1[3] - 1U & (uVar2 ^ uVar2 >> 4 ^ uVar2 >> 7)) * 8
                   );
  plVar4 = (long *)*plVar1;
  if (plVar4 == (long *)0x0) {
    uVar3 = 0xfffffe0b;
  }
  else {
    uVar2 = *(uint *)(plVar4 + 1);
    while (uVar2 != param_2) {
      plVar5 = (long *)*plVar4;
      if (plVar5 == (long *)0x0) {
        return 0xfffffe0b;
      }
      plVar1 = plVar4;
      plVar4 = plVar5;
      uVar2 = *(uint *)(plVar5 + 1);
    }
    *plVar1 = *plVar4;
    uVar3 = 0;
    param_1[2] = param_1[2] + -1;
  }
  return uVar3;
}


