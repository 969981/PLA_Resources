/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bd7fc; name: FUN_032bd7fc
 */


void FUN_032bd7fc(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_04348af8;
  if (0 < *(int *)(param_1 + 8)) {
    lVar5 = 0;
    lVar1 = tpidr_el0;
    do {
      uVar4 = *(undefined8 *)(param_1[7] + lVar5 * 8);
      lVar3 = *(long *)(lVar1 + 0x38d490);
      if (lVar3 == 0) {
        lVar3 = FUN_0333d16c(0,1);
        *(long *)(lVar1 + 0x38d490) = lVar3;
      }
      FUN_032cf810(*(undefined8 *)(*(long *)(lVar3 + 8) + 0x58),uVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 8));
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_032cf244(puVar2,param_1[9],8,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar2,param_1[7],8,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 3));
  FUN_032be18c(param_1);
  return;
}


