/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028565b4; name: FUN_028565b4
 */


/* WARNING: Removing unreachable block (ram,0x02856674) */
/* WARNING: Removing unreachable block (ram,0x02856678) */
/* WARNING: Removing unreachable block (ram,0x02856680) */
/* WARNING: Removing unreachable block (ram,0x02856688) */
/* WARNING: Removing unreachable block (ram,0x02856f94) */
/* WARNING: Removing unreachable block (ram,0x02856fa8) */
/* WARNING: Removing unreachable block (ram,0x02856980) */
/* WARNING: Removing unreachable block (ram,0x02856984) */
/* WARNING: Removing unreachable block (ram,0x0285698c) */
/* WARNING: Removing unreachable block (ram,0x02856994) */
/* WARNING: Removing unreachable block (ram,0x02856fe4) */
/* WARNING: Removing unreachable block (ram,0x028566b4) */
/* WARNING: Removing unreachable block (ram,0x028566b8) */
/* WARNING: Removing unreachable block (ram,0x028566c0) */
/* WARNING: Removing unreachable block (ram,0x028566c8) */
/* WARNING: Removing unreachable block (ram,0x02856fac) */
/* WARNING: Removing unreachable block (ram,0x02856fc0) */
/* WARNING: Removing unreachable block (ram,0x028566f4) */
/* WARNING: Removing unreachable block (ram,0x028566f8) */
/* WARNING: Removing unreachable block (ram,0x02856700) */
/* WARNING: Removing unreachable block (ram,0x02856708) */
/* WARNING: Removing unreachable block (ram,0x02856fc4) */

