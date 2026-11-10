/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03258924; name: FUN_03258924
 */


void FUN_03258924(long *param_1,long *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar1 + 0x18))
                (puVar1,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 4);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      FUN_03258aa4(puVar1,param_2);
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_032589c8(param_1);
  return;
}


