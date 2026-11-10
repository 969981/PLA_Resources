/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e2bb4; name: FUN_017e2bb4
 */


/* WARNING: Removing unreachable block (ram,0x017e30b4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_017e2bb4(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long local_1f0 [13];
  long *local_188;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  long local_160 [13];
  long *local_f8;
  long *local_f0;
  undefined1 local_e8 [8];
  long *local_e0;
  long *local_d8;
  undefined1 local_d0 [8];
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long local_b0 [12];
  long *local_48;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    local_d8 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_d8);
  }
  FUN_017e9e98(&local_e0,*(undefined8 *)(param_1 + 0x88));
  puVar7 = PTR_DAT_04379528;
  puVar6 = PTR_DAT_04379520;
  plVar12 = (long *)local_e0[0x23];
  local_b0[0] = param_1;
  if ((char)param_2[2] == '\0') {
    local_e8[0] = 1;
    local_f0 = (long *)0x0;
    _local_d0 = FUN_0098fad4(PTR_DAT_04379570);
    if ((*puVar6 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar6 = PTR_DAT_04379528;
      if (iVar8 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_017e33e8;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar10 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x150,0x10);
    if (plVar10 == (long *)0x0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    plVar14 = (long *)*param_2;
    local_48 = plVar14;
    if (plVar14 == (long *)0x0) {
      FUN_01ca156c(plVar10,PTR_DAT_0437a330,local_d0,PTR_DAT_0437a120,local_e8,&local_48,4,0);
    }
    else {
      plVar2 = plVar14 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_01ca156c(plVar10,PTR_DAT_0437a330,local_d0,PTR_DAT_0437a120,local_e8,&local_48,4,0);
      if (plVar14 != (long *)0x0) {
        plVar2 = plVar14 + 10;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    plVar10[1] = (long)plVar12;
    plVar10[2] = (long)plVar10;
    plVar10[3] = 0x150;
    plVar10[4] = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_017e33d0;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar11;
      }
      plVar12 = local_f0;
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_f0 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        lVar9 = plVar12[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))();
        }
      }
    }
    lVar9 = param_2[1];
    local_f0 = plVar10;
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar9 + 0x58);
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_017e33d0;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
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
    plVar12 = (long *)plVar10[0x26];
    plVar10[0x26] = lVar9;
    if (plVar12 != (long *)0x0) {
      lVar9 = plVar12[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))();
      }
    }
    local_d0 = (undefined1  [8])&LAB_017ec418;
    uStack_c8 = FUN_017ec5d8;
    local_c0 = &LAB_017ec5dc;
    puStack_b8 = &LAB_017ec5e8;
    local_1f0[0] = param_1;
    FUN_017eb758(&local_188,local_d8[0xf],&local_f0,local_d0);
    pcVar5 = uStack_c8;
    if (uStack_c8 == (code *)0x0) {
      uStack_c8 = (code *)0x0;
    }
    else {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1  [8])0x0;
      uStack_c8 = (code *)0x0;
      (*pcVar5)(local_b0);
    }
    if (local_188 != (long *)0x0) {
      lVar9 = local_188[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_188 + 0x20))();
      }
    }
    FUN_017ec5d8(local_1f0);
    if (local_f0 == (long *)0x0) goto joined_r0x017e30dc;
    lVar9 = local_f0[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    local_e8[0] = 0;
    local_f0 = (long *)0x0;
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_017e33e8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar10 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x150,0x10);
    if (plVar10 == (long *)0x0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    local_d0 = (undefined1  [8])param_2[1];
    if (local_d0 != (undefined1  [8])0x0) {
      lVar13 = *(long *)((long)local_d0 + 0x58);
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_017e33d0;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
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
    local_48 = (long *)*param_2;
    if (local_48 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = local_48 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar14 = local_48;
    }
    FUN_01ca13dc(plVar10,param_2 + 0x16,PTR_DAT_0437a330,PTR_DAT_0437a120,param_2 + 6,local_e8,
                 local_d0,&local_48,(int)param_2[0x14],*(undefined4 *)((long)param_2 + 0xa4));
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (local_d0 != (undefined1  [8])0x0) {
      lVar13 = *(long *)((long)local_d0 + 0x58);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*(long *)local_d0 + 0x20))();
      }
    }
    plVar10[1] = (long)plVar12;
    plVar10[2] = (long)plVar10;
    plVar10[3] = 0x150;
    plVar10[4] = 0x10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_017e33d0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar11;
      }
      plVar12 = local_f0;
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_f0 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        lVar9 = plVar12[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))();
        }
      }
    }
    *(int *)(plVar10 + 0x25) = (int)param_2[0x15];
    local_180 = &LAB_017ec238;
    local_178 = FUN_017ec3fc;
    local_170 = &LAB_017ec400;
    puStack_168 = &LAB_017ec40c;
    local_d0 = (undefined1  [8])&LAB_017ec238;
    uStack_c8 = FUN_017ec3fc;
    local_c0 = &LAB_017ec400;
    puStack_b8 = &LAB_017ec40c;
    local_160[0] = param_1;
    local_f0 = plVar10;
    FUN_017eb758(&local_f8,local_d8[0xf],&local_f0,local_d0);
    pcVar5 = uStack_c8;
    if (uStack_c8 == (code *)0x0) {
      uStack_c8 = (code *)0x0;
    }
    else {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1  [8])0x0;
      uStack_c8 = (code *)0x0;
      (*pcVar5)(local_b0);
    }
    pcVar5 = local_178;
    if (local_f8 != (long *)0x0) {
      lVar9 = local_f8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_f8 + 0x20))();
        pcVar5 = local_178;
      }
    }
    local_178 = (code *)0x0;
    if (pcVar5 != (code *)0x0) {
      local_170 = (undefined1 *)0x0;
      puStack_168 = (undefined1 *)0x0;
      local_180 = (undefined1 *)0x0;
      local_178 = (code *)0x0;
      (*pcVar5)(local_160);
    }
    if (local_f0 == (long *)0x0) goto joined_r0x017e30dc;
    lVar9 = local_f0[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar8 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*local_f0 + 0x20))();
  }
joined_r0x017e30dc:
  if (local_e0 != (long *)0x0) {
    lVar9 = local_e0[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  if (local_d8 != (long *)0x0) {
    lVar9 = local_d8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_d8 + 0x20))();
    }
  }
  return;
}


