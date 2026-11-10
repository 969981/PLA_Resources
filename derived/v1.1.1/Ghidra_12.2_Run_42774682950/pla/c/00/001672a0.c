/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001672a0; name: FUN_001672a0
 */


void FUN_001672a0(long *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  if ((int)param_1[4] == param_3) {
    *(int *)((long)param_1 + 0x24) = param_3;
    if (param_2 != 0xffffffff) {
      if (*(uint *)(param_1 + 5) == 0xffffffff) {
        *(uint *)(param_1 + 5) = param_2;
        return;
      }
      uVar2 = *(uint *)(param_1 + 5);
      do {
        uVar7 = uVar2;
        uVar4 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar7 * 4);
        iVar5 = (uVar4 >> 0xe) - 0x1ffff;
        uVar2 = 0xffffffff;
        if (iVar5 != -1) {
          uVar2 = uVar7 + iVar5 + 1;
        }
      } while (uVar2 != 0xffffffff);
      iVar5 = ~uVar7 + param_2;
      iVar1 = -iVar5;
      if (-1 < iVar5) {
        iVar1 = iVar5;
      }
      if (iVar1 < 0x20000) {
        *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar7 * 4) =
             (uVar4 & 0x3fff | iVar5 * 0x4000) + 0x7fffc000;
        return;
      }
LAB_00167424:
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1[2],"control structure too long");
    }
  }
  else {
    while (param_2 != 0xffffffff) {
      puVar3 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)param_2 * 4);
      uVar4 = *puVar3;
      iVar5 = (uVar4 >> 0xe) - 0x1ffff;
      uVar2 = 0xffffffff;
      if (iVar5 != -1) {
        uVar2 = param_2 + iVar5 + 1;
      }
      if ((int)param_2 < 1) {
LAB_001673bc:
        puVar6 = puVar3;
        uVar7 = uVar4;
      }
      else {
        uVar7 = puVar3[-1];
        puVar6 = puVar3 + -1;
        if (-1 < (char)(&DAT_039c5e39)[(ulong)uVar7 & 0x3f]) goto LAB_001673bc;
      }
      if ((uVar7 & 0x3f) == 0x23) {
        *puVar6 = uVar7 & 0x7fc000 | uVar7 >> 0x11 & 0x7fc0 | 0x22;
        iVar5 = ~param_2 + param_3;
        iVar1 = -iVar5;
        if (-1 < iVar5) {
          iVar1 = iVar5;
        }
        if (0x1ffff < iVar1) goto LAB_00167424;
        puVar3 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)param_2 * 4);
        uVar4 = *puVar3;
      }
      else {
        iVar5 = ~param_2 + param_3;
        iVar1 = -iVar5;
        if (-1 < iVar5) {
          iVar1 = iVar5;
        }
        if (0x1ffff < iVar1) goto LAB_00167424;
      }
      *puVar3 = (uVar4 & 0x3fff | iVar5 << 0xe) + 0x7fffc000;
      param_2 = uVar2;
    }
  }
  return;
}


