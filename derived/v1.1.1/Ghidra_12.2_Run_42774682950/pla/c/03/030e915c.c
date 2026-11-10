/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e915c; name: FUN_030e915c
 */


void FUN_030e915c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  uint local_100;
  undefined2 local_fc;
  long local_f8;
  
  uVar3 = (uint)param_2;
  if (param_3 == 0) {
    local_100 = 0x2000010;
    local_fc = 0x25;
    plVar1 = *(long **)(param_1 + 0x7f0);
    local_f8 = param_2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,&local_100);
    }
    if (-1 < param_2) {
      uVar2 = FUN_032c0fa4(param_1 + 0x948,param_2,&local_100);
      uVar3 = local_100;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0xffffff;
      }
    }
    param_3 = 0;
  }
  else {
    FUN_030e9278(&local_100,param_2);
    plVar1 = *(long **)(param_1 + 0x7f0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,&local_100);
    }
    if (-1 < param_2) {
      uVar2 = FUN_032c0fa4(param_1 + 0x948,param_2,&local_100);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0xffffff;
      }
      else {
        uVar3 = local_100;
      }
    }
  }
  FUN_03001710(param_1 + 0x28,uVar3 & 0xffffff,param_3);
  FUN_030027d8(param_1 + 0x740,param_1,param_2);
  return;
}


