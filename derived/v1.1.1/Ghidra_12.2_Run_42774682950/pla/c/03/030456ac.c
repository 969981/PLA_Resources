/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030456ac; name: FUN_030456ac
 */


void FUN_030456ac(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)&PTR_LAB_042b26c8;
  puVar3 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[0xd],(*(uint *)((long)param_1 + 0x74) & 0x3fffffff) << 1);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[10],(*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) << 1);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  if ((int)param_1[9] != 0) {
    lVar4 = param_1[8];
    lVar6 = lVar4 + (long)(int)param_1[9] * 0x10;
    do {
      lVar5 = lVar6 + -0x10;
      if (DAT_0444b3c8 != '\0') {
        plVar7 = (long *)(*(ulong *)(lVar6 + -8) & 0xfffffffffffffffc);
        if (plVar7 != (long *)0x0) {
          if ((*(ulong *)(lVar6 + -8) & 3) == 0) {
            *(ulong *)(lVar6 + -8) = (ulong)plVar7 | 1;
            do {
              lVar2 = *plVar7;
              plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
              (**(code **)(lVar2 + 8))();
            } while (plVar7 != (long *)0x0);
            *(undefined8 *)(lVar6 + -8) = 0;
          }
          else {
            do {
              plVar1 = (long *)(plVar7[1] & 0xfffffffffffffffc);
              plVar7[1] = (ulong)plVar1 | 1;
              plVar7 = plVar1;
            } while (plVar1 != (long *)0x0);
          }
        }
      }
      lVar6 = lVar5;
    } while (lVar5 != lVar4);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))
              (puVar3,param_1[8],((ulong)*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) << 4);
  }
  param_1[8] = 0;
  puVar3 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}


