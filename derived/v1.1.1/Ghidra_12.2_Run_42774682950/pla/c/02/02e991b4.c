/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e991b4; name: FUN_02e991b4
 */


void FUN_02e991b4(long param_1,undefined4 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((*(long *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0xd8) != 0)) {
    plVar3 = *(long **)(param_1 + 0xd0);
    do {
      plVar1 = (long *)*plVar3;
      if ((((*(char *)(param_2 + 0xe) == '\0') || (plVar1[0x11] == 0)) && (plVar1[0xf] != 0)) &&
         ((0 < *(short *)(plVar1[0xf] + 0x90) &&
          (uVar2 = (**(code **)(*plVar1 + 0x1f0))(plVar1,*param_2), (uVar2 & 1) == 0)))) {
        (**(code **)(*(long *)*plVar3 + 0xc0))((long *)*plVar3,param_2);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (long *)(*(long *)(param_1 + 0xd0) + (ulong)*(uint *)(param_1 + 0xd8) * 8));
  }
  return;
}


