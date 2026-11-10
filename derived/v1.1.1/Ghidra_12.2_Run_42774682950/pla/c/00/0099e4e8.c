/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099e4e8; name: FUN_0099e4e8
 */


void FUN_0099e4e8(long *param_1,long param_2,undefined1 param_3,byte param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  long *local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  long *local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68 [4];
  undefined1 local_64 [4];
  
  local_68[0] = param_4;
  local_64[0] = param_3;
  if (param_5 == 1) {
    lVar10 = 0;
  }
  else {
    if (param_5 != 2) {
      local_e8 = 0;
      lVar10 = FUN_009bb5dc(&local_110,*(undefined8 *)(param_2 + 8),&local_e8);
      *param_1 = lVar10;
      if (lVar10 == 0) {
        return;
      }
      lVar10 = *(long *)(lVar10 + 0x58);
      if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        return;
      }
      goto LAB_0099e8b0;
    }
    lVar10 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  snprintf((char *)&local_e8,0x80,"bin/effect/battle/sequence/%s.wbin",
           (&PTR_s_cmn_battle_waza_pow_waza_start_041c3f38)[lVar10 * 2]);
  local_110 = *(long **)(param_2 + 8);
  local_f0 = (long *)FUN_009bb198(local_110,&local_110,local_64,local_68);
  if (local_f0 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    lVar10 = local_f0[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0099e8b0;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    plVar13 = local_f0;
  }
  plVar3 = local_f0;
  local_110 = (long *)&DAT_cbf29ce484222645;
  if ((byte)local_e8 != 0) {
    pbVar11 = (byte *)((ulong)&local_e8 | 1);
    bVar6 = (byte)local_e8;
    do {
      local_110 = (long *)(((ulong)local_110 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar6 != 0);
  }
  puStack_108 = &local_e8;
  local_100 = 0x7f;
  local_f8 = (long *)0x0;
  FUN_00adc9e8(plVar13,&local_110,*(undefined8 *)(param_2 + 8));
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
    plVar13 = plVar3;
  }
  lVar10 = plVar13[0xb];
  local_110 = plVar13;
  if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0099e8b0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    *(undefined8 *)(lVar10 + 0x10) = uVar9;
  }
  plVar13 = local_110;
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = *piVar1 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  *(undefined4 *)(local_110 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_110);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar10 = FUN_0099d310(plVar13 + 10), lVar10 != 0)) {
    uVar15 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar10 + 0xf0) = uVar15;
    plVar4 = *(long **)(lVar10 + 0x80);
    for (plVar3 = *(long **)(lVar10 + 0x78); plVar3 != plVar4; plVar3 = plVar3 + 1) {
      puVar14 = *(undefined8 **)(*plVar3 + 0xe0);
      puVar5 = *(undefined8 **)(*plVar3 + 0xe8);
      if ((puVar14 != puVar5) &&
         ((**(code **)(*(long *)*puVar14 + 0x90))(uVar15), puVar14 + 1 != puVar5)) {
        (**(code **)(*(long *)puVar14[1] + 0x90))(uVar15);
        for (puVar14 = puVar14 + 2; puVar14 != puVar5; puVar14 = puVar14 + 1) {
          (**(code **)(*(long *)*puVar14 + 0x90))(uVar15);
        }
      }
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  lVar10 = FUN_009bb6f0(*(undefined8 *)(param_2 + 8),&local_f0);
  if (lVar10 != 0) {
    lVar12 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0099e8b0;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  *param_1 = lVar10;
  if (local_f0 != (long *)0x0) {
    lVar10 = local_f0[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  return;
}


