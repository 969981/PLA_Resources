/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d31f8; name: FUN_017d31f8
 */


void FUN_017d31f8(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  long *local_58;
  long *local_48;
  
  lVar11 = DAT_043d1120;
  puVar7 = PTR_DAT_0437a740;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if ((DAT_043d1120 != 0) && (*(int *)(DAT_043d1120 + 0xc) != 0)) {
    piVar1 = (int *)(DAT_043d1120 + 0xc);
    puVar15 = PTR_DAT_0437a748;
    iVar9 = *(int *)(DAT_043d1120 + 0xc);
    do {
      plVar17 = *(long **)(lVar11 + 0x10);
      if ((*puVar7 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(puVar7);
        puVar15 = PTR_DAT_0437a748;
        if (iVar10 != 0) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          puVar15 = PTR_DAT_0437a748;
          *(undefined **)PTR_DAT_0437a748 = puVar6;
          __cxa_guard_release(puVar7);
        }
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_017d322c;
        if (plVar17 == (long *)puVar15) break;
        plVar17 = (long *)*plVar17;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          local_48 = (long *)0x0;
          if (lVar11 != 0) {
            local_48 = (long *)(lVar11 + -0x50);
          }
          goto LAB_017d3230;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_017d322c:
  local_48 = (long *)0x0;
LAB_017d3230:
  lVar11 = DAT_043d1110;
  puVar6 = PTR_DAT_04381930;
  puVar5 = PTR_DAT_04381928;
  if (DAT_043d1110 == 0) {
LAB_017d3240:
    plVar17 = (long *)0x0;
    if (local_48 != (long *)0x0) goto LAB_017d3248;
LAB_017d370c:
    *param_1 = 0;
    if (plVar17 == (long *)0x0) goto joined_r0x017d34fc;
  }
  else {
    if (*(int *)(DAT_043d1110 + 0xc) != 0) {
      piVar1 = (int *)(DAT_043d1110 + 0xc);
      iVar9 = *(int *)(DAT_043d1110 + 0xc);
      do {
        puVar16 = *(undefined8 **)(lVar11 + 0x10);
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar12 = FUN_017d2a78();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(puVar5);
        }
        if (puVar16 == (undefined8 *)0x0) goto LAB_017d3778;
        while (puVar16 != (undefined8 *)puVar6) {
          puVar16 = (undefined8 *)*puVar16;
          if (puVar16 == (undefined8 *)0x0) goto LAB_017d3240;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = *(long *)(lVar11 + 0x18);
            plVar17 = (long *)0x0;
            if (lVar11 != 0) {
              plVar17 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x017d3708;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
      goto LAB_017d3240;
    }
LAB_017d3778:
    plVar17 = (long *)0x0;
joined_r0x017d3708:
    if (local_48 == (long *)0x0) goto LAB_017d370c;
LAB_017d3248:
    if (plVar17 == (long *)0x0) {
      *param_1 = 0;
      goto joined_r0x017d34fc;
    }
    iVar9 = (int)plVar17[0xd];
    if (iVar9 == 3) {
LAB_017d3258:
      (**(code **)(*plVar17 + 0x48))(plVar17);
      if (*param_3 != 0) {
        local_a0 = PTR_DAT_0437a6d0 + 0x10;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        uStack_98 = 0;
        local_70 = &DAT_cbf29ce484222645;
        local_68 = &DAT_03996322;
        local_60 = 0;
        local_58 = (long *)0x0;
        lVar11 = FUN_0180ee30(plVar17 + 0x24,param_2);
        FUN_017d3974(&local_a0,lVar11);
        local_70 = *(undefined1 **)(lVar11 + 0x30);
        local_68 = *(undefined1 **)(lVar11 + 0x38);
        local_60 = *(undefined8 *)(lVar11 + 0x40);
        plVar2 = *(long **)(lVar11 + 0x48);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        if (local_58 != (long *)0x0) {
          lVar11 = *local_58;
          local_58 = plVar2;
          (**(code **)(lVar11 + 0x20))();
          plVar2 = local_58;
        }
        local_58 = plVar2;
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar8 = local_70;
        puVar18 = *(undefined1 **)PTR_DAT_0437a0d8;
        lVar11 = FUN_017d3d24(*param_3,*(undefined8 *)(*param_3 + 8),&local_48);
        FUN_017d3974(lVar11 + 0x270,&local_a0);
        if (puVar8 == puVar18) {
          *param_1 = lVar11;
        }
        else {
          FUN_02c91f74(lVar11,&local_70);
          *param_1 = lVar11;
        }
        if (lVar11 != 0) {
          lVar11 = *(long *)(lVar11 + 0x58);
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar12;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        FUN_00984b00(&local_a0);
        goto LAB_017d3364;
      }
    }
    else if (iVar9 == 2) {
      uVar13 = (*(code *)plVar17[0x14])(plVar17 + 0x18);
      if ((uVar13 & 1) != 0) {
        pcVar14 = (code *)plVar17[0x15];
        if (pcVar14 != (code *)0x0) {
          plVar17[0x16] = 0;
          plVar17[0x17] = 0;
          plVar17[0x14] = 0;
          plVar17[0x15] = 0;
          (*pcVar14)(plVar17 + 0x18);
        }
        *(undefined4 *)(plVar17 + 0xd) = 3;
        goto LAB_017d3258;
      }
    }
    else if (iVar9 == 1) {
      uVar13 = (*(code *)plVar17[0x14])(plVar17 + 0x18);
      if ((uVar13 & 1) != 0) {
        pcVar14 = (code *)plVar17[0x15];
        if (pcVar14 != (code *)0x0) {
          plVar17[0x16] = 0;
          plVar17[0x17] = 0;
          plVar17[0x14] = 0;
          plVar17[0x15] = 0;
          (*pcVar14)(plVar17 + 0x18);
        }
        plVar17[0x14] = (long)&LAB_0180f7e8;
        plVar17[0x15] = (long)&LAB_0180f81c;
        plVar17[0x16] = (long)&LAB_0180f820;
        plVar17[0x17] = (long)&LAB_0180f82c;
        plVar17[0x18] = (long)plVar17;
        *(undefined4 *)(plVar17 + 0xd) = 2;
      }
    }
    *param_1 = 0;
  }
LAB_017d3364:
  lVar11 = plVar17[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
joined_r0x017d34fc:
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


