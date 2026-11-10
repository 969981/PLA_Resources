/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7a760; name: FUN_02e7a760
 */


void FUN_02e7a760(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 local_3c;
  undefined4 local_38 [2];
  
  plVar3 = *(long **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 == 0) || (*plVar3 == *(long *)(param_2 + 0x40))) {
    plVar5 = plVar3;
  }
  else {
    lVar4 = (ulong)uVar2 * 0x20;
    plVar6 = plVar3;
    do {
      lVar4 = lVar4 + -0x20;
      if (lVar4 == 0) {
        return;
      }
      plVar5 = plVar6 + 4;
      plVar1 = plVar6 + 4;
      plVar6 = plVar5;
    } while (*plVar1 != *(long *)(param_2 + 0x40));
  }
  if (plVar5 != plVar3 + (ulong)uVar2 * 4) {
    local_38[0] = 0x4000b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x4001b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x4002b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x4003b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x4004b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x4005b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x4006b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x4007b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x4008b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x4009b0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x400ab0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x400bb0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x400cb0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x400db0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x400eb0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    local_38[0] = 0x400fb0;
    FUN_02e7a138(param_1,param_2,local_38,0,0,0);
    *(undefined2 *)(plVar5 + 3) = 0;
    for (plVar3 = (long *)plVar5[2]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if ((((plVar3[3] == param_2) &&
           (*(undefined4 *)((long)plVar3 + 0x2c) = 0, *(char *)(plVar3 + 5) == -0x70)) &&
          (*(char *)((long)plVar3 + 0x2b) != '\0')) && ((*(byte *)(plVar3 + 6) >> 2 & 1) == 0)) {
        local_3c = CONCAT31((int3)((uint)*(undefined4 *)(plVar3 + 5) >> 8),0x80);
        FUN_02e7a138(param_1,param_2,&local_3c,0,1,0);
      }
    }
    FUN_02e7a378(param_1,0);
    FUN_02e7aafc(param_1,param_2);
  }
  return;
}


