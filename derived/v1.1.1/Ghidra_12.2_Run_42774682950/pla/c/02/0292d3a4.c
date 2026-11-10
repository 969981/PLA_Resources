/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292d3a4; name: FUN_0292d3a4
 */


void FUN_0292d3a4(float param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04379c28;
  uVar6 = param_3 & 0xffffffff;
  if (((*PTR_DAT_04379c28 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28,param_3,param_4,uVar6), iVar4 != 0)) {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000,uVar6);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar3 = PTR_DAT_04379c38;
  puVar2 = PTR_DAT_04379c30;
  lVar7 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar7;
  if ((*(int *)(param_2 + 10) != 0) &&
     (plVar5 = *(long **)(*(long *)(lVar7 + 0x158) + 0x60),
     (**(code **)(*plVar5 + 200))(plVar5,*(int *)(param_2 + 10),(int)(param_1 * 1000.0),uVar6),
     *(int *)(param_2 + 10) != 0)) {
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar7 = *(long *)puVar2;
    *(long *)puVar3 = lVar7;
    if ((*(int *)(param_2 + 10) != 0) &&
       (uVar6 = FUN_029170cc(*(undefined8 *)(lVar7 + 0x178)), (uVar6 & 1) != 0)) {
      if (*(int *)((long)param_2 + 0x54) != 0) {
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379c28);
        }
        lVar7 = *(long *)puVar2;
        *(long *)puVar3 = lVar7;
        if ((*(int *)((long)param_2 + 0x54) != 0) &&
           (uVar6 = FUN_029170cc(*(undefined8 *)(lVar7 + 0x178)), (uVar6 & 1) != 0)) {
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379c28);
          }
          lVar7 = *(long *)puVar2;
          *(long *)puVar3 = lVar7;
          if (*(int *)((long)param_2 + 0x54) != 0) {
            plVar5 = *(long **)(*(long *)(lVar7 + 0x158) + 0x60);
            (**(code **)(*plVar5 + 200))(plVar5,*(int *)((long)param_2 + 0x54),0,4);
          }
        }
      }
      *(undefined4 *)((long)param_2 + 0x54) = *(undefined4 *)(param_2 + 10);
      *(float *)(param_2 + 0xb) = param_1 + 1.0;
    }
  }
  *(undefined4 *)((long)param_2 + 0x6c) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined8 *)((long)param_2 + 0x5c) = 0;
  *(undefined8 *)((long)param_2 + 99) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}


