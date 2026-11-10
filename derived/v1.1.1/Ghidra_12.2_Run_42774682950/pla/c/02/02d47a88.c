/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d47a88; name: FUN_02d47a88
 */


void FUN_02d47a88(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined4 local_200 [2];
  undefined8 local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long alStack_1d0 [12];
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long alStack_150 [12];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  
  lVar11 = *param_2;
  *param_2 = 0;
  plVar13 = *(long **)(*param_1 + 8);
  local_200[0] = 0;
  local_1f8 = 0x2000;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (*(ulong *)(lVar12 + 0x80) < 0x10) {
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0x200,0x10);
    if (lVar10 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    local_f0 = &LAB_02d4848c;
    local_e8 = FUN_02d484bc;
    local_e0 = &LAB_02d484f4;
    puStack_d8 = &LAB_02d48568;
    local_170 = &LAB_02d48578;
    local_168 = FUN_02d485c0;
    local_160 = &LAB_02d485f8;
    local_158 = &LAB_02d4866c;
    local_1f0 = &LAB_02d4867c;
    local_1e8 = FUN_02d48690;
    local_1e0 = &LAB_02d486c8;
    local_1d8 = &LAB_02d4873c;
    alStack_1d0[0] = lVar11;
    alStack_150[0] = lVar11;
    local_d0 = lVar11;
    FUN_013b7bdc(lVar10,local_200,&local_f0,&local_170,&local_1f0);
    pcVar7 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = (undefined1 *)0x0;
      local_1f0 = (undefined1 *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar7)(alStack_1d0);
    }
    pcVar7 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      local_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar7)(alStack_150);
    }
    pcVar7 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      puStack_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar7)(&local_d0);
    }
    *(long **)(lVar10 + 8) = plVar13;
    *(long *)(lVar10 + 0x10) = lVar10;
    *(undefined8 *)(lVar10 + 0x18) = 0x200;
    *(undefined8 *)(lVar10 + 0x20) = 0x10;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (lVar10 != 0) {
      lVar12 = *(long *)(lVar10 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar12 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
    lVar15 = param_1[3];
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      bVar3 = true;
    }
    else {
      lVar12 = *(long *)(lVar11 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar12 = *(long *)(lVar11 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar12 = *(long *)(lVar11 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar3 = false;
    }
    plVar13 = *(long **)(*param_1 + 8);
    if (((*puVar5 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (*(ulong *)(lVar12 + 0x80) < 0x10) {
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      lVar12 = (**(code **)(*plVar13 + 0x10))(plVar13,0x200,0x10);
      if (lVar12 == 0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13);
      }
      local_e0 = (undefined1 *)0x0;
      puStack_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      lVar14 = *(long *)(lVar10 + 0x58);
      local_d0 = lVar15;
      lStack_c8 = lVar10;
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_02d48438:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_c0 = lVar11;
      if (lVar11 != 0) {
        lVar10 = *(long *)(lVar11 + 0x58);
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_170 = (undefined1 *)0x0;
      local_f0 = &LAB_02d4874c;
      local_e8 = (code *)&LAB_02d49bcc;
      local_e0 = &LAB_02d55fe0;
      puStack_d8 = &LAB_02d560b0;
      local_158 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      local_160 = (undefined1 *)0x0;
      alStack_150[0] = lVar11;
      if (!bVar3) {
        lVar10 = *(long *)(lVar11 + 0x58);
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_1f0 = (undefined1 *)0x0;
      local_170 = &LAB_02d56148;
      local_168 = (code *)&LAB_02d56190;
      local_160 = &LAB_02d561c8;
      local_158 = &LAB_02d5623c;
      local_1d8 = (undefined1 *)0x0;
      local_1e8 = (code *)0x0;
      local_1e0 = (undefined1 *)0x0;
      alStack_1d0[0] = lVar11;
      if (!bVar3) {
        lVar10 = *(long *)(lVar11 + 0x58);
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02d48438;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_1f0 = &LAB_02d5624c;
      local_1e8 = (code *)&LAB_02d56260;
      local_1e0 = &LAB_02d56298;
      local_1d8 = &LAB_02d5630c;
                    /* WARNING: Subroutine does not return */
      FUN_008a93d8(lVar12);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


