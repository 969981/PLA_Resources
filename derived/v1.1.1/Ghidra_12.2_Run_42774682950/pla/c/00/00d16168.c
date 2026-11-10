/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d16168; name: FUN_00d16168
 */


undefined8 FUN_00d16168(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if ((param_2 != 1) || (plVar3 == (long *)0x0)) {
    if (param_2 != 0) {
      return 1;
    }
    if (plVar3 == (long *)0x0) {
      return 1;
    }
    iVar2 = (**(code **)(*plVar3 + 0x78))(plVar3);
    if (iVar2 == 0) {
      param_1[1] = 0;
      return 1;
    }
    if (iVar2 == 1) {
      uVar1 = (int)param_1[1] + 1;
      *(uint *)(param_1 + 1) = uVar1;
      if (uVar1 < 0x1c3) {
        return 0;
      }
    }
    else {
      if (iVar2 == 3) {
        return 1;
      }
      uVar1 = *(int *)((long)param_1 + 0xc) + 1;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      if (uVar1 < 4) {
        return 0;
      }
    }
    (**(code **)(*(long *)*param_1 + 0xb8))();
  }
  return 0;
}


