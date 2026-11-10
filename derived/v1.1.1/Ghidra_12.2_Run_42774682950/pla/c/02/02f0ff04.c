/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0ff04; name: FUN_02f0ff04
 */


void FUN_02f0ff04(long *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    if ((param_3 & 1) != 0) {
      local_28 = 1;
      local_40[0] = 0;
      local_24 = 0x100;
      uStack_30 = 0;
      local_38 = param_4;
      (**(code **)(*param_1 + 0x128))(param_1,local_40);
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      *(uint *)((long)plVar1 + 0x2a3) = *(uint *)((long)plVar1 + 0x2a3) | 0x100000;
      plVar1 = (long *)*param_2;
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,1);
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      (*DAT_0442d150)(0,plVar1);
    }
    *param_2 = 0;
  }
  return;
}


