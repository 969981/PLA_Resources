/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ac76c; name: FUN_031ac76c
 */


void FUN_031ac76c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  long local_90;
  ulong local_88;
  uint local_7c;
  long local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar4 = *(uint *)(*(long *)(param_1 + 0x438) + 0x28);
  plVar15 = *(long **)(*(long *)(param_1 + 0x438) + 0x20);
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0x80000001;
  local_b0 = auStack_a0;
  if ((int)uVar4 < 2) {
    if (uVar4 == 0) goto LAB_031ac7dc;
  }
  else {
    if (0x3fffffff < (int)uVar4) {
      FUN_032bd0a8(uVar4);
    }
    puVar8 = PTR_PTR_0434a080;
    uVar11 = (local_a8._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    local_7c = uVar4;
    if ((int)uVar4 <= (int)uVar11) {
      local_7c = uVar11;
    }
    local_88 = (ulong)local_7c << 4;
    if (((int)local_7c < (int)(local_a8._4_4_ & 0x3fffffff)) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_68 = &local_7c;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
    }
    uVar11 = local_a8._4_4_;
    puVar9 = (undefined1 *)(**(code **)(*(long *)puVar8 + 0x10))(puVar8,local_88,&local_88);
    if (-1 < (int)uVar11) {
      (**(code **)(*(long *)puVar8 + 0x18))(puVar8,auStack_a0,(ulong)(uVar11 & 0x3fffffff) << 4);
    }
    if (local_88 < 0x3fffffff0) {
      local_a8._4_4_ = (uint)(local_88 >> 4);
    }
    else {
      local_a8._4_4_ = 0x3fffffff;
    }
    local_b0 = puVar9;
    if ((uint)local_a8 == uVar4) goto LAB_031ac7dc;
  }
  local_a8._0_4_ = uVar4;
LAB_031ac7dc:
  local_90 = 0;
  if (uVar4 != 0) {
    plVar2 = plVar15 + (int)uVar4;
    do {
      lVar13 = *plVar15;
      local_78 = lVar13;
      lVar10 = FUN_031acc5c(param_2,&local_78);
      if ((lVar10 == 0) ||
         (uVar12 = (ulong)*(uint *)(lVar10 + 4) | (lVar10 - param_2[2]) * 0x20000000,
         (int)uVar12 < 0)) {
        plVar14 = *(long **)(lVar13 + 0x228);
        if (plVar14 != (long *)0x0) {
          if (*(int *)(lVar13 + 0x40) == 1) {
            *(undefined1 *)(plVar14 + 6) = 1;
            lVar10 = *(long *)(lVar13 + 0x30);
            plVar14[5] = *(long *)(lVar13 + 0x38);
            plVar14[4] = lVar10;
            *(undefined4 *)(*(long *)(lVar13 + 0x228) + 0x60) = *(undefined4 *)(lVar13 + 0x234);
            plVar14 = *(long **)(lVar13 + 0x228);
            if (plVar14 == (long *)0x0) goto switchD_031acb20_default;
          }
          if (plVar14[1] != 0) {
            plVar1 = plVar14 + 2;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = *plVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          FUN_031ac6ec(lVar13,plVar14,param_3,param_4,&local_b0);
          if (plVar14[1] != 0) {
            plVar1 = plVar14 + 2;
            do {
              lVar10 = *plVar1 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_031aca28:
            if (lVar10 == 0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
            }
          }
        }
        goto switchD_031acb20_default;
      }
      lVar10 = *(long *)(*param_2 + ((long)(uVar12 << 0x20) >> 0x1c) + 8);
      if (*(char *)(lVar10 + 100) == '\0') {
switchD_031acb20_caseD_2:
        iVar5 = *(int *)(lVar10 + 0x78);
        if (iVar5 != 0) {
LAB_031acbc0:
          FUN_031a8d80(lVar13,*(long *)(lVar10 + 0x70),*(long *)(lVar10 + 0x70) + (long)iVar5 * 4,0)
          ;
          *(undefined4 *)(lVar10 + 0x78) = 0;
        }
      }
      else {
        switch(*(char *)(lVar10 + 100)) {
        case '\x01':
        case '\x03':
          FUN_031a8c34(lVar13,*(undefined8 *)(lVar10 + 0x68));
          iVar5 = *(int *)(lVar10 + 0x78);
          if (iVar5 == 0) break;
          goto LAB_031acbc0;
        case '\x02':
          goto switchD_031acb20_caseD_2;
        case '\x04':
          plVar14 = *(long **)(lVar13 + 0x228);
          if (plVar14 != (long *)0x0) {
            if (*(int *)(lVar13 + 0x40) == 1) {
              *(undefined1 *)(plVar14 + 6) = 1;
              lVar10 = *(long *)(lVar13 + 0x30);
              plVar14[5] = *(long *)(lVar13 + 0x38);
              plVar14[4] = lVar10;
              *(undefined4 *)(*(long *)(lVar13 + 0x228) + 0x60) = *(undefined4 *)(lVar13 + 0x234);
              plVar14 = *(long **)(lVar13 + 0x228);
              if (plVar14 == (long *)0x0) break;
            }
            if (plVar14[1] != 0) {
              plVar1 = plVar14 + 2;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = *plVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            FUN_031ac6ec(lVar13,plVar14,param_3,param_4,&local_b0);
            if (plVar14[1] != 0) {
              plVar1 = plVar14 + 2;
              do {
                lVar10 = *plVar1 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              goto LAB_031aca28;
            }
          }
        }
      }
switchD_031acb20_default:
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar2);
  }
  FUN_031c39cc(param_5,local_b0,local_b0 + local_90 * 0x10);
  if (local_90 != 0) {
    puVar3 = local_b0 + local_90 * 0x10;
    puVar9 = local_b0;
    do {
      plVar15 = *(long **)(puVar9 + 8);
      if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
        plVar2 = plVar15 + 2;
        do {
          lVar10 = *plVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))();
        }
      }
      puVar9 = puVar9 + 0x10;
    } while (puVar9 != puVar3);
  }
  uVar4 = local_a8._4_4_;
  uVar12 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < (int)uVar4) && (local_b0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_b0,(uVar12 & 0x3fffffff) << 4);
  }
  return;
}


