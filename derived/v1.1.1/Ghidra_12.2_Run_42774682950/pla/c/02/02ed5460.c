/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed5460; name: FUN_02ed5460
 */


void FUN_02ed5460(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  local_48 = param_1 + 0x30;
  local_38 = 2;
  lStack_40 = param_1;
  FUN_02ec512c(DAT_0440a180,&local_48,param_2,param_3);
  plVar1 = *(long **)(param_1 + 0x80);
  if (((param_4 & 1) == 0) || (plVar2 = *(long **)(param_1 + 0x88), plVar2 == (long *)0x0)) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x150))(plVar1,param_2,param_3,param_4 & 1);
    }
  }
  else {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x150))(plVar1,param_2,param_3,0);
      plVar2 = *(long **)(param_1 + 0x88);
    }
    (**(code **)(*plVar2 + 0x150))(plVar2,param_2,param_3,0);
  }
  return;
}


