/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292c710; name: FUN_0292c710
 */


undefined8 FUN_0292c710(float param_1,float param_2,long param_3,undefined4 param_4,ulong param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  
  if ((param_5 & 1) != 0) {
    *(undefined1 *)(param_3 + 0x26) = 1;
    *(undefined4 *)(param_3 + 0x28) = 1;
    *(float *)(param_3 + 0x30) = param_1;
    *(undefined4 *)(param_3 + 0x34) = param_4;
    return 1;
  }
  if (0.0 < param_2) {
    *(float *)(param_3 + 0x2c) = param_2;
    *(undefined1 *)(param_3 + 0x26) = 1;
    *(float *)(param_3 + 0x30) = param_1;
    *(undefined4 *)(param_3 + 0x34) = param_4;
    *(undefined4 *)(param_3 + 0x28) = 2;
    return 1;
  }
  if (*(int *)(param_3 + 0x94) != 0) {
    if (*(int *)(param_3 + 0x94) == 5) goto LAB_0292c844;
    if (*(int *)(param_3 + 0x88) != 0) {
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      lVar4 = *(long *)PTR_DAT_04379c30;
      *(long *)PTR_DAT_04379c38 = lVar4;
      plVar2 = *(long **)(*(long *)(lVar4 + 0x158) + 0x60);
      (**(code **)(*plVar2 + 0xd8))
                (plVar2,2,*(undefined4 *)(param_3 + 0x88),(int)(param_1 * 1000.0),param_4);
      *(undefined4 *)(param_3 + 0x94) = 0;
      goto LAB_0292c844;
    }
  }
  plVar2 = *(long **)(param_3 + 0x18);
  if (plVar2 == (long *)0x0) {
    local_50 = *(long *)PTR_DAT_04379c88;
LAB_0292c8f8:
    plVar5 = (long *)PTR_PTR_04379d00;
  }
  else {
    local_50 = plVar2[0xb];
    if (plVar2 == (long *)0x0) goto LAB_0292c8f8;
    plVar5 = plVar2 + 0xc;
  }
  lStack_48 = *plVar5;
  if (plVar2 == (long *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = plVar2[0xd];
  }
  local_38 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_38 = plVar2;
  uVar3 = FUN_0292d5f0(param_3 + 0x38,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar3 & 1) == 0) {
    *(undefined2 *)(param_3 + 0x25) = 0;
    *(undefined4 *)(param_3 + 0x28) = 0;
    return 0;
  }
LAB_0292c844:
  *(undefined1 *)(param_3 + 0x26) = 1;
  *(undefined4 *)(param_3 + 0x28) = 3;
  return 1;
}


