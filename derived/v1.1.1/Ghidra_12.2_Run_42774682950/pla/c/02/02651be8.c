/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02651be8; name: FUN_02651be8
 */


undefined4 FUN_02651be8(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x88);
  uVar1 = (ulong)param_2;
  if ((uVar2 & uVar2 - 1) == 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x80) + (ulong)((int)uVar2 - 1U & param_2) * 8);
    do {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3[1] != uVar1);
    } while (*(uint *)(plVar3 + 2) != param_2);
  }
  else {
    uVar4 = uVar1;
    if (uVar2 <= uVar1) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      uVar4 = uVar1 - uVar4 * uVar2;
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x80) + uVar4 * 8);
    do {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3[1] != uVar1);
    } while (*(uint *)(plVar3 + 2) != param_2);
  }
  return *(undefined4 *)((long)plVar3 + 0x14);
}


