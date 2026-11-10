/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b99ce0; name: FUN_01b99ce0
 */


void FUN_01b99ce0(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_043795b0;
  lVar12 = *param_2;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      plVar13 = *(long **)(lVar12 + 0x10);
      FUN_01ba4650();
      while( true ) {
        if (plVar13 == (long *)0x0) {
          return;
        }
        if (plVar13 == (long *)puVar5) break;
        plVar13 = (long *)*plVar13;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar9) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          plVar13 = (long *)(lVar12 + -0x50);
          if (lVar12 == 0) {
            return;
          }
          uVar8 = *(uint *)(lVar12 + 0x7d4);
          local_60 = *(undefined8 *)(lVar12 + 0x988);
          local_58 = *(undefined8 *)(lVar12 + 0x990);
          local_50 = *(undefined8 *)(lVar12 + 0x998);
          *(bool *)param_1 = uVar8 == 4;
          *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar12 + 0x880);
          uVar7 = *(undefined1 *)(lVar12 + 0x881);
          *(bool *)(param_1 + 3) = (uVar8 & 0xfffffffb) - 1 < 2;
          *(undefined1 *)(param_1 + 2) = uVar7;
          bVar6 = *(int *)(lVar12 + 0x87c) == 4;
          *(bool *)(param_1 + 4) = bVar6;
          *(bool *)(param_1 + 5) = bVar6;
          if (*(char *)(lVar12 + 0x7d1) == '\0') {
            bVar10 = *(byte *)(lVar12 + 0x889) ^ 1;
          }
          else {
            bVar10 = 1;
          }
          *(byte *)(param_1 + 6) = bVar10;
          if (*(char *)(lVar12 + 0x90f) == '\0') {
            uVar8 = FUN_01b9febc(plVar13);
          }
          else {
            uVar8 = FUN_01b9ffe0(plVar13);
            if (uVar8 != 2) {
              uVar8 = (uint)(uVar8 == 1);
            }
          }
          *(uint *)(param_1 + 0xc) = uVar8;
          *(bool *)(param_1 + 7) = *(int *)(lVar12 + 0x87c) == 1;
          iVar9 = *(int *)(lVar12 + 0x87c);
          *(bool *)(param_1 + 9) = bVar6;
          *(bool *)(param_1 + 8) = iVar9 == 2;
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar12 + 0xa30);
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar12 + 0xa88);
          local_78 = (undefined8 *)0x0;
          uStack_70 = 0;
          FUN_00ac3fa4(&local_78,lVar12 + 0x1f8);
          if (local_78 == (undefined8 *)0x0) {
            local_68 = (long *)0x0;
          }
          else {
            FUN_00bd915c(&local_68);
            puVar4 = local_78;
            if (local_78 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_78 + 1);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                local_78[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_48 = *puVar4;
                FUN_02a44274(lVar11 + 0xd8,&local_48);
              }
            }
          }
          if (local_68 == (long *)0x0) goto LAB_01b99ea8;
          FUN_01b44f3c(&local_78);
          puVar4 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            if (*(int *)((long)local_78 + 0xc) == 0) {
LAB_01b99f94:
              plVar14 = (long *)0x0;
              puVar4 = local_78;
            }
            else {
              piVar1 = (int *)((long)local_78 + 0xc);
              iVar9 = *(int *)((long)local_78 + 0xc);
              while( true ) {
                plVar14 = (long *)puVar4[2];
                lVar11 = FUN_00ab5048();
                while( true ) {
                  if (plVar14 == (long *)0x0) goto LAB_01b99f94;
                  if (plVar14 == (long *)lVar11) break;
                  plVar14 = (long *)*plVar14;
                }
                iVar2 = *piVar1;
                if (iVar2 == iVar9) break;
                ClearExclusiveLocal();
LAB_01b99f38:
                iVar9 = iVar2;
                if (iVar2 == 0) goto LAB_01b99f94;
              }
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_01b99f38;
              lVar11 = puVar4[3];
              plVar14 = (long *)0x0;
              puVar4 = local_78;
              if (lVar11 != 0) {
                plVar14 = (long *)(lVar11 + -0x50);
              }
            }
            local_78 = puVar4;
            if (puVar4 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar4 + 1);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                puVar4[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_48 = *puVar4;
                FUN_02a44274(lVar11 + 0xd8,&local_48);
              }
            }
            if (plVar14 != (long *)0x0) {
              uVar7 = (**(code **)(*plVar14 + 0xf0))(plVar14);
              *(undefined1 *)(param_1 + 0x38) = uVar7;
              uVar15 = FUN_00d8326c(plVar14,7);
              *(undefined4 *)(param_1 + 0x3c) = uVar15;
              lVar11 = plVar14[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar14 + 0x20))(plVar14);
              }
            }
          }
          if (local_68 != (long *)0x0) {
            lVar11 = local_68[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
LAB_01b99ea8:
          *(undefined8 *)(param_1 + 0x18) = local_58;
          *(undefined8 *)(param_1 + 0x20) = local_50;
          *(undefined8 *)(param_1 + 0x10) = local_60;
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


