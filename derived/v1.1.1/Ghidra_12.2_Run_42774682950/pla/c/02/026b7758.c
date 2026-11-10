/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026b7758; name: FUN_026b7758
 */


void FUN_026b7758(long *param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  lVar10 = DAT_043e9dd8;
  puVar6 = PTR_DAT_0437a740;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if ((DAT_043e9dd8 != 0) && (*(int *)(DAT_043e9dd8 + 0xc) != 0)) {
    piVar1 = (int *)(DAT_043e9dd8 + 0xc);
    puVar14 = PTR_DAT_0437a748;
    iVar8 = *(int *)(DAT_043e9dd8 + 0xc);
    do {
      plVar16 = *(long **)(lVar10 + 0x10);
      if ((*puVar6 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(puVar6);
        puVar14 = PTR_DAT_0437a748;
        if (iVar9 != 0) {
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar11;
            __cxa_guard_release(puVar4);
          }
          puVar14 = PTR_DAT_0437a748;
          *(undefined **)PTR_DAT_0437a748 = puVar5;
          __cxa_guard_release(puVar6);
        }
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_026b7790;
        if (plVar16 == (long *)puVar14) break;
        plVar16 = (long *)*plVar16;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          local_58 = (long *)0x0;
          if (lVar10 != 0) {
            local_58 = (long *)(lVar10 + -0x50);
          }
          goto LAB_026b7794;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_026b7790:
  local_58 = (long *)0x0;
LAB_026b7794:
  lVar10 = DAT_043e9dc8;
  puVar5 = PTR_DAT_04387b38;
  puVar4 = PTR_DAT_04387b30;
  if (DAT_043e9dc8 == 0) {
LAB_026b77a4:
    plVar16 = (long *)0x0;
    if (local_58 != (long *)0x0) goto LAB_026b77ac;
LAB_026b7c74:
    *param_1 = 0;
    if (plVar16 == (long *)0x0) goto joined_r0x026b7a68;
  }
  else {
    if (*(int *)(DAT_043e9dc8 + 0xc) != 0) {
      piVar1 = (int *)(DAT_043e9dc8 + 0xc);
      iVar8 = *(int *)(DAT_043e9dc8 + 0xc);
      do {
        puVar15 = *(undefined8 **)(lVar10 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
          uVar11 = FUN_017d2a78();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_026b7ce0;
        while (puVar15 != (undefined8 *)puVar5) {
          puVar15 = (undefined8 *)*puVar15;
          if (puVar15 == (undefined8 *)0x0) goto LAB_026b77a4;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar8) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            plVar16 = (long *)0x0;
            if (lVar10 != 0) {
              plVar16 = (long *)(lVar10 + -0x50);
            }
            goto joined_r0x026b7c70;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar9;
      } while (iVar9 != 0);
      goto LAB_026b77a4;
    }
LAB_026b7ce0:
    plVar16 = (long *)0x0;
joined_r0x026b7c70:
    if (local_58 == (long *)0x0) goto LAB_026b7c74;
LAB_026b77ac:
    if (plVar16 == (long *)0x0) {
      *param_1 = 0;
      goto joined_r0x026b7a68;
    }
    iVar8 = (int)plVar16[0xd];
    if (iVar8 == 3) {
LAB_026b77bc:
      (**(code **)(*plVar16 + 0x48))(plVar16);
      if (*param_3 != 0) {
        local_a8 = PTR_DAT_0437a6d0 + 0x10;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        uStack_a0 = 0;
        local_78 = &DAT_cbf29ce484222645;
        local_70 = &DAT_03996322;
        local_68 = 0;
        local_60 = (long *)0x0;
        lVar10 = FUN_0180ee30(plVar16 + 0x24,param_2);
        FUN_017d3974(&local_a8,lVar10);
        local_78 = *(undefined1 **)(lVar10 + 0x30);
        local_70 = *(undefined1 **)(lVar10 + 0x38);
        local_68 = *(undefined8 *)(lVar10 + 0x40);
        plVar2 = *(long **)(lVar10 + 0x48);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        if (local_60 != (long *)0x0) {
          lVar10 = *local_60;
          local_60 = plVar2;
          (**(code **)(lVar10 + 0x20))();
          plVar2 = local_60;
        }
        local_60 = plVar2;
        if ((param_4 & 1) == 0) {
          bVar7 = false;
        }
        else {
          if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
            FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437a0d0);
          }
          bVar7 = local_78 != *(undefined1 **)PTR_DAT_0437a0d8;
        }
        lVar10 = FUN_017d3d24(*param_3,*(undefined8 *)(*param_3 + 8),&local_58);
        FUN_017d3974(lVar10 + 0x270,&local_a8);
        if (bVar7) {
          FUN_02c91f74(lVar10,&local_78);
        }
        *param_1 = lVar10;
        if (lVar10 != 0) {
          lVar10 = *(long *)(lVar10 + 0x58);
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x20))();
        }
        FUN_00984b00(&local_a8);
        goto LAB_026b78e0;
      }
    }
    else if (iVar8 == 2) {
      uVar12 = (*(code *)plVar16[0x14])(plVar16 + 0x18);
      if ((uVar12 & 1) != 0) {
        pcVar13 = (code *)plVar16[0x15];
        if (pcVar13 != (code *)0x0) {
          plVar16[0x16] = 0;
          plVar16[0x17] = 0;
          plVar16[0x14] = 0;
          plVar16[0x15] = 0;
          (*pcVar13)(plVar16 + 0x18);
        }
        *(undefined4 *)(plVar16 + 0xd) = 3;
        goto LAB_026b77bc;
      }
    }
    else if (iVar8 == 1) {
      uVar12 = (*(code *)plVar16[0x14])(plVar16 + 0x18);
      if ((uVar12 & 1) != 0) {
        pcVar13 = (code *)plVar16[0x15];
        if (pcVar13 != (code *)0x0) {
          plVar16[0x16] = 0;
          plVar16[0x17] = 0;
          plVar16[0x14] = 0;
          plVar16[0x15] = 0;
          (*pcVar13)(plVar16 + 0x18);
        }
        plVar16[0x14] = (long)&LAB_0180f7e8;
        plVar16[0x15] = (long)&LAB_0180f81c;
        plVar16[0x16] = (long)&LAB_0180f820;
        plVar16[0x17] = (long)&LAB_0180f82c;
        plVar16[0x18] = (long)plVar16;
        *(undefined4 *)(plVar16 + 0xd) = 2;
      }
    }
    *param_1 = 0;
  }
LAB_026b78e0:
  lVar10 = plVar16[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
joined_r0x026b7a68:
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


