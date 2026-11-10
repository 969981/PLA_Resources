/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b7424; name: FUN_031b7424
 */


void FUN_031b7424(long *param_1,long *param_2,uint *param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  if (*(int *)((long)param_1 + 0x2c) < (int)param_1[5]) {
    *param_1 = (long)param_2;
    uVar3 = param_5 >> 0x16 & 0x3ff;
    iVar2 = (int)uVar3;
    if (*param_2 == 0) {
      param_2[2] = param_2[1];
    }
    else if (*(int *)((long)param_2 + 0x6c) != iVar2) {
      param_2[2] = *(long *)(*(long *)(*param_2 + 0x38) + uVar3 * 0xf0 + 0x10);
      *(int *)((long)param_2 + 0x6c) = iVar2;
    }
    *(int *)((long)param_2 + 0x6c) = iVar2;
    FUN_031b754c(param_1 + 0x10,*param_1,param_5 & 0xffffffff);
    *(long **)(*param_1 + 0x58) = param_1 + 2;
    FUN_031b7590(param_1,param_5 & 0xffffffff);
    if (0 < (int)param_4) {
      uVar3 = (ulong)param_4;
      do {
        if (*param_3 != 0xffffffff) {
          plVar4 = (long *)*param_1;
          uVar1 = *param_3 >> 0x16;
          if (*plVar4 == 0) {
            plVar4[2] = plVar4[1];
          }
          else if (*(uint *)((long)plVar4 + 0x6c) != uVar1) {
            plVar4[2] = *(long *)(*(long *)(*plVar4 + 0x38) + (ulong)uVar1 * 0xf0 + 0x10);
            *(uint *)((long)plVar4 + 0x6c) = uVar1;
          }
          *(uint *)((long)plVar4 + 0x6c) = uVar1;
          FUN_031b75d4(param_1,*param_3);
        }
        uVar3 = uVar3 - 1;
        param_3 = param_3 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}


