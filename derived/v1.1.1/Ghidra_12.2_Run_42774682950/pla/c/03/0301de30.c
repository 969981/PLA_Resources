/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0301de30; name: FUN_0301de30
 */


void FUN_0301de30(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,param_1[10],*(int *)((long)param_1 + 0x5c) << 2);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,param_1[8],*(int *)((long)param_1 + 0x4c) << 2);
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,param_1[6],*(int *)((long)param_1 + 0x3c) << 2);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,param_1[4],*(int *)((long)param_1 + 0x2c) << 2);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,param_1[2],*(int *)((long)param_1 + 0x1c) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,*param_1,*(int *)((long)param_1 + 0xc) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


