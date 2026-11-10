/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bffc4; name: FUN_031bffc4
 */


void FUN_031bffc4(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int *__src;
  undefined1 auStack_44 [4];
  
  piVar9 = (int *)*param_1;
  if ((int)param_3 < 9) {
    param_3 = 8;
  }
  lVar4 = param_1[1];
  uVar2 = *(uint *)((long)param_1 + 0xc);
  puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,(long)(int)(param_3 << 3),0);
  if (puVar6 != (undefined4 *)0x0) {
    uVar3 = param_3 - 1;
    lVar7 = 0;
    *param_1 = (long)puVar6;
    *puVar6 = 0xffffffff;
    lVar8 = (((ulong)uVar3 & 1) - (ulong)param_3) + 1;
    do {
      *(undefined4 *)(*param_1 + lVar7 + 8) = 0xffffffff;
      lVar1 = *param_1 + lVar7;
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + 2;
      *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
    } while (lVar8 != 0);
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(*param_1 + lVar7 + 8) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (-1 < (int)uVar2) {
      lVar8 = (ulong)uVar2 + 1;
      __src = piVar9;
      do {
        if (*__src != -1) {
          iVar5 = FUN_031c0114(param_1,param_2,__src,auStack_44);
          memcpy((void *)(*param_1 + (long)iVar5 * 8),__src,8);
        }
        lVar8 = lVar8 + -1;
        __src = __src + 2;
      } while (lVar8 != 0);
    }
    if (-1 < (int)lVar4) {
                    /* WARNING: Could not recover jumptable at 0x031c00f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2,piVar9,(long)(int)(uVar2 * 8 + 8));
      return;
    }
  }
  return;
}


