/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec6f2c; name: FUN_01ec6f2c
 */


void FUN_01ec6f2c(long *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  int *piVar18;
  undefined8 *puVar19;
  code *pcVar20;
  long *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  code *local_1c0;
  code *local_1b8;
  code *local_1b0;
  long *plStack_1a8;
  undefined1 auStack_1a0 [104];
  long *local_138;
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined4 local_124;
  long *local_120;
  long *local_118;
  int local_10c;
  undefined8 *local_108;
  undefined8 uStack_100;
  long *local_f8;
  code *local_f0;
  code *pcStack_e8;
  code *local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar13 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar13;
  pcVar14 = (char *)FUN_010aace4(uVar13,*param_2,0);
  if (param_1[0x44] == 0) {
    return;
  }
  FUN_009acf14(&local_f8);
  if (local_f8 == (long *)0x0) {
    return;
  }
  local_d8 = (long *)param_1[1];
  local_c0 = 0;
  local_f0 = (code *)0x0;
  pcStack_e8 = (code *)0x0;
  local_e0 = (code *)0x0;
  local_d0 = 0x555555555555555;
  uStack_c8 = 0;
  FUN_01ecac68(param_1 + 0x58,param_2,&local_f0);
  pcVar6 = local_f0;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  if (local_f0 != (code *)0x0) {
    if (pcStack_e8 != local_f0) {
      pcVar20 = pcStack_e8 + -0x30;
      puVar19 = *(undefined8 **)pcVar20;
      if (puVar19 == (undefined8 *)0x0) goto LAB_01ec7224;
      piVar18 = (int *)(puVar19 + 1);
      do {
        iVar10 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 != 0) goto LAB_01ec7224;
      puVar19[2] = 0;
      if ((*PTR_DAT_04379498 & 1) != 0) goto LAB_01ec7208;
      iVar10 = __cxa_guard_acquire(PTR_DAT_04379498);
      if (iVar10 == 0) goto LAB_01ec7208;
      puVar16 = PTR_DAT_043794a0;
      do {
        FUN_00100250(PTR_LAB_04379590,puVar16,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
LAB_01ec7208:
        do {
          lVar17 = *(long *)puVar7;
          *(long *)puVar8 = lVar17;
          local_1f0 = (long *)*puVar19;
          FUN_02a44274(lVar17 + 0xd8,&local_1f0);
LAB_01ec7224:
          do {
            do {
              if (pcVar20 == pcVar6) goto LAB_01ec7088;
              pcVar20 = pcVar20 + -0x30;
              puVar19 = *(undefined8 **)pcVar20;
            } while (puVar19 == (undefined8 *)0x0);
            piVar18 = (int *)(puVar19 + 1);
            do {
              iVar10 = *piVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          } while (iVar10 + -1 != 0);
          puVar19[2] = 0;
        } while (((*PTR_DAT_04379498 & 1) != 0) ||
                (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 == 0));
        puVar16 = puVar7;
      } while( true );
    }
LAB_01ec7088:
    plVar9 = local_d8;
    pcVar20 = local_f0;
    pcStack_e8 = pcVar6;
    lVar17 = (long)local_e0 - (long)local_f0;
    uVar15 = (**(code **)(*local_d8 + 0xc0))(local_d8);
    if ((uVar15 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar9,pcVar20,lVar17,8);
        goto joined_r0x01ec710c;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,pcVar20,lVar17,8);
  }
joined_r0x01ec710c:
  if (param_3 < 1) {
LAB_01ec75ec:
    if (local_f8 != (long *)0x0) {
      lVar17 = local_f8[0xb];
      piVar18 = (int *)(lVar17 + 0xc);
      do {
        iVar10 = *piVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar4) {
          *piVar18 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_f8 + 0x20))();
      }
    }
    return;
  }
  iVar10 = 0;
  if (*pcVar14 != '\0') goto LAB_01ec72c8;
LAB_01ec75b4:
  piVar18 = *(int **)(pcVar14 + 0x10);
  if (piVar18 == (int *)0x0) {
    piVar18 = *(int **)(pcVar14 + 8);
  }
  if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x51) goto LAB_01ec72e8;
  uVar2 = ((ushort *)((long)piVar18 - (long)*piVar18))[0x28];
  do {
    if (((ulong)uVar2 != 0) && (iVar12 = *(int *)((long)piVar18 + (ulong)uVar2), iVar12 != 0))
    goto LAB_01ec72ec;
LAB_01ec72e8:
    do {
      iVar12 = 1;
LAB_01ec72ec:
      (**(code **)(*param_1 + 0x10))(&local_f0,param_1);
      local_108 = (undefined8 *)0x0;
      uStack_100 = 0;
      FUN_00b6111c(&local_108,&local_f0);
      pcVar6 = local_f0;
      if (local_f0 != (code *)0x0) {
        pcVar20 = local_f0 + 8;
        do {
          iVar11 = *(int *)pcVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar20,0x10);
          if (bVar4) {
            *(int *)pcVar20 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(local_f0 + 0x10) = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_1f0 = *(long **)pcVar6;
          FUN_02a44274(lVar17 + 0xd8,&local_1f0);
        }
      }
      local_10c = 0;
      if (0 < iVar12) {
        do {
          lVar17 = param_1[1];
          FUN_009c69bc(&local_120,param_1);
          pcStack_e8 = (code *)local_120[0x1b];
          local_f0 = (code *)local_120[0x1a];
          local_128[0] = 1;
          local_130[0] = 1;
          local_124 = 0;
          local_12c[0] = 0;
          FUN_01ec7760(&local_1f0,lVar17,&local_f0,param_1 + 0x46,param_4,&local_124,param_2,
                       local_128,&local_10c,local_12c,param_1 + 0x73,local_130);
          local_118 = local_1f0;
          local_1f0 = (long *)0x0;
          if (local_120 != (long *)0x0) {
            lVar17 = local_120[0xb];
            piVar18 = (int *)(lVar17 + 0xc);
            do {
              iVar11 = *piVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_120 + 0x20))();
            }
          }
          plVar9 = local_f8;
          local_1f0 = (long *)0x0;
          uStack_1e8 = 0;
          FUN_00b640d4(&local_1f0,&local_108);
          local_1e0 = *param_2;
          local_1d8 = param_2[1];
          local_1d0 = param_2[2];
          local_1c8 = (long *)param_2[3];
          if (local_1c8 != (long *)0x0) {
            (**(code **)(*local_1c8 + 0x18))();
          }
          local_1b0 = (code *)0x0;
          plStack_1a8 = (long *)0x0;
          local_1c0 = (code *)0x0;
          local_1b8 = (code *)0x0;
          FUN_01ecd848(&local_1c0,&local_1f0);
          lVar17 = plVar9[0xf];
          local_e0 = (code *)0x0;
          local_d8 = (long *)0x0;
          local_f0 = (code *)0x0;
          pcStack_e8 = (code *)0x0;
          if (local_1b0 != (code *)0x0) {
            (*local_1b0)(auStack_1a0,&local_d0);
            local_f0 = local_1c0;
            local_d8 = plStack_1a8;
            pcStack_e8 = local_1b8;
            local_e0 = local_1b0;
          }
          FUN_01ecce54(&local_138,lVar17,&local_118,&local_f0);
          pcVar6 = pcStack_e8;
          if (pcStack_e8 == (code *)0x0) {
            pcStack_e8 = (code *)0x0;
          }
          else {
            local_e0 = (code *)0x0;
            local_d8 = (long *)0x0;
            local_f0 = (code *)0x0;
            pcStack_e8 = (code *)0x0;
            (*pcVar6)(&local_d0);
          }
          pcVar6 = local_1b8;
          if (local_138 != (long *)0x0) {
            lVar17 = local_138[0xb];
            piVar18 = (int *)(lVar17 + 0xc);
            do {
              iVar11 = *piVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_138 + 0x20))();
              pcVar6 = local_1b8;
            }
          }
          local_1b8 = (code *)0x0;
          if (pcVar6 != (code *)0x0) {
            local_1b0 = (code *)0x0;
            plStack_1a8 = (long *)0x0;
            local_1c0 = (code *)0x0;
            local_1b8 = (code *)0x0;
            (*pcVar6)(auStack_1a0);
          }
          if (local_1c8 != (long *)0x0) {
            (**(code **)(*local_1c8 + 0x20))();
          }
          plVar9 = local_1f0;
          if (local_1f0 != (long *)0x0) {
            plVar1 = local_1f0 + 1;
            do {
              iVar11 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 == 0) {
              local_1f0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar17 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar17;
              local_f0 = (code *)*plVar9;
              FUN_02a44274(lVar17 + 0xd8,&local_f0);
            }
          }
          if (local_118 != (long *)0x0) {
            lVar17 = local_118[0xb];
            piVar18 = (int *)(lVar17 + 0xc);
            do {
              iVar11 = *piVar18;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
              if (bVar4) {
                *piVar18 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_118 + 0x20))();
            }
          }
          local_10c = local_10c + 1;
        } while (local_10c < iVar12);
      }
      puVar19 = local_108;
      if (local_108 != (undefined8 *)0x0) {
        piVar18 = (int *)(local_108 + 1);
        do {
          iVar12 = *piVar18;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar4) {
            *piVar18 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          local_108[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_f0 = (code *)*puVar19;
          FUN_02a44274(lVar17 + 0xd8,&local_f0);
        }
      }
      iVar10 = iVar10 + 1;
      if (iVar10 == param_3) goto LAB_01ec75ec;
      if (*pcVar14 == '\0') goto LAB_01ec75b4;
LAB_01ec72c8:
      piVar18 = *(int **)(pcVar14 + 0x18);
    } while (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x4d);
    uVar2 = ((ushort *)((long)piVar18 - (long)*piVar18))[0x26];
  } while( true );
}


