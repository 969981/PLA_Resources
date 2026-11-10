/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01beb5c8; name: FUN_01beb5c8
 */


void FUN_01beb5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  
  plVar1 = *(long **)(param_4 + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_00d08588(&local_78,param_7);
                    /* WARNING: Subroutine does not return */
  FUN_02a4c0f4(param_1,0);
}


