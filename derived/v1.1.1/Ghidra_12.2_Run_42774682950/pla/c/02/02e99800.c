/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e99800; name: FUN_02e99800
 */


void FUN_02e99800(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar2 = *(uint *)(param_1 + 0xd8);
    if (uVar2 != 0) {
      plVar3 = *(long **)(param_1 + 0xd0);
      plVar4 = plVar3;
      do {
        plVar1 = (long *)*plVar4;
        if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x90))) {
          (**(code **)(*plVar1 + 0x188))(plVar1,param_2 & 1,param_3 & 1);
          plVar3 = *(long **)(param_1 + 0xd0);
          uVar2 = *(uint *)(param_1 + 0xd8);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3 + uVar2);
    }
  }
  return;
}


