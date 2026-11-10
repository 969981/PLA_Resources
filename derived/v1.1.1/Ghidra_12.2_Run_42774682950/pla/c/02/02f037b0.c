/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f037b0; name: FUN_02f037b0
 */


undefined8 FUN_02f037b0(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int local_30 [2];
  undefined4 local_28;
  
  *(undefined2 *)(param_1 + 8) = 1;
  if (((~*(byte *)((long)param_1 + 0x42) & 6) == 0) &&
     (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
    iVar1 = *(int *)((long)param_1 + 0x3c);
    iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,iVar1,0,local_30);
    if (iVar2 != 1) {
      return 2;
    }
    *(int *)((long)param_1 + 0x2c) = local_30[0];
    *(int *)(param_1 + 6) = iVar1 - local_30[0];
    *(byte *)((long)param_1 + 0x42) =
         *(byte *)((long)param_1 + 0x42) & 0xfa |
         *(int *)((long)param_1 + 0x3c) == *(int *)((long)param_1 + 0x34);
  }
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,local_30);
    local_28 = 0;
    (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,local_30);
  }
  return 1;
}


