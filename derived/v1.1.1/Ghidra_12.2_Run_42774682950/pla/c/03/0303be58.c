/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303be58; name: FUN_0303be58
 */


undefined4 FUN_0303be58(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined4 local_f0;
  undefined1 auStack_e8 [184];
  
  lVar3 = *(long *)(param_1 + 0x498);
  if ((~*(uint *)(lVar3 + 0x24) & 0xffffff) == 0) {
    FUN_0303bf14(param_1 + 0x7a0,param_1);
    lVar3 = *(long *)(param_1 + 0x498);
  }
  uVar1 = FUN_03103314(lVar3,param_2);
  local_f8 = 0x20000d0;
  local_f4 = 0x43;
  local_f0 = uVar1;
  FUN_03102244(auStack_e8,param_2);
  plVar2 = *(long **)(param_1 + 0x7f0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_f8);
  }
  FUN_031023c8(auStack_e8);
  return uVar1;
}


