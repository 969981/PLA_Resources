/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005cd68c; name: FUN_005cd68c
 */


void FUN_005cd68c(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *local_38;
  long local_30;
  undefined8 *local_28;
  undefined8 *local_18;
  
  local_30 = param_1;
  if ((*(long *)(param_1 + 0xd0) == 0) || (*(char *)(*(long *)(param_1 + 0xd0) + 0x60) == '\0')) {
    if (*(long *)(param_1 + 0xf0) == 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x30);
    uVar1 = *(undefined4 *)(param_1 + 0xe8);
    FUN_005d0640(&local_28,&local_30);
    local_38 = local_28;
    local_28 = (undefined8 *)0x0;
                    /* try { // try from 005cd724 to 005cd733 has its CatchHandler @ 005cd770 */
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar1,&local_38);
    puVar2 = local_38;
    local_38 = (undefined8 *)0x0;
  }
  else {
    plVar3 = *(long **)(param_1 + 0x30);
    FUN_005d0640(&local_28,&local_30);
    local_18 = local_28;
    local_28 = (undefined8 *)0x0;
                    /* try { // try from 005cd6d0 to 005cd6df has its CatchHandler @ 005cd7a8 */
    (**(code **)(*plVar3 + 0x18))(plVar3,2,&local_18);
    puVar2 = local_18;
    local_18 = (undefined8 *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  }
  return;
}


