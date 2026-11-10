/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03127f40; name: FUN_03127f40
 */


void FUN_03127f40(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  long *plVar5;
  
  *param_1 = (long)&PTR_LAB_042c7870;
  puVar3 = PTR_PTR_0434a080;
  if (param_1[10] != 0) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,param_1[10],(long)(int)param_1[0xb]);
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[8],((ulong)*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) * 0x70);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  cVar4 = DAT_0444b3c8;
  if (DAT_0444b3c8 != '\0') {
    plVar5 = (long *)(param_1[7] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[7] & 3U) == 0) {
        param_1[7] = (ulong)plVar5 | 1;
        do {
          lVar2 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[7] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_03127fec;
    }
    plVar5 = (long *)(param_1[6] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[6] & 3U) == 0) {
        param_1[6] = (ulong)plVar5 | 1;
        do {
          lVar2 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[6] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_03127fec;
    }
    plVar5 = (long *)(param_1[5] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[5] & 3U) == 0) {
        param_1[5] = (ulong)plVar5 | 1;
        do {
          lVar2 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[5] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_03127fec;
    }
    plVar5 = (long *)(param_1[4] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[4] & 3U) == 0) {
        param_1[4] = (ulong)plVar5 | 1;
        do {
          lVar2 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[4] = 0;
        cVar4 = DAT_0444b3c8;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
      if (cVar4 == '\0') goto LAB_03127fec;
    }
    plVar5 = (long *)(param_1[3] & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      if ((param_1[3] & 3U) == 0) {
        param_1[3] = (ulong)plVar5 | 1;
        do {
          lVar2 = *plVar5;
          plVar5 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar5 != (long *)0x0);
        param_1[3] = 0;
      }
      else {
        do {
          plVar1 = (long *)(plVar5[1] & 0xfffffffffffffffc);
          plVar5[1] = (ulong)plVar1 | 1;
          plVar5 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
  }
LAB_03127fec:
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


