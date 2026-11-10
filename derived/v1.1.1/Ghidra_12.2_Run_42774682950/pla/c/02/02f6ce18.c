/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6ce18; name: FUN_02f6ce18
 */


void FUN_02f6ce18(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  void *__s;
  long lVar4;
  uint local_48 [3];
  undefined8 local_3c;
  
  local_3c = 0;
  local_48[2] = *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 8) <= *(int *)(param_2 + 0xc)) {
    local_48[2] = *(int *)(param_2 + 0xc);
  }
  local_48[1] = 0x110;
  local_48[0] = local_48[2] * 0x40 + 0x110;
  if ((int)local_48[2] < 5 && *(int *)(param_2 + 0x14) == 2) {
    local_3c = CONCAT44(3,local_48[0]);
    local_48[0] = local_48[2] * 0x40 + 0x290;
  }
  uVar2 = local_48[0];
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,(long)(int)uVar2,0);
  memset(__s,0,(ulong)uVar2);
  FUN_02f6cf1c(__s,param_2,local_48);
  *(long *)((long)__s + 8) = (long)(int)local_48[0];
  *param_1 = __s;
  return;
}


