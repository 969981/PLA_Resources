/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e734c; name: FUN_010e734c
 */


ulong FUN_010e734c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char local_28 [4];
  byte local_24 [4];
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_28,1,0);
    uVar3 = uVar3 & 0xffffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar5 = 0;
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (local_28[0] == '\b') {
      plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,local_24,1,0);
        uVar5 = uVar5 & 1;
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      uVar3 = (ulong)local_24[0] << 8;
    }
  }
  return uVar3 | uVar5;
}


