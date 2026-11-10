/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147d054; name: FUN_0147d054
 */


undefined1 * FUN_0147d054(long param_1,undefined1 *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar12 = (long *)plVar13[0xd];
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar11 = plVar13[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar4 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar4 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar4 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  puVar14 = (undefined1 *)0x28e13eb149fcf69a;
  switch(*param_2) {
  case 1:
    puVar14 = (undefined1 *)0xe5a60492b62ddd96;
    lVar11 = plVar12[0x16];
    break;
  case 2:
    snprintf((char *)&local_b0,0x80,"field_info_wh_%02d",*(int *)(param_2 + 4) + 1);
    if ((byte)local_b0 == 0) goto switchD_0147d140_default;
    puVar14 = &DAT_cbf29ce484222645;
    pbVar10 = (byte *)((ulong)&local_b0 | 1);
    bVar5 = (byte)local_b0;
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar5 != 0);
    goto LAB_0147d3a0;
  case 3:
    snprintf((char *)&local_b0,0x80,"field_info_pokeinfo_%02d",*(int *)(param_2 + 4) + 1);
    if ((byte)local_b0 == 0) goto switchD_0147d140_default;
    puVar14 = &DAT_cbf29ce484222645;
    pbVar10 = (byte *)((ulong)&local_b0 | 1);
    bVar5 = (byte)local_b0;
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar5 != 0);
    goto LAB_0147d3a0;
  case 4:
    snprintf((char *)&local_b0,0x80,"field_info_blost_%02d",*(int *)(param_2 + 4) + 1);
    if ((byte)local_b0 == 0) goto switchD_0147d140_default;
    puVar14 = &DAT_cbf29ce484222645;
    pbVar10 = (byte *)((ulong)&local_b0 | 1);
    bVar5 = (byte)local_b0;
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar5 != 0);
    goto LAB_0147d3a0;
  case 5:
    puVar14 = (undefined1 *)0xb5ae78903f1de87b;
    lVar11 = plVar12[0x16];
    break;
  case 6:
    uVar15 = 0x24e0407a9bb8;
    goto LAB_0147d300;
  case 7:
    uVar15 = 0x27e0407aa0d1;
LAB_0147d300:
    puVar14 = (undefined1 *)(uVar15 | 0xd019000000000000);
    lVar11 = plVar12[0x16];
    break;
  case 8:
    puVar14 = (undefined1 *)0xda85e1c828c7ef82;
    lVar11 = plVar12[0x16];
    break;
  case 9:
    puVar14 = (undefined1 *)0x871f0c2fafb14428;
    lVar11 = plVar12[0x16];
    break;
  case 10:
    puVar14 = (undefined1 *)0xa5f7f6c40babc80b;
    lVar11 = plVar12[0x16];
    break;
  case 0xb:
    puVar14 = (undefined1 *)0xc7edd7ab0fc9576d;
    lVar11 = plVar12[0x16];
    break;
  case 0xc:
    puVar14 = (undefined1 *)0x28e13db149fcf4e7;
    lVar11 = plVar12[0x16];
    goto joined_r0x0147d1ec;
  case 0xd:
    goto switchD_0147d140_caseD_d;
  case 0xe:
    snprintf((char *)&local_b0,0x80,"field_info_pokeinfo_%02d",*(int *)(param_2 + 4) + 10);
    if ((byte)local_b0 == 0) goto switchD_0147d140_default;
    puVar14 = &DAT_cbf29ce484222645;
    pbVar10 = (byte *)((ulong)&local_b0 | 1);
    bVar5 = (byte)local_b0;
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar5 != 0);
LAB_0147d3a0:
    if (puVar14 == &DAT_cbf29ce484222645) goto switchD_0147d140_default;
switchD_0147d140_caseD_d:
    lVar11 = plVar12[0x16];
joined_r0x0147d1ec:
    if (lVar11 == 0) goto switchD_0147d140_default;
    goto LAB_0147d3c0;
  default:
    goto switchD_0147d140_default;
  }
  if (lVar11 != 0) {
LAB_0147d3c0:
    plVar13 = *(long **)(lVar11 + 0x270);
    if (plVar13 != *(long **)(lVar11 + 0x278)) {
      uVar9 = 0;
      do {
        puVar3 = (undefined8 *)PTR_DAT_04379c88;
        if (*plVar13 != 0) {
          puVar3 = (undefined8 *)(*plVar13 + 0x58);
        }
        if ((undefined1 *)*puVar3 == puVar14) {
          if (uVar9 < *(ushort *)(plVar12[0x12] + 2)) goto LAB_0147d42c;
          break;
        }
        plVar13 = plVar13 + 1;
        uVar9 = uVar9 + 1;
      } while (*(long **)(lVar11 + 0x278) != plVar13);
    }
  }
switchD_0147d140_default:
  puVar14 = (undefined1 *)0xe5a60492b62ddd96;
LAB_0147d42c:
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar13 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(int *)plVar13 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return puVar14;
}


