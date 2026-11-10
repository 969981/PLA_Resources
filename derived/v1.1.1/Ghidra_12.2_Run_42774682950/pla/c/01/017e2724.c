/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e2724; name: FUN_017e2724
 */


undefined8 FUN_017e2724(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  lVar13 = *(long *)(param_1 + 0xc0);
  if (lVar13 == param_1 + 0xb8) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    do {
      lVar11 = *(long *)(lVar13 + 0x10);
      if ((*(int *)(lVar11 + 0x78) == param_2) && (*(int *)(lVar11 + 0x7c) == 2)) {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_009ab200(&local_78,*(long *)(lVar11 + 0x68) + 0x340);
        puVar8 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          if (*(int *)((long)local_78 + 0xc) != 0) {
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar9 = *(int *)((long)local_78 + 0xc);
            do {
              uVar10 = FUN_009b4090(puVar8[2]);
              if ((uVar10 & 1) == 0) break;
              iVar2 = *piVar1;
              if (iVar2 == iVar9) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar11 = puVar8[3];
                  plVar12 = (long *)0x0;
                  if (lVar11 != 0) {
                    plVar12 = (long *)(lVar11 + -0x50);
                  }
                  if (local_78 == (undefined8 *)0x0) goto LAB_017e289c;
                  goto LAB_017e2854;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar9 = iVar2;
            } while (iVar2 != 0);
          }
          plVar12 = (long *)0x0;
          if (local_78 != (undefined8 *)0x0) {
LAB_017e2854:
            puVar8 = local_78;
            piVar1 = (int *)(local_78 + 1);
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
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)puVar5;
              *(long *)puVar6 = lVar11;
              local_98 = (undefined8 *)*puVar8;
              FUN_02a44274(lVar11 + 0xd8,&local_98);
            }
          }
LAB_017e289c:
          if (plVar12 != (long *)0x0) {
            uVar10 = FUN_018de07c(plVar12);
            if ((uVar10 & 1) != 0) {
              *(undefined4 *)(*(long *)(lVar13 + 0x10) + 0x7c) = 3;
              *(undefined1 *)((long)plVar12 + 0x75d) = 1;
              uVar14 = *(undefined8 *)(param_1 + 0xf8);
              (**(code **)(*plVar12 + 0x10))(&local_78,plVar12);
              local_88 = (undefined8 *)0x0;
              uStack_80 = 0;
              FUN_017dc294(&local_88,&local_78);
              puVar8 = local_78;
              if (local_78 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_78 + 1);
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
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)puVar5;
                  *(long *)puVar6 = lVar11;
                  local_98 = (undefined8 *)*puVar8;
                  FUN_02a44274(lVar11 + 0xd8,&local_98);
                }
              }
              FUN_017d5558(uVar14,&local_88);
              puVar8 = local_88;
              if (local_88 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_88 + 1);
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
                  local_88[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)puVar5;
                  *(long *)puVar6 = lVar11;
                  local_78 = (undefined8 *)*puVar8;
                  FUN_02a44274(lVar11 + 0xd8,&local_78);
                }
              }
              (**(code **)(*plVar12 + 0x10))(&local_78,plVar12);
              local_98 = (undefined8 *)0x0;
              uStack_90 = 0;
              FUN_017dc294(&local_98,&local_78);
              puVar8 = local_78;
              if (local_78 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_78 + 1);
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
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)puVar5;
                  *(long *)puVar6 = lVar11;
                  local_68 = *puVar8;
                  FUN_02a44274(lVar11 + 0xd8,&local_68);
                }
              }
              FUN_017e9b98(param_1 + 0x198,&local_98);
              puVar8 = local_98;
              if (local_98 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_98 + 1);
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
                  local_98[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)puVar5;
                  *(long *)puVar6 = lVar11;
                  local_78 = (undefined8 *)*puVar8;
                  FUN_02a44274(lVar11 + 0xd8,&local_78);
                }
              }
              uVar14 = 1;
            }
            lVar11 = plVar12[0xb];
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
              (**(code **)(*plVar12 + 0x20))(plVar12);
            }
          }
        }
      }
      lVar13 = *(long *)(lVar13 + 8);
    } while (lVar13 != param_1 + 0xb8);
  }
  return uVar14;
}


