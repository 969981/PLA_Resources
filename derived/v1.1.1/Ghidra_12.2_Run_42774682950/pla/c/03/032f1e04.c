/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f1e04; name: FUN_032f1e04
 */


void FUN_032f1e04(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_LAB_0434d058;
  lVar2 = (long)*(int *)(param_1 + 0xd);
  if (0 < *(int *)(param_1 + 0xd)) {
    do {
      lVar3 = lVar2 + -1;
      FUN_032d72c4(*(undefined8 *)(param_1[0xc] + lVar2 * 8 + -8));
      lVar2 = lVar3;
    } while (0 < lVar3);
  }
  FUN_032c20d0(param_1 + 0x14);
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x12],((ulong)*(uint *)((long)param_1 + 0x9c) & 0x3fffffff) << 3);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  FUN_032c3264(param_1 + 0x10);
  FUN_032f6708(param_1 + 0xe,puVar1);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0xc],((ulong)*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[10],((ulong)*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 6));
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  FUN_032f761c(param_1);
  return;
}


