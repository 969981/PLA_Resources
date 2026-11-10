/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a29098; name: FUN_01a29098
 */


void FUN_01a29098(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_120;
  code *local_118;
  undefined1 *local_110;
  long *local_108;
  long alStack_100 [13];
  undefined8 local_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80 [3];
  long *local_68;
  long *local_60;
  long *local_58;
  
  puVar5 = PTR_DAT_0437a558;
  puVar4 = PTR_DAT_0437a550;
  lVar13 = *(long *)(param_1 + 0x210);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        uVar11 = FUN_00aa0310();
        *(undefined8 *)puVar5 = uVar11;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (plVar14 == (long *)puVar5) break;
        plVar14 = (long *)*plVar14;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 == 0) {
            return;
          }
          plVar14 = (long *)(lVar13 + -0x50);
          FUN_00a9ecd4(&local_120,plVar14);
          FUN_009983e4(&local_58,&local_120);
          puVar6 = local_120;
          if (local_120 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_120 + 1);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              local_120[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_80[0] = *puVar6;
              FUN_02a44274(lVar12 + 0xd8,local_80);
            }
          }
          plVar8 = local_58;
          if (local_58 != (long *)0x0) {
            FUN_02a4754c(&local_120,PTR_DAT_0437a3d8);
            lVar12 = FUN_0289e9f4(plVar8,&local_120);
            if (lVar12 == 0) {
              local_60 = (long *)0x0;
            }
            else {
              FUN_00aeb818(&local_60,lVar12,local_80);
            }
            if (local_108 != (long *)0x0) {
              (**(code **)(*local_108 + 0x20))();
            }
            plVar8 = local_60;
            local_98 = 0x334b084d94212f6e;
            local_90 = "Field/BipedIK/SetEnabledBlendFrame";
            uStack_88 = 0x22;
            FUN_02a4754c(local_80,&local_98);
            local_120 = (undefined8 *)&LAB_01a2c1f4;
            local_118 = FUN_01a2c414;
            local_110 = &LAB_01a2c418;
            local_108 = (long *)&LAB_01a2c424;
            alStack_100[0] = param_1;
            FUN_028b9b44(plVar8,local_80,&local_120);
            pcVar7 = local_118;
            if (local_118 != (code *)0x0) {
              local_110 = (undefined1 *)0x0;
              local_108 = (long *)0x0;
              local_120 = (undefined8 *)0x0;
              local_118 = (code *)0x0;
              (*pcVar7)(alStack_100);
            }
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            plVar8 = local_60;
            local_98 = 0xf16853abfb7a19c5;
            local_90 = "Field/BipedIK/SetDisabledBlendFrame";
            uStack_88 = 0x23;
            FUN_02a4754c(local_80,&local_98);
            local_120 = (undefined8 *)&LAB_01a2c430;
            local_118 = FUN_01a2c650;
            local_110 = &LAB_01a2c654;
            local_108 = (long *)&LAB_01a2c660;
            alStack_100[0] = param_1;
            FUN_028b9b44(plVar8,local_80,&local_120);
            pcVar7 = local_118;
            if (local_118 != (code *)0x0) {
              local_110 = (undefined1 *)0x0;
              local_108 = (long *)0x0;
              local_120 = (undefined8 *)0x0;
              local_118 = (code *)0x0;
              (*pcVar7)(alStack_100);
            }
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            if (local_60 != (long *)0x0) {
              lVar12 = local_60[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_60 + 0x20))();
              }
            }
            if (local_58 != (long *)0x0) {
              lVar12 = local_58[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_58 + 0x20))();
              }
            }
          }
          lVar13 = *(long *)(lVar13 + 8);
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


