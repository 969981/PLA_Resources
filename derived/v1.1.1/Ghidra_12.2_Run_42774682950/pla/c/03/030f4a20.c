/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f4a20; name: FUN_030f4a20
 */


void FUN_030f4a20(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_LAB_042b5438;
  param_1[4] = (long)&PTR_LAB_042b5478;
  puVar1 = PTR_PTR_0434a080;
  if ((int)param_1[7] != 0) {
    lVar4 = param_1[6];
    lVar5 = (long)(int)param_1[7] << 4;
    do {
      lVar3 = lVar4 + lVar5;
      *(undefined4 *)(lVar3 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar3 + -4)) && (*(long *)(lVar3 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x18))
                  (puVar1,*(long *)(lVar3 + -0x10),
                   ((ulong)*(uint *)(lVar3 + -4) & 0x3fffffff) * 0x30);
      }
      lVar5 = lVar5 + -0x10;
      *(undefined8 *)(lVar3 + -0x10) = 0;
      *(undefined4 *)(lVar3 + -4) = 0x80000000;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 4);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  lVar3 = param_1[1];
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  lVar5 = tpidr_el0;
  lVar4 = *(long *)(lVar5 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  lVar5 = 0x40;
  if (lVar3 != 0xffffffff) {
    lVar5 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x030f4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,lVar5);
  return;
}


