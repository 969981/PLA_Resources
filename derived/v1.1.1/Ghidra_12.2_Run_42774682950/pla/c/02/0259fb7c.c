/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259fb7c; name: FUN_0259fb7c
 */


void FUN_0259fb7c(long param_1,long *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long *local_58;
  undefined8 *puStack_50;
  undefined1 local_48;
  
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_025a7578(&local_80);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_025a7578(&local_70,&local_80);
  puVar16 = local_80;
  local_60 = param_3;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58 = (long *)*puVar16;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
    }
  }
  if ((long *)*param_2 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)*param_2;
  }
  puVar16 = (undefined8 *)(param_1 + 200);
  plVar8 = (long *)(**(code **)(*(long *)*puVar16 + 0x10))((long *)*puVar16,0x30,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)*puVar16 + 0xb8))();
  }
  local_48 = 0;
  uVar17 = *puVar16;
  local_58 = plVar8;
  puStack_50 = puVar16;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar17;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  plVar8[3] = 0;
  plVar8[2] = lVar10;
  plVar8[4] = 0;
  FUN_025a7578(plVar8 + 3,&local_70);
  plVar6 = local_58;
  *(undefined4 *)(plVar8 + 5) = local_60;
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  local_48 = 1;
  uVar12 = local_58[2];
  *local_58 = 0;
  local_58[1] = uVar12;
  uVar11 = *(ulong *)(param_1 + 0x98);
  plVar8 = (long *)(param_1 + 0x90);
  if (uVar11 == 0) {
LAB_0259fd48:
    fVar18 = (float)(*(long *)(param_1 + 0xe8) + 1);
    if ((uVar11 == 0) || (*(float *)(param_1 + 0xf0) * (float)uVar11 < fVar18)) {
      uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
      uVar12 = (ulong)(fVar18 / *(float *)(param_1 + 0xf0));
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
      FUN_025a77f0(plVar8,uVar12);
      uVar11 = *(ulong *)(param_1 + 0x98);
      uVar12 = plVar6[1];
    }
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar12 = uVar11 - 1 & uVar12;
    }
    else if (uVar11 <= uVar12) {
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar12 / uVar11;
      }
      uVar12 = uVar12 - uVar14 * uVar11;
    }
    plVar15 = *(long **)(*plVar8 + uVar12 * 8);
    if (plVar15 == (long *)0x0) {
      plVar15 = (long *)(param_1 + 0xc0);
      *plVar6 = *plVar15;
      *plVar15 = (long)plVar6;
      *(long **)(*(long *)(param_1 + 0x90) + uVar12 * 8) = plVar15;
      if (*plVar6 != 0) {
        uVar12 = *(ulong *)(*plVar6 + 8);
        if (uVar13 < 2) {
          uVar12 = uVar12 & uVar11 - 1;
        }
        else if (uVar11 <= uVar12) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = uVar12 / uVar11;
          }
          uVar12 = uVar12 - uVar13 * uVar11;
        }
        plVar15 = (long *)(*plVar8 + uVar12 * 8);
        goto LAB_0259fe04;
      }
    }
    else {
      *plVar6 = *plVar15;
LAB_0259fe04:
      *plVar15 = (long)plVar6;
    }
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 1;
LAB_0259fe18:
    puVar16 = (undefined8 *)*param_2;
    local_58 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) goto LAB_0259fe24;
  }
  else {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar11 - 1 & uVar12;
    }
    else {
      uVar14 = uVar12;
      if (uVar11 <= uVar12) {
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = uVar12 / uVar11;
        }
        uVar14 = uVar12 - uVar14 * uVar11;
      }
    }
    plVar15 = *(long **)(*plVar8 + uVar14 * 8);
    if (plVar15 == (long *)0x0) goto LAB_0259fd48;
    if (uVar13 < 2) {
      do {
        plVar15 = (long *)*plVar15;
        if ((plVar15 == (long *)0x0) || ((plVar15[1] & uVar11 - 1) != uVar14)) goto LAB_0259fd48;
      } while (plVar15[2] != uVar12);
    }
    else {
      do {
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_0259fd48;
        uVar13 = plVar15[1];
        if (uVar11 <= uVar13) {
          uVar4 = 0;
          if (uVar11 != 0) {
            uVar4 = uVar13 / uVar11;
          }
          uVar13 = uVar13 - uVar4 * uVar11;
        }
        if (uVar13 != uVar14) goto LAB_0259fd48;
      } while (plVar15[2] != uVar12);
    }
    local_58 = (long *)0x0;
    if (plVar6 == (long *)0x0) goto LAB_0259fe18;
    FUN_025a7b70(&puStack_50,plVar6);
    puVar16 = (undefined8 *)*param_2;
    if (puVar16 == (undefined8 *)0x0) {
      local_58 = (long *)0x0;
      goto LAB_0259fe24;
    }
  }
  local_58 = (long *)*puVar16;
LAB_0259fe24:
  if (*(ulong *)(param_1 + 0x100) < *(ulong *)(param_1 + 0x108)) {
    FUN_025a7f54(param_1 + 0x110,*(ulong *)(param_1 + 0x100),&local_58);
    *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 8;
    puVar16 = local_70;
  }
  else {
    FUN_025a7d4c(param_1 + 0xf8,&local_58);
    puVar16 = local_70;
  }
  if (puVar16 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar16 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar16[2] = 0;
      local_70 = puVar16;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58 = (long *)*puVar16;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
    }
  }
  return;
}


