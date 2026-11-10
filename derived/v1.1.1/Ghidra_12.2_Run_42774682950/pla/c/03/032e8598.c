/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e8598; name: FUN_032e8598
 */


ulong FUN_032e8598(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_38;
  long lStack_28;
  
  if (param_2 == 0) {
    uVar6 = 0;
    goto LAB_032e86a0;
  }
  lStack_28 = param_2;
  lVar5 = FUN_032e896c(param_1,&lStack_28);
  if ((lVar5 != 0) &&
     (uVar6 = *(ulong *)(*param_1 + (long)*(int *)(lVar5 + 4) * 0x10 + 8), uVar6 != 0))
  goto LAB_032e86a0;
  uVar3 = FUN_032e8a0c(param_1,&lStack_28);
  if (*(uint *)(param_1 + 1) == uVar3) {
    lVar5 = *param_1;
    iVar2 = uVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= (int)uVar3) {
      lVar5 = FUN_032e8b14(PTR_PTR_0434a080,iVar2);
      uVar3 = *(uint *)(param_1 + 1);
      *param_1 = lVar5;
    }
    plVar1 = (long *)(lVar5 + (long)(int)uVar3 * 0x10);
    *plVar1 = param_2;
    plVar1[1] = 0x100000000;
    *(int *)(param_1 + 1) = iVar2;
    if (*(long *)(param_2 + 8) == 0) {
      uVar4 = 0;
    }
    else {
LAB_032e866c:
      uVar4 = FUN_032e8598(param_1);
    }
  }
  else {
    *(undefined8 *)(*param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) = 0x100000000;
    uVar4 = 0;
    if (*(long *)(param_2 + 8) != 0) goto LAB_032e866c;
  }
  local_38 = FUN_032e8290(param_1,uVar4,param_2);
  uVar6 = local_38 & 0xffffffff;
  local_38 = local_38 & 0xffffffff;
  FUN_032e86b8(param_1,&lStack_28,&local_38);
LAB_032e86a0:
  return uVar6 & 0xffffffff;
}


