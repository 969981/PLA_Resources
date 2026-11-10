/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017dde90; name: FUN_017dde90
 */


void FUN_017dde90(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long local_b0 [13];
  undefined8 local_48;
  
  FUN_00cf9b38(param_1 + 0x68);
  FUN_00b64344(param_1 + 0x78,param_2 + 0x10);
  FUN_017e742c(param_1 + 0x88,param_2 + 0x20);
  FUN_017e76a4(param_1 + 0x98,param_2 + 0x30);
  FUN_017e7914(param_1 + 0xa8,param_2 + 0x40);
  lVar8 = FUN_017e8744(&local_d0,*(undefined8 *)(param_1 + 8));
  if (lVar8 != 0) {
    lVar13 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  *(long *)(param_1 + 0xf0) = lVar8;
  local_d0 = (undefined8 *)&LAB_017e8c5c;
  local_c8 = FUN_017e8ddc;
  local_c0 = FUN_017e8de0;
  local_b8 = &LAB_017e8dec;
  pcVar12 = *(code **)(lVar8 + 0x78);
  local_b0[0] = param_1;
  if (pcVar12 == (code *)0x0) {
LAB_017ddfb8:
    (*local_c0)(local_b0,lVar8 + 0x90);
    *(code **)(lVar8 + 0x78) = local_c8;
    *(undefined1 **)(lVar8 + 0x88) = local_b8;
    *(code **)(lVar8 + 0x80) = local_c0;
    *(undefined8 *)(lVar8 + 0x70) = local_d0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    (*pcVar12)(lVar8 + 0x90);
    if (local_c0 != (code *)0x0) goto LAB_017ddfb8;
  }
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(local_b0);
  }
  lVar8 = *(long *)(param_1 + 0xf0);
  local_d0 = (undefined8 *)&LAB_017e8df8;
  local_c8 = FUN_017e90e4;
  local_c0 = FUN_017e90e8;
  local_b8 = &LAB_017e90f4;
  pcVar12 = *(code **)(lVar8 + 0x178);
  local_b0[0] = param_1;
  if (pcVar12 == (code *)0x0) {
LAB_017de058:
    (*local_c0)(local_b0,lVar8 + 400);
    *(code **)(lVar8 + 0x178) = local_c8;
    *(undefined1 **)(lVar8 + 0x188) = local_b8;
    *(code **)(lVar8 + 0x180) = local_c0;
    *(undefined8 *)(lVar8 + 0x170) = local_d0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    *(undefined8 *)(lVar8 + 0x170) = 0;
    *(undefined8 *)(lVar8 + 0x178) = 0;
    (*pcVar12)(lVar8 + 400);
    if (local_c0 != (code *)0x0) goto LAB_017de058;
  }
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(local_b0);
  }
  lVar8 = *(long *)(param_1 + 0xf0);
  local_d0 = (undefined8 *)&LAB_017e9100;
  local_c8 = FUN_017e93ac;
  local_c0 = FUN_017e93b0;
  local_b8 = &LAB_017e93b4;
  pcVar12 = *(code **)(lVar8 + 0x1f8);
  if (pcVar12 == (code *)0x0) {
LAB_017de0ec:
    (*local_c0)(local_b0,lVar8 + 0x210);
    *(code **)(lVar8 + 0x1f8) = local_c8;
    *(undefined1 **)(lVar8 + 0x208) = local_b8;
    *(code **)(lVar8 + 0x200) = local_c0;
    *(undefined8 *)(lVar8 + 0x1f0) = local_d0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x200) = 0;
    *(undefined8 *)(lVar8 + 0x208) = 0;
    *(undefined8 *)(lVar8 + 0x1f0) = 0;
    *(undefined8 *)(lVar8 + 0x1f8) = 0;
    (*pcVar12)(lVar8 + 0x210);
    if (local_c0 != (code *)0x0) goto LAB_017de0ec;
  }
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(local_b0);
  }
  lVar8 = *(long *)(param_1 + 0xf0);
  local_d0 = (undefined8 *)&LAB_017e93b8;
  local_c8 = FUN_017e9428;
  local_c0 = FUN_017e9680;
  local_b8 = &LAB_017e9684;
  pcVar12 = *(code **)(lVar8 + 0xf8);
  if (pcVar12 == (code *)0x0) {
LAB_017de188:
    (*local_c0)(local_b0,lVar8 + 0x110);
    *(code **)(lVar8 + 0xf8) = local_c8;
    *(undefined1 **)(lVar8 + 0x108) = local_b8;
    *(code **)(lVar8 + 0x100) = local_c0;
    *(undefined8 *)(lVar8 + 0xf0) = local_d0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x100) = 0;
    *(undefined8 *)(lVar8 + 0x108) = 0;
    *(undefined8 *)(lVar8 + 0xf0) = 0;
    *(undefined8 *)(lVar8 + 0xf8) = 0;
    (*pcVar12)(lVar8 + 0x110);
    if (local_c0 != (code *)0x0) goto LAB_017de188;
  }
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(local_b0);
  }
  lVar8 = *(long *)(param_1 + 0xf0);
  local_d0 = (undefined8 *)&LAB_017e9688;
  local_c8 = FUN_017e97ac;
  local_c0 = FUN_017e97b0;
  local_b8 = &LAB_017e97bc;
  pcVar12 = *(code **)(lVar8 + 0x278);
  local_b0[0] = param_1;
  if (pcVar12 == (code *)0x0) {
LAB_017de230:
    (*local_c0)(local_b0,lVar8 + 0x290);
    *(code **)(lVar8 + 0x278) = local_c8;
    *(undefined1 **)(lVar8 + 0x288) = local_b8;
    *(code **)(lVar8 + 0x280) = local_c0;
    *(undefined8 *)(lVar8 + 0x270) = local_d0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x280) = 0;
    *(undefined8 *)(lVar8 + 0x288) = 0;
    *(undefined8 *)(lVar8 + 0x270) = 0;
    *(undefined8 *)(lVar8 + 0x278) = 0;
    (*pcVar12)(lVar8 + 0x290);
    if (local_c0 != (code *)0x0) goto LAB_017de230;
  }
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(local_b0);
  }
  lVar8 = *(long *)(param_1 + 0xf0);
  local_d0 = (undefined8 *)&LAB_017e97c8;
  local_c8 = FUN_017e98b4;
  local_c0 = FUN_017e98b8;
  local_b8 = &LAB_017e98c4;
  pcVar12 = *(code **)(lVar8 + 0x2f8);
  local_b0[0] = param_1;
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x300) = 0;
    *(undefined8 *)(lVar8 + 0x308) = 0;
    *(undefined8 *)(lVar8 + 0x2f0) = 0;
    *(undefined8 *)(lVar8 + 0x2f8) = 0;
    (*pcVar12)(lVar8 + 0x310);
    if (local_c0 == (code *)0x0) goto LAB_017de2fc;
  }
  (*local_c0)(local_b0,lVar8 + 0x310);
  *(code **)(lVar8 + 0x2f8) = local_c8;
  *(undefined1 **)(lVar8 + 0x308) = local_b8;
  *(code **)(lVar8 + 0x300) = local_c0;
  *(undefined8 *)(lVar8 + 0x2f0) = local_d0;
