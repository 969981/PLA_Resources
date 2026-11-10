/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030eb85c; name: FUN_030eb85c
 */


void FUN_030eb85c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_042b5058;
  param_1[4] = (long)&PTR_LAB_042b5098;
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x2d1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x168c)) && (param_1[0x2d0] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x2d0],((ulong)*(uint *)((long)param_1 + 0x168c) & 0x3fffffff) << 6);
  }
  param_1[0x2d0] = 0;
  *(undefined4 *)((long)param_1 + 0x168c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x247) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x123c)) && (param_1[0x246] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x246],((ulong)*(uint *)((long)param_1 + 0x123c) & 0x3fffffff) << 6);
  }
  *(undefined4 *)((long)param_1 + 0x123c) = 0x80000000;
  param_1[0x246] = 0;
  *(undefined4 *)(param_1 + 0x1b5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdac)) && (param_1[0x1b4] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x1b4],((ulong)*(uint *)((long)param_1 + 0xdac) & 0x3fffffff) << 6);
  }
  param_1[0x1b4] = 0;
  *(undefined4 *)((long)param_1 + 0xdac) = 0x80000000;
  *(undefined4 *)(param_1 + 299) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x95c)) && (param_1[0x12a] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x12a],((ulong)*(uint *)((long)param_1 + 0x95c) & 0x3fffffff) << 6);
  }
  *(undefined4 *)((long)param_1 + 0x95c) = 0x80000000;
  param_1[0x12a] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4cc)) && (param_1[0x98] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x98],((ulong)*(uint *)((long)param_1 + 0x4cc) & 0x3fffffff) << 6);
  }
  param_1[0x98] = 0;
  *(undefined4 *)((long)param_1 + 0x4cc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xe],((ulong)*(uint *)((long)param_1 + 0x7c) & 0x3fffffff) << 6);
  }
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


