/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00992198; name: FUN_00992198
 */


undefined8 FUN_00992198(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  FUN_009925a4();
  iVar9 = *(int *)(param_1 + 0x728);
  if (iVar9 == 1) goto LAB_009921cc;
  if (iVar9 == 3) {
    plVar14 = *(long **)(param_1 + 0x98);
joined_r0x00992220:
    if (plVar14 == (long *)0x0) {
      uVar12 = 1;
    }
    else {
      do {
        lVar13 = FUN_009b1360(plVar14[3] + 0xf0,&local_70);
        if (*(int *)(*(long *)(lVar13 + 0x1f0) + 0x88) != 0) goto LAB_0099233c;
        plVar14 = (long *)*plVar14;
        uVar12 = 1;
      } while (plVar14 != (long *)0x0);
    }
  }
  else {
    if (iVar9 == 0) {
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_009630f4(&local_70,param_1 + 0x510);
      puVar4 = local_70;
      puVar8 = PTR_DAT_04379fd0;
      puVar7 = PTR_DAT_04379fc8;
      puVar6 = PTR_DAT_043794d8;
      puVar5 = PTR_DAT_043794d0;
      plVar14 = (long *)0x0;
      if (local_70 != (undefined8 *)0x0) {
        if (*(int *)((long)local_70 + 0xc) != 0) {
          piVar1 = (int *)((long)local_70 + 0xc);
          iVar9 = *(int *)((long)local_70 + 0xc);
          do {
            plVar14 = (long *)puVar4[2];
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar12;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar8 = puVar6;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar14 == (long *)0x0) goto LAB_0099252c;
              if (plVar14 == (long *)puVar8) break;
              plVar14 = (long *)*plVar14;
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
                lVar13 = puVar4[3];
                plVar14 = (long *)0x0;
                puVar4 = local_70;
                if (lVar13 != 0) {
                  plVar14 = (long *)(lVar13 + -0x50);
                }
                goto joined_r0x009924a8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar9 = iVar10;
          } while (iVar10 != 0);
        }
LAB_0099252c:
        plVar14 = (long *)0x0;
        puVar4 = local_70;
joined_r0x009924a8:
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
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
            puVar4[2] = 0;
            local_70 = puVar4;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_58 = *puVar4;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
      }
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_01901488(&local_70,plVar14 + 0x1c);
      if (local_70 == (undefined8 *)0x0) {
        local_78 = (long *)0x0;
      }
      else {
        FUN_009ac698(&local_78);
        puVar4 = local_70;
        if (local_70 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_70 + 1);
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
            local_70[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_58 = *puVar4;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
      }
      if ((local_78 != (long *)0x0) && (FUN_01a349fc(), local_78 != (long *)0x0)) {
        lVar13 = local_78[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
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
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
      *(undefined4 *)(param_1 + 0x728) = 1;
      if (plVar14 == (long *)0x0) {
LAB_009921cc:
        plVar14 = *(long **)(param_1 + 0x98);
      }
      else {
        lVar13 = plVar14[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 != 0) goto LAB_009921cc;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
        plVar14 = *(long **)(param_1 + 0x98);
      }
      for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar11 = FUN_00998568(param_1,*(undefined1 *)(plVar14 + 2));
        if ((uVar11 & 1) == 0) goto LAB_0099233c;
      }
      uVar11 = FUN_009936c0(*(undefined8 *)(param_1 + 0x100),param_1);
      if ((uVar11 & 1) != 0) {
        FUN_00993804(param_1);
        *(undefined4 *)(param_1 + 0x728) = 2;
LAB_0099220c:
        if ((*(char *)(param_1 + 0x558) == '\0') ||
           ((*(long *)(param_1 + 0x548) != 0 && (*(int *)(*(long *)(param_1 + 0x548) + 0xc) != 0))))
        {
          *(undefined4 *)(param_1 + 0x728) = 3;
          plVar14 = *(long **)(param_1 + 0x98);
          goto joined_r0x00992220;
        }
      }
    }
    else if (iVar9 == 2) goto LAB_0099220c;
LAB_0099233c:
    uVar12 = 0;
  }
  return uVar12;
}


