/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292d270; name: FUN_0292d270
 */


void FUN_0292d270(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  if ((*(int *)(param_2 + 0x54) != 0) &&
     (param_1 = *(float *)(param_2 + 0x58) - param_1, *(float *)(param_2 + 0x58) = param_1,
     puVar1 = PTR_DAT_04379c28, param_1 <= 0.0)) {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    puVar3 = PTR_DAT_04379c38;
    puVar2 = PTR_DAT_04379c30;
    lVar7 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar7;
    if ((*(int *)(param_2 + 0x54) != 0) &&
       (uVar5 = FUN_029170cc(*(undefined8 *)(lVar7 + 0x178)), (uVar5 & 1) != 0)) {
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      lVar7 = *(long *)puVar2;
      *(long *)puVar3 = lVar7;
      if (*(int *)(param_2 + 0x54) != 0) {
        plVar6 = *(long **)(*(long *)(lVar7 + 0x158) + 0x60);
        (**(code **)(*plVar6 + 200))(plVar6,*(int *)(param_2 + 0x54),0,4);
      }
      *(undefined4 *)(param_2 + 0x58) = 0x3dcccccd;
    }
  }
  return;
}