LAB_017de2fc:
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(local_b0);
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  if ((lVar8 != 0) && (plVar10 = *(long **)(lVar8 + 0xd0), plVar10 != (long *)0x0)) {
    plVar2 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      plVar10 = (long *)plVar10[0xb];
    }
    else {
      plVar10 = (long *)plVar10[0xb];
    }
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x10))(&local_d0);
      local_e0 = (undefined8 *)0x0;
      uStack_d8 = 0;
      FUN_017e7b8c(&local_e0,&local_d0);
      puVar6 = local_d0;
      if (local_d0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_d0 + 1);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_48 = *puVar6;
          FUN_02a44274(lVar8 + 0xd8,&local_48);
        }
      }
      plVar14 = plVar10 + 0x15;
      plVar11 = (long *)(**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,0x20,8);
      if (plVar11 == (long *)0x0) {
        (**(code **)(*(long *)*plVar14 + 0xb8))();
      }
      *plVar11 = 0;
      FUN_02c59914(plVar14,plVar11 + 2,&local_e0);
      puVar6 = local_e0;
      plVar11[1] = (long)(plVar10 + 0x12);
      lVar8 = plVar10[0x12];
      *plVar11 = lVar8;
      *(long **)(lVar8 + 8) = plVar11;
      plVar10[0x12] = (long)plVar11;
      plVar10[0x14] = plVar10[0x14] + 1;
      if (local_e0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_e0 + 1);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          local_e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_d0 = (undefined8 *)*puVar6;
          FUN_02a44274(lVar8 + 0xd8,&local_d0);
        }
      }
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar10 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,0xb8,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8();
}


