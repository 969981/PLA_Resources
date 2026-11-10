/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fb158; name: FUN_018fb158
 */


void FUN_018fb158(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *local_68;
  
  *(byte *)(param_1 + 0x178) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    pbVar4 = PTR_DAT_04379498;
    plVar7 = (long *)PTR_DAT_043794a0;
    plVar8 = (long *)PTR_DAT_043794a8;
    for (plVar14 = *(long **)(param_1 + 0x1b0); PTR_DAT_04379498 = pbVar4,
        PTR_DAT_043794a0 = (undefined *)plVar7, PTR_DAT_043794a8 = (undefined *)plVar8,
        plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      FUN_00cf6d78(&local_68,plVar14 + 3);
      if ((local_68 == (long *)0x0) || (FUN_0183d380(local_68,0x20000), local_68 == (long *)0x0)) {
LAB_018fb58c:
        cVar2 = *(char *)(plVar14 + 7);
      }
      else {
        lVar15 = local_68[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 != 0) goto LAB_018fb58c;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
        cVar2 = *(char *)(plVar14 + 7);
      }
      if (((cVar2 != '\0') && (FUN_00cf6d78(&local_68,plVar14 + 8), local_68 != (long *)0x0)) &&
         (FUN_0183d380(local_68,0x20000), local_68 != (long *)0x0)) {
        lVar15 = local_68[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      pbVar4 = PTR_DAT_04379498;
      plVar7 = (long *)PTR_DAT_043794a0;
      plVar8 = (long *)PTR_DAT_043794a8;
    }
    if (*(long *)(param_1 + 0x1d8) != 0) {
      if (*(long **)(param_1 + 0x1b0) != (long *)0x0) {
        lVar15 = tpidr_el0;
        plVar14 = *(long **)(param_1 + 0x1b0);
        do {
          while( true ) {
            plVar16 = (long *)*plVar14;
            puVar18 = (undefined8 *)plVar14[8];
            if (puVar18 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar18 + 1);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                puVar18[2] = 0;
                if (((*pbVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar4), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar7,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar4);
                }
                lVar13 = *plVar7;
                *plVar8 = lVar13;
                local_68 = (long *)*puVar18;
                FUN_02a44274(lVar13 + 0xd8,&local_68);
              }
            }
            puVar18 = (undefined8 *)plVar14[3];
            if (puVar18 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar18 + 1);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 == 0) {
                puVar18[2] = 0;
                if (((*pbVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar4), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,plVar7,&PTR_LOOP_0411a000);
                  __cxa_guard_release(pbVar4);
                }
                lVar13 = *plVar7;
                *plVar8 = lVar13;
                local_68 = (long *)*puVar18;
                FUN_02a44274(lVar13 + 0xd8,&local_68);
              }
            }
            plVar19 = *(long **)(param_1 + 0x1b8);
            uVar11 = (**(code **)(*plVar19 + 0xc0))(plVar19);
            if ((uVar11 & 1) != 0) break;
LAB_018fb35c:
            (**(code **)(*plVar19 + 0x18))(plVar19,plVar14,0x50,8);
            plVar14 = plVar16;
            if (plVar16 == (long *)0x0) goto LAB_018fb1cc;
          }
          if (*(char *)(lVar15 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar15 + 0x38d488) = 1;
            *(undefined8 *)(lVar15 + 0x38d478) = 0;
            *(undefined8 *)(lVar15 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_018fb35c;
          FUN_02bcc824(plVar19,plVar14,0x50,8);
          plVar14 = plVar16;
        } while (plVar16 != (long *)0x0);
      }
LAB_018fb1cc:
      lVar15 = *(long *)(param_1 + 0x188);
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      if (((lVar15 != 0) && (**(undefined8 **)(param_1 + 0x180) = 0, lVar15 != 1)) &&
         (*(undefined8 *)(*(long *)(param_1 + 0x180) + 8) = 0, lVar15 != 2)) {
        lVar13 = 2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x180) + lVar13 * 8) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar15 != lVar13);
      }
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      lVar15 = *(long *)(param_1 + 0x110);
      pbVar4 = PTR_DAT_043794d0;
      puVar18 = (undefined8 *)PTR_DAT_043794d8;
      pbVar5 = PTR_DAT_04381fd0;
      puVar6 = (undefined8 *)PTR_DAT_04381fd8;
      goto joined_r0x018fb200;
    }
  }
  lVar15 = *(long *)(param_1 + 0x110);
  pbVar4 = PTR_DAT_043794d0;
  puVar18 = (undefined8 *)PTR_DAT_043794d8;
  pbVar5 = PTR_DAT_04381fd0;
  puVar6 = (undefined8 *)PTR_DAT_04381fd8;
joined_r0x018fb200:
  PTR_DAT_043794d0 = pbVar4;
  PTR_DAT_043794d8 = (undefined *)puVar18;
  PTR_DAT_04381fd0 = pbVar5;
  PTR_DAT_04381fd8 = (undefined *)puVar6;
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar9 = *(int *)(lVar15 + 0xc);
    do {
      puVar17 = *(undefined8 **)(lVar15 + 0x10);
      if (((*pbVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar5), iVar10 != 0)) {
        if (((*pbVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar4), iVar10 != 0)) {
          uVar12 = FUN_0087f8f0();
          *puVar18 = uVar12;
          __cxa_guard_release(pbVar4);
        }
        *puVar6 = puVar18;
        __cxa_guard_release(pbVar5);
      }
      while( true ) {
        if (puVar17 == (undefined8 *)0x0) {
          return;
        }
        if (puVar17 == puVar6) break;
        puVar17 = (undefined8 *)*puVar17;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 == 0) {
            return;
          }
          plVar14 = (long *)(lVar15 + -0x50);
          FUN_0256f738(plVar14,param_2 & 1);
          lVar15 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x018fb4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
  return;
}


