/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03320d50; name: FUN_03320d50
 */


void FUN_03320d50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_LAB_0434fda0;
  if (*(int *)(param_1 + 4) != 0) {
    lVar1 = param_1[3];
    lVar2 = (long)*(int *)(param_1 + 4) << 3;
    do {
      while (*(long *)(lVar1 + -8 + lVar2) != 0) {
        FUN_032d647c();
        lVar2 = lVar2 + -8;
        if (lVar2 == 0) goto LAB_03320da4;
      }
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
LAB_03320da4:
  *(undefined4 *)(param_1 + 4) = 0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 6));
  if (*(int *)(param_1 + 4) != 0) {
    lVar1 = param_1[3];
    lVar2 = (long)*(int *)(param_1 + 4) << 3;
    do {
      while (*(long *)(lVar1 + -8 + lVar2) != 0) {
        FUN_032d647c();
        lVar2 = lVar2 + -8;
        if (lVar2 == 0) goto LAB_03320de4;
      }
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
LAB_03320de4:
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  FUN_0331fe4c(param_1);
  return;
}


