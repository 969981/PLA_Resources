/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7bda8; name: FUN_02e7bda8
 */


void FUN_02e7bda8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  long local_18;
  
  plVar1 = *(long **)(param_4 + 0x180);
  if (plVar1 != (long *)0x0) {
    local_38 = *(undefined1 *)(param_1 + 0x28);
    local_35 = *(undefined1 *)(param_1 + 0x2b);
    local_37 = *(undefined2 *)(param_4 + 0x2d5);
    local_30 = *(undefined8 *)(param_4 + 0x2d8);
    local_28 = *(undefined4 *)(param_4 + 0x38);
    local_20 = *(undefined4 *)(param_1 + 0x2c);
    local_24 = *(undefined4 *)(param_3 + 0x14);
    local_1c = 3;
    local_40 = param_2;
    local_18 = param_4;
    (**(code **)(*plVar1 + 0x150))(plVar1,&local_40,param_4 + 0x68,1);
  }
  return;
}


