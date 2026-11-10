/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5395c; name: FUN_01a5395c
 */


void FUN_01a5395c(undefined1 *param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_01a68600(&local_68,param_2 + 0x880);
  puVar13 = local_68;
  puVar7 = PTR_DAT_04382480;
  puVar6 = PTR_DAT_04382478;
  if (local_68 != (undefined8 *)0x0) {
    if (*(int *)((long)local_68 + 0xc) != 0) {
      piVar1 = (int *)((long)local_68 + 0xc);
      iVar9 = *(int *)((long)local_68 + 0xc);
      do {
        puVar15 = (undefined8 *)puVar13[2];
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        puVar5 = local_68;
        if (puVar15 == (undefined8 *)0x0) {
          bVar4 = false;
          goto joined_r0x01a53b80;
        }
        while (puVar15 != (undefined8 *)puVar7) {
          puVar15 = (undefined8 *)*puVar15;
          if (puVar15 == (undefined8 *)0x0) goto LAB_01a53b28;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01a53a28;
          lVar11 = puVar13[3];
          if (lVar11 != 0) {
            lVar12 = *(long *)(lVar11 + 0xc0);
            lVar14 = (*(long *)(lVar11 + 200) - lVar12 >> 4) * 0xa33f128d;
            iVar9 = (int)lVar14;
            if (iVar9 == 0) {
              bVar4 = false;
            }
            else {
              iVar8 = *(int *)(param_2 + 0x9a8);
              if ((iVar8 < 0) || (iVar9 <= iVar8)) {
                *param_1 = 0;
                if (iVar9 < 1) {
                  puVar13 = (undefined8 *)PTR_DAT_0437a0f8;
                }
                else {
                  puVar13 = (undefined8 *)
                            (lVar12 + ((lVar14 << 0x20) + -0x100000000 >> 0x20) * 0x450 + 0x3d0);
                }
              }
              else {
                puVar13 = (undefined8 *)(lVar12 + (long)iVar8 * 0x450 + 0x3d0);
                *param_1 = 0;
              }
              bVar4 = true;
              *(undefined8 *)(param_1 + 0x18) = puVar13[1];
              *(undefined8 *)(param_1 + 0x10) = *puVar13;
              *param_1 = 1;
            }
            lVar12 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))();
              puVar5 = local_68;
            }
            goto joined_r0x01a53b80;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a53a28:
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01a53b28:
    bVar4 = false;
    puVar5 = local_68;
joined_r0x01a53b80:
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar5[2] = 0;
        local_68 = puVar5;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_58 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
    if (bVar4) {
      return;
    }
  }
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_01a68600(&local_68,param_2 + 0x890);
  puVar13 = local_68;
  puVar7 = PTR_DAT_04382480;
  puVar6 = PTR_DAT_04382478;
  if (local_68 != (undefined8 *)0x0) {
    if (*(int *)((long)local_68 + 0xc) != 0) {
      piVar1 = (int *)((long)local_68 + 0xc);
      iVar9 = *(int *)((long)local_68 + 0xc);
      do {
        puVar15 = (undefined8 *)puVar13[2];
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        puVar5 = local_68;
        if (puVar15 == (undefined8 *)0x0) {
          bVar4 = false;
          goto joined_r0x01a53d8c;
        }
        while (puVar15 != (undefined8 *)puVar7) {
          puVar15 = (undefined8 *)*puVar15;
          if (puVar15 == (undefined8 *)0x0) goto LAB_01a53d34;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01a53c34;
          lVar11 = puVar13[3];
          if (lVar11 != 0) {
            lVar12 = *(long *)(lVar11 + 0xc0);
            lVar14 = (*(long *)(lVar11 + 200) - lVar12 >> 4) * 0xa33f128d;
            iVar9 = (int)lVar14;
            if (iVar9 == 0) {
              bVar4 = false;
            }
            else {
              iVar8 = *(int *)(param_2 + 0x9a8);
              if ((iVar8 < 0) || (iVar9 <= iVar8)) {
                *param_1 = 0;
                if (iVar9 < 1) {
                  puVar13 = (undefined8 *)PTR_DAT_0437a0f8;
                }
                else {
                  puVar13 = (undefined8 *)
                            (lVar12 + ((lVar14 << 0x20) + -0x100000000 >> 0x20) * 0x450 + 0x3d0);
                }
              }
              else {
                puVar13 = (undefined8 *)(lVar12 + (long)iVar8 * 0x450 + 0x3d0);
                *param_1 = 0;
              }
              bVar4 = true;
              *(undefined8 *)(param_1 + 0x18) = puVar13[1];
              *(undefined8 *)(param_1 + 0x10) = *puVar13;
              *param_1 = 1;
            }
            lVar12 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))();
              puVar5 = local_68;
            }
            goto joined_r0x01a53d8c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01a53c34:
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01a53d34:
    bVar4 = false;
    puVar5 = local_68;
joined_r0x01a53d8c:
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar5[2] = 0;
        local_68 = puVar5;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_58 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
    if (bVar4) {
      return;
    }
  }
  *param_1 = 0;
  return;
}


