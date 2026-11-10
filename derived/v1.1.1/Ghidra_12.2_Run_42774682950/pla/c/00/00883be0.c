/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00883be0; name: FUN_00883be0
 */


void FUN_00883be0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  lVar1 = *(long *)(param_2 + 0x2b68);
  lVar2 = *(long *)(lVar1 + 8);
  local_50 = *(undefined8 *)(lVar2 + 0x3b0);
  local_48 = *(undefined8 *)(lVar2 + 0x3b8);
  local_40 = *(undefined8 *)(lVar2 + 0x3c0);
  plVar3 = *(long **)(lVar2 + 0x3c8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar1 = *(long *)(param_2 + 0x2b68);
  }
  local_38 = plVar3;
  FUN_00883dcc(param_1,*(undefined8 *)(lVar1 + 0xd8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


