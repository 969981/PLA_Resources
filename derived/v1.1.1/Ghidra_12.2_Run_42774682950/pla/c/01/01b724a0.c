/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b724a0; name: FUN_01b724a0
 */


void FUN_01b724a0(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 in_q3 [16];
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_84;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  lVar14 = in_q3._8_8_;
  lVar13 = in_q3._0_8_;
  FUN_009c69bc(&local_80);
  lVar9 = FUN_00a3e9dc(local_80 + 0x1e,&local_a8);
  if (local_80 != (long *)0x0) {
    lVar12 = local_80[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (lVar9 != 0) {
    local_80 = (long *)&DAT_afc4d6c05abef19e;
    pcStack_78 = "default";
    local_70 = 7;
    local_68 = (long *)0x0;
    puVar16 = (undefined8 *)FUN_02a9b144(lVar9,&local_80);
    plVar11 = (long *)*puVar16;
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (plVar11 != (long *)0x0) {
      local_98 = 0;
      local_90 = (long *)0x0;
      local_80 = (long *)&DAT_45e350da1d34436d;
      pcStack_78 = "Type";
      local_70 = 0x1f;
      local_68 = (long *)0x0;
      local_84 = 1;
      local_a8 = &DAT_cbf29ce484222645;
      puStack_a0 = &DAT_03996322;
      FUN_02b39d68(plVar11,&local_80,&local_84,&local_a8);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      plVar2 = plVar11 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  uVar10 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((uVar10 & 1) == 0) {
    lVar12 = param_1[0xc5];
    lVar9 = param_1[0xc4];
    FUN_009c69bc(&local_80,param_1);
    (**(code **)(*local_80 + 0x40))();
    param_1[0xc5] = lVar14;
    param_1[0xc4] = lVar13;
    if (local_80 != (long *)0x0) {
      lVar13 = local_80[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
    *(undefined4 *)((long)param_1 + 0x634) = 0;
    param_1[0xbd] =
         CONCAT44((float)((ulong)param_1[0xc5] >> 0x20) - (float)((ulong)lVar12 >> 0x20),
                  (float)param_1[0xc5] - (float)lVar12);
    param_1[0xbc] =
         CONCAT44((float)((ulong)param_1[0xc4] >> 0x20) - (float)((ulong)lVar9 >> 0x20),
                  (float)param_1[0xc4] - (float)lVar9);
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if (param_1[0x4c] != 0) {
      uVar10 = param_1[0x4b];
      lVar13 = tpidr_el0;
      do {
        (**(code **)(*param_1 + 0x128))
                  (param_1,*(long *)(param_1[0x44] + (uVar10 >> 1 & 0x7ffffffffffffff8)) +
                           (uVar10 & 0xf) * 0x140);
        uVar10 = param_1[0x4b] & 0xf;
        lVar14 = *(long *)(param_1[0x44] + ((ulong)param_1[0x4b] >> 1 & 0x7ffffffffffffff8));
        plVar11 = *(long **)(lVar14 + uVar10 * 0x140 + 0x130);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))();
        }
        puVar16 = *(undefined8 **)(lVar14 + uVar10 * 0x140 + 0x108);
        if (puVar16 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar16 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar16[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar9 = *(long *)puVar6;
            *(long *)puVar7 = lVar9;
            local_80 = (long *)*puVar16;
            FUN_02a44274(lVar9 + 0xd8,&local_80);
          }
        }
        puVar16 = *(undefined8 **)(lVar14 + uVar10 * 0x140 + 0xf8);
        if (puVar16 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar16 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar16[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar9 = *(long *)puVar6;
            *(long *)puVar7 = lVar9;
            local_80 = (long *)*puVar16;
            FUN_02a44274(lVar9 + 0xd8,&local_80);
          }
        }
        plVar11 = *(long **)(lVar14 + uVar10 * 0x140 + 0xa0);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))();
        }
        puVar16 = *(undefined8 **)(lVar14 + uVar10 * 0x140 + 0x78);
        if (puVar16 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar16 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar16[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar9 = *(long *)puVar6;
            *(long *)puVar7 = lVar9;
            local_80 = (long *)*puVar16;
            FUN_02a44274(lVar9 + 0xd8,&local_80);
          }
        }
        puVar16 = *(undefined8 **)(lVar14 + uVar10 * 0x140 + 0x68);
        if (puVar16 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar16 + 1);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar16[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar14 = *(long *)puVar6;
            *(long *)puVar7 = lVar14;
            local_80 = (long *)*puVar16;
            FUN_02a44274(lVar14 + 0xd8,&local_80);
          }
        }
        lVar14 = param_1[0x4c] + -1;
        param_1[0x4c] = lVar14;
        uVar10 = param_1[0x4b] + 1;
        param_1[0x4b] = uVar10;
        if (0x1f < uVar10) {
          plVar11 = (long *)param_1[0x4d];
          uVar15 = *(undefined8 *)param_1[0x44];
          uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
          if ((uVar10 & 1) == 0) {
LAB_01b72990:
            (**(code **)(*plVar11 + 0x18))(plVar11,uVar15,0x1400,0x10);
          }
          else {
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_01b72990;
            FUN_02bcc824(plVar11,uVar15,0x1400,0x10);
          }
          param_1[0x44] = param_1[0x44] + 8;
          uVar10 = param_1[0x4b] - 0x10;
          lVar14 = param_1[0x4c];
          param_1[0x4b] = uVar10;
        }
        *(int *)((long)param_1 + 0x634) = *(int *)((long)param_1 + 0x634) + 1;
      } while (lVar14 != 0);
    }
    (**(code **)(*(long *)param_1[200] + 0x20))((long *)param_1[200],param_1,param_2);
    plVar11 = (long *)param_1[0xcc];
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11,param_1,param_2);
    }
  }
  else {
    FUN_01b6ec48(param_1);
  }
  return;
}


