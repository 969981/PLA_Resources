/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291629c; name: FUN_0291629c
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0291629c(long *param_1,undefined8 param_2,uint param_3,undefined8 param_4,long *param_5,
                 long param_6,byte param_7)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *local_120;
  uint local_118;
  undefined8 local_110;
  long local_100;
  code *local_f8;
  code *local_f0;
  long local_e8;
  undefined1 auStack_e0 [96];
  long local_80;
  byte local_78;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xd));
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar8 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar8;
  uVar5 = (**(code **)(**(long **)(*(long *)(lVar8 + 0x158) + 0x60) + 0x120))();
  uVar14 = (ulong)uVar5;
  param_7 = param_7 & 1;
  FUN_00befc74(&local_120,param_2);
  local_f0 = (code *)0x0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = (code *)0x0;
  local_118 = uVar5;
  local_110 = param_4;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_e0);
    local_100 = *param_5;
    local_f8 = (code *)param_5[1];
    local_f0 = (code *)param_5[2];
    local_e8 = param_5[3];
  }
  uVar13 = (ulong)param_3;
  uVar12 = param_1[1];
  local_80 = param_6;
  local_78 = param_7;
  if (uVar12 != 0) {
    uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar11 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar14 = (ulong)((int)uVar12 - 1U & param_3);
    }
    else {
      uVar14 = uVar13;
      if (uVar12 <= uVar13) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar13 / uVar12;
        }
        uVar14 = uVar13 - uVar14 * uVar12;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar14 * 8);
    if (plVar9 != (long *)0x0) {
      if (uVar11 < 2) {
        do {
          plVar9 = (long *)*plVar9;
          if ((plVar9 == (long *)0x0) || (plVar9[1] != uVar13 && (plVar9[1] & uVar12 - 1) != uVar14)
             ) goto LAB_02916464;
        } while (*(uint *)(plVar9 + 2) != param_3);
      }
      else {
        do {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_02916464;
          uVar11 = plVar9[1];
          if (uVar11 != uVar13) {
            if (uVar12 <= uVar11) {
              uVar2 = 0;
              if (uVar12 != 0) {
                uVar2 = uVar11 / uVar12;
              }
              uVar11 = uVar11 - uVar2 * uVar12;
            }
            if (uVar11 != uVar14) goto LAB_02916464;
          }
        } while (*(uint *)(plVar9 + 2) != param_3);
      }
      goto LAB_0291667c;
    }
  }
LAB_02916464:
  plVar9 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0xd0,0x10);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  lVar8 = param_1[7];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  *(uint *)(plVar9 + 2) = param_3;
  plVar9[4] = (long)local_120;
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x18))();
  }
  lVar8 = *(long *)((ulong)&local_120 | 8);
  lVar1 = ((long *)((ulong)&local_120 | 8))[1];
  plVar9[8] = 0;
  plVar9[5] = lVar8;
  plVar9[6] = lVar1;
  plVar9[0xb] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  if (local_f0 != (code *)0x0) {
    (*local_f0)(auStack_e0,plVar9 + 0xc);
    plVar9[9] = (long)local_f8;
    plVar9[0xb] = local_e8;
    plVar9[10] = (long)local_f0;
    plVar9[8] = local_100;
  }
  *(byte *)(plVar9 + 0x19) = local_78;
  plVar9[0x18] = local_80;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *plVar9 = 0;
  plVar9[1] = uVar13;
  if ((uVar12 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar12 < (float)(param_1[0xb] + 1))) {
    uVar14 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar12 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar12 <= uVar14) {
      uVar12 = uVar14;
    }
    FUN_02914490(param_1,uVar12);
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar14 = (ulong)((int)uVar12 - 1U & param_3);
    }
    else if (uVar13 < uVar12) {
      uVar14 = uVar13;
    }
    else {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar13 / uVar12;
      }
      uVar14 = uVar13 - uVar14 * uVar12;
    }
  }
  plVar10 = *(long **)(*param_1 + uVar14 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 6;
    *plVar9 = *plVar10;
    *plVar10 = (long)plVar9;
    *(long **)(*param_1 + uVar14 * 8) = plVar10;
    if (*plVar9 != 0) {
      uVar14 = *(ulong *)(*plVar9 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar14 = uVar14 & uVar12 - 1;
      }
      else if (uVar12 <= uVar14) {
        uVar13 = 0;
        if (uVar12 != 0) {
          uVar13 = uVar14 / uVar12;
        }
        uVar14 = uVar14 - uVar13 * uVar12;
      }
      plVar10 = (long *)(*param_1 + uVar14 * 8);
      goto LAB_0291666c;
    }
  }
  else {
    *plVar9 = *plVar10;
LAB_0291666c:
    *plVar10 = (long)plVar9;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_0291667c:
  pcVar4 = local_f8;
  if (local_f8 == (code *)0x0) {
    local_f8 = (code *)0x0;
  }
  else {
    local_f0 = (code *)0x0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar4)(auStack_e0);
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd));
  return;
}


