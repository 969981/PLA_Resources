/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292d078; name: FUN_0292d078
 */


bool FUN_0292d078(float param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*(char *)(param_2 + 0xd) == '\0') {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar4 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar4;
    plVar3 = *(long **)(*(long *)(lVar4 + 0x158) + 0x40);
    iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined4 *)(param_2 + 10),&local_48,1);
    *(undefined4 *)((long)param_2 + 0x74) = local_48;
    *(int *)(param_2 + 0xf) = iStack_44;
    *(int *)((long)param_2 + 0x7c) = local_40;
    *(int *)(param_2 + 0x10) = iStack_3c;
    *(undefined4 *)((long)param_2 + 0x84) = local_38;
    *(undefined4 *)(param_2 + 0x11) = local_34;
    *(undefined4 *)((long)param_2 + 0x8c) = local_30;
    *(undefined4 *)(param_2 + 0x12) = local_2c;
    *(undefined4 *)((long)param_2 + 0x94) = local_28;
    if (iVar2 == 1) {
      if (*(char *)((long)param_2 + 0x69) == '\0') {
        if ((iStack_44 < 1 && iStack_3c < 1) && local_40 < 1) {
          param_1 = *(float *)((long)param_2 + 0x6c) - param_1;
          *(undefined1 *)((long)param_2 + 0x6a) = 1;
          *(float *)((long)param_2 + 0x6c) = param_1;
          if (param_1 <= 0.0) {
            *(undefined1 *)(param_2 + 0xd) = 1;
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
          }
        }
        else if (*(char *)((long)param_2 + 0x6a) != '\0') {
          if (((*PTR_DAT_04379e40 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar2 != 0)) {
            FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379e40);
          }
          lVar4 = *(long *)PTR_DAT_04379e48;
          *(long *)PTR_DAT_04379e50 = lVar4;
          *(undefined4 *)((long)param_2 + 0x6c) = *(undefined4 *)(lVar4 + 0x3d8);
          *(undefined1 *)((long)param_2 + 0x6a) = 0;
        }
      }
      else if ((iStack_44 >= 1 || iStack_3c >= 1) || local_40 >= 1) {
        *(undefined1 *)((long)param_2 + 0x69) = 0;
      }
    }
    bVar1 = *(char *)(param_2 + 0xd) != '\0';
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


