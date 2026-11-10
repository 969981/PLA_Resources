/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3fa54; name: FUN_02f3fa54
 */


void FUN_02f3fa54(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 local_28;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (param_2 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 8;
    FUN_02e7c2f8(param_1);
    if ((*(byte *)(param_1 + 0x17c) >> 1 & 1) == 0) {
      *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 2;
      FUN_02e7c354(param_1);
    }
  }
  else if (param_2 < *(uint *)(param_1 + 0x178)) {
    *(uint *)(param_1 + 0x178) = param_2;
  }
  plVar2 = (long *)(param_1 + 0x70);
  local_28 = (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
  FUN_02ee8f80(plVar2,&local_28,uVar1 & 1);
  FUN_02e7c354(param_1);
  return;
}


