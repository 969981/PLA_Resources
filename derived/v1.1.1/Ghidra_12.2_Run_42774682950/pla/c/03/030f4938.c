/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f4938; name: FUN_030f4938
 */


void FUN_030f4938(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_042b5438;
  param_1[4] = (long)&PTR_LAB_042b5478;
  puVar2 = PTR_PTR_0434a080;
  if ((int)param_1[7] != 0) {
    lVar3 = param_1[6];
    lVar4 = (long)(int)param_1[7] << 4;
    do {
      lVar1 = lVar3 + lVar4;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x18))
                  (puVar2,*(long *)(lVar1 + -0x10),
                   ((ulong)*(uint *)(lVar1 + -4) & 0x3fffffff) * 0x30);
      }
      lVar4 = lVar4 + -0x10;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 4);
  }
  param_1[6] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


