/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292c430; name: FUN_0292c430
 */


void FUN_0292c430(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  
  if (*(int *)(param_2 + 0x88) != 0) {
    uVar4 = FUN_0292d078(param_1,param_2 + 0x38);
    if ((uVar4 & 1) != 0) {
      FUN_0292d3a4(0,param_2 + 0x38,4);
      if (*(char *)(param_2 + 0x11) == '\0') {
        *(undefined4 *)(param_2 + 0x94) = 5;
      }
      else {
        *(undefined2 *)(param_2 + 0x25) = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
      }
    }
  }
  uVar6 = *(uint *)(param_2 + 0x94);
  fVar10 = (float)param_1;
  if ((uVar6 | 2) == 3) {
    fVar9 = *(float *)(param_2 + 0x98) - fVar10;
    *(float *)(param_2 + 0x98) = fVar9;
    if (0.0 < fVar9) goto LAB_0292c4ac;
    if (uVar6 == 3) {
      uVar6 = 4;
      *(undefined4 *)(param_2 + 0x94) = 4;
    }
    else if (uVar6 == 1) {
      uVar6 = 2;
      *(undefined4 *)(param_2 + 0x94) = 2;
      *(float *)(param_2 + 0x9c) = fVar9 + *(float *)(param_2 + 0x9c);
    }
    *(undefined4 *)(param_2 + 0x98) = 0;
    if (uVar6 == 2) goto LAB_0292c4b4;
LAB_0292c544:
    cVar2 = *(char *)(param_2 + 0x26);
  }
  else {
LAB_0292c4ac:
    if (uVar6 != 2) goto LAB_0292c544;
LAB_0292c4b4:
    fVar9 = *(float *)(param_2 + 0x9c) - fVar10;
    *(float *)(param_2 + 0x9c) = fVar9;
    if (0.0 < fVar9) goto LAB_0292c544;
    *(undefined4 *)(param_2 + 0x9c) = 0;
    *(undefined4 *)(param_2 + 0x94) = 0;
    if (*(int *)(param_2 + 0x88) == 0) goto LAB_0292c544;
    FUN_0292d3a4(0,param_2 + 0x38,4);
    cVar2 = *(char *)(param_2 + 0x26);
  }
  if (((cVar2 == '\0') || (*(int *)(param_2 + 0x28) != 2)) ||
     (fVar10 = *(float *)(param_2 + 0x2c) - fVar10, *(float *)(param_2 + 0x2c) = fVar10,
     0.0 < fVar10)) goto LAB_0292c66c;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  if (*(int *)(param_2 + 0x94) == 0) {
LAB_0292c5f0:
    plVar5 = *(long **)(param_2 + 0x18);
    if (plVar5 == (long *)0x0) {
      local_50 = *(long *)PTR_DAT_04379c88;
LAB_0292c704:
      plVar8 = (long *)PTR_PTR_04379d00;
    }
    else {
      local_50 = plVar5[0xb];
      if (plVar5 == (long *)0x0) goto LAB_0292c704;
      plVar8 = plVar5 + 0xc;
    }
    lStack_48 = *plVar8;
    if (plVar5 == (long *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = plVar5[0xd];
    }
    local_38 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    local_38 = plVar5;
    uVar4 = FUN_0292d5f0(param_2 + 0x38,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if ((uVar4 & 1) == 0) {
      *(undefined2 *)(param_2 + 0x25) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      goto LAB_0292c66c;
    }
  }
  else if (*(int *)(param_2 + 0x94) != 5) {
    if (*(int *)(param_2 + 0x88) == 0) goto LAB_0292c5f0;
    fVar10 = *(float *)(param_2 + 0x30);
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar7 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar7;
    plVar5 = *(long **)(*(long *)(lVar7 + 0x158) + 0x60);
    (**(code **)(*plVar5 + 0xd8))
              (plVar5,2,*(undefined4 *)(param_2 + 0x88),(int)(fVar10 * 1000.0),uVar1);
    *(undefined4 *)(param_2 + 0x94) = 0;
  }
  *(undefined1 *)(param_2 + 0x26) = 1;
  *(undefined4 *)(param_2 + 0x28) = 3;
LAB_0292c66c:
  FUN_0292d270(param_1,param_2 + 0x38);
  return;
}


