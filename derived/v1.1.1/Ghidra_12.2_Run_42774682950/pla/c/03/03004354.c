/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03004354; name: FUN_03004354
 */


undefined8 FUN_03004354(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  param_2 = param_2 & 0xffffff;
  if (param_2 != 0xffffff) {
    plVar2 = (long *)*param_1;
    if (((*(uint *)(plVar2[7] + param_2 * 0xc0 + 0x54) ^ 0xffffffff) & 10) == 0) {
      lVar1 = param_1[2];
      lVar3 = (**(code **)(*plVar2 + 0x270))
                        (plVar2,*(undefined4 *)(plVar2[7] + param_2 * 0xc0 + 0x80));
      if ((char)lVar1 == -1) {
        *(char *)(param_1 + 2) = *(char *)(lVar3 + 0x5e);
      }
      else if (*(char *)(lVar3 + 0x5e) != (char)param_1[2]) {
        return 0;
      }
    }
  }
  return 1;
}


