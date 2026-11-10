/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291a2d4; name: FUN_0291a2d4
 */


void FUN_0291a2d4(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [12];
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  
  if ((*(long *)(param_1 + 0x440) == 0) || (**(char **)(*(long *)(param_1 + 0x440) + 0x60) == '\0'))
  {
    FUN_0290a5c0(param_1);
    goto LAB_0291a654;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f0));
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar7 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar7;
  plVar8 = *(long **)(param_1 + 0x440);
  if (plVar8 == (long *)0x0) {
    local_70 = *(long *)PTR_DAT_04379c88;
LAB_0291a758:
    lVar9 = *(long *)PTR_PTR_04379d00;
    if (plVar8 != (long *)0x0) goto LAB_0291a35c;
LAB_0291a768:
    local_60 = 0;
  }
  else {
    local_70 = plVar8[0xb];
    if (plVar8 == (long *)0x0) goto LAB_0291a758;
    lVar9 = plVar8[0xc];
    if (plVar8 == (long *)0x0) goto LAB_0291a768;
LAB_0291a35c:
    local_60 = plVar8[0xd];
  }
  local_58 = (long *)0x0;
  lStack_68 = lVar9;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x430);
  local_f0 = (long *)&LAB_0291c038;
  local_e8 = FUN_0291c04c;
  local_e0 = &LAB_0291c050;
  local_d8 = &LAB_0291c05c;
  plVar3 = *(long **)(*(long *)(lVar7 + 0x158) + 0x60);
  alStack_d0[0] = param_1;
  local_58 = plVar8;
  iVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3,lVar9,uVar11,1,&LAB_0290f2d0,lVar7,0,0,0);
  pcVar12 = FUN_0291c04c;
  if (iVar2 == 0) {
LAB_0291a474:
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar12)(alStack_d0);
  }
  else {
    FUN_0291629c(*(undefined8 *)(lVar7 + 0x178),&local_70,iVar2,uVar11,&local_f0,param_1,0);
    pcVar12 = local_e8;
    if (local_e8 != (code *)0x0) goto LAB_0291a474;
    local_e8 = (code *)0x0;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (iVar2 == 0) {
    FUN_0290a5c0(param_1);
  }
  else {
    local_f0 = *(long **)(param_1 + 0x440);
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x18))();
    }
    local_e8 = (code *)CONCAT44(local_e8._4_4_,iVar2);
    uVar4 = *(ulong *)(param_1 + 0x218);
    puVar1 = (undefined8 *)(param_1 + 0x228);
    if (uVar4 < *(ulong *)(param_1 + 0x220)) {
      FUN_0291c068(puVar1,uVar4,&local_f0);
      *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x218) + 0x10;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x230);
      lVar7 = (long)(uVar4 - *(long *)(param_1 + 0x210)) >> 4;
      uVar4 = lVar7 + 1;
      if (0x7ffffffffffffffe < uVar6) {
        uVar6 = 0x7fffffffffffffff;
      }
      if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar9 = *(ulong *)(param_1 + 0x220) - *(long *)(param_1 + 0x210);
      if ((ulong)(lVar9 >> 4) < uVar6 >> 1) {
        uVar5 = lVar9 >> 3;
        uVar6 = uVar4;
        if (uVar4 <= uVar5) {
          uVar6 = uVar5;
        }
      }
      if (uVar6 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar6 << 4,8);
        if (lVar9 == 0) {
          (**(code **)(*(long *)*puVar1 + 0xb8))();
        }
      }
      lVar10 = lVar9 + lVar7 * 0x10;
      FUN_0291c068(puVar1,lVar10,&local_f0);
      plVar3 = *(long **)(param_1 + 0x210);
      lVar7 = lVar10 + 0x10;
      plVar8 = *(long **)(param_1 + 0x218);
      if (plVar8 == plVar3) {
        plVar8 = plVar3;
      }
      else {
        do {
          lVar10 = lVar10 + -0x10;
          plVar8 = plVar8 + -2;
          FUN_0290e248(puVar1,lVar10,plVar8);
        } while (plVar3 != plVar8);
        plVar3 = *(long **)(param_1 + 0x210);
        plVar8 = *(long **)(param_1 + 0x218);
      }
      *(long *)(param_1 + 0x210) = lVar10;
      lVar10 = *(long *)(param_1 + 0x220);
      *(long *)(param_1 + 0x218) = lVar7;
      *(ulong *)(param_1 + 0x220) = lVar9 + uVar6 * 0x10;
      while (plVar8 != plVar3) {
        plVar8 = plVar8 + -2;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x20))();
        }
      }
      if (plVar3 != (long *)0x0) {
        plVar8 = (long *)*puVar1;
        lVar10 = lVar10 - (long)plVar3;
        uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar4 & 1) != 0) {
          lVar7 = tpidr_el0;
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar8,plVar3,lVar10,8);
            goto joined_r0x0291a63c;
          }
        }
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar3,lVar10,8);
      }
    }
joined_r0x0291a63c:
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f0));
LAB_0291a654:
  *(undefined1 *)(param_1 + 0x4a2) = 0;
  return;
}


