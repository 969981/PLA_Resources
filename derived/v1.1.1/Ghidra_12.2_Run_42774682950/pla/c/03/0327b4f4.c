/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327b4f4; name: FUN_0327b4f4
 */


void FUN_0327b4f4(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    if ((int)param_1[1] != 0) {
      lVar4 = (long)(int)param_1[1] * 0x70;
      lVar3 = *param_1;
      do {
        lVar1 = lVar3 + lVar4;
        *(undefined4 *)(lVar1 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x18))
                    (puVar2,*(long *)(lVar1 + -0x10),
                     ((ulong)*(uint *)(lVar1 + -4) & 0x3fffffff) * 0x108);
        }
        lVar4 = lVar4 + -0x70;
        *(undefined8 *)(lVar1 + -0x10) = 0;
        *(undefined4 *)(lVar1 + -4) = 0x80000000;
      } while (lVar4 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar2 + 0x18))
                (puVar2,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x70);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      FUN_0327b6d4(puVar2,param_2);
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_0327b60c(param_1);
  return;
}


