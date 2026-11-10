/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01698360; name: FUN_01698360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01698360(long param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long *local_68;
  
  if (*(char *)(param_1 + 0x54) != '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0xf0) == 1) {
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    for (puVar3 = *(undefined8 **)(param_1 + 0x58); puVar3 != puVar4; puVar3 = puVar3 + 1) {
      plVar16 = (long *)*puVar3;
      if (plVar16 == (long *)0x0) {
        if (DAT_00000054 == '\0') {
          if (*(long *)(_DAT_00000058 + 8) == 0) {
            return 0;
          }
          if (*(char *)(*(long *)(_DAT_00000058 + 8) + 0x1e1) == '\0') {
            return 0;
          }
          FUN_0169b250(0);
          DAT_00000054 = '\x01';
        }
      }
      else {
        plVar13 = plVar16 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *(int *)plVar13 = (int)*plVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (*(char *)((long)plVar16 + 0x54) == '\0') {
          if (*(long *)(plVar16[0xb] + 8) == 0) {
            bVar6 = false;
          }
          else if (*(char *)(*(long *)(plVar16[0xb] + 8) + 0x1e1) == '\0') {
            bVar6 = false;
          }
          else {
            FUN_0169b250(plVar16);
            bVar6 = true;
            *(undefined1 *)((long)plVar16 + 0x54) = 1;
          }
        }
        else {
          bVar6 = true;
        }
        do {
          iVar10 = (int)*plVar13 + -1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *(int *)plVar13 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
        if (!bVar6) {
          return 0;
        }
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x90);
    puVar4 = *(undefined8 **)(param_1 + 0x98);
    while( true ) {
      if (puVar3 == puVar4) {
        *(undefined1 *)(param_1 + 0x54) = 1;
        return 1;
      }
      plVar16 = (long *)*puVar3;
      if (plVar16 == (long *)0x0) {
        uVar11 = FUN_01693bec(0);
      }
      else {
        plVar13 = plVar16 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *(int *)plVar13 = (int)*plVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar11 = FUN_01693bec(plVar16);
        do {
          iVar10 = (int)*plVar13 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *(int *)plVar13 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      if ((uVar11 & 1) == 0) break;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xf0) != 0) {
      return 1;
    }
    uVar11 = FUN_0161e820(*(undefined8 *)(param_1 + 0xe0));
    if (((uVar11 & 1) != 0) &&
       (uVar11 = FUN_0161e820(*(undefined8 *)(param_1 + 0xe8)), (uVar11 & 1) != 0)) {
      lVar12 = FUN_0161e868(*(undefined8 *)(param_1 + 0xe0));
      puVar14 = *(uint **)(*(long *)(lVar12 + 8) + 0x250);
      piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
      if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (((uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar11 != 0 &&
           (puVar14 = (uint *)((long)piVar1 + uVar11),
           puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14), puVar14 != (uint *)0x0)) &&
          (uVar11 = (ulong)*puVar14, *puVar14 != 0)))) {
        uVar17 = 0;
        do {
          piVar1 = (int *)((long)(puVar14 + uVar17 + 1) + (ulong)puVar14[uVar17 + 1]);
          if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
              (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar15 == 0)) ||
             (*(char *)((long)piVar1 + uVar15) == '\0')) {
            plVar16 = *(long **)(param_1 + 8);
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528,
               iVar10 != 0)) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar16;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            plVar13 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0xe0,8);
            if (plVar13 == (long *)0x0) {
              (**(code **)(*plVar16 + 0xb8))(plVar16);
              FUN_0169ab48(0);
              _DAT_00000010 = 0;
              _DAT_00000018 = 0xe0;
              _DAT_00000020 = 8;
              _DAT_00000008 = plVar16;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              local_68 = (long *)0x0;
            }
            else {
              FUN_0169ab48(plVar13);
              plVar13[1] = (long)plVar16;
              plVar13[2] = (long)plVar13;
              plVar13[3] = 0xe0;
              plVar13[4] = 8;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              plVar16 = plVar13 + 10;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar6) {
                  *(int *)plVar16 = (int)*plVar16 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                local_68 = plVar13;
              } while (cVar5 != '\0');
            }
            if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
              lVar12 = 0;
            }
            else {
              uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
              lVar12 = 0;
              if (uVar11 != 0) {
                puVar2 = (uint *)((long)piVar1 + uVar11);
                lVar12 = (long)puVar2 + (ulong)*puVar2;
              }
            }
            FUN_00947cf8(&local_90,lVar12 + 4);
            plVar16 = local_90;
            if (local_90 == (long *)0x0) {
              local_88 = *(long *)PTR_DAT_04379c88;
LAB_01698a1c:
              lStack_80 = *(long *)PTR_PTR_04379d00;
              if (local_90 != (long *)0x0) goto LAB_01698648;
LAB_01698a2c:
              local_78 = 0;
            }
            else {
              local_88 = local_90[0xb];
              if (local_90 == (long *)0x0) goto LAB_01698a1c;
              lStack_80 = local_90[0xc];
              if (local_90 == (long *)0x0) goto LAB_01698a2c;
LAB_01698648:
              local_78 = local_90[0xd];
              local_70 = (long *)0x0;
              (**(code **)(*local_90 + 0x18))(local_90);
            }
            local_70 = plVar16;
            FUN_0169adf8(plVar13,&local_88);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68)) {
              FUN_01699e50(param_1 + 0x58,&local_68);
            }
            else {
              FUN_01699f30(param_1 + 0x70,*(long *)(param_1 + 0x60),&local_68);
              *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
            }
            if (plVar13 != (long *)0x0) {
              plVar16 = plVar13 + 10;
              do {
                iVar10 = (int)*plVar16 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar6) {
                  *(int *)plVar16 = iVar10;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
            uVar11 = (ulong)*puVar14;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar11);
      }
      lVar12 = FUN_0161e868(*(undefined8 *)(param_1 + 0xe8));
      puVar9 = PTR_PTR_04379d00;
      puVar8 = PTR_DAT_04379c88;
      puVar14 = *(uint **)(*(long *)(lVar12 + 8) + 0x250);
      piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
      if ((((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
           (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar11 != 0)) &&
          (puVar14 = (uint *)((long)piVar1 + uVar11),
          puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14), puVar14 != (uint *)0x0)) &&
         (uVar11 = (ulong)*puVar14, *puVar14 != 0)) {
        uVar17 = 0;
        do {
          piVar1 = (int *)((long)(puVar14 + uVar17 + 1) + (ulong)puVar14[uVar17 + 1]);
          if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
              (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar15 == 0)) ||
             (*(char *)((long)piVar1 + uVar15) == '\0')) {
            local_68 = (long *)FUN_0169a2b8(*(undefined8 *)(param_1 + 8));
            if (local_68 == (long *)0x0) {
              plVar16 = (long *)0x0;
            }
            else {
              plVar16 = local_68 + 10;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar6) {
                  *(int *)plVar16 = (int)*plVar16 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              plVar16 = local_68;
            }
            if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
              lVar12 = 0;
            }
            else {
              uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
              lVar12 = 0;
              if (uVar11 != 0) {
                puVar2 = (uint *)((long)piVar1 + uVar11);
                lVar12 = (long)puVar2 + (ulong)*puVar2;
              }
            }
            FUN_00947cf8(&local_90,lVar12 + 4);
            plVar13 = local_90;
            if (local_90 == (long *)0x0) {
              local_88 = *(long *)puVar8;
LAB_01698a44:
              lStack_80 = *(long *)puVar9;
              if (local_90 != (long *)0x0) goto LAB_01698834;
LAB_01698a50:
              local_78 = 0;
            }
            else {
              local_88 = local_90[0xb];
              if (local_90 == (long *)0x0) goto LAB_01698a44;
              lStack_80 = local_90[0xc];
              if (local_90 == (long *)0x0) goto LAB_01698a50;
LAB_01698834:
              local_78 = local_90[0xd];
              local_70 = (long *)0x0;
              (**(code **)(*local_90 + 0x18))(local_90);
            }
            local_70 = plVar13;
            FUN_016939b0(plVar16,&local_88);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            FUN_01698a68(param_1 + 0x90,&local_68);
            if (plVar16 != (long *)0x0) {
              plVar13 = plVar16 + 10;
              do {
                iVar10 = (int)*plVar13 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar6) {
                  *(int *)plVar13 = iVar10;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
            uVar11 = (ulong)*puVar14;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar11);
      }
      *(undefined4 *)(param_1 + 0xf0) = 1;
      return 0;
    }
  }
  return 0;
}


