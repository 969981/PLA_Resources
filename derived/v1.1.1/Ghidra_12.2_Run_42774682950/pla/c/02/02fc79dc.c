/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc79dc; name: FUN_02fc79dc
 */


void FUN_02fc79dc(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_042b0770;
  cVar3 = DAT_0444b3c8;
  if (DAT_0444b3c8 != '\0') {
    plVar6 = (long *)(param_1[0xd] & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((param_1[0xd] & 3) == 0) {
        param_1[0xd] = (ulong)plVar6 | 1;
        do {
          lVar7 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar7 + 8))();
        } while (plVar6 != (long *)0x0);
        param_1[0xd] = 0;
        cVar3 = DAT_0444b3c8;
      }
      else {
        do {
          plVar2 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          plVar6[1] = (ulong)plVar2 | 1;
          plVar6 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      if (cVar3 == '\0') goto LAB_02fc7a20;
    }
    plVar6 = (long *)(param_1[0xc] & 0xfffffffffffffffc);
    if (plVar6 != (long *)0x0) {
      if ((param_1[0xc] & 3) == 0) {
        param_1[0xc] = (ulong)plVar6 | 1;
        do {
          lVar7 = *plVar6;
          plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          (**(code **)(lVar7 + 8))();
        } while (plVar6 != (long *)0x0);
        param_1[0xc] = 0;
      }
      else {
        do {
          plVar2 = (long *)(plVar6[1] & 0xfffffffffffffffc);
          plVar6[1] = (ulong)plVar2 | 1;
          plVar6 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
LAB_02fc7a20:
  lVar7 = param_1[9];
  if ((int)*(uint *)((long)param_1 + 0x54) < 0) {
    uVar1 = *(uint *)((long)param_1 + 0x54) & 0x7fffffff;
    if ((int)uVar1 <= (int)*(uint *)(param_1 + 10)) {
      uVar1 = *(uint *)(param_1 + 10);
    }
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar7 + (long)(param_1 + 9);
    }
    lVar4 = tpidr_el0;
    lVar8 = *(long *)(lVar4 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar4 + 0x38d490) = lVar8;
    }
    plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,(ulong)uVar1 << 7);
  }
  *param_1 = &PTR_LAB_04363a18;
  puVar5 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 5);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 4);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}


