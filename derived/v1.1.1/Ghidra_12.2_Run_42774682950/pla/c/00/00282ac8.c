/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00282ac8; name: FUN_00282ac8
 */


void FUN_00282ac8(long param_1,long *param_2,int param_3)

{
  if (*(long *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8) == 0) {
    FUN_00271770("The Resource to be cleared does not exist. ResourceId : %d.\n",param_3);
    return;
  }
  FUN_00277e20();
  (**(code **)(*param_2 + 0x18))
            (param_2,*(undefined8 *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8));
  *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8) = 0;
  return;
}


