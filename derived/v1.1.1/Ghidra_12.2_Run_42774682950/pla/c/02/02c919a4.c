/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c919a4; name: FUN_02c919a4
 */


void FUN_02c919a4(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  char *pcVar13;
  byte bVar14;
  byte *pbVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  uint uVar20;
  undefined1 *local_b8;
  byte *pbStack_b0;
  size_t local_a8;
  long *local_a0;
  undefined1 *local_98;
  char *pcStack_90;
  size_t local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  byte local_68 [8];
  
  lVar8 = FUN_002669c8(*(long *)(param_1 + 0x2e8) + 0xe8);
  cVar6 = s_Point_03a82c68[0];
  if (0 < **(int **)(lVar8 + 0x238)) {
    iVar18 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x2e8) + 0xe8);
      if ((lVar8 == 0) || (*(int *)(*(long *)(param_1 + 0x2e8) + 0xf0) != *(int *)(lVar8 + 0x2c))) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_002669c8();
      }
      lVar8 = FUN_00266944(uVar9,iVar18);
      lVar12 = *(long *)(*(long *)(lVar8 + 0x238) + 0x318);
      if ((lVar12 != 0) && (*(int *)(lVar12 + 4) != 2)) {
        if (*(char *)(param_1 + 0x2f4) == '\0') {
          if (((*PTR_DAT_0437b6f0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437b6f0);
          }
          lVar16 = *(long *)PTR_DAT_0437b6f8;
          *(long *)PTR_DAT_0437b700 = lVar16;
          lVar12 = nn::os::GetCurrentThread();
          plVar1 = (long *)(lVar16 + 0x980);
          do {
            if (*plVar1 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x974));
                while (*plVar1 == 0) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *plVar1 = lVar12;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_02c91b30;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_02c91b30:
          if (*(long *)(lVar16 + 0x948) == 0) {
            uVar20 = *(uint *)(lVar16 + 0x540);
            *(uint *)(lVar16 + 0x540) = uVar20 + 1;
          }
          else {
            lVar12 = *(long *)(lVar16 + 0x948) + -1;
            uVar20 = *(uint *)(lVar16 + lVar12 * 4 + 0x548);
            *(long *)(lVar16 + 0x948) = lVar12;
          }
          uVar5 = uVar20 - *(int *)(lVar16 + 0x538);
          lVar12 = lVar16 + 0x538 + ((ulong)(uVar5 >> 3) & 0x1ffffff8);
          *(ulong *)(lVar12 + 0x418) = 1L << ((ulong)uVar5 & 0x3f) | *(ulong *)(lVar12 + 0x418);
          *(int *)(lVar16 + 0x544) = *(int *)(lVar16 + 0x544) + 1;
          *(undefined8 *)(lVar16 + 0x980) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x974));
          *(uint *)(param_1 + 0x2f8) = uVar20;
          *(undefined1 *)(param_1 + 0x2f4) = 1;
        }
        else {
          uVar20 = *(uint *)(param_1 + 0x2f8);
        }
        snprintf((char *)local_68,8,"%d",(ulong)uVar20);
        FUN_009c69bc(&local_78,param_1);
        lVar12 = *(long *)(lVar8 + 0xa0);
        plVar1 = local_78 + 0x46;
        local_88 = strlen((char *)(lVar12 + 0x10));
        bVar14 = *(byte *)(lVar12 + 0x10);
        local_98 = &DAT_cbf29ce484222645;
        if (bVar14 != 0) {
          local_98 = &DAT_cbf29ce484222645;
          pbVar15 = (byte *)(lVar12 + 0x11);
          do {
            local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar14) * 0x100000001b3);
            bVar14 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar14 != 0);
        }
        local_80 = (long *)0x0;
        pcStack_90 = (char *)(lVar12 + 0x10);
        local_a8 = strlen((char *)local_68);
        local_b8 = &DAT_cbf29ce484222645;
        if (local_68[0] != 0) {
          local_b8 = &DAT_cbf29ce484222645;
          pbVar15 = (byte *)((ulong)local_68 | 1);
          bVar14 = local_68[0];
          do {
            local_b8 = (undefined1 *)(((ulong)local_b8 ^ (ulong)bVar14) * 0x100000001b3);
            bVar14 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar14 != 0);
        }
        pbStack_b0 = local_68;
        local_a0 = (long *)0x0;
        FUN_02c92dec(&local_70,plVar1,&local_98,param_2,&local_b8);
        plVar1 = local_70;
        local_70 = (long *)0x0;
        if (local_78 != (long *)0x0) {
          lVar12 = local_78[0xb];
          piVar2 = (int *)(lVar12 + 0xc);
          do {
            iVar7 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_78 + 0x20))();
          }
        }
        uVar9 = DAT_043ef5b0;
        if (plVar1 == (long *)0x0) {
          local_98 = *(undefined1 **)PTR_DAT_04379c88;
          plVar19 = (long *)PTR_DAT_04379c88;
LAB_02c91ed4:
          pcStack_90 = *(char **)PTR_PTR_04379d00;
          plVar17 = (long *)PTR_PTR_04379d00;
          if (plVar1 != (long *)0x0) goto LAB_02c91cb4;
LAB_02c91ee4:
          local_88 = 0;
          local_80 = (long *)0x0;
        }
        else {
          plVar19 = plVar1 + 0xb;
          local_98 = (undefined1 *)*plVar19;
          if (plVar1 == (long *)0x0) goto LAB_02c91ed4;
          plVar17 = plVar1 + 0xc;
          pcStack_90 = (char *)*plVar17;
          if (plVar1 == (long *)0x0) goto LAB_02c91ee4;
LAB_02c91cb4:
          local_88 = plVar1[0xd];
          (**(code **)(*plVar1 + 0x18))(plVar1);
          local_80 = plVar1;
        }
        uVar10 = FUN_02b1f8b0(uVar9,&local_98);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        if ((uVar10 & 0xff) == 0) {
          if (((*PTR_DAT_0437b6f0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437b6f0);
          }
          *(undefined8 *)PTR_DAT_0437b700 = *(undefined8 *)PTR_DAT_0437b6f8;
          local_88 = strlen("Point");
          uVar9 = DAT_043ef5b0;
          local_98 = &DAT_cbf29ce484222645;
          if (cVar6 != '\0') {
            pcVar13 = "Point";
            local_98 = &DAT_cbf29ce484222645;
            bVar14 = cVar6;
            do {
              pcVar13 = pcVar13 + 1;
              local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar14) * 0x100000001b3);
              bVar14 = *pcVar13;
            } while (bVar14 != 0);
          }
          pcStack_90 = "Point";
          local_80 = (long *)0x0;
          local_b8 = (undefined1 *)*plVar19;
          pbStack_b0 = (byte *)*plVar17;
          if (plVar1 == (long *)0x0) {
            local_a8 = 0;
            local_a0 = (long *)0x0;
          }
          else {
            local_a8 = plVar1[0xd];
            (**(code **)(*plVar1 + 0x18))(plVar1);
            local_a0 = plVar1;
          }
          uVar10 = FUN_02b1f8b0(uVar9,&local_b8);
          if ((uVar10 & 0xff) == 0) {
            uVar10 = FUN_02b1fb34(uVar9,&local_b8,&local_98);
          }
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x20))();
          }
        }
        local_98 = (undefined1 *)(*(long *)(lVar8 + 0xa0) + 0x10);
        puVar11 = (ulong *)FUN_02c92e90(param_1 + 0x300,&local_98);
        *puVar11 = uVar10;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1);
        }
      }
      iVar18 = iVar18 + 1;
      lVar8 = FUN_002669c8(*(long *)(param_1 + 0x2e8) + 0xe8);
    } while (iVar18 < **(int **)(lVar8 + 0x238));
  }
  return;
}


