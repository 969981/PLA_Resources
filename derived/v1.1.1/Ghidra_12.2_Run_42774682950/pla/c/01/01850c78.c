/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01850c78; name: FUN_01850c78
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01850c78(long *******param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  long ******pppppplVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  long *******ppppppplVar7;
  ulong uVar8;
  long *******ppppppplVar9;
  long *****ppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long lVar13;
  long *******ppppppplVar14;
  long *******local_98;
  long *******local_90;
  long local_88;
  long ******local_80;
  long ******local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  ppppppplVar9 = (long *******)&local_98;
  local_98 = ppppppplVar9;
  local_90 = ppppppplVar9;
  local_68 = 0;
  local_88 = 0;
  local_80 = param_1[3];
  local_78 = param_1[4];
  uStack_70 = 0;
  ppppppplVar11 = (long *******)param_1[1];
  if (param_1 != ppppppplVar11) {
    if (ppppppplVar9 == param_1) {
      ppppppplVar9 = (long *******)&local_98;
      do {
        ppppppplVar14 = (long *******)ppppppplVar11[1];
        if (ppppppplVar11[2] == (long ******)*param_2) {
          for (; param_1 != ppppppplVar14; ppppppplVar14 = (long *******)ppppppplVar14[1]) {
            if (ppppppplVar14[2] != ppppppplVar11[2]) {
              uVar6 = true;
              ppppppplVar12 = ppppppplVar14;
              goto joined_r0x018510e8;
            }
          }
          uVar6 = false;
          ppppppplVar12 = param_1;
joined_r0x018510e8:
          if (ppppppplVar11 != ppppppplVar12) {
            ppppppplVar9 = (long *******)*ppppppplVar14;
            (*ppppppplVar11)[1] = (long *****)ppppppplVar9[1];
            *ppppppplVar9[1] = (long *****)*ppppppplVar11;
            local_98[1] = (long ******)ppppppplVar11;
            *ppppppplVar11 = (long ******)local_98;
            local_98 = ppppppplVar9;
            ppppppplVar9[1] = (long ******)&local_98;
          }
          if ((bool)uVar6) {
            ppppppplVar14 = *(long ********)((long)ppppppplVar12 + 8);
          }
        }
        ppppppplVar11 = ppppppplVar14;
      } while (param_1 != ppppppplVar11);
    }
    else {
      ppppppplVar9 = (long *******)&local_98;
      do {
        ppppppplVar14 = (long *******)ppppppplVar11[1];
        pppppplVar3 = ppppppplVar11[2];
        if (pppppplVar3 == (long ******)*param_2) {
          ppppppplVar12 = ppppppplVar14;
          if (param_1 == ppppppplVar14) {
LAB_01850d20:
            bVar5 = false;
            ppppppplVar7 = param_1;
          }
          else if (ppppppplVar14[2] == pppppplVar3) {
            do {
              ppppppplVar12 = (long *******)ppppppplVar12[1];
              if (param_1 == ppppppplVar12) goto LAB_01850d20;
            } while (ppppppplVar12[2] == pppppplVar3);
            bVar5 = true;
            ppppppplVar7 = ppppppplVar12;
          }
          else {
            bVar5 = true;
            ppppppplVar7 = ppppppplVar14;
          }
          if (ppppppplVar11 != ppppppplVar7) {
            ppppppplVar9 = (long *******)*ppppppplVar12;
            if (ppppppplVar9 == ppppppplVar11) {
              lVar13 = 1;
            }
            else {
              if (ppppppplVar9 == ppppppplVar14) {
                lVar13 = 0;
              }
              else {
                lVar13 = 0;
                do {
                  ppppppplVar14 = (long *******)ppppppplVar14[1];
                  lVar13 = lVar13 + 1;
                } while (ppppppplVar14 != ppppppplVar9);
              }
              lVar13 = lVar13 + 2;
            }
            param_1[2] = (long ******)((long)param_1[2] - lVar13);
            local_88 = local_88 + lVar13;
            (*ppppppplVar11)[1] = (long *****)ppppppplVar9[1];
            *ppppppplVar9[1] = (long *****)*ppppppplVar11;
            local_98[1] = (long ******)ppppppplVar11;
            *ppppppplVar11 = (long ******)local_98;
            local_98 = ppppppplVar9;
            ppppppplVar9[1] = (long ******)&local_98;
          }
          if (bVar5) {
            ppppppplVar14 = (long *******)ppppppplVar7[1];
          }
          else {
            ppppppplVar14 = ppppppplVar12;
          }
        }
        ppppppplVar11 = ppppppplVar14;
      } while (param_1 != ppppppplVar11);
    }
  }
  ppppppplVar11 = local_90;
  if (local_88 == 0) {
    return;
  }
  (*local_90)[1] = (long *****)ppppppplVar9[1];
  *ppppppplVar9[1] = (long *****)*local_90;
  local_88 = 0;
  if ((long ********)local_90 == &local_98) {
    return;
  }
  ppppppplVar9 = (long *******)local_90[1];
  pppppplVar3 = local_90[2];
  if (pppppplVar3 != (long ******)0x0) {
    ppppplVar10 = pppppplVar3[0xb];
    piVar1 = (int *)((long)ppppplVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      ppppplVar10[3] = (long ****)0x0;
      (*(code *)(*pppppplVar3)[4])();
    }
  }
  pppppplVar3 = local_80;
  uVar8 = (*(code *)(*local_80)[0x18])(local_80);
  lVar13 = tpidr_el0;
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(pppppplVar3,ppppppplVar11,0x18,8);
      goto LAB_01850e80;
    }
  }
  (*(code *)(*pppppplVar3)[3])(pppppplVar3,ppppppplVar11,0x18,8);
LAB_01850e80:
  do {
    while( true ) {
      if ((long ********)ppppppplVar9 == &local_98) {
        return;
      }
      ppppppplVar11 = (long *******)ppppppplVar9[1];
      pppppplVar3 = ppppppplVar9[2];
      if (pppppplVar3 != (long ******)0x0) {
        ppppplVar10 = pppppplVar3[0xb];
        piVar1 = (int *)((long)ppppplVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          ppppplVar10[3] = (long ****)0x0;
          (*(code *)(*pppppplVar3)[4])();
        }
      }
      pppppplVar3 = local_80;
      uVar8 = (*(code *)(*local_80)[0x18])(local_80);
      if ((uVar8 & 1) != 0) break;
LAB_01850f24:
      (*(code *)(*pppppplVar3)[3])(pppppplVar3,ppppppplVar9,0x18,8);
      ppppppplVar9 = ppppppplVar11;
    }
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_01850f24;
    FUN_02bcc824(pppppplVar3,ppppppplVar9,0x18,8);
    ppppppplVar9 = ppppppplVar11;
  } while( true );
}


