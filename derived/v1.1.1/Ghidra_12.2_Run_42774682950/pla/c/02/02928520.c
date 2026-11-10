/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02928520; name: FUN_02928520
 */


void FUN_02928520(long param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long *local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  undefined4 local_68;
  float local_64;
  float fStack_60;
  undefined4 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  uVar6 = *(ulong *)(param_1 + 0x70);
  if (uVar6 != 0) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & uVar3;
    }
    else {
      uVar9 = uVar3;
      if (uVar6 <= uVar3) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar3 / uVar6;
        }
        uVar9 = uVar3 - uVar9 * uVar6;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x68) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar3) {
            if (plVar10[2] == uVar3) goto LAB_02928648;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar3) {
            if (plVar10[2] == uVar3) goto LAB_02928648;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar1 * uVar6;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  goto LAB_02928870;
LAB_02928648:
  plVar11 = plVar10 + 3;
  plVar12 = (long *)*plVar11;
  if (plVar12 == (long *)0x0) {
    local_88 = *(long *)PTR_DAT_04379c88;
LAB_029288e8:
    lStack_80 = *(long *)PTR_PTR_04379d00;
    if (plVar12 != (long *)0x0) goto LAB_0292866c;
LAB_029288f8:
    local_78 = 0;
  }
  else {
    local_88 = plVar12[0xb];
    if (plVar12 == (long *)0x0) goto LAB_029288e8;
    lStack_80 = plVar12[0xc];
    if (plVar12 == (long *)0x0) goto LAB_029288f8;
LAB_0292866c:
    local_78 = plVar12[0xd];
  }
  local_70 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar13 = (long *)plVar10[6];
  if (plVar13 == (long *)0x0) {
    local_a8 = *(long *)PTR_DAT_04379c88;
LAB_02928910:
    lStack_a0 = *(long *)PTR_PTR_04379d00;
    if (plVar13 != (long *)0x0) goto LAB_029286a0;
LAB_02928920:
    local_98 = 0;
  }
  else {
    local_a8 = plVar13[0xb];
    if (plVar13 == (long *)0x0) goto LAB_02928910;
    lStack_a0 = plVar13[0xc];
    if (plVar13 == (long *)0x0) goto LAB_02928920;
LAB_029286a0:
    local_98 = plVar13[0xd];
  }
  local_90 = (long *)0x0;
  local_70 = plVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar12 = (long *)*plVar11;
  if (plVar12 == (long *)0x0) {
    local_c8 = *(long *)PTR_DAT_04379c88;
LAB_02928938:
    plVar7 = (long *)PTR_PTR_04379d00;
  }
  else {
    local_c8 = plVar12[0xb];
    if (plVar12 == (long *)0x0) goto LAB_02928938;
    plVar7 = plVar12 + 0xc;
  }
  lStack_c0 = *plVar7;
  if (plVar12 == (long *)0x0) {
    local_b8 = 0;
  }
  else {
    local_b8 = plVar12[0xd];
  }
  local_b0 = (long *)0x0;
  local_90 = plVar13;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  local_b0 = plVar12;
  FUN_0292fbf8(&local_68,param_1 + 0x108,&local_88,&local_a8,&local_c8,param_3,0);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  plVar12 = *(long **)(param_1 + 0x58);
  FUN_0292c904(local_64,plVar11,param_3,4);
  if ((((plVar12 == plVar11) && (*(char *)((long)plVar10 + 0x3e) == '\0')) &&
      (*(int *)(param_1 + 0x60) < 1)) &&
     (uVar6 = FUN_0292cb0c(local_68,local_64 + fStack_60,plVar11,local_58,0), (uVar6 & 1) == 0)) {
    if (*(char *)((long)plVar10 + 0x2a) == '\0') {
      cVar5 = (char)plVar10[0x18];
      iVar2 = (int)plVar10[0x14];
    }
    else {
      cVar5 = '\x01';
      iVar2 = (int)plVar10[0x14];
    }
    if (iVar2 != 0) {
      if (cVar5 == '\0' && (char)plVar10[5] == '\0') {
        if ((*(int *)((long)plVar10 + 0xac) == 0) || (*(int *)((long)plVar10 + 0xac) == 5)) {
          if (((*PTR_DAT_04379c28 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0)) {
            FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379c28);
          }
          lVar4 = *(long *)PTR_DAT_04379c30;
          *(long *)PTR_DAT_04379c38 = lVar4;
          plVar12 = *(long **)(*(long *)(lVar4 + 0x158) + 0x60);
          (**(code **)(*plVar12 + 0xd8))(plVar12,1,(int)plVar10[0x14],0,4);
          *(undefined4 *)((long)plVar10 + 0xac) = 1;
          plVar10[0x16] = 0;
        }
        else {
          *(undefined4 *)((long)plVar10 + 0xac) = 2;
          *(undefined4 *)((long)plVar10 + 0xb4) = 0;
        }
      }
      else {
        FUN_0292d3a4(0,plVar10 + 10,4);
      }
    }
    *(undefined4 *)(plVar10 + 8) = 0;
    *(undefined2 *)((long)plVar10 + 0x3d) = 0;
    if ((char)plVar10[5] != '\0') {
      FUN_0292cc6c(plVar11);
    }
  }
LAB_02928870:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  return;
}


