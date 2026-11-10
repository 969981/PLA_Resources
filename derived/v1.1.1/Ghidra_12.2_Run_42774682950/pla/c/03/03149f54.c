/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03149f54; name: FUN_03149f54
 */


/* WARNING: Removing unreachable block (ram,0x0314a1ec) */

void FUN_03149f54(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  size_t sVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  int iVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  char *pcVar27;
  ulong uVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong local_68;
  
  puVar6 = PTR_PTR_0434a080;
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x20);
    lVar30 = *(long *)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar2) {
      lVar26 = *(long *)(param_1 + 0x18);
      uVar15 = *(uint *)(param_1 + 0x20);
      FUN_032bd100(uVar2,0x50,*(uint *)(param_1 + 0x24),&local_68);
      uVar3 = *(uint *)(param_1 + 0x24);
      lVar7 = (**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_68,&local_68);
      if (0 < (int)uVar15) {
        lVar17 = lVar7;
        lVar16 = lVar26;
        uVar28 = (ulong)uVar15;
        do {
          FUN_03012aa0(lVar17,lVar16);
          uVar28 = uVar28 - 1;
          lVar16 = lVar16 + 0x50;
          lVar17 = lVar17 + 0x50;
        } while (uVar28 != 0);
        uVar28 = 0;
        do {
          plVar8 = *(long **)(lVar26 + uVar28 * 0x50 + 8);
          if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
            plVar9 = plVar8 + 2;
            do {
              lVar16 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          FUN_032c7b9c(lVar26 + uVar28 * 0x50);
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar15);
      }
      if (-1 < (int)uVar3) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,lVar26,((ulong)uVar3 & 0x3fffffff) * 0x50);
      }
      if (local_68 < 0x13ffffffb0) {
        uVar14 = (undefined4)(local_68 / 0x50);
      }
      else {
        uVar14 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0x24) = uVar14;
      *(long *)(param_1 + 0x18) = lVar7;
    }
    uVar15 = *(uint *)(param_1 + 0x20);
    plVar8 = (long *)(param_1 + 0x18);
    if ((int)uVar2 < (int)uVar15) {
      lVar7 = *plVar8;
      lVar26 = lVar7 + (long)(int)uVar15 * 0x50;
      do {
        plVar9 = *(long **)(lVar26 + -0x48);
        lVar26 = lVar26 + -0x50;
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar11 = plVar9 + 2;
          do {
            lVar16 = *plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        FUN_032c7b9c(lVar26);
      } while (lVar26 != lVar7 + (long)(int)uVar2 * 0x50);
      uVar15 = *(uint *)(param_1 + 0x20);
    }
    lVar7 = *plVar8;
    if ((int)uVar2 <= (int)uVar15) {
      uVar15 = uVar2;
    }
    if ((lVar7 != lVar30) && (0 < (int)uVar15)) {
      uVar28 = (ulong)uVar15;
      lVar26 = lVar30;
      do {
        FUN_03012b94(lVar7,lVar26);
        uVar28 = uVar28 - 1;
        lVar7 = lVar7 + 0x50;
        lVar26 = lVar26 + 0x50;
      } while (uVar28 != 0);
      lVar7 = *plVar8;
    }
    iVar23 = uVar2 - uVar15;
    if (0 < iVar23) {
      lVar7 = lVar7 + (long)(int)uVar15 * 0x50;
      lVar30 = lVar30 + (long)(int)uVar15 * 0x50;
      do {
        FUN_03012aa0(lVar7,lVar30);
        iVar23 = iVar23 + -1;
        lVar7 = lVar7 + 0x50;
        lVar30 = lVar30 + 0x50;
      } while (iVar23 != 0);
    }
    *(uint *)(param_1 + 0x20) = uVar2;
  }
  puVar6 = PTR_PTR_0434a080;
  if (param_2 == param_1) goto LAB_0314a5cc;
  uVar2 = *(uint *)(param_2 + 0x30);
  puVar29 = *(undefined8 **)(param_2 + 0x28);
  puVar25 = *(undefined8 **)(param_1 + 0x28);
  puVar10 = puVar25;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < (int)uVar2) {
    uVar15 = *(uint *)(param_1 + 0x30);
    FUN_032bd100(uVar2,0x70,*(uint *)(param_1 + 0x34),&local_68);
    uVar3 = *(uint *)(param_1 + 0x34);
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_68,&local_68);
    if (0 < (int)uVar15) {
      if (uVar15 == 1) {
        lVar30 = 0;
      }
      else {
        lVar30 = 0;
        puVar21 = puVar25;
        puVar19 = puVar10;
        do {
          uVar22 = puVar21[0xd];
          lVar30 = lVar30 + 2;
          puVar19[0xb] = puVar21[0xb];
          puVar19[0xd] = uVar22;
          uVar22 = puVar21[9];
          puVar19[7] = puVar21[7];
          puVar19[9] = uVar22;
          uVar22 = puVar21[5];
          puVar19[3] = puVar21[3];
          puVar19[5] = uVar22;
          puVar19[1] = puVar21[1];
          *puVar19 = *puVar21;
          uVar22 = puVar21[2];
          puVar19[4] = puVar21[4];
          puVar19[2] = uVar22;
          uVar22 = puVar21[6];
          puVar19[8] = puVar21[8];
          puVar19[6] = uVar22;
          uVar22 = puVar21[10];
          puVar19[0xc] = puVar21[0xc];
          puVar19[10] = uVar22;
          uVar22 = puVar21[0x1b];
          puVar19[0x19] = puVar21[0x19];
          puVar19[0x1b] = uVar22;
          uVar22 = puVar21[0x17];
          puVar19[0x15] = puVar21[0x15];
          puVar19[0x17] = uVar22;
          uVar22 = puVar21[0x13];
          puVar19[0x11] = puVar21[0x11];
          puVar19[0x13] = uVar22;
          puVar19[0xf] = puVar21[0xf];
          puVar19[0xe] = puVar21[0xe];
          uVar22 = puVar21[0x10];
          puVar19[0x12] = puVar21[0x12];
          puVar19[0x10] = uVar22;
          uVar22 = puVar21[0x14];
          puVar19[0x16] = puVar21[0x16];
          puVar19[0x14] = uVar22;
          uVar22 = puVar21[0x18];
          puVar19[0x1a] = puVar21[0x1a];
          puVar19[0x18] = uVar22;
          puVar19 = puVar19 + 0x1c;
          puVar21 = puVar21 + 0x1c;
        } while ((ulong)uVar15 - ((ulong)uVar15 & 1) != lVar30);
        if ((uVar15 & 1) == 0) goto LAB_0314a378;
      }
      puVar19 = puVar10 + lVar30 * 0xe;
      puVar21 = puVar25 + lVar30 * 0xe;
      uVar22 = puVar21[0xd];
      puVar19[0xb] = puVar21[0xb];
      puVar19[0xd] = uVar22;
      uVar22 = puVar21[9];
      puVar19[7] = puVar21[7];
      puVar19[9] = uVar22;
      uVar22 = puVar21[5];
      puVar19[3] = puVar21[3];
      puVar19[5] = uVar22;
      puVar19[1] = puVar21[1];
      *puVar19 = *puVar21;
      uVar22 = puVar21[2];
      puVar19[4] = puVar21[4];
      puVar19[2] = uVar22;
      uVar22 = puVar21[6];
      puVar19[8] = puVar21[8];
      puVar19[6] = uVar22;
      uVar22 = puVar21[10];
      puVar19[0xc] = puVar21[0xc];
      puVar19[10] = uVar22;
    }
