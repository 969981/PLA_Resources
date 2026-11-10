/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019b5604; name: FUN_019b5604
 */


void FUN_019b5604(long *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *plStack_58;
  undefined1 auStack_48 [8];
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  uVar4 = *(undefined8 *)PTR_DAT_0437a788;
  *(undefined8 *)PTR_DAT_0437a790 = uVar4;
  local_70 = *param_3;
  local_68 = param_3[1];
  local_60 = param_3[2];
  plVar5 = (long *)param_3[3];
  plStack_58 = plVar5;
  if (plVar5 == (long *)0x0) {
    lVar2 = FUN_01e65b28(uVar4,&local_70);
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar2 = FUN_01e65b28(uVar4,&local_70);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  lVar6 = *(long *)(param_2 + 0x68);
  if (*(char *)(lVar2 + 0x330) == '\0') {
    if (lVar6 != 0) {
      plVar5 = *(long **)(lVar6 + 0xb0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      lVar8 = *(long *)(lVar6 + 0xb8);
      plVar7 = *(long **)(lVar6 + 0xd0);
      if (plVar7 == (long *)0x0) {
        lVar6 = *(long *)(lVar2 + 0x308);
      }
      else {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar6 = *(long *)(lVar2 + 0x308);
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (lVar8 == lVar6) goto LAB_019b5800;
    }
    lVar6 = *(long *)(param_2 + 0x70);
    if (lVar6 != 0) {
      plVar5 = *(long **)(lVar6 + 0xb0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      lVar8 = *(long *)(lVar6 + 0xb8);
      plVar7 = *(long **)(lVar6 + 0xd0);
      if (plVar7 == (long *)0x0) {
        lVar6 = *(long *)(lVar2 + 0x308);
      }
      else {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar6 = *(long *)(lVar2 + 0x308);
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (lVar8 == lVar6) {
        lVar2 = *(long *)(param_2 + 0x70);
        *param_1 = lVar2;
        goto joined_r0x019b5834;
      }
    }
    lVar2 = FUN_00d0dbb4(auStack_48,*(undefined8 *)(*(long *)PTR_DAT_0437acf0 + 8),lVar2 + 0x300);
    if (lVar2 != 0) {
      FUN_02a439f4(*(undefined8 *)(lVar2 + 0x58));
    }
    plVar5 = *(long **)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    if ((plVar5 != (long *)0x0) && (uVar3 = FUN_02a43a5c(plVar5[0xb]), (uVar3 & 1) != 0)) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    *(long *)(param_2 + 0x70) = lVar2;
    *param_1 = lVar2;
  }
  else {
    if (lVar6 != 0) {
      plVar5 = *(long **)(lVar6 + 0xb0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      lVar8 = *(long *)(lVar6 + 0xb8);
      plVar7 = *(long **)(lVar6 + 0xd0);
      if (plVar7 == (long *)0x0) {
        lVar6 = *(long *)(lVar2 + 0x308);
      }
      else {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar6 = *(long *)(lVar2 + 0x308);
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (lVar6 == lVar8) {
LAB_019b5800:
        lVar2 = *(long *)(param_2 + 0x68);
        *param_1 = lVar2;
joined_r0x019b5834:
        if (lVar2 == 0) {
          return;
        }
        FUN_02a439f4(*(undefined8 *)(lVar2 + 0x58));
        return;
      }
    }
    lVar2 = FUN_00d0dbb4(auStack_48,*(undefined8 *)(*(long *)PTR_DAT_0437acf0 + 8),lVar2 + 0x300);
    if (lVar2 != 0) {
      FUN_02a439f4(*(undefined8 *)(lVar2 + 0x58));
    }
    plVar5 = *(long **)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = 0;
    if ((plVar5 != (long *)0x0) && (uVar3 = FUN_02a43a5c(plVar5[0xb]), (uVar3 & 1) != 0)) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    *(long *)(param_2 + 0x68) = lVar2;
    *param_1 = lVar2;
  }
  if (lVar2 != 0) {
    FUN_02a439f4(*(undefined8 *)(lVar2 + 0x58));
  }
  return;
}


