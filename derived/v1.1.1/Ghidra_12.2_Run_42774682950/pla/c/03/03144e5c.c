/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03144e5c; name: FUN_03144e5c
 */


void FUN_03144e5c(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *__src;
  undefined1 auStack_54 [4];
  
  plVar9 = (long *)*param_1;
  if ((int)param_3 < 9) {
    param_3 = 8;
  }
  lVar3 = param_1[1];
  uVar1 = *(uint *)((long)param_1 + 0xc);
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,(long)(int)(param_3 * 0x18),0);
  if (puVar5 != (undefined8 *)0x0) {
    uVar2 = param_3 - 1;
    lVar6 = 0;
    *param_1 = (long)puVar5;
    *puVar5 = 0xffffffffffffffff;
    puVar5[1] = 0xffffffffffffffff;
    lVar7 = (((ulong)uVar2 & 1) - (ulong)param_3) + 1;
    do {
      lVar8 = *param_1;
      lVar7 = lVar7 + 2;
      *(undefined8 *)(lVar8 + lVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar8 + lVar6 + 0x20) = 0xffffffffffffffff;
      lVar8 = *param_1 + lVar6;
      lVar6 = lVar6 + 0x30;
      *(undefined8 *)(lVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(lVar8 + 0x38) = 0xffffffffffffffff;
    } while (lVar7 != 0);
    if ((uVar2 & 1) != 0) {
      lVar7 = *param_1;
      *(undefined8 *)(lVar7 + lVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar7 + lVar6 + 0x20) = 0xffffffffffffffff;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = uVar2;
    if (-1 < (int)uVar1) {
      lVar7 = (ulong)uVar1 + 1;
      __src = plVar9;
      do {
        if ((*__src != -1) && (__src[1] != -1)) {
          iVar4 = FUN_03144d7c(param_1,param_2,__src,auStack_54);
          memcpy((void *)(*param_1 + (long)iVar4 * 0x18),__src,0x18);
        }
        lVar7 = lVar7 + -1;
        __src = __src + 3;
      } while (lVar7 != 0);
    }
    if (-1 < (int)lVar3) {
                    /* WARNING: Could not recover jumptable at 0x03144fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2,plVar9,(long)(int)(uVar1 * 0x18 + 0x18));
      return;
    }
  }
  return;
}


