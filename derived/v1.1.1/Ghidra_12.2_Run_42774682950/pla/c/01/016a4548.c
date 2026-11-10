/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a4548; name: FUN_016a4548
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_016a4548(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  long *local_90;
  long *local_88 [3];
  long *local_70;
  long *local_68;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    return 1;
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar16 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar16;
  plVar19 = _DAT_00000060;
  plVar10 = *(long **)(lVar16 + 0xd0);
  if (plVar10 == (long *)0x0) {
    if (_DAT_00000060 != (long *)0x0) {
      plVar10 = _DAT_00000060 + 10;
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    plVar15 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar19 = (long *)plVar10[0xc];
    if (plVar19 != (long *)0x0) {
      plVar11 = plVar19 + 10;
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      iVar9 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *(int *)plVar15 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  iVar9 = *(int *)(param_1 + 0x1c0);
  if (iVar9 == 1) {
    plVar15 = *(long **)(param_1 + 0x60);
    for (plVar10 = *(long **)(param_1 + 0x58); plVar10 != plVar15; plVar10 = plVar10 + 1) {
      plVar11 = (long *)*plVar10;
      if (plVar11 == (long *)0x0) {
        if ((*(long *)(_DAT_00000058 + 8) == 0) ||
           (*(char *)(*(long *)(_DAT_00000058 + 8) + 0x1e1) == '\0')) goto LAB_016a48ec;
      }
      else {
        plVar1 = plVar11 + 10;
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (*(long *)(plVar11[0xb] + 8) == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = *(char *)(*(long *)(plVar11[0xb] + 8) + 0x1e1) != '\0';
        }
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        if (!bVar8) goto LAB_016a48ec;
      }
    }
    FUN_016a4aa8(param_1);
    *(undefined4 *)(param_1 + 0x1c0) = 2;
  }
  else {
    if (iVar9 != 2) {
      if (iVar9 == 0) {
        uVar12 = FUN_0161e820(*(undefined8 *)(param_1 + 0x1b8));
        if ((uVar12 & 1) == 0) {
LAB_016a48ec:
          uVar20 = 0;
          goto joined_r0x016a4920;
        }
        lVar16 = FUN_0161e868(*(undefined8 *)(param_1 + 0x1b8));
        puVar7 = PTR_DAT_04379ce0;
        puVar6 = PTR_DAT_04379cd8;
        puVar17 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
        piVar2 = (int *)((long)puVar17 + (ulong)*puVar17);
        if (((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
            (uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar12 != 0)) &&
           (puVar17 = (uint *)((long)piVar2 + uVar12),
           puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17), puVar17 != (uint *)0x0)) {
          if (*puVar17 != 0) {
            uVar12 = 0;
            do {
              piVar2 = (int *)((long)(puVar17 + uVar12 + 1) + (ulong)puVar17[uVar12 + 1]);
              local_68 = (long *)FUN_0161e870(local_88,*(undefined8 *)(param_1 + 8));
              if (local_68 == (long *)0x0) {
                plVar10 = (long *)0x0;
              }
              else {
                plVar10 = local_68 + 10;
                do {
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar8) {
                    *(int *)plVar10 = (int)*plVar10 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                plVar10 = local_68;
              }
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
                 (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar18 == 0)) {
                lVar16 = 0;
              }
              else {
                puVar3 = (uint *)((long)piVar2 + uVar18);
                lVar16 = (long)puVar3 + (ulong)*puVar3;
              }
              local_90 = (long *)0x0;
              if (*(char *)(lVar16 + 4) == '\0') {
                plVar15 = (long *)FUN_00938550();
                if (plVar15 != (long *)0x0) {
                  (**(code **)(*plVar15 + 0x18))();
                }
                plVar11 = local_90;
                if (local_90 != (long *)0x0) {
                  lVar16 = *local_90;
                  local_90 = plVar15;
                  (**(code **)(lVar16 + 0x20))(plVar11);
                  plVar15 = local_90;
                }
              }
              else {
                if (((*PTR_DAT_04379cd0 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379cd0);
                }
                uVar20 = *(undefined8 *)puVar6;
                *(undefined8 *)puVar7 = uVar20;
                FUN_02a47cd8(local_88,uVar20,(char *)(lVar16 + 4));
                plVar15 = local_90;
                local_90 = (long *)0x0;
                if (plVar15 != (long *)0x0) {
                  (**(code **)(*plVar15 + 0x20))();
                }
                local_90 = local_88[0];
                plVar15 = local_90;
              }
              local_90 = plVar15;
              FUN_02a47560(local_88,&local_90);
              FUN_0161de8c(plVar10,local_88);
              if (local_70 != (long *)0x0) {
                (**(code **)(*local_70 + 0x20))();
              }
              if (local_90 != (long *)0x0) {
                (**(code **)(*local_90 + 0x20))();
              }
              FUN_016a4a54(param_1 + 0x58,&local_68);
              if (local_68 != (long *)0x0) {
                plVar10 = local_68 + 10;
                do {
                  iVar9 = (int)*plVar10 + -1;
                  cVar4 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar8) {
                    *(int *)plVar10 = iVar9;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar9 == 0) {
                  (**(code **)(*local_68 + 0x10))();
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *puVar17);
          }
          uVar20 = 0;
          *(undefined4 *)(param_1 + 0x1c0) = 1;
          goto joined_r0x016a4920;
        }
      }
      uVar20 = 1;
      goto joined_r0x016a4920;
    }
    uVar12 = FUN_010bb114(plVar19,&DAT_03a7c4b8);
    uVar18 = FUN_010bb114(plVar19,&DAT_03a7c4c0);
    uVar13 = FUN_010bb114(plVar19,&DAT_03a7c4c8);
    uVar14 = FUN_010bb114(plVar19,&DAT_03a7c4d0);
    if (((((uVar12 & 1) != 0) && ((uVar18 & 1) != 0)) && ((uVar13 & 1) != 0)) && ((uVar14 & 1) != 0)
       ) {
      uVar20 = 1;
      *(undefined1 *)(param_1 + 0x90) = 1;
      goto joined_r0x016a4920;
    }
  }
  uVar20 = 0;
joined_r0x016a4920:
  if (plVar19 != (long *)0x0) {
    plVar10 = plVar19 + 10;
    do {
      iVar9 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *(int *)plVar10 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  return uVar20;
}


