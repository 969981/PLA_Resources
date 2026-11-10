/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320a7d8; name: FUN_0320a7d8
 */


void FUN_0320a7d8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = (long)&PTR_LAB_042f2130;
  param_1[4] = (long)&PTR_LAB_042f2180;
  FUN_033299e0(0x6859db66);
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x124) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x924)) && (param_1[0x123] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x123],((ulong)*(uint *)((long)param_1 + 0x924) & 0x3fffffff) * 0x30);
  }
  param_1[0x123] = 0;
  *(undefined4 *)((long)param_1 + 0x924) = 0x80000000;
  FUN_033299e0(0x32dd8c94);
  *(undefined4 *)(param_1 + 0x126) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x934)) && (param_1[0x125] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x125],((ulong)*(uint *)((long)param_1 + 0x934) & 0x3fffffff) << 3);
  }
  param_1[0x125] = 0;
  *(undefined4 *)((long)param_1 + 0x934) = 0x80000000;
  *(undefined4 *)(param_1 + 0x124) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x924)) && (param_1[0x123] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x123],((ulong)*(uint *)((long)param_1 + 0x924) & 0x3fffffff) * 0x30);
  }
  puVar2 = PTR_DAT_04388dd8;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[4] = (long)(puVar2 + 0x50);
  *(undefined4 *)((long)param_1 + 0x924) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
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


