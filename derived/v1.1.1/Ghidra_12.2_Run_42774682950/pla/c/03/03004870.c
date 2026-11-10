/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03004870; name: FUN_03004870
 */


void FUN_03004870(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    uVar3 = 0;
    lVar4 = 0x14;
    do {
      uVar1 = (uint)lVar2;
      if (*(int *)(*param_1 + lVar4) == 0x7fffffff) {
        if ((~*(uint *)((long)param_1 + 0x1c) & 0xffffff) == 0) {
          *(uint *)((long)param_1 + 0x1c) =
               *(uint *)((long)param_1 + 0x1c) & 0xff000000 | uVar1 & 0xffffff;
        }
        else {
          *(uint *)(*param_1 + (long)(int)uVar3 * 0x38 + 0x18) = uVar1;
        }
        uVar3 = uVar1;
      }
      else {
        *(uint *)((long)param_1 + 0x24) = uVar1;
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x38;
    } while (lVar2 < (int)param_1[1]);
    if (0 < (int)uVar3) {
      *(undefined4 *)(*param_1 + (long)(int)uVar3 * 0x38 + 0x18) = 0xffffffff;
    }
  }
  return;
}


