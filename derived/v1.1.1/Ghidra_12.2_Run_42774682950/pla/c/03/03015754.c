/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03015754; name: FUN_03015754
 */


void FUN_03015754(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  if (0 < (int)param_1[1]) {
    uVar2 = 0;
    uVar3 = 0;
    lVar4 = 0x5f;
    do {
      uVar1 = (uint)uVar2;
      if (*(char *)(*param_1 + lVar4) == '\0') {
        if ((~*(uint *)((long)param_1 + 0x1c) & 0xffffff) == 0) {
          *(uint *)((long)param_1 + 0x1c) =
               *(uint *)((long)param_1 + 0x1c) & 0xff000000 | uVar1 & 0xffffff;
        }
        else {
          *(uint *)(*param_1 + (-(uVar3 >> 0x1f) & 0xffffff8000000000 | uVar3 << 7)) = uVar1;
        }
        uVar3 = uVar2 & 0xffffffff;
      }
      else {
        *(uint *)((long)param_1 + 0x24) = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x80;
    } while ((long)uVar2 < (long)(int)param_1[1]);
    if (0 < (int)uVar3) {
      *(undefined4 *)(*param_1 + (-(uVar3 >> 0x1f) & 0xffffff8000000000 | uVar3 << 7)) = 0xffffffff;
    }
  }
  return;
}


