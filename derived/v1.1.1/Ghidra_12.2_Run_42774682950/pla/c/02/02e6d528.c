/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6d528; name: FUN_02e6d528
 */


void FUN_02e6d528(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  
  if (((param_3 != 0) && (param_4 != 0)) &&
     (uVar3 = param_3 - (param_3 >> 1 & 0x55555555), uVar4 = param_4 - (param_4 >> 1 & 0x55555555),
     uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333),
     uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333),
     (((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 |
      (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101) >> 0x18 & 0x3e) == 0)) {
    iVar5 = 0;
    if (param_4 - 1 != 0) {
      iVar5 = 0x20 - (int)LZCOUNT(param_4 - 1);
    }
    iVar2 = 0;
    if (param_3 - 1 != 0) {
      iVar2 = 0x20 - (int)LZCOUNT(param_3 - 1);
    }
    *(int *)(param_1 + 0x314) = iVar5;
    uVar3 = (iVar2 - iVar5) + 1;
    *(uint *)(param_1 + 0x30c) = param_3;
    *(uint *)(param_1 + 0x310) = param_4;
    *(uint *)(param_1 + 0x318) = uVar3;
    if (uVar3 < 0x21) {
      uVar3 = 0;
      if (param_3 != 0) {
        uVar3 = param_2 / param_3;
      }
      iVar5 = uVar3 * param_3;
      *(int *)(param_1 + 0x308) = iVar5;
      if (iVar5 != 0) {
        if (param_6 == 0) {
          *(uint *)(param_1 + 0x31c) = param_5 | 8;
          param_6 = FUN_02f59e40(param_5 | 8,param_2,param_4);
          *(long *)(param_1 + 0x300) = param_6;
          if (param_6 == 0) {
            return;
          }
          iVar5 = *(int *)(param_1 + 0x308);
          param_3 = *(uint *)(param_1 + 0x30c);
        }
        else {
          *(long *)(param_1 + 0x300) = param_6;
        }
        param_3 = iVar5 - param_3;
        plVar1 = (long *)(param_6 + (ulong)param_3);
        while( true ) {
          if (plVar1 != (long *)0x0) {
            *plVar1 = 0;
          }
          uVar6 = (ulong)(*(int *)(param_1 + 0x318) - 1);
          plVar7 = (long *)(param_1 + uVar6 * 0x18 + 0x10);
          if (*plVar7 == 0) {
            *plVar7 = (long)plVar1;
            *(long **)(param_1 + uVar6 * 0x18 + 8) = plVar1;
            *plVar1 = 0;
          }
          else {
            *plVar1 = *plVar7;
            *plVar7 = (long)plVar1;
          }
          *(int *)(param_1 + uVar6 * 0x18) = *(int *)(param_1 + uVar6 * 0x18) + 1;
          if (param_3 == 0) break;
          param_3 = param_3 - *(int *)(param_1 + 0x30c);
          plVar1 = (long *)(*(long *)(param_1 + 0x300) + (ulong)param_3);
        }
      }
    }
  }
  return;
}


