/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087128c; name: FUN_0087128c
 */


void FUN_0087128c(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_70 [4];
  undefined4 local_60 [8];
  long local_38;
  
  local_70[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_60);
  local_38 = 0;
  FUN_007ecf14(&local_38);
  if (*(int *)(param_1 + 0x7b8) == 4) {
    lVar5 = local_38 - *(long *)(param_1 + 0x848);
    plVar3 = (long *)FUN_007ed01c();
    lVar2 = 0;
    if (*plVar3 != 0) {
      lVar2 = lVar5 / *plVar3;
    }
    if (*(int *)(param_1 + 0x5c) / 5 < lVar2) {
      uVar1 = *(undefined2 *)(param_1 + 0x60);
      FUN_007e3400(local_60);
      FUN_00874c48(param_1,5,local_60,uVar1,0);
      FUN_007e34a4(local_60);
      *(long *)(param_1 + 0x848) = local_38;
    }
  }
  lVar5 = 0;
  uVar6 = 0;
  lVar4 = *(long *)(param_1 + 0x860);
  lVar2 = param_1;
  while( true ) {
    if ((lVar4 != 0) && (*(int *)(lVar2 + 0x858) == 4)) {
      lVar7 = local_38 - *(long *)(lVar2 + 0x8f8);
      plVar3 = (long *)FUN_007ed01c();
      lVar4 = 0;
      if (*plVar3 != 0) {
        lVar4 = lVar7 / *plVar3;
      }
      if (*(int *)(param_1 + 0x5c) / 5 < lVar4) {
        FUN_00874c48(param_1,3,lVar2 + 0x870,uVar6 & 0xffffffff,*(undefined2 *)(lVar2 + 0x868));
        FUN_00874c48(param_1,4,lVar2 + 0x890,uVar6 & 0xffffffff,*(undefined2 *)(lVar2 + 0x868));
        *(long *)(lVar2 + 0x8f8) = local_38;
      }
    }
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x17) break;
    lVar5 = lVar5 + 0xb0;
    lVar2 = param_1 + lVar5;
    lVar4 = *(long *)(lVar2 + 0x860);
  }
  return;
}


