/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b97d4c; name: FUN_02b97d4c
 */


void FUN_02b97d4c(long *param_1,undefined8 *param_2,undefined4 *param_3,uint param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 uVar20;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [32];
  
  (*DAT_043f04b8)(auStack_140);
  (*DAT_043f04b0)(auStack_140,param_2[2]);
  (*DAT_043f04c0)(auStack_140,param_3[0x12]);
  (*DAT_043f0500)(auStack_140,param_3[8]);
  (*DAT_043f0508)(auStack_140,param_3[0xc]);
  (*DAT_043f0520)(auStack_140,param_3[0x11]);
  (*DAT_043f0550)(auStack_140,*(undefined8 *)(param_3 + 6));
  (*DAT_043f0518)(auStack_140,param_3[0xd],param_3[0xe],param_3[0xf],param_3[0x10]);
  uVar13 = param_3[10];
  if (uVar13 < 9) {
    switch(uVar13) {
    case 1:
      uVar13 = 3;
      break;
    case 2:
      uVar13 = 5;
      if (param_3[0xb] == 0) {
        uVar13 = 1;
      }
      break;
    case 3:
      uVar13 = 4;
      if (param_3[0xb] != 0) {
        uVar13 = 6;
      }
      break;
    case 4:
      uVar13 = 2;
      break;
    case 5:
      uVar13 = 8;
      break;
    case 6:
      uVar13 = 9;
      break;
    case 7:
      uVar13 = 7;
      break;
    case 8:
      uVar13 = 10;
    }
  }
  else {
    uVar13 = 1;
  }
  (*DAT_043f04c8)(auStack_140,uVar13);
  switch(param_3[10]) {
  case 0:
    uVar12 = *param_3;
    pcVar14 = DAT_043f04e8;
    goto LAB_02b98584;
  case 1:
  case 5:
  case 6:
  case 7:
    (*DAT_043f04f0)(auStack_140,*param_3,param_3[2]);
    break;
  case 2:
    (*DAT_043f04f0)(auStack_140,*param_3,param_3[2]);
    switch(param_3[0xb]) {
    case 1:
switchD_02b984b8_caseD_1:
      uVar12 = 2;
      pcVar14 = DAT_043f0510;
      break;
    case 2:
switchD_02b984b8_caseD_2:
      uVar12 = 4;
      pcVar14 = DAT_043f0510;
      break;
    case 3:
switchD_02b984b8_caseD_3:
      uVar12 = 8;
      pcVar14 = DAT_043f0510;
      break;
    case 4:
switchD_02b984b8_caseD_4:
      uVar12 = 0x10;
      pcVar14 = DAT_043f0510;
      break;
    default:
      goto switchD_02b97ecc_default;
    }
LAB_02b98584:
    (*pcVar14)(auStack_140,uVar12);
    uVar13 = param_3[9];
    goto joined_r0x02b98544;
  case 3:
    (*DAT_043f04f8)(auStack_140,*param_3,param_3[2],param_3[4]);
    switch(param_3[0xb]) {
    case 1:
      goto switchD_02b984b8_caseD_1;
    case 2:
      goto switchD_02b984b8_caseD_2;
    case 3:
      goto switchD_02b984b8_caseD_3;
    case 4:
      goto switchD_02b984b8_caseD_4;
    }
    break;
  case 4:
    (*DAT_043f04f8)(auStack_140,*param_3,param_3[2],param_3[4]);
    uVar13 = param_3[9];
    goto joined_r0x02b98544;
  }
switchD_02b97ecc_default:
  uVar13 = param_3[9];
joined_r0x02b98544:
  uVar8 = (ulong)uVar13;
  if (uVar13 == 0) {
    uVar8 = (*DAT_043f0530)(auStack_140);
  }
  lVar16 = param_2[1];
  uVar13 = param_3[0x13];
  uVar9 = (*DAT_043f0528)(auStack_140);
  if (3 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_02b62030();
  }
  plVar10 = *(long **)(lVar16 + (long)(int)uVar13 * 8);
  (**(code **)(*plVar10 + 0x28))(&local_160,plVar10,uVar9,uVar8);
  if (local_158 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(*local_158 + 0x68))();
  }
  (*DAT_043f0538)(auStack_140,uVar9,local_150);
  FUN_02b97450(param_1,*param_2,&local_160);
  lVar17 = *param_1;
  plVar10 = (long *)*param_2;
  iVar7 = (*DAT_043f0580)(auStack_140);
  *(long *)(lVar17 + 0x70) = (long)iVar7;
  iVar7 = (*DAT_043f0588)(auStack_140);
  *(long *)(lVar17 + 0x78) = (long)iVar7;
  lVar16 = (**(code **)(*plVar10 + 0x10))(plVar10,0xc0,8);
  puVar5 = PTR_DAT_04379528;
  if (lVar16 == 0) {
    plVar10 = (long *)0x0;
    uVar9 = 0;
    uVar15 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar6 = PTR_DAT_04379528;
      if (iVar7 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02b98870;
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar10;
    uVar15 = 8;
    uVar9 = 0xc0;
  }
  lVar18 = *(long *)(lVar17 + 0x48);
  *(long *)(lVar17 + 0x48) = lVar16;
  lVar11 = tpidr_el0;
  if (lVar18 == 0) {
    pbVar19 = PTR_DAT_04379520;
  }
  else {
    FUN_02bcbe58(auStack_c0,0);
    plVar1 = *(long **)(lVar17 + 0x50);
    uVar2 = *(undefined8 *)(lVar17 + 0x58);
    uVar20 = *(undefined8 *)(lVar17 + 0x60);
    uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar8 & 1) == 0) {
LAB_02b980b4:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar18,uVar2,uVar20);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02b980b4;
      FUN_02bcc824(plVar1,lVar18,uVar2,uVar20);
    }
    pbVar19 = PTR_DAT_04379520;
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
    lVar16 = *(long *)(lVar17 + 0x48);
  }
  *(long **)(lVar17 + 0x50) = plVar10;
  *(undefined8 *)(lVar17 + 0x58) = uVar9;
  *(undefined8 *)(lVar17 + 0x60) = uVar15;
  *(undefined8 *)(lVar17 + 0x68) = 0;
  (*DAT_043f0678)(lVar16,auStack_140);
  if ((param_4 | 2) == 3) {
    *(undefined1 *)(lVar17 + 0x88) = 1;
  }
  if ((param_4 | 1) == 3) {
    *(undefined1 *)(lVar17 + 0x89) = 1;
  }
  if ((*(byte *)(param_3 + 0x12) & 0x50) == 0) goto LAB_02b983f4;
  lVar18 = *param_1;
  (*DAT_043f0428)(auStack_c0);
  (*DAT_043f0420)(auStack_c0,param_2[2]);
  lVar16 = (*DAT_043f06f8)(*(undefined8 *)(lVar18 + 0x48));
  lVar17 = *(long *)(lVar18 + 0x78);
  if (*(long **)(lVar18 + 8) == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(**(long **)(lVar18 + 8) + 0x68))();
  }
  (*DAT_043f0430)(auStack_c0,uVar9,*(undefined8 *)(lVar18 + 0x10),lVar17 * lVar16);
  plVar10 = (long *)*param_2;
  lVar16 = (**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  if (lVar16 == 0) {
    plVar10 = (long *)0x0;
    uVar15 = 0;
    uVar9 = 0;
  }
  else {
    if ((*pbVar19 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar7 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_02b98870:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar9 = 8;
    uVar15 = 0x30;
    *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar10;
  }
  lVar17 = *(long *)(lVar18 + 0x20);
  *(long *)(lVar18 + 0x20) = lVar16;
  if (lVar17 != 0) {
    FUN_02bcbe58(auStack_80,0);
    plVar1 = *(long **)(lVar18 + 0x28);
    uVar2 = *(undefined8 *)(lVar18 + 0x30);
    uVar20 = *(undefined8 *)(lVar18 + 0x38);
    uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar8 & 1) == 0) {
LAB_02b98324:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar17,uVar2,uVar20);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02b98324;
      FUN_02bcc824(plVar1,lVar17,uVar2,uVar20);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
    lVar16 = *(long *)(lVar18 + 0x20);
  }
  *(long **)(lVar18 + 0x28) = plVar10;
  *(undefined8 *)(lVar18 + 0x30) = uVar15;
  *(undefined8 *)(lVar18 + 0x38) = uVar9;
  (*DAT_043f0458)(lVar16,auStack_c0);
  uVar9 = (*DAT_043f0478)(*(undefined8 *)(lVar18 + 0x20));
  *(undefined8 *)(lVar18 + 0x40) = uVar9;
LAB_02b983f4:
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x30))(local_158,&local_160);
    plVar10 = local_158;
    local_160 = 0;
    local_158 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    local_150 = 0xffffffffffffffff;
    uStack_148 = 0;
    if (local_158 != (long *)0x0) {
      plVar10 = local_158 + 10;
      do {
        iVar7 = (int)*plVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_158 + 0x10))();
      }
    }
  }
  return;
}


