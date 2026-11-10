/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d63d28; name: FUN_00d63d28
 */


void FUN_00d63d28(long param_1,uint param_2)

{
  long *plVar1;
  int *piVar2;
  char *__format;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  byte local_60 [8];
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar13 = *(long **)(param_1 + 0x2c8);
  *(short *)(param_1 + 0x5ac) = (short)param_2;
  uVar8 = param_2;
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar8 = (uint)*(ushort *)(param_1 + 0x5ac);
  }
  if ((uVar8 & 0xffff) != 0) {
    plVar14 = (long *)plVar13[0x37];
    if (plVar14 == (long *)0x0) {
      FUN_02c3865c(0,0,uVar8 & 0xffff,1);
    }
    else {
      lVar16 = plVar14[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar7;
      }
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c3865c(plVar14,0,*(undefined2 *)(param_1 + 0x5ac),1);
      lVar16 = plVar14[0xb];
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    local_60[0] = 0xf5;
    local_60[1] = 0x19;
    local_60[2] = 0x2c;
    local_60[3] = 0xdd;
    local_60[4] = 8;
    local_60[5] = 0x94;
    local_60[6] = 0x5e;
    local_60[7] = 5;
    pcStack_58 = "pane_T_item_name_00";
    local_50 = 0x13;
    local_48 = (long *)0x0;
    FUN_00d64180(param_1,1,0xa80bed8efbfc5f02,local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    puVar15 = &DAT_cbf29ce484222645;
    __format = "ITEMINFO_%03d";
    if (999 < *(ushort *)(param_1 + 0x5ac)) {
      __format = "ITEMINFO_%04d";
    }
    snprintf((char *)local_60,0x20,__format);
    if (local_60[0] != 0) {
      pbVar9 = (byte *)((ulong)local_60 | 1);
      bVar3 = local_60[0];
      do {
        puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    local_80 = 0x5975db192613b600;
    pcStack_78 = "pane_T_item_description_00";
    local_70 = 0x1a;
    local_68 = (long *)0x0;
    FUN_00d64180(param_1,2,puVar15,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    FUN_0284ea78(*(undefined8 *)(param_1 + 0x4a8),param_2,0);
    plVar14 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar16 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if ((lVar16 == 0) || (*plVar14 == 0x55e9308dd2c1842)) {
      plVar11 = plVar14;
    }
    else {
      lVar10 = lVar16 * 0x30;
      plVar12 = plVar14;
      do {
        lVar10 = lVar10 + -0x30;
        if (lVar10 == 0) goto LAB_00d63fb4;
        plVar1 = plVar12 + 6;
        plVar11 = plVar12 + 6;
        plVar12 = plVar12 + 6;
      } while (*plVar1 != 0x55e9308dd2c1842);
    }
    if ((plVar11 != plVar14 + lVar16 * 6) && (lVar16 = plVar11[4], lVar16 != 0)) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
      if (((*PTR_DAT_043795f8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043795f8);
      }
      uVar7 = *(undefined8 *)PTR_DAT_04379600;
      *(undefined8 *)PTR_DAT_04379608 = uVar7;
      iVar6 = FUN_02c50d20(uVar7,*(undefined2 *)(param_1 + 0x5ac),0x12);
      if (iVar6 == 10) {
        *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
        local_60[0] = 0x42;
        local_60[1] = 0x18;
        local_60[2] = 0x2c;
        local_60[3] = 0xdd;
        local_60[4] = 8;
        local_60[5] = 0x93;
        local_60[6] = 0x5e;
        local_60[7] = 5;
        pcStack_58 = "pane_T_item_name_01";
        local_50 = 0x13;
        local_48 = (long *)0x0;
        FUN_00d64180(param_1,1,0xa8127a8efc01ba47,local_60);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
      }
    }
LAB_00d63fb4:
    local_60[0] = 0xb6;
    local_60[1] = 0x93;
    local_60[2] = 0x90;
    local_60[3] = 0xd2;
    local_60[4] = 0xb0;
    local_60[5] = 0x46;
    local_60[6] = 0x97;
    local_60[7] = 0xaa;
    pcStack_58 = "pane_A_alignment_00";
    local_50 = 0x13;
    local_48 = (long *)0x0;
    uVar7 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    FUN_00256608(uVar7);
  }
  FUN_00d428b0(param_1,0);
  FUN_00d42438(param_1,1,1);
  FUN_00d42690(param_1,1,1);
  *(byte *)(*(long *)(param_1 + 0x5b0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5b0) + 0x58) | 1;
  FUN_00d64310(param_1);
  FUN_00d7331c(param_1,0);
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      iVar6 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


