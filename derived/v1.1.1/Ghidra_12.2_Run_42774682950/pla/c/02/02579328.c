/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02579328; name: FUN_02579328
 */


/* WARNING: Removing unreachable block (ram,0x025794ac) */
/* WARNING: Removing unreachable block (ram,0x025794b0) */
/* WARNING: Removing unreachable block (ram,0x025794b8) */
/* WARNING: Removing unreachable block (ram,0x025794c0) */
/* WARNING: Removing unreachable block (ram,0x025796c4) */
/* WARNING: Removing unreachable block (ram,0x025796d8) */
/* WARNING: Removing unreachable block (ram,0x025794ec) */
/* WARNING: Removing unreachable block (ram,0x025794f0) */
/* WARNING: Removing unreachable block (ram,0x025794f8) */
/* WARNING: Removing unreachable block (ram,0x02579500) */
/* WARNING: Removing unreachable block (ram,0x025796dc) */

void FUN_02579328(long param_1)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_1b0;
  long local_1a8;
  long *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 *local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x630) != *(long *)(param_1 + 0x638)) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x630) + (ulong)*(uint *)(param_1 + 0x6fc) * 8);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar9 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar9;
    plVar7 = *(long **)(lVar9 + 0xd0);
    if (plVar7 != (long *)0x0) {
      plVar11 = plVar7 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = (long *)plVar7[0xb];
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    if (uVar3 < *(byte *)(plVar11 + 0x11)) {
      local_1b0 = (**(code **)(*plVar11 + 0x50))(plVar11,uVar3);
    }
    else {
      local_1b0 = 0;
    }
    plVar7 = plVar11 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    if (local_1b0 != 0) {
      piVar2 = (int *)(local_1b0 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_1a8 = *(long *)(param_1 + 0x2c8);
      if (local_1a8 != 0) {
        piVar2 = (int *)(local_1a8 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_48 = 0;
      local_50 = 0;
      local_58 = &DAT_03996322;
      local_60 = &DAT_cbf29ce484222645;
      local_68 = (undefined1 *)0x0;
      local_70 = (undefined1 *)0x0;
      local_78 = (undefined1 *)0x0;
      local_80 = 0;
      uStack_88 = 0;
      local_90 = &DAT_03996322;
      puStack_98 = &DAT_cbf29ce484222645;
      local_a0 = 0;
      uStack_a8 = 0;
      local_b0 = "";
      local_b8 = &DAT_cbf29ce484222645;
      local_c0 = 0;
      local_c8 = 0;
      local_d0 = "";
      local_d8 = &DAT_cbf29ce484222645;
      local_e0 = 0;
      local_e8 = 0;
      local_f0 = "";
      local_f8 = &DAT_cbf29ce484222645;
      local_100 = 0;
      local_108 = 0;
      local_110 = "";
      local_118 = &DAT_cbf29ce484222645;
      local_120 = 0;
      local_128 = 0;
      local_130 = &DAT_03996322;
      local_138 = &DAT_cbf29ce484222645;
      local_140 = 0;
      local_148 = 0;
      local_150 = &DAT_03996322;
      local_158 = &DAT_cbf29ce484222645;
      local_160 = 0;
      local_168 = 0;
      local_170 = &DAT_03996322;
      local_178 = &DAT_cbf29ce484222645;
      local_180 = 0;
      local_188 = 0;
      local_190 = &DAT_03996322;
      local_198 = &DAT_cbf29ce484222645;
      local_1a0 = (long *)0x0;
      plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
      if (plVar7 != (long *)0x0) {
        lVar9 = plVar7[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar8;
        }
        piVar2 = (int *)(lVar9 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar11 = local_1a0;
      lVar9 = plVar7[0xd];
      if (lVar9 != 0) {
        piVar2 = (int *)(lVar9 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_1a0 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      lVar10 = plVar7[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_1a0 = (long *)lVar9;
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      local_188 = 0;
      local_168 = 0;
      local_148 = 0;
      local_118 = (undefined1 *)0xe530c5b52df11e50;
      local_110 = "anime_L_gauge_00_gauge_scale";
      local_108 = 0x1c;
      local_e8 = 0x1c;
      local_f8 = (undefined1 *)0x3267192cd1766e19;
      local_f0 = "anime_L_gauge_00_color_green";
      local_d8 = (undefined1 *)0x52047dd4c563a9d6;
      local_d0 = "anime_L_gauge_00_color_yellow";
      local_b8 = (undefined1 *)0xdda6c49fd9334ae5;
      local_c8 = 0x1d;
      local_198 = &DAT_cbf29ce484222645;
      local_190 = &DAT_03996322;
      local_128 = 0;
      local_178 = &DAT_cbf29ce484222645;
      local_170 = &DAT_03996322;
      local_158 = &DAT_cbf29ce484222645;
      local_150 = &DAT_03996322;
      local_138 = &DAT_cbf29ce484222645;
      local_130 = &DAT_03996322;
      local_b0 = "anime_L_gauge_00_color_red";
      uStack_a8 = 0x1a;
      local_78 = &DAT_cbf29ce484222645;
      local_70 = &DAT_cbf29ce484222645;
      local_68 = &DAT_cbf29ce484222645;
      local_60 = &DAT_cbf29ce484222645;
      local_58 = &DAT_03996322;
      local_50 = 0;
      FUN_0143ac78(*(undefined8 *)(param_1 + 0x758),&local_1b0);
      FUN_0143b95c(*(undefined8 *)(param_1 + 0x758));
      FUN_011cc710(&local_1b0);
    }
  }
  return;
}


