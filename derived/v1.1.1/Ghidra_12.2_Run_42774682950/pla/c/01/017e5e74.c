/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e5e74; name: FUN_017e5e74
 */


ulong FUN_017e5e74(long param_1,long *param_2)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar12 = nn::os::GetCurrentThread();
  puVar1 = (ulong *)(param_1 + 400);
  do {
    if (*puVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x184));
        while (*puVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_017e5ee4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_017e5ee4:
  puVar10 = PTR_LAB_04379590;
  puVar9 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_04379498;
  for (lVar16 = *(long *)(param_1 + 0xc0); lVar16 != param_1 + 0xb8; lVar16 = *(long *)(lVar16 + 8))
  {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_009ab200(&local_78,*(long *)(*(long *)(lVar16 + 0x10) + 0x68) + 0x340);
    puVar7 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar2 = (int *)((long)local_78 + 0xc);
        iVar11 = *(int *)((long)local_78 + 0xc);
        while (uVar13 = FUN_009b4090(puVar7[2]), (uVar13 & 1) != 0) {
          iVar3 = *piVar2;
          if (iVar3 == iVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar14 = puVar7[3];
              plVar6 = (long *)0x0;
              puVar7 = local_78;
              if (lVar14 != 0) {
                plVar6 = (long *)(lVar14 + -0x50);
              }
              goto joined_r0x017e5fd0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar3;
          if (iVar3 == 0) break;
        }
      }
      plVar6 = (long *)0x0;
      puVar7 = local_78;
joined_r0x017e5fd0:
      local_78 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar7 + 1);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          puVar7[2] = 0;
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            FUN_00100250(puVar10,puVar9,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar8);
          }
          lVar14 = *(long *)puVar9;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *puVar7;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      if (plVar6 != (long *)0x0) {
        plVar15 = (long *)*param_2;
        if (plVar15 == plVar6) {
          uVar12 = (ulong)*(uint *)(*(long *)(lVar16 + 0x10) + 0x78);
        }
        lVar14 = plVar6[0xb];
        piVar2 = (int *)(lVar14 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6);
        }
        if (plVar15 == plVar6) goto LAB_017e5f44;
      }
    }
  }
  uVar12 = 6;
LAB_017e5f44:
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x184));
  return uVar12 & 0xffffffff;
}