LAB_0314a378:
    if (-1 < (int)uVar3) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar25,((ulong)uVar3 & 0x3fffffff) * 0x70);
    }
    if (local_68 < 0x1bffffff90) {
      uVar14 = (undefined4)(local_68 / 0x70);
    }
    else {
      uVar14 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x34) = uVar14;
    *(undefined8 **)(param_1 + 0x28) = puVar10;
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar15 = uVar3;
  if ((int)uVar2 <= (int)uVar3) {
    uVar15 = uVar2;
  }
  if ((puVar10 != puVar29) && (0 < (int)uVar15)) {
    uVar28 = (ulong)uVar15;
    puVar25 = puVar29;
    do {
      FUN_03017e54(puVar10,puVar25);
      uVar28 = uVar28 - 1;
      puVar10 = puVar10 + 0xe;
      puVar25 = puVar25 + 0xe;
    } while (uVar28 != 0);
    puVar10 = *(undefined8 **)(param_1 + 0x28);
  }
  if ((int)uVar3 < (int)uVar2) {
    puVar29 = puVar29 + (long)(int)uVar15 * 0xe;
    puVar10 = puVar10 + (long)(int)uVar15 * 0xe;
    uVar3 = uVar2 - uVar15 & 1;
    if (uVar2 != uVar15 + 1) {
      iVar23 = (uVar2 - uVar15) - uVar3;
      puVar25 = puVar10;
      puVar19 = puVar29;
      do {
        uVar22 = puVar19[0xd];
        puVar29 = puVar19 + 0x1c;
        puVar10 = puVar25 + 0x1c;
        puVar25[0xb] = puVar19[0xb];
        puVar25[0xd] = uVar22;
        uVar22 = puVar19[9];
        puVar25[7] = puVar19[7];
        puVar25[9] = uVar22;
        uVar22 = puVar19[5];
        puVar25[3] = puVar19[3];
        puVar25[5] = uVar22;
        puVar25[1] = puVar19[1];
        *puVar25 = *puVar19;
        uVar22 = puVar19[2];
        puVar25[4] = puVar19[4];
        puVar25[2] = uVar22;
        uVar22 = puVar19[6];
        puVar25[8] = puVar19[8];
        puVar25[6] = uVar22;
        uVar22 = puVar19[10];
        puVar25[0xc] = puVar19[0xc];
        puVar25[10] = uVar22;
        uVar22 = puVar19[0x1b];
        puVar25[0x19] = puVar19[0x19];
        puVar25[0x1b] = uVar22;
        uVar22 = puVar19[0x17];
        puVar25[0x15] = puVar19[0x15];
        puVar25[0x17] = uVar22;
        uVar22 = puVar19[0x13];
        puVar25[0x11] = puVar19[0x11];
        puVar25[0x13] = uVar22;
        puVar25[0xf] = puVar19[0xf];
        puVar25[0xe] = puVar19[0xe];
        uVar22 = puVar19[0x10];
        puVar25[0x12] = puVar19[0x12];
        puVar25[0x10] = uVar22;
        uVar22 = puVar19[0x14];
        puVar25[0x16] = puVar19[0x16];
        puVar25[0x14] = uVar22;
        uVar22 = puVar19[0x18];
        iVar23 = iVar23 + -2;
        puVar25[0x1a] = puVar19[0x1a];
        puVar25[0x18] = uVar22;
        puVar25 = puVar10;
        puVar19 = puVar29;
      } while (iVar23 != 0);
    }
    if (uVar3 != 0) {
      uVar22 = puVar29[0xd];
      puVar10[0xb] = puVar29[0xb];
      puVar10[0xd] = uVar22;
      uVar22 = puVar29[9];
      puVar10[7] = puVar29[7];
      puVar10[9] = uVar22;
      uVar22 = puVar29[5];
      puVar10[3] = puVar29[3];
      puVar10[5] = uVar22;
      puVar10[1] = puVar29[1];
      *puVar10 = *puVar29;
      uVar22 = puVar29[2];
      puVar10[4] = puVar29[4];
      puVar10[2] = uVar22;
      uVar22 = puVar29[6];
      puVar10[8] = puVar29[8];
      puVar10[6] = uVar22;
      uVar22 = puVar29[10];
      puVar10[0xc] = puVar29[0xc];
      puVar10[10] = uVar22;
    }
  }
  *(uint *)(param_1 + 0x30) = uVar2;
