/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fe868; name: FUN_032fe868
 */


/* WARNING: Removing unreachable block (ram,0x032fee00) */
/* WARNING: Removing unreachable block (ram,0x032fee0c) */
/* WARNING: Removing unreachable block (ram,0x032fee14) */
/* WARNING: Removing unreachable block (ram,0x032fee1c) */
/* WARNING: Removing unreachable block (ram,0x032fee20) */
/* WARNING: Removing unreachable block (ram,0x032fee28) */

undefined8 * FUN_032fe868(ulong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 extraout_x1;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  byte *pbStack_e0;
  ulong local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar5 = FUN_032e35d8(param_2);
  switch(uVar5 & 0x1f) {
  case 2:
    puVar7 = (undefined8 *)FUN_032cf5b0(0x20);
    uVar16 = *param_1;
    FUN_032e42b4(&local_58,param_2);
    uVar9 = local_58;
    plVar10 = (long *)(uVar16 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar7);
    *puVar7 = &PTR_LAB_0434db88;
    puVar7[2] = uVar16 | 1;
    FUN_032e0c28(plVar10);
    plVar8 = plVar10 + 1;
    puVar7[3] = uVar9;
    *(undefined4 *)(puVar7 + 1) = 0;
    do {
      iVar13 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 3:
    puVar7 = (undefined8 *)FUN_032cf5b0(0x20);
    uVar16 = *param_1;
    FUN_032e42b4(&local_58,param_2);
    uVar9 = local_58;
    plVar10 = (long *)(uVar16 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar7);
    *puVar7 = &PTR_LAB_0434dbf0;
    puVar7[2] = uVar16 | 1;
    FUN_032e0c28(plVar10);
    plVar8 = plVar10 + 1;
    puVar7[3] = uVar9;
    *(undefined4 *)(puVar7 + 1) = 0;
    do {
      iVar13 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 4:
    puVar7 = (undefined8 *)FUN_032cf5b0(0x20);
    uVar16 = *param_1;
    FUN_032e42b4(&local_58,param_2);
    uVar9 = local_58;
    plVar10 = (long *)(uVar16 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar7);
    *puVar7 = &PTR_LAB_0434dc60;
    puVar7[2] = uVar16 | 1;
    FUN_032e0c28(plVar10);
    plVar8 = plVar10 + 1;
    puVar7[3] = uVar9;
    *(undefined4 *)(puVar7 + 1) = 0;
    do {
      iVar13 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 5:
    puVar7 = (undefined8 *)FUN_032cf5b0(0x20);
    uVar16 = *param_1;
    FUN_032e42b4(&local_58,param_2);
    uVar9 = local_58;
    plVar10 = (long *)(uVar16 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar7);
    *puVar7 = &PTR_LAB_0434dcc8;
    puVar7[2] = uVar16 | 1;
    FUN_032e0c28(plVar10);
    plVar8 = plVar10 + 1;
    puVar7[3] = uVar9;
    *(undefined4 *)(puVar7 + 1) = 0;
    do {
      iVar13 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 6:
    puVar7 = (undefined8 *)FUN_032cf5b0(0x20);
    uVar16 = *param_1;
    FUN_032e42b4(&local_58,param_2);
    uVar9 = local_58;
    plVar10 = (long *)(uVar16 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar7);
    *puVar7 = &PTR_LAB_0434dd30;
    puVar7[2] = uVar16 | 1;
    FUN_032e0c28(plVar10);
    plVar8 = plVar10 + 1;
    puVar7[3] = uVar9;
    *(undefined4 *)(puVar7 + 1) = 0;
    do {
      iVar13 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 7:
    puVar7 = (undefined8 *)FUN_032cf5b0(0x20);
    uVar16 = *param_1;
    FUN_032e42b4(&local_58,param_2);
    uVar9 = local_58;
    plVar10 = (long *)(uVar16 & 0xfffffffffffffffe);
    local_58 = uVar16 | 1;
    FUN_032e0c28(plVar10);
    local_50 = (undefined *)uVar9;
    FUN_03301480(puVar7,&local_58);
    plVar8 = plVar10 + 1;
    do {
      iVar13 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 8:
    puVar7 = (undefined8 *)FUN_032cf5b0(0x20);
    uVar16 = *param_1;
    FUN_032e42b4(&local_58,param_2);
    uVar9 = local_58;
    plVar10 = (long *)(uVar16 & 0xfffffffffffffffe);
    local_58 = uVar16 | 1;
    FUN_032e0c28(plVar10);
    local_50 = (undefined *)uVar9;
    FUN_03301ae8(puVar7,&local_58);
    plVar8 = plVar10 + 1;
    do {
      iVar13 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  default:
    pcVar12 = s_Bad_type_visitor_switch_0390397d;
    local_48 = 0;
    pbVar11 = &DAT_0000001b;
    local_58 = 0;
    local_50 = PTR_DAT_04372528;
    FUN_03320b50(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,s_Bad_type_visitor_switch_0390397d,&local_58);
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    pbVar15 = pbVar11;
    if ((*pbVar11 >> 2 & 1) != 0) goto LAB_032fec50;
    do {
      do {
        pbVar15 = *(byte **)(pbVar15 + 8);
      } while ((*pbVar15 >> 2 & 1) == 0);
LAB_032fec50:
      plVar8 = (long *)FUN_032e2008(pbVar15,4);
    } while ((plVar8 == (long *)0x0) || (*plVar8 == 0));
    plVar8 = (long *)FUN_032e3508(*(undefined8 *)(pbVar15 + 8));
    (**(code **)(*plVar8 + 0x50))(plVar8,extraout_x1,pbVar11,&local_d0);
    if ((int)local_c0 == 0) {
      *(long *)(pcVar12 + 8) = local_c8;
      *(undefined8 *)(pcVar12 + 0x10) = local_c0;
      *(undefined8 *)pcVar12 = local_d0;
      if ((local_b8 & 1) == 0) {
        uVar9 = *(ulong *)(pcVar12 + 0x18);
      }
      else {
        FUN_032e0c28(local_b8 & 0xfffffffffffffffe);
        uVar9 = *(ulong *)(pcVar12 + 0x18);
      }
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)(uVar9 & 0xfffffffffffffffe);
        plVar8 = plVar10 + 1;
        do {
          lVar14 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *(int *)plVar8 = (int)lVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      *(ulong *)(pcVar12 + 0x18) = local_b8;
      goto joined_r0x032fed74;
    }
    local_e8 = extraout_x1;
    pbStack_e0 = pbVar11;
    if (pbVar11 == (byte *)0x0) {
      local_d8 = 0;
LAB_032feca4:
      if (local_c8 == 0) goto LAB_032fedcc;
LAB_032fecac:
      lVar14 = local_c8;
      local_f8 = &local_e8;
      uStack_f0 = local_d0;
      uVar9 = FUN_032feef0(&local_f8,local_c8);
    }
    else {
      local_d8 = FUN_032e3508(pbVar11);
      if ((local_d8 & 1) == 0) goto LAB_032feca4;
      FUN_032e0c28(local_d8 & 0xfffffffffffffffe);
      if (local_c8 != 0) goto LAB_032fecac;
LAB_032fedcc:
      uVar9 = 0;
      lVar14 = local_c8;
    }
    uVar3 = local_d0;
    uVar4 = (int)local_c0;
    uVar16 = uVar9 != 0 | uVar9;
    if ((ulong)(uVar9 != 0) == 0 && (uVar9 & 1) == 0) {
      if (lVar14 != 0) goto LAB_032fece4;
LAB_032fede0:
      uVar6 = 0;
    }
    else {
      FUN_032e0c28(uVar9 & 0xfffffffffffffffe);
      if (lVar14 == 0) goto LAB_032fede0;
LAB_032fece4:
      uVar6 = FUN_032e2120(lVar14);
      if ((uVar9 == 0) && (uVar16 = FUN_032e3508(lVar14), (uVar16 & 1) != 0)) {
        FUN_032e0c28(uVar16 & 0xfffffffffffffffe);
      }
    }
    uVar9 = *(ulong *)(pcVar12 + 0x18);
    *(undefined8 *)pcVar12 = uVar3;
    *(long *)(pcVar12 + 8) = lVar14;
    *(undefined4 *)(pcVar12 + 0x10) = uVar4;
    *(undefined4 *)(pcVar12 + 0x14) = uVar6;
    *(ulong *)(pcVar12 + 0x18) = uVar16;
    if ((uVar9 & 1) != 0) {
      plVar10 = (long *)(uVar9 & 0xfffffffffffffffe);
      plVar8 = plVar10 + 1;
      do {
        lVar14 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = (int)lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    if ((local_d8 & 1) != 0) {
      plVar10 = (long *)(local_d8 & 0xfffffffffffffffe);
      plVar8 = plVar10 + 1;
      do {
        lVar14 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = (int)lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
joined_r0x032fed74:
    if ((local_b8 & 1) != 0) {
      plVar10 = (long *)(local_b8 & 0xfffffffffffffffe);
      plVar8 = plVar10 + 1;
      do {
        lVar14 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = (int)lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar14 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    return (undefined8 *)0x0;
  }
  if ((plVar10 != (long *)0x0) && (iVar13 == 1)) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  return puVar7;
}


