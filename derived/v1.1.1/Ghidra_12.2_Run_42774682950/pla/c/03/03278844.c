/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03278844; name: FUN_03278844
 */


void FUN_03278844(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    if ((int)param_1[1] != 0) {
      lVar4 = *param_1;
      lVar3 = 0;
      lVar5 = (long)(int)param_1[1] * 0x30;
      do {
        lVar1 = lVar4 + lVar5;
        *(undefined4 *)(lVar1 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x18))
                    (puVar2,*(long *)(lVar1 + -0x10),
                     ((ulong)*(uint *)(lVar1 + -4) & 0x3fffffff) << 4);
        }
        *(undefined8 *)(lVar1 + -0x10) = 0;
        *(undefined4 *)(lVar1 + -4) = 0x80000000;
        *(undefined4 *)(lVar1 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -0x14)) && (*(long *)(lVar1 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x18))
                    (puVar2,*(long *)(lVar1 + -0x20),
                     ((ulong)*(uint *)(lVar1 + -0x14) & 0x3fffffff) << 3);
        }
        lVar3 = lVar3 + 0x30;
        lVar4 = lVar4 + -0x30;
        *(undefined8 *)(lVar1 + -0x20) = 0;
        *(undefined4 *)(lVar1 + -0x14) = 0x80000000;
      } while (lVar5 != lVar3);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar2 + 0x18))
                (puVar2,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x30);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      FUN_03278a68(puVar2,param_2);
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_03278998(param_1);
  return;
}


