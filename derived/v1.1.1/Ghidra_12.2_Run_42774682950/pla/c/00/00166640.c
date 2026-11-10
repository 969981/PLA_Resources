/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166640; name: FUN_00166640
 */


void FUN_00166640(long *param_1,long param_2,int *param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  
  if (param_1 == (long *)0x0) {
    param_3[4] = -1;
    param_3[5] = -1;
    *param_3 = 0;
    param_3[2] = 0;
    return;
  }
  uVar1 = (uint)*(byte *)((long)param_1 + 0x3a);
  while (uVar4 = uVar1, 0 < (int)uVar4) {
    uVar1 = uVar4 - 1;
    if (*(long *)(*(long *)(*param_1 + 0x50) +
                 (long)*(short *)(**(long **)(param_1[2] + 0x58) +
                                 (long)(int)(uVar4 + *(int *)((long)param_1 + 0x34) + -1) * 2) *
                 0x10) == param_2) {
      param_3[4] = -1;
      param_3[5] = -1;
      *param_3 = 8;
      param_3[2] = uVar4 - 1;
      if (param_4 != 0) {
        return;
      }
      param_1 = param_1 + 3;
      do {
        param_1 = (long *)*param_1;
      } while ((int)uVar4 <= (int)(uint)*(byte *)(param_1 + 2));
      *(undefined1 *)((long)param_1 + 0x11) = 1;
      return;
    }
  }
  if ((ulong)*(byte *)((long)param_1 + 0x3b) != 0) {
    plVar3 = *(long **)(*param_1 + 0x58);
    uVar2 = 0;
    do {
      if (*plVar3 == param_2) {
        if (-1 < (int)uVar2) goto LAB_0016676c;
        break;
      }
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 2;
    } while (*(byte *)((long)param_1 + 0x3b) != uVar2);
  }
  FUN_00166640(param_1[1],param_2,param_3,0);
  if (*param_3 != 0) {
    uVar2 = FUN_00163920(param_1,param_2,param_3);
LAB_0016676c:
    param_3[4] = -1;
    param_3[5] = -1;
    *param_3 = 9;
    param_3[2] = (int)uVar2;
  }
  return;
}


