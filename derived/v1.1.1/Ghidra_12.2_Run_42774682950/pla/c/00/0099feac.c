/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099feac; name: FUN_0099feac
 */


void FUN_0099feac(long *param_1,long param_2,undefined1 param_3)

{
  int *piVar1;
  char *param3;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  undefined4 uVar17;
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
  undefined1 local_64 [4];
  
  local_64[0] = param_3;
  lVar10 = FUN_00933eec(*(undefined8 *)(*(long *)(param_2 + 0x330) + 0xd0));
  sVar7 = *(short *)(*(long *)(lVar10 + 0x70) + 0x70);
  if (sVar7 == 0x1a5) {
    lVar14 = 0;
LAB_0099ff24:
    pcVar13 = (&PTR_s_ee_fc_00_041c4120)[lVar14 * 2];
  }
  else {
    if (sVar7 == 0x1ed) {
      lVar14 = 2;
      goto LAB_0099ff24;
    }
    pcVar13 = (char *)0x0;
    if (sVar7 == 0x1ec) {
      lVar14 = 1;
      goto LAB_0099ff24;
    }
  }
  param3 = "ee_fc_en13_01";
  if (*(char *)(*(long *)(lVar10 + 0x70) + 0x369) != '\0' || sVar7 != 0x1ed) {
    param3 = pcVar13;
  }
  if (param3 == (char *)0x0) {
    local_e8 = 0;
    lVar10 = FUN_009bb5dc(&local_110,*(undefined8 *)(param_2 + 8),&local_e8);
    *param_1 = lVar10;
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 0x58);
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_009a02b8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
  }
  else {
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
    snprintf((char *)&local_e8,0x80,"bin/effect/battle/sequence/%s.wbin",param3);
    local_110 = *(long **)(param_2 + 8);
    local_f0 = (long *)FUN_009bb918(local_110,&local_110,local_64);
    if (local_f0 == (long *)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      lVar10 = local_f0[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_009a02b8;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      plVar16 = local_f0;
    }
    plVar3 = local_f0;
    local_110 = (long *)&DAT_cbf29ce484222645;
    if ((byte)local_e8 != 0) {
      pbVar15 = (byte *)((ulong)&local_e8 | 1);
      bVar6 = (byte)local_e8;
      do {
        local_110 = (long *)(((ulong)local_110 ^ (ulong)bVar6) * 0x100000001b3);
        bVar6 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar6 != 0);
    }
    puStack_108 = &local_e8;
    local_100 = 0x7f;
    local_f8 = (long *)0x0;
    FUN_00adc9e8(plVar16,&local_110,*(undefined8 *)(param_2 + 8));
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
      plVar16 = plVar3;
    }
    lVar10 = plVar16[0xb];
    local_110 = plVar16;
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_009a02b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar11;
    }
    plVar16 = local_110;
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    *(undefined4 *)(local_110 + 0xd) = 1;
    FUN_0099ae98(param_2 + 0x4a0,&local_110);
    if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0))
        && (*(int *)(param_2 + 0x7b8) == 1)) && (lVar10 = FUN_0099d310(plVar16 + 10), lVar10 != 0))
    {
      uVar17 = *(undefined4 *)(param_2 + 0x7c0);
      *(undefined4 *)(lVar10 + 0xf0) = uVar17;
      plVar4 = *(long **)(lVar10 + 0x80);
      for (plVar3 = *(long **)(lVar10 + 0x78); plVar3 != plVar4; plVar3 = plVar3 + 1) {
        puVar12 = *(undefined8 **)(*plVar3 + 0xe0);
        puVar5 = *(undefined8 **)(*plVar3 + 0xe8);
        if ((puVar12 != puVar5) &&
           ((**(code **)(*(long *)*puVar12 + 0x90))(uVar17), puVar12 + 1 != puVar5)) {
          (**(code **)(*(long *)puVar12[1] + 0x90))(uVar17);
          for (puVar12 = puVar12 + 2; puVar12 != puVar5; puVar12 = puVar12 + 1) {
            (**(code **)(*(long *)*puVar12 + 0x90))(uVar17);
          }
        }
      }
    }
    if (plVar16 != (long *)0x0) {
      lVar10 = plVar16[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar2 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    lVar10 = FUN_009bb6f0(*(undefined8 *)(param_2 + 8),&local_f0);
    if (lVar10 != 0) {
      lVar14 = *(long *)(lVar10 + 0x58);
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_009a02b8;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = *piVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    *param_1 = lVar10;
    if (local_f0 != (long *)0x0) {
      lVar10 = local_f0[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar2 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))();
      }
    }
  }
  return;
}