void FUN_028565b4(long param_1)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  float fVar21;
  long *local_1d0;
  long local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  long *local_1b0;
  undefined1 *local_1a8;
  long *local_1a0;
  undefined1 *local_198;
  long *local_190;
  undefined1 *local_188;
  long *local_180;
  undefined1 *local_178;
  long *local_170;
  undefined1 *local_168;
  long *local_160;
  undefined1 *local_158;
  long *local_150;
  undefined8 local_148;
  long *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  long *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  long *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  long *local_68;
  
  local_1d0 = *(long **)(param_1 + 0x18);
  if (local_1d0 != (long *)0x0) {
    plVar18 = local_1d0 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_1c8 = *(long *)(param_1 + 8);
    if (local_1c8 != 0) {
      piVar2 = (int *)(local_1c8 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_1c0 = *(long *)(param_1 + 0x20);
    if (local_1c0 != 0) {
      piVar2 = (int *)(local_1c0 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_68 = (long *)0x0;
    local_70 = 0;
    local_78 = &DAT_03996322;
    local_80 = &DAT_cbf29ce484222645;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    uStack_a8 = 0;
    local_b0 = &DAT_03996322;
    puStack_b8 = &DAT_cbf29ce484222645;
    local_c0 = (long *)0x0;
    local_c8 = 0;
    local_d0 = &DAT_03996322;
    local_d8 = &DAT_cbf29ce484222645;
    local_e0 = (long *)0x0;
    local_e8 = 0;
    local_f0 = &DAT_03996322;
    local_f8 = &DAT_cbf29ce484222645;
    local_100 = (long *)0x0;
    local_108 = 0;
    local_110 = &DAT_03996322;
    local_118 = &DAT_cbf29ce484222645;
    local_120 = (long *)0x0;
    local_128 = 0;
    local_130 = &DAT_03996322;
    local_138 = &DAT_cbf29ce484222645;
    local_140 = (long *)0x0;
    local_148 = 0;
    local_150 = (long *)&DAT_03996322;
    local_158 = &DAT_cbf29ce484222645;
    local_160 = (long *)0x0;
    local_168 = (undefined1 *)0x0;
    local_170 = (long *)&DAT_03996322;
    local_178 = &DAT_cbf29ce484222645;
    local_180 = (long *)0x0;
    local_188 = (undefined1 *)0x0;
    local_190 = (long *)&DAT_03996322;
    local_198 = &DAT_cbf29ce484222645;
    local_1a0 = (long *)0x0;
    local_1b8 = *(undefined8 *)(param_1 + 0x218);
    local_1b0 = *(long **)(param_1 + 0x220);
    local_1a8 = *(undefined1 **)(param_1 + 0x228);
    plVar18 = *(long **)(param_1 + 0x230);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_1a0 != (long *)0x0) {
      lVar14 = *local_1a0;
      local_1a0 = plVar18;
      (**(code **)(lVar14 + 0x20))();
      plVar18 = local_1a0;
    }
    local_1a0 = plVar18;
    local_198 = *(undefined1 **)(param_1 + 0x1f8);
    local_190 = *(long **)(param_1 + 0x200);
    local_188 = *(undefined1 **)(param_1 + 0x208);
    plVar18 = *(long **)(param_1 + 0x210);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_180 != (long *)0x0) {
      lVar14 = *local_180;
      local_180 = plVar18;
      (**(code **)(lVar14 + 0x20))();
      plVar18 = local_180;
    }
    local_180 = plVar18;
    local_178 = *(undefined1 **)(param_1 + 0x238);
    local_170 = *(long **)(param_1 + 0x240);
    local_168 = *(undefined1 **)(param_1 + 0x248);
    plVar18 = *(long **)(param_1 + 0x250);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_160 != (long *)0x0) {
      lVar14 = *local_160;
      local_160 = plVar18;
      (**(code **)(lVar14 + 0x20))();
      plVar18 = local_160;
    }
    local_160 = plVar18;
    local_158 = *(undefined1 **)(param_1 + 0x1b8);
    local_150 = *(long **)(param_1 + 0x1c0);
    local_148 = *(undefined8 *)(param_1 + 0x1c8);
    plVar18 = *(long **)(param_1 + 0x1d0);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_140 != (long *)0x0) {
      lVar14 = *local_140;
      local_140 = plVar18;
      (**(code **)(lVar14 + 0x20))();
      plVar18 = local_140;
    }
    local_140 = plVar18;
    local_138 = *(undefined1 **)(param_1 + 0x378);
    local_130 = *(undefined1 **)(param_1 + 0x380);
    local_128 = *(undefined8 *)(param_1 + 0x388);
    plVar18 = *(long **)(param_1 + 0x390);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_120 != (long *)0x0) {
      lVar14 = *local_120;
      local_120 = plVar18;
      (**(code **)(lVar14 + 0x20))();
      plVar18 = local_120;
    }
    local_120 = plVar18;
    local_118 = *(undefined1 **)(param_1 + 0x398);
    local_110 = *(undefined1 **)(param_1 + 0x3a0);
    local_108 = *(undefined8 *)(param_1 + 0x3a8);
    plVar18 = *(long **)(param_1 + 0x3b0);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_100 != (long *)0x0) {
      lVar14 = *local_100;
      local_100 = plVar18;
      (**(code **)(lVar14 + 0x20))();
      plVar18 = local_100;
    }
    local_100 = plVar18;
    local_f8 = *(undefined1 **)(param_1 + 0x3b8);
    local_f0 = *(undefined1 **)(param_1 + 0x3c0);
    local_e8 = *(undefined8 *)(param_1 + 0x3c8);
    plVar18 = *(long **)(param_1 + 0x3d0);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_e0 != (long *)0x0) {
      lVar14 = *local_e0;
      local_e0 = plVar18;
      (**(code **)(lVar14 + 0x20))();
      plVar18 = local_e0;
    }
    local_e0 = plVar18;
    local_d8 = *(undefined1 **)(param_1 + 0x3d8);
    local_d0 = *(undefined1 **)(param_1 + 0x3e0);
    local_c8 = *(undefined8 *)(param_1 + 1000);
    plVar18 = *(long **)(param_1 + 0x3f0);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_c0 != (long *)0x0) {
      lVar14 = *local_c0;
      local_c0 = plVar18;
      (**(code **)(lVar14 + 0x20))();
      plVar18 = local_c0;
    }
    local_c0 = plVar18;
    local_98 = *(undefined8 *)(param_1 + 0xe0);
    local_90 = *(undefined8 *)(param_1 + 0xe8);
    local_88 = *(undefined8 *)(param_1 + 0xf0);
    local_80 = *(undefined1 **)(param_1 + 600);
    local_78 = *(undefined1 **)(param_1 + 0x260);
    local_70 = *(undefined8 *)(param_1 + 0x268);
    plVar18 = *(long **)(param_1 + 0x270);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    if (local_68 != (long *)0x0) {
      lVar14 = *local_68;
      local_68 = plVar18;
      (**(code **)(lVar14 + 0x20))();
      plVar18 = local_68;
    }
    local_68 = plVar18;
    FUN_0143ac78(*(undefined8 *)(param_1 + 0x110),&local_1d0);
    FUN_011cc710(&local_1d0);
    if (*(char *)(param_1 + 0x4f8) != '\0') {
      local_150 = (long *)0x0;
      local_1b0 = (long *)0x0;
      local_1a8 = &DAT_cbf29ce484222645;
      local_1a0 = (long *)&DAT_03996322;
      local_198 = (undefined1 *)0x0;
      local_190 = (long *)0x0;
      local_188 = &DAT_cbf29ce484222645;
      local_180 = (long *)&DAT_03996322;
      local_178 = (undefined1 *)0x0;
      local_170 = (long *)0x0;
      local_168 = &DAT_cbf29ce484222645;
      local_160 = (long *)&DAT_03996322;
      local_158 = (undefined1 *)0x0;
      local_1d0 = *(long **)(param_1 + 8);
      if (local_1d0 != (long *)0x0) {
        plVar18 = local_1d0 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_1c8 = *(long *)(param_1 + 0x478);
      local_1c0 = *(long *)(param_1 + 0x480);
      local_1b8 = *(undefined8 *)(param_1 + 0x488);
      plVar18 = *(long **)(param_1 + 0x490);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
      if (local_1b0 != (long *)0x0) {
        lVar14 = *local_1b0;
        local_1b0 = plVar18;
        (**(code **)(lVar14 + 0x20))();
        plVar18 = local_1b0;
      }
      local_1b0 = plVar18;
      local_1a8 = *(undefined1 **)(param_1 + 0x4d8);
      local_1a0 = *(long **)(param_1 + 0x4e0);
      local_198 = *(undefined1 **)(param_1 + 0x4e8);
      plVar18 = *(long **)(param_1 + 0x4f0);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
      if (local_190 != (long *)0x0) {
        lVar14 = *local_190;
        local_190 = plVar18;
        (**(code **)(lVar14 + 0x20))();
        plVar18 = local_190;
      }
      local_190 = plVar18;
      local_148 = CONCAT71(local_148._1_7_,1);
      FUN_014228a0(*(long *)(param_1 + 0x118) + 0x58,&local_1d0);
      if (local_150 != (long *)0x0) {
        (**(code **)(*local_150 + 0x20))();
      }
      if (local_170 != (long *)0x0) {
        (**(code **)(*local_170 + 0x20))();
      }
      if (local_190 != (long *)0x0) {
        (**(code **)(*local_190 + 0x20))();
      }
      if (local_1b0 != (long *)0x0) {
        (**(code **)(*local_1b0 + 0x20))();
      }
      if (local_1d0 != (long *)0x0) {
        plVar18 = local_1d0 + 10;
        do {
          iVar9 = (int)*plVar18 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_1d0 + 0x10))();
        }
      }
    }
    if (*(undefined1 **)(param_1 + 0xd8) != &DAT_cbf29ce484222645) {
      lVar14 = *(long *)(param_1 + 0x20);
      plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
      if (plVar18 == (long *)0x0) {
        lVar17 = *(long *)(lVar14 + 0xb0);
        if (lVar17 != 0) {
          plVar18 = *(long **)(lVar17 + 0x270);
          if (plVar18 != *(long **)(lVar17 + 0x278)) {
            iVar9 = 0;
            do {
              puVar3 = (undefined8 *)PTR_DAT_04379c88;
              if (*plVar18 != 0) {
                puVar3 = (undefined8 *)(*plVar18 + 0x58);
              }
              if ((undefined1 *)*puVar3 == *(undefined1 **)(param_1 + 0xd8)) goto LAB_02857174;
              plVar18 = plVar18 + 1;
              iVar9 = iVar9 + 1;
            } while (*(long **)(lVar17 + 0x278) != plVar18);
          }
        }
        iVar9 = 0;
LAB_02857174:
        FUN_02c2e33c(lVar14,iVar9,0);
      }
      else {
        plVar19 = plVar18 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = (int)*plVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar17 = *(long *)(lVar14 + 0xb0);
        if (lVar17 != 0) {
          plVar15 = *(long **)(lVar17 + 0x270);
          if (plVar15 != *(long **)(lVar17 + 0x278)) {
            iVar9 = 0;
            do {
              plVar16 = (long *)PTR_DAT_04379c88;
              if (*plVar15 != 0) {
                plVar16 = (long *)(*plVar15 + 0x58);
              }
              if (*plVar16 == *(long *)(param_1 + 0xd8)) goto LAB_02856b18;
              plVar15 = plVar15 + 1;
              iVar9 = iVar9 + 1;
            } while (*(long **)(lVar17 + 0x278) != plVar15);
          }
        }
        iVar9 = 0;
LAB_02856b18:
        FUN_02c2e33c(lVar14,iVar9,plVar18);
        do {
          iVar9 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      lVar17 = *(long *)(param_1 + 8);
      lVar20 = *(long *)(lVar17 + 0x1b8);
      uVar13 = *(undefined8 *)(lVar17 + 0x1c0);
      lVar14 = *(long *)(lVar17 + 0x1c8);
      *(undefined4 *)(lVar20 + 0x124) = 0;
      *(undefined2 *)(lVar20 + 0x128) = 0;
      *(undefined4 *)(lVar20 + 300) = 0;
      *(undefined4 *)(lVar20 + 0x134) = 0;
      FUN_02c33414(lVar20,uVar13);
      if (*(char *)(lVar14 + 0x7c) != '\0') {
        **(undefined2 **)(lVar14 + 0x58) = 0;
        *(undefined2 *)(lVar14 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar20,lVar14,uVar13,0,0);
      FUN_0283ce7c(lVar17,param_1 + 0x1d8,*(undefined8 *)(lVar17 + 0x1c8),10);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0284eef8(*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18),0);
    }
    FUN_0285720c(param_1);
    FUN_02857494(param_1);
    lVar14 = *(long *)(param_1 + 0x40);
    if (lVar14 != 0) {
      uVar7 = FUN_02c73a80(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
      FUN_0284e6a0(lVar14,uVar7,0);
    }
    lVar14 = *(long *)(param_1 + 0x18);
    uVar8 = FUN_02c6cf3c(*(undefined8 *)(lVar14 + 0x98));
    uVar12 = (*(ushort *)(*(long *)(*(long *)(lVar14 + 0x98) + 0x10) + 4) & 4) >> 2;
    FUN_0283b1e8(*(undefined8 *)(param_1 + 8),param_1 + 0x358);
    fVar21 = (float)(uVar8 & 1 | uVar12);
    FUN_0283b748(fVar21,*(undefined8 *)(param_1 + 8),param_1 + 0x358);
    if (*(char *)(param_1 + 0x4f8) != '\0') {
      FUN_0283b1e8(*(undefined8 *)(param_1 + 8),param_1 + 0x4b8);
      FUN_0283b748(fVar21,*(undefined8 *)(param_1 + 8),param_1 + 0x4b8);
    }
    if ((uVar8 & 1) == 0 && uVar12 == 0) {
      if (*(undefined1 **)(param_1 + 0xd0) != &DAT_cbf29ce484222645) {
        plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
        if (plVar18 == (long *)0x0) {
          uVar7 = FUN_02c5fb2c(*(undefined8 *)(param_1 + 0x18));
          FUN_02c395d0(0,0,uVar7,3,0,1);
        }
        else {
          lVar14 = plVar18[0xb];
          if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar14 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
            *(undefined8 *)(lVar14 + 0x10) = uVar13;
          }
          piVar2 = (int *)(lVar14 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar7 = FUN_02c5fb2c(*(undefined8 *)(param_1 + 0x18));
          FUN_02c395d0(plVar18,0,uVar7,3,0,1);
          lVar14 = plVar18[0xb];
          piVar2 = (int *)(lVar14 + 0xc);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
        }
        lVar14 = *(long *)(param_1 + 0x20);
        plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
        if (plVar18 == (long *)0x0) {
          lVar17 = *(long *)(lVar14 + 0xb0);
          if (lVar17 != 0) {
            plVar18 = *(long **)(lVar17 + 0x270);
            if (plVar18 != *(long **)(lVar17 + 0x278)) {
              iVar9 = 0;
              do {
                plVar19 = (long *)PTR_DAT_04379c88;
                if (*plVar18 != 0) {
                  plVar19 = (long *)(*plVar18 + 0x58);
                }
                if (*plVar19 == *(long *)(param_1 + 0xd0)) goto LAB_028571d8;
                plVar18 = plVar18 + 1;
                iVar9 = iVar9 + 1;
              } while (*(long **)(lVar17 + 0x278) != plVar18);
            }
          }
          iVar9 = 0;
LAB_028571d8:
          FUN_02c2e33c(lVar14,iVar9,0);
        }
        else {
          plVar19 = plVar18 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = (int)*plVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar17 = *(long *)(lVar14 + 0xb0);
          if (lVar17 != 0) {
            plVar15 = *(long **)(lVar17 + 0x270);
            if (plVar15 != *(long **)(lVar17 + 0x278)) {
              iVar9 = 0;
              do {
                plVar16 = (long *)PTR_DAT_04379c88;
                if (*plVar15 != 0) {
                  plVar16 = (long *)(*plVar15 + 0x58);
                }
                if (*plVar16 == *(long *)(param_1 + 0xd0)) goto LAB_02856d5c;
                plVar15 = plVar15 + 1;
                iVar9 = iVar9 + 1;
              } while (*(long **)(lVar17 + 0x278) != plVar15);
            }
          }
          iVar9 = 0;
LAB_02856d5c:
          FUN_02c2e33c(lVar14,iVar9,plVar18);
          do {
            iVar9 = (int)*plVar19 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = iVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
        lVar17 = *(long *)(param_1 + 8);
        lVar20 = *(long *)(lVar17 + 0x1b8);
        uVar13 = *(undefined8 *)(lVar17 + 0x1c0);
        lVar14 = *(long *)(lVar17 + 0x1c8);
        *(undefined4 *)(lVar20 + 0x124) = 0;
        *(undefined2 *)(lVar20 + 0x128) = 0;
        *(undefined4 *)(lVar20 + 300) = 0;
        *(undefined4 *)(lVar20 + 0x134) = 0;
        FUN_02c33414(lVar20,uVar13);
        if (*(char *)(lVar14 + 0x7c) != '\0') {
          **(undefined2 **)(lVar14 + 0x58) = 0;
          *(undefined2 *)(lVar14 + 0x7a) = 0;
        }
        FUN_02c338a4(lVar20,lVar14,uVar13,0,0);
        FUN_0283ce7c(lVar17,param_1 + 0x198,*(undefined8 *)(lVar17 + 0x1c8),10);
      }
      FUN_0283b1e8(*(undefined8 *)(param_1 + 8),param_1 + 0x3f8);
      uVar13 = *(undefined8 *)(param_1 + 8);
      iVar9 = FUN_01090c00(*(undefined8 *)(param_1 + 0x18));
      FUN_0283b748((float)iVar9,uVar13,param_1 + 0x3f8);
      lVar14 = *(long *)(param_1 + 8);
      bVar6 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
      plVar18 = *(long **)(lVar14 + 0x148);
      lVar14 = *(long *)(lVar14 + 0x150);
      lVar17 = *(long *)(param_1 + 0x298);
      plVar19 = *(long **)(param_1 + 0x2b0);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
      plVar15 = plVar18;
      if ((lVar14 != 0) && (*plVar18 != lVar17)) {
        lVar20 = lVar14 * 0x30;
        plVar16 = plVar18 + lVar14 * 6;
        do {
          lVar20 = lVar20 + -0x30;
          plVar15 = plVar16;
          if (lVar20 == 0) break;
          plVar1 = plVar18 + 6;
          plVar18 = plVar18 + 6;
          plVar15 = plVar18;
        } while (*plVar1 != lVar17);
      }
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
      *(byte *)(plVar15[4] + 0x58) = *(byte *)(plVar15[4] + 0x58) & 0xfe | bVar6 & 1;
      FUN_0143b95c(*(undefined8 *)(param_1 + 0x110));
      if (*(char *)(param_1 + 0x4f8) != '\0') {
        iVar9 = FUN_02c60024(*(undefined8 *)(param_1 + 0x18));
        iVar10 = FUN_02c600e8(*(undefined8 *)(param_1 + 0x18));
        iVar11 = FUN_02c68e44(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
        (**(code **)(**(long **)(param_1 + 0x118) + 0x28))
                  ((float)(uint)(iVar11 - iVar9),*(long **)(param_1 + 0x118),iVar10 - iVar9);
      }
      FUN_02857700(param_1);
      lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x98);
      if (*(long *)(lVar14 + 8) == 0) {
        uVar12 = FUN_02c5e31c();
        uVar12 = uVar12 & 0xffff;
      }
      else {
        uVar12 = FUN_02c66b3c(lVar14);
      }
      *(uint *)(param_1 + 0x150) = uVar12;
    }
  }
  return;
}


