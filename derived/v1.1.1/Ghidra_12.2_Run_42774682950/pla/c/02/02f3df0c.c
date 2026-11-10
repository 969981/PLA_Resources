/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3df0c; name: FUN_02f3df0c
 */


long * FUN_02f3df0c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 auStack_24 [4];
  
  plVar2 = (long *)FUN_02e7d2ec(DAT_0440a120,param_2,0);
  if (plVar2 == (long *)0x0) {
    plVar3 = (long *)0x0;
    *param_3 = 0;
  }
  else {
    plVar3 = (long *)(**(code **)(*plVar2 + 0x268))
                               (plVar2,*(undefined8 *)(param_1 + 0x10),
                                *(undefined8 *)(param_1 + 0x30),param_1 + 0x18,0);
    if (plVar3 != (long *)0x0) {
      local_40 = 0;
      local_48[0] = 0;
      local_38 = 0;
      local_34 = 0x40;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      iVar1 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_48,0,&local_58,param_3,auStack_24,0,0);
      if (iVar1 == 0) {
        FUN_02f3c1ec(plVar3);
        plVar3 = (long *)0x0;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return plVar3;
}