LAB_0314a5cc:
  puVar6 = PTR_PTR_0434a080;
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x40);
    lVar30 = *(long *)(param_2 + 0x38);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < (int)uVar2) {
      lVar26 = *(long *)(param_1 + 0x38);
      uVar15 = *(uint *)(param_1 + 0x40);
      uVar28 = (ulong)uVar15;
      FUN_032bd100(uVar2,0xb0,*(uint *)(param_1 + 0x44),&local_68);
      uVar3 = *(uint *)(param_1 + 0x44);
      lVar7 = (**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_68,&local_68);
      if (0 < (int)uVar15) {
        uVar24 = 0;
        do {
          lVar16 = *(long *)(lVar26 + uVar24 * 0xb0);
          *(long *)(lVar7 + uVar24 * 0xb0) = lVar16;
          if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
            plVar8 = (long *)(lVar16 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = *plVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar16 = lVar26 + uVar24 * 0xb0;
          uVar22 = *(undefined8 *)(lVar16 + 8);
          lVar17 = lVar7 + uVar24 * 0xb0;
          *(undefined8 *)(lVar17 + 0xf) = *(undefined8 *)(lVar16 + 0xf);
          *(undefined8 *)(lVar17 + 8) = uVar22;
          FUN_032c7b0c(lVar17 + 0x18,lVar16 + 0x18);
          uVar22 = *(undefined8 *)(lVar16 + 0x68);
          uVar14 = *(undefined4 *)(lVar16 + 0x70);
          *(undefined8 *)(lVar17 + 0x58) = *(undefined8 *)(lVar16 + 0x58);
          *(undefined8 *)(lVar17 + 0x68) = uVar22;
          uVar22 = *(undefined8 *)(lVar16 + 0x48);
          *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)(lVar16 + 0x38);
          *(undefined8 *)(lVar17 + 0x48) = uVar22;
          *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar16 + 0x28);
          uVar22 = *(undefined8 *)(lVar16 + 0x20);
          *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)(lVar16 + 0x30);
          *(undefined8 *)(lVar17 + 0x20) = uVar22;
          uVar22 = *(undefined8 *)(lVar16 + 0x40);
          *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)(lVar16 + 0x50);
          *(undefined8 *)(lVar17 + 0x40) = uVar22;
          uVar22 = *(undefined8 *)(lVar16 + 0x60);
          *(undefined4 *)(lVar17 + 0x70) = uVar14;
          *(undefined8 *)(lVar17 + 0x60) = uVar22;
          lVar16 = *(long *)(lVar16 + 0x78);
          *(long *)(lVar17 + 0x78) = lVar16;
          if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
            plVar8 = (long *)(lVar16 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = *plVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar16 = *(long *)(lVar26 + uVar24 * 0xb0 + 0x80);
          *(long *)(lVar7 + uVar24 * 0xb0 + 0x80) = lVar16;
          if ((lVar16 != 0) && (*(long *)(lVar16 + 8) != 0)) {
            plVar8 = (long *)(lVar16 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = *plVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar16 = lVar7 + uVar24 * 0xb0;
          lVar17 = lVar26 + uVar24 * 0xb0;
          uVar22 = *(undefined8 *)(lVar17 + 0x90);
          *(undefined8 *)(lVar16 + 0x88) = *(undefined8 *)(lVar17 + 0x88);
          *(undefined8 *)(lVar16 + 0x90) = uVar22;
          lVar17 = *(long *)(lVar17 + 0x98);
          *(long *)(lVar16 + 0x98) = lVar17;
          if ((lVar17 != 0) && (*(long *)(lVar17 + 8) != 0)) {
            plVar8 = (long *)(lVar17 + 0x10);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = *plVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar17 = uVar24 * 0xb0;
          uVar24 = uVar24 + 1;
          lVar16 = lVar7 + lVar17;
          lVar17 = lVar26 + lVar17;
          *(undefined1 *)(lVar16 + 0xa0) = *(undefined1 *)(lVar17 + 0xa0);
          *(undefined8 *)(lVar16 + 0xa4) = *(undefined8 *)(lVar17 + 0xa4);
        } while (uVar24 != uVar28);
        lVar16 = lVar26;
        do {
          FUN_02fff010(lVar16);
          uVar28 = uVar28 - 1;
          lVar16 = lVar16 + 0xb0;
        } while (uVar28 != 0);
      }
      if (-1 < (int)uVar3) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,lVar26,((ulong)uVar3 & 0x3fffffff) * 0xb0);
      }
      if (local_68 < 0x2bffffff50) {
        uVar14 = (undefined4)(local_68 / 0xb0);
      }
      else {
        uVar14 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0x44) = uVar14;
      *(long *)(param_1 + 0x38) = lVar7;
    }
    uVar15 = *(uint *)(param_1 + 0x40);
    plVar8 = (long *)(param_1 + 0x38);
    if ((int)uVar2 < (int)uVar15) {
      lVar26 = (long)(int)uVar15 * 0xb0 + *plVar8;
      lVar7 = (long)(int)uVar15 * -0xb0 + (long)(int)uVar2 * 0xb0;
      do {
        lVar26 = lVar26 + -0xb0;
        FUN_02fff010(lVar26);
        lVar7 = lVar7 + 0xb0;
      } while (lVar7 != 0);
      uVar15 = *(uint *)(param_1 + 0x40);
    }
    lVar7 = *plVar8;
    if ((int)uVar2 <= (int)uVar15) {
      uVar15 = uVar2;
    }
    if ((lVar7 != lVar30) && (0 < (int)uVar15)) {
      uVar28 = (ulong)uVar15;
      lVar26 = lVar30;
      do {
        FUN_03033dc0(lVar7,lVar26);
        puVar29 = (undefined8 *)(lVar26 + 0xa4);
        uVar28 = uVar28 - 1;
        lVar26 = lVar26 + 0xb0;
        *(undefined8 *)(lVar7 + 0xa4) = *puVar29;
        lVar7 = lVar7 + 0xb0;
      } while (uVar28 != 0);
      lVar7 = *plVar8;
    }
    if (0 < (int)(uVar2 - uVar15)) {
      iVar23 = 0;
      plVar8 = (long *)(lVar30 + (long)(int)uVar15 * 0xb0);
      plVar9 = (long *)(lVar7 + (long)(int)uVar15 * 0xb0);
      do {
        lVar30 = *plVar8;
        *plVar9 = lVar30;
        if ((lVar30 != 0) && (*(long *)(lVar30 + 8) != 0)) {
          plVar11 = (long *)(lVar30 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar30 = plVar8[1];
        *(undefined8 *)((long)plVar9 + 0xf) = *(undefined8 *)((long)plVar8 + 0xf);
        plVar9[1] = lVar30;
        FUN_032c7b0c(plVar9 + 3,plVar8 + 3);
        lVar7 = plVar8[0xd];
        lVar30 = plVar8[0xe];
        plVar9[0xb] = plVar8[0xb];
        plVar9[0xd] = lVar7;
        lVar7 = plVar8[9];
        plVar9[7] = plVar8[7];
        plVar9[9] = lVar7;
        plVar9[5] = plVar8[5];
        lVar7 = plVar8[4];
        plVar9[6] = plVar8[6];
        plVar9[4] = lVar7;
        lVar7 = plVar8[8];
        plVar9[10] = plVar8[10];
        plVar9[8] = lVar7;
        lVar7 = plVar8[0xc];
        *(int *)(plVar9 + 0xe) = (int)lVar30;
        plVar9[0xc] = lVar7;
        lVar30 = plVar8[0xf];
        plVar9[0xf] = lVar30;
        if ((lVar30 != 0) && (*(long *)(lVar30 + 8) != 0)) {
          plVar11 = (long *)(lVar30 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar30 = plVar8[0x10];
        plVar9[0x10] = lVar30;
        if ((lVar30 != 0) && (*(long *)(lVar30 + 8) != 0)) {
          plVar11 = (long *)(lVar30 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar30 = plVar8[0x12];
        plVar9[0x11] = plVar8[0x11];
        plVar9[0x12] = lVar30;
        lVar30 = plVar8[0x13];
        plVar9[0x13] = lVar30;
        if ((lVar30 != 0) && (*(long *)(lVar30 + 8) != 0)) {
          plVar11 = (long *)(lVar30 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(char *)(plVar9 + 0x14) = (char)plVar8[0x14];
        iVar23 = iVar23 + 1;
        *(undefined8 *)((long)plVar9 + 0xa4) = *(undefined8 *)((long)plVar8 + 0xa4);
        plVar8 = plVar8 + 0x16;
        plVar9 = plVar9 + 0x16;
      } while (iVar23 != uVar2 - uVar15);
    }
    *(uint *)(param_1 + 0x40) = uVar2;
  }
  puVar6 = PTR_PTR_0434a080;
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x50);
    lVar30 = *(long *)(param_2 + 0x48);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < (int)uVar2) {
      lVar26 = *(long *)(param_1 + 0x48);
      uVar15 = *(uint *)(param_1 + 0x50);
      FUN_032bd100(uVar2,0x30,*(uint *)(param_1 + 0x54),&local_68);
      uVar3 = *(uint *)(param_1 + 0x54);
      lVar7 = (**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_68,&local_68);
      if (0 < (int)uVar15) {
        puVar29 = (undefined8 *)(lVar26 + 0x20);
        puVar10 = (undefined8 *)(lVar7 + 0x28);
        uVar28 = (ulong)uVar15;
        do {
          puVar10[-5] = puVar29[-4];
          uVar22 = puVar29[-3];
          uVar20 = puVar29[-2];
          puVar29[-4] = 0;
          *(undefined2 *)(puVar10 + -2) = *(undefined2 *)(puVar29 + -1);
          puVar10[-4] = uVar22;
          puVar10[-3] = uVar20;
          puVar10[-1] = *puVar29;
          puVar25 = puVar29 + 1;
          *puVar29 = 0;
          uVar28 = uVar28 - 1;
          puVar29 = puVar29 + 6;
          *puVar10 = *puVar25;
          puVar10 = puVar10 + 6;
        } while (uVar28 != 0);
        uVar28 = 0;
        do {
          plVar8 = (long *)(lVar26 + uVar28 * 0x30);
          FUN_032c7b9c(plVar8 + 4);
          plVar8 = (long *)*plVar8;
          if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
            plVar9 = plVar8 + 2;
            do {
              lVar16 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar15);
      }
      if (-1 < (int)uVar3) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6,lVar26,((ulong)uVar3 & 0x3fffffff) * 0x30);
      }
      if (local_68 < 0xbffffffd0) {
        uVar14 = (undefined4)(local_68 / 0x30);
      }
      else {
        uVar14 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar14;
      *(long *)(param_1 + 0x48) = lVar7;
    }
    uVar15 = *(uint *)(param_1 + 0x50);
    plVar8 = (long *)(param_1 + 0x48);
    if ((int)uVar2 < (int)uVar15) {
      lVar7 = *plVar8;
      plVar9 = (long *)(lVar7 + (long)(int)uVar15 * 0x30);
      do {
        FUN_032c7b9c(plVar9 + -2);
        plVar9 = plVar9 + -6;
        plVar11 = (long *)*plVar9;
        if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
          plVar1 = plVar11 + 2;
          do {
            lVar26 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))();
          }
        }
      } while (plVar9 != (long *)(lVar7 + (long)(int)uVar2 * 0x30));
      uVar15 = *(uint *)(param_1 + 0x50);
    }
    lVar7 = *plVar8;
    if ((int)uVar2 <= (int)uVar15) {
      uVar15 = uVar2;
    }
    if ((lVar7 != lVar30) && (0 < (int)uVar15)) {
      uVar28 = 0;
      lVar26 = tpidr_el0;
      do {
        plVar11 = (long *)(lVar30 + uVar28 * 0x30);
        plVar1 = (long *)(lVar7 + uVar28 * 0x30);
        plVar12 = (long *)*plVar1;
        plVar9 = (long *)*plVar11;
        if (plVar12 != plVar9) {
          if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
            plVar9 = plVar9 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = *plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar12 = (long *)*plVar1;
            plVar9 = (long *)*plVar11;
          }
          *plVar1 = (long)plVar9;
          if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
            plVar9 = plVar12 + 2;
            do {
              lVar16 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar12 + 0x18))();
            }
          }
        }
        lVar16 = plVar11[1];
        lVar17 = plVar11[2];
        uVar24 = plVar1[4];
        *(short *)(plVar1 + 3) = (short)plVar11[3];
        plVar1[1] = lVar16;
        plVar1[2] = lVar17;
        pcVar27 = (char *)(plVar11[4] & 0xfffffffffffffffe);
        if ((char *)(uVar24 & 0xfffffffffffffffe) != pcVar27) {
          if (pcVar27 == (char *)0x0) {
            uVar18 = 0;
          }
          else {
            sVar13 = strlen(pcVar27);
            uVar3 = (int)sVar13 + 1;
            puVar29 = (undefined8 *)
                      (**(code **)(*(long *)puVar6 + 0x10))
                                (puVar6,(long)((sVar13 << 0x20) + 0x1100000000) >> 0x20,0);
            *puVar29 = puVar6;
            *(uint *)(puVar29 + 1) = uVar3;
            memcpy(puVar29 + 2,pcVar27,(ulong)uVar3);
            uVar18 = (ulong)(puVar29 + 2) | 1;
          }
          plVar1[4] = uVar18;
          if ((uVar24 & 1) != 0) {
            lVar16 = *(long *)(lVar26 + 0x38d490);
            if (lVar16 == 0) {
              lVar16 = FUN_0333d16c(0,1);
              *(long *)(lVar26 + 0x38d490) = lVar16;
            }
            plVar9 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
            *(undefined8 *)(uVar24 - 0x11) = 0;
            (**(code **)(*plVar9 + 0x18))
                      (plVar9,(undefined8 *)(uVar24 - 0x11),(long)*(int *)(uVar24 - 9) + 0x10);
          }
        }
        *(int *)(plVar1 + 5) = (int)plVar11[5];
        uVar28 = uVar28 + 1;
        *(undefined4 *)((long)plVar1 + 0x2c) = *(undefined4 *)((long)plVar11 + 0x2c);
      } while (uVar28 != uVar15);
      lVar7 = *plVar8;
    }
    if (0 < (int)(uVar2 - uVar15)) {
      iVar23 = 0;
      plVar8 = (long *)(lVar30 + (long)(int)uVar15 * 0x30);
      plVar9 = (long *)(lVar7 + (long)(int)uVar15 * 0x30);
      do {
        lVar30 = *plVar8;
        *plVar9 = lVar30;
        if ((lVar30 != 0) && (*(long *)(lVar30 + 8) != 0)) {
          plVar11 = (long *)(lVar30 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar30 = plVar8[1];
        lVar7 = plVar8[2];
        *(short *)(plVar9 + 3) = (short)plVar8[3];
        plVar9[1] = lVar30;
        plVar9[2] = lVar7;
        FUN_032c7b0c(plVar9 + 4,plVar8 + 4);
        iVar23 = iVar23 + 1;
        plVar9[5] = plVar8[5];
        plVar8 = plVar8 + 6;
        plVar9 = plVar9 + 6;
      } while (iVar23 != uVar2 - uVar15);
    }
    *(uint *)(param_1 + 0x50) = uVar2;
  }
  puVar6 = PTR_PTR_0434a080;
  pcVar27 = (char *)(*(ulong *)(param_2 + 0x58) & 0xfffffffffffffffe);
  uVar28 = *(ulong *)(param_1 + 0x58);
  if ((char *)(uVar28 & 0xfffffffffffffffe) != pcVar27) {
    if (pcVar27 == (char *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else {
      sVar13 = strlen(pcVar27);
      uVar2 = (int)sVar13 + 1;
      puVar29 = (undefined8 *)
                (**(code **)(*(long *)puVar6 + 0x10))
                          (puVar6,(long)((sVar13 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar29 = puVar6;
      *(uint *)(puVar29 + 1) = uVar2;
      memcpy(puVar29 + 2,pcVar27,(ulong)uVar2);
      *(ulong *)(param_1 + 0x58) = (ulong)(puVar29 + 2) | 1;
    }
    if ((uVar28 & 1) != 0) {
      lVar30 = tpidr_el0;
      lVar7 = *(long *)(lVar30 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar30 + 0x38d490) = lVar7;
      }
      plVar8 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      *(undefined8 *)(uVar28 - 0x11) = 0;
      (**(code **)(*plVar8 + 0x18))
                (plVar8,(undefined8 *)(uVar28 - 0x11),(long)*(int *)(uVar28 - 9) + 0x10);
    }
  }
  uVar22 = *(undefined8 *)(param_2 + 0x60);
  uVar20 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar20;
  *(undefined8 *)(param_1 + 0x60) = uVar22;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return;
}


