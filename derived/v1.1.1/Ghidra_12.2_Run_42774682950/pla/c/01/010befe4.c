/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010befe4; name: FUN_010befe4
 */


void FUN_010befe4(undefined8 *param_1,long *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  ushort uVar4;
  char cVar5;
  ushort *puVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  long lVar17;
  ushort *puVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 auStack_48 [2];
  long *local_40;
  undefined1 auStack_38 [8];
  
  local_40 = (long *)*param_2;
  if (local_40 != (long *)0x0) {
    lVar21 = local_40[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_010bf564;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_02c30a88(param_1,&local_40,param_3,1,0,1);
  if (local_40 != (long *)0x0) {
    lVar21 = local_40[0xb];
    piVar2 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  *param_1 = &PTR_FUN_041f0150;
  param_1[9] = &PTR_LAB_041f01f0;
  param_1[0x23] = 0;
  FUN_00220484(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x24] = &PTR_LAB_041f0220;
  param_1[0x25] = 0xff000000ff000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 2;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((long)param_1 + 0x173) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined2 *)((long)param_1 + 0x17b) = 0x101;
  *(undefined1 *)((long)param_1 + 0x17d) = 1;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((long)param_1 + 0x19a) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x34] = 0;
  param_1[0x3e] = 0;
  param_1[0x3a] = 0x350a3ae9c189000a;
  param_1[0x3b] = "PLAY_UI_MESSAGE";
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0xf;
  param_1[0x3d] = 0;
  FUN_010bf57c(param_1,DAT_041f0138,param_4 & 1);
  *(undefined4 *)((long)param_1 + 0x94) = 0x10000;
  param_1[0x10] = param_1 + 0x24;
  param_1[0x29] = param_1;
  param_1[0x30] = 0xffffffff00000000;
  lVar21 = FUN_00d48784(&local_58,param_1[1],&DAT_03a78b68);
  if (lVar21 != 0) {
    piVar2 = (int *)(lVar21 + 0x50);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)param_1[0x34];
  param_1[0x34] = 0;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 10;
    do {
      iVar11 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  param_1[0x34] = lVar21;
  lVar21 = FUN_00d48784(&local_58,param_1[1],&DAT_03a78b6c);
  if (lVar21 != 0) {
    piVar2 = (int *)(lVar21 + 0x50);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)param_1[0x35];
  param_1[0x35] = 0;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 10;
    do {
      iVar11 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  param_1[0x35] = lVar21;
  lVar21 = FUN_00d48784(&local_58,param_1[1],&DAT_03a78b70);
  if (lVar21 != 0) {
    piVar2 = (int *)(lVar21 + 0x50);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)param_1[0x36];
  param_1[0x36] = 0;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 10;
    do {
      iVar11 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  local_58 = param_1[1];
  param_1[0x36] = lVar21;
  local_4c = 1;
  auStack_48[0] = 1;
  lVar21 = FUN_010c2928(auStack_38,local_58,auStack_48,&local_4c,&local_58);
  if (lVar21 != 0) {
    lVar20 = *(long *)(lVar21 + 0x58);
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
LAB_010bf564:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar9 != (long *)0x0) {
    lVar20 = plVar9[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0x38] = lVar21;
  local_58 = CONCAT44(local_58._4_4_,0x800);
  lVar21 = FUN_00a246f0(auStack_48,param_1[1],&local_58);
  if (lVar21 != 0) {
    piVar2 = (int *)(lVar21 + 0x50);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)param_1[0x39];
  param_1[0x39] = 0;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 10;
    do {
      iVar11 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  param_1[0x39] = lVar21;
  puVar10 = *(undefined8 **)(param_1[0x36] + 0x58);
  *puVar10 = 0xabe0200010010;
  *(undefined2 *)(puVar10 + 1) = 0;
  lVar21 = param_1[0x36];
  if (*(char *)(lVar21 + 0x7c) != '\0') {
    uVar12 = (uint)*(ushort *)(lVar21 + 0x78);
    if (*(ushort *)(lVar21 + 0x78) == 0) {
      iVar11 = 0;
    }
    else {
      puVar13 = *(ushort **)(lVar21 + 0x58);
      iVar11 = 0;
      puVar14 = puVar13;
      do {
        while( true ) {
          uVar4 = *puVar14;
          *puVar13 = uVar4;
          if (uVar4 == 0x10) break;
          if (uVar4 == 0) goto LAB_010bf4b8;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
          iVar11 = iVar11 + 1;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_010bf4e4;
        }
        uVar4 = puVar14[1];
        uVar1 = uVar4 + 2;
        bVar7 = uVar12 < uVar1;
        uVar12 = uVar12 - uVar1;
        if (bVar7 || uVar12 == 0) {
          *puVar13 = 0;
          goto LAB_010bf4b8;
        }
        uVar16 = uVar4 + 1;
        uVar19 = uVar16 & 7;
        puVar18 = puVar13 + 1;
        *puVar18 = uVar4;
        puVar6 = puVar14 + 1;
        puVar15 = puVar14;
        if (uVar19 != 0) {
          lVar20 = 0;
          do {
            lVar17 = lVar20;
            uVar16 = uVar16 - 1;
            uVar19 = uVar19 - 1;
            *(undefined2 *)((long)puVar13 + lVar17 + 4) =
                 *(undefined2 *)((long)puVar14 + lVar17 + 4);
            lVar20 = lVar17 + 2;
          } while (uVar19 != 0);
          puVar18 = (ushort *)((long)puVar13 + lVar17 + 4);
          puVar15 = (ushort *)((long)puVar14 + lVar17 + 2);
          puVar6 = puVar15 + 1;
          puVar13 = puVar18;
        }
        puVar14 = puVar6;
        if (6 < uVar4) {
          puVar13 = puVar18;
          do {
            puVar13[1] = puVar15[2];
            puVar13[2] = puVar14[2];
            puVar13[3] = puVar14[3];
            puVar13[4] = puVar14[4];
            puVar13[5] = puVar14[5];
            puVar13[6] = puVar14[6];
            puVar15 = puVar14 + 7;
            puVar13[7] = *puVar15;
            puVar14 = puVar14 + 8;
            uVar16 = uVar16 - 8;
            puVar13 = puVar13 + 8;
            *puVar13 = *puVar14;
          } while (uVar16 != 0);
        }
        iVar11 = uVar1 + iVar11;
      } while (uVar12 != 0);
LAB_010bf4e4:
      if (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        puVar13[-1] = 0;
      }
    }
LAB_010bf4b8:
    *(short *)(lVar21 + 0x7a) = (short)iVar11;
    lVar21 = param_1[0x36];
  }
  *(uint *)(param_1 + 0x37) = 0x7f - (uint)*(ushort *)(lVar21 + 0x7a);
  return;
}


