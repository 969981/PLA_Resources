/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00375778; name: FUN_00375778
 */


void FUN_00375778(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_68 = &local_60;
  local_50 = &local_48;
  local_60 = 0;
  uStack_58 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = (undefined8 *)0x0;
  local_78 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,8);
  plVar1 = local_70;
  if (plVar2 != (long *)0x0) {
    *plVar2 = (long)(PTR_DAT_04373c48 + 0x10);
  }
  if (local_70 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_70;
    local_70 = plVar2;
    (*(code *)*puVar3)(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
    plVar2 = local_70;
  }
                    /* try { // try from 00375810 to 0037582b has its CatchHandler @ 00375884 */
  local_70 = plVar2;
  FUN_0037401c(&local_88,param_1,param_2,param_3,param_4);
  FUN_00365d78(&local_50,local_48);
  FUN_00365de8(&puStack_68,local_60);
  plVar1 = local_70;
  local_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    FUN_002e2ea0(PTR_LAB_04373088,plVar1);
  }
  return;
}


