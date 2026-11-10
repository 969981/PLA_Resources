/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d021ec; name: FUN_00d021ec
 */


void FUN_00d021ec(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong unaff_x25;
  undefined4 local_2d8;
  undefined8 *local_2d0;
  undefined8 uStack_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  undefined4 local_2a0;
  undefined1 auStack_290 [512];
  undefined8 *local_90;
  undefined8 local_88;
  undefined2 local_80;
  long *local_68;
  undefined8 local_58;
  
  local_68 = *(long **)(param_2 + 0x10);
  if (local_68 == (long *)0x0) {
    FUN_00cea9e4(param_1,0,&local_68);
  }
  else {
    lVar16 = local_68[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar11;
    }
    plVar2 = local_68;
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00cea9e4(param_1,0,&local_68);
    if (plVar2 != (long *)0x0) {
      lVar16 = plVar2[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
    }
  }
  *param_1 = &PTR_LAB_041e93b8;
  param_1[0x4b] = 0;
  param_1[9] = &PTR_LAB_041e94d8;
  param_1[10] = &PTR_LAB_041e95b8;
  param_1[0x4c] = 0;
  puVar6 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar7 = PTR_DAT_04379528;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar8 = DAT_043f1798;
  lVar16 = tpidr_el0;
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
    *(long *)(lVar16 + 0x20) = DAT_043f1798;
    lVar12 = lVar8;
  }
  param_1[0x4d] = lVar12;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  if (((*puVar6 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  lVar8 = DAT_043f1798;
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
    *(long *)(lVar16 + 0x20) = DAT_043f1798;
    lVar12 = lVar8;
  }
  param_1[0x51] = lVar12;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  plVar2 = param_1 + 0x4b;
  param_1[0x54] = 0;
  param_1[0x56] = &DAT_cbf29ce484222645;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  FUN_00b6291c(param_1 + 0x57,param_2);
  param_1[0x56] = 0xc50d554e004ca854;
  local_2d0 = (undefined8 *)0x0;
  uStack_2c8 = 0;
  memset(auStack_290,0,500);
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  local_80 = CONCAT11(local_80._1_1_,1);
  uVar17 = param_1[0x4c];
  if (uVar17 != 0) {
    uVar15 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      unaff_x25 = uVar17 - 1 & 0xc50d554e004ca854;
    }
    else {
      unaff_x25 = 0xc50d554e004ca854;
      if (uVar17 < 0xc50d554e004ca855) {
        uVar5 = 0;
        if (uVar17 != 0) {
          uVar5 = 0xc50d554e004ca854 / uVar17;
        }
        unaff_x25 = 0xc50d554e004ca854 - uVar5 * uVar17;
      }
    }
    plVar13 = *(long **)(*plVar2 + unaff_x25 * 8);
    if (plVar13 != (long *)0x0) {
      if (uVar15 < 2) {
        do {
          plVar13 = (long *)*plVar13;
          if ((plVar13 == (long *)0x0) ||
             (plVar13[1] != 0xc50d554e004ca854 && (plVar13[1] & uVar17 - 1) != unaff_x25))
          goto LAB_00d023f0;
        } while (plVar13[2] != -0x3af2aab1ffb357ac);
      }
      else {
        do {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_00d023f0;
          uVar15 = plVar13[1];
          if (uVar15 != 0xc50d554e004ca854) {
            if (uVar17 <= uVar15) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar15 / uVar17;
              }
              uVar15 = uVar15 - uVar5 * uVar17;
            }
            if (uVar15 != unaff_x25) goto LAB_00d023f0;
          }
        } while (plVar13[2] != -0x3af2aab1ffb357ac);
      }
      goto LAB_00d02544;
    }
  }
LAB_00d023f0:
  plVar13 = (long *)(**(code **)(*(long *)param_1[0x51] + 0x10))((long *)param_1[0x51],0x290,0x10);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*(long *)param_1[0x51] + 0xb8))();
  }
  plVar13[2] = param_1[0x56];
  *(undefined4 *)(plVar13 + 5) = local_2d8;
  plVar13[4] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  FUN_008c4b3c(plVar13 + 6,&local_2d0);
  plVar13[0xb] = local_2a8;
  plVar13[8] = local_2c0;
  plVar13[9] = local_2b8;
  *(undefined4 *)(plVar13 + 0xc) = local_2a0;
  plVar13[10] = local_2b0;
  memcpy(plVar13 + 0xe,auStack_290,0x200);
  plVar13[0x4e] = 0;
  plVar13[0x4f] = 0;
  FUN_008c4b3c(plVar13 + 0x4e,&local_90);
  *(undefined2 *)(plVar13 + 0x50) = local_80;
  *plVar13 = 0;
  plVar13[1] = -0x3af2aab1ffb357ac;
  if ((uVar17 == 0) || (*(float *)(param_1 + 0x55) * (float)uVar17 < (float)(param_1[0x54] + 1))) {
    uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
    uVar15 = (ulong)((float)(param_1[0x54] + 1) / *(float *)(param_1 + 0x55));
    if (uVar15 <= uVar17) {
      uVar15 = uVar17;
    }
    FUN_00d042c4(plVar2,uVar15);
    uVar17 = param_1[0x4c];
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x25 = uVar17 - 1 & 0xc50d554e004ca854;
    }
    else if (uVar17 < 0xc50d554e004ca855) {
      uVar15 = 0;
      if (uVar17 != 0) {
        uVar15 = 0xc50d554e004ca854 / uVar17;
      }
      unaff_x25 = 0xc50d554e004ca854 - uVar15 * uVar17;
    }
    else {
      unaff_x25 = 0xc50d554e004ca854;
    }
  }
  plVar14 = *(long **)(*plVar2 + unaff_x25 * 8);
  if (plVar14 == (long *)0x0) {
    *plVar13 = param_1[0x50];
    param_1[0x50] = plVar13;
    *(undefined8 **)(param_1[0x4b] + unaff_x25 * 8) = param_1 + 0x50;
    if (*plVar13 != 0) {
      uVar15 = *(ulong *)(*plVar13 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar15 = uVar15 & uVar17 - 1;
      }
      else if (uVar17 <= uVar15) {
        uVar5 = 0;
        if (uVar17 != 0) {
          uVar5 = uVar15 / uVar17;
        }
        uVar15 = uVar15 - uVar5 * uVar17;
      }
      plVar14 = (long *)(*plVar2 + uVar15 * 8);
      goto LAB_00d02770;
    }
  }
  else {
    *plVar13 = *plVar14;
LAB_00d02770:
    *plVar14 = (long)plVar13;
  }
  param_1[0x54] = param_1[0x54] + 1;
LAB_00d02544:
  FUN_00d028ec(param_1,plVar2);
  puVar9 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_58 = *puVar9;
      FUN_02a44274(lVar16 + 0xd8,&local_58);
    }
  }
  puVar9 = local_2d0;
  if (local_2d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_2d0 + 1);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_2d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_58 = *puVar9;
      FUN_02a44274(lVar16 + 0xd8,&local_58);
    }
  }
  return;
}


