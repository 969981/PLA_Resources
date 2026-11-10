/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d606e0; name: FUN_00d606e0
 */


undefined8 FUN_00d606e0(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (((int)param_1[(long)param_2 * 0xc + 200] != 0) &&
     (lVar2 = (long)param_2, *(int *)((long)param_1 + lVar2 * 0x60 + 0x644) != 0)) {
    lVar3 = param_1[lVar2 * 0xc + 199];
    if (*(int *)(lVar3 + 0xb0) != 0) {
      lVar5 = 0;
      uVar4 = 0;
      do {
        if (((*(int *)(*(long *)(*(long *)(lVar3 + 0xa8) + lVar5) + 8) != 1) &&
            (uVar1 = (**(code **)(*param_1 + 0x160))(param_1,param_2,uVar4 & 0xffffffff),
            (uVar1 & 1) != 0)) &&
           (uVar1 = (**(code **)(*param_1 + 0x170))(param_1,param_2,uVar4 & 0xffffffff),
           (uVar1 & 1) == 0)) {
          return 0;
        }
        lVar3 = param_1[lVar2 * 0xc + 199];
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar4 < *(uint *)(lVar3 + 0xb0));
    }
  }
  return 1;
}


