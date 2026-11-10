/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130fa44; name: FUN_0130fa44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0130fa44(long param_1)

{
  long **pplVar1;
  long **pplVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  ushort uVar6;
  char cVar7;
  long lVar8;
  ushort *puVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long **pplVar15;
  long *plVar16;
  ushort *puVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  long lVar24;
  ushort *puVar25;
  undefined4 *puVar26;
  ushort *puVar27;
  ushort *puVar28;
  uint uVar29;
  long lVar30;
  long *plVar31;
  undefined8 uVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long **local_d0;
  long *local_c8;
  undefined2 local_c0;
  undefined8 local_bc;
  uint local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long **local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  
  *(undefined2 *)(param_1 + 0xd59) = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  fVar35 = *(float *)(param_1 + 0xd60);
  if (*(char *)(param_1 + 0x1e08) == '\0') {
    fVar36 = *(float *)(param_1 + 0x1e30);
    fVar34 = *(float *)(param_1 + 0xd64);
    fVar35 = fVar35 + (fVar35 - fVar35) * fVar36;
    fVar37 = fVar34 - fVar34;
  }
  else {
    fVar35 = fVar35 + *(float *)(param_1 + 0x1e28);
    fVar34 = *(float *)(param_1 + 0xd64) + *(float *)(param_1 + 0x1e2c);
    fVar37 = *(float *)(param_1 + 0x1e30);
    fVar35 = fVar35 + (fVar35 - fVar35) * fVar37;
    fVar36 = fVar34 - fVar34;
  }
  local_e0 = CONCAT44(fVar34 + fVar37 * fVar36,fVar35);
  uVar12 = FUN_01317a6c(param_1,&local_b0,&local_e0);
  local_bc = 0;
  local_b4 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_c0 = 0;
  local_d0 = (long **)0x0;
  local_c8 = (long *)0x0;
  uVar32 = *(undefined8 *)(param_1 + 8);
  local_70 = (long **)CONCAT44(local_70._4_4_,0x400);
  pplVar15 = (long **)FUN_00a246f0(&local_48,uVar32,&local_70);
  pplVar2 = local_d0;
  if (pplVar15 != (long **)0x0) {
    pplVar1 = pplVar15 + 10;
    do {
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar10) {
        *(int *)pplVar1 = *(int *)pplVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  local_d0 = (long **)0x0;
  if (pplVar2 != (long **)0x0) {
    plVar31 = (long *)(pplVar2 + 10);
    do {
      iVar13 = (int)*plVar31 + -1;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar10) {
        *(int *)plVar31 = iVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 == 0) {
      (**(code **)((long)*pplVar2 + 0x10))();
    }
  }
  local_70 = (long **)CONCAT44(local_70._4_4_,0x400);
  local_d0 = pplVar15;
  plVar16 = (long *)FUN_00a246f0(&local_48,uVar32,&local_70);
  plVar31 = local_c8;
  if (plVar16 != (long *)0x0) {
    plVar33 = plVar16 + 10;
    do {
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar10) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  local_c8 = (long *)0x0;
  if (plVar31 != (long *)0x0) {
    plVar33 = plVar31 + 10;
    do {
      iVar13 = (int)*plVar33 + -1;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar10) {
        *(int *)plVar33 = iVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar31 + 0x10))();
    }
  }
  local_e4 = 1;
  local_c8 = plVar16;
  if (uVar12 == 0xffffffff) goto LAB_0130fc6c;
  fVar35 = local_b0._4_4_ + 0.0;
  local_e0 = CONCAT44(fVar35,(undefined4)local_e0);
  uStack_d8 = CONCAT44(uVar12,(float)uStack_a8 + 0.0);
  if ((*(uint *)(param_1 + 0x16a0) <= uVar12) &&
     (uVar20 = *(uint *)(param_1 + 0x16a4), uVar12 <= uVar20)) {
LAB_01310318:
    if (uVar20 < uVar12) {
      uVar20 = *(uint *)(param_1 + 0x16a8);
LAB_01310324:
      if ((uVar12 < uVar20) || (*(uint *)(param_1 + 0x16ac) < uVar12)) goto LAB_0130fc6c;
      uVar19 = 4;
LAB_0130fc60:
      local_e0 = CONCAT44(fVar35,uVar19);
    }
    else {
      uVar19 = 2;
      if ((char)local_b0 != '\x02') {
        uVar19 = 3;
      }
      local_e0 = CONCAT44(fVar35,uVar19);
    }
LAB_0130fc68:
    local_e4 = 2;
    goto LAB_0130fc6c;
  }
  uVar20 = *(uint *)(param_1 + 0x16a8);
  if ((uVar20 <= uVar12) && (uVar12 <= *(uint *)(param_1 + 0x16ac))) {
    if (*(uint *)(param_1 + 0x16a0) <= uVar12) {
      uVar20 = *(uint *)(param_1 + 0x16a4);
      goto LAB_01310318;
    }
    goto LAB_01310324;
  }
  if (uVar12 == 0x2d) goto LAB_0130fc3c;
  if ((int)uVar12 < 0x2e) {
    if (uVar12 != 0) {
      if (uVar12 == 0x18) {
        uVar19 = 0xd;
      }
      else {
        if (0x13 < uVar12 - 0x19) {
          local_e0 = (ulong)(uint)fVar35 << 0x20;
          goto LAB_0130fc68;
        }
        uVar19 = 0xe;
      }
      local_e0 = CONCAT44(fVar35,uVar19);
      *(undefined1 *)(param_1 + 0xd5a) = 1;
      goto LAB_0130fc68;
    }
    uVar19 = 0xc;
    goto LAB_0130fc60;
  }
  iVar13 = *(int *)(*(long *)(param_1 + 0x5c0) + 0x84);
  plVar31 = _DAT_00000068;
  if (iVar13 == 5) {
    lVar21 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
    uVar20 = *(uint *)(lVar21 + 400);
    if (uVar20 != 0) {
      uVar23 = 0;
      piVar22 = (int *)(lVar21 + 0x20);
LAB_0130ff54:
      puVar4 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar22 + -4) != 0) {
        puVar4 = (undefined8 *)(*(long *)(piVar22 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar4 != &DAT_72837ff1f1cec6a2) || (*piVar22 != 10)) goto LAB_0131041c;
      if (((uint)uVar23 < 0x10) && (plVar16 = *(long **)(piVar22 + -2), plVar16 != (long *)0x0)) {
        lVar21 = plVar16[0xb];
        if (*(undefined8 **)(lVar21 + 0x18) != (undefined8 *)0x0) {
          if (*(long *)(lVar21 + 0x10) == 0) {
            uVar32 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
            *(undefined8 *)(lVar21 + 0x10) = uVar32;
          }
          piVar22 = (int *)(lVar21 + 0xc);
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar10) {
              *piVar22 = *piVar22 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar31 = (long *)plVar16[0xd];
          goto joined_r0x0131074c;
        }
        goto LAB_013107a0;
      }
    }
LAB_0130ff84:
    plVar16 = (long *)0x0;
joined_r0x0131074c:
    if (plVar31 != (long *)0x0) {
      plVar33 = plVar31 + 10;
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar10) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (plVar16 == (long *)0x0) {
LAB_0130ffc4:
      plVar16 = *(long **)(param_1 + 0x2c8);
    }
    else {
      lVar21 = plVar16[0xb];
      piVar22 = (int *)(lVar21 + 0xc);
      do {
        iVar13 = *piVar22;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar10) {
          *piVar22 = iVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 + -1 != 0) goto LAB_0130ffc4;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
      plVar16 = *(long **)(param_1 + 0x2c8);
    }
    if (plVar16 != (long *)0x0) {
      plVar33 = plVar16 + 10;
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar10) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (uVar12 - 0x2e < 5) {
      local_bc = CONCAT44(uVar12 - 0x2e,(undefined4)local_bc);
      local_e4 = 2;
      local_e0._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
      local_e0 = CONCAT44(local_e0._4_4_,0xb);
      local_b0._1_1_ = (char)((ulong)local_b0 >> 8);
      *(bool *)(param_1 + 0xd59) = local_b0._1_1_ == '\x01';
    }
    else {
      FUN_01317b74(param_1,&local_e4,&local_e0,&local_b0,uVar12 == 0x33);
    }
    if (plVar16 != (long *)0x0) {
      plVar33 = plVar16 + 10;
      do {
        iVar13 = (int)*plVar33 + -1;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar10) {
          *(int *)plVar33 = iVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    if (plVar31 != (long *)0x0) {
      plVar16 = plVar31 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar10) {
          *(int *)plVar16 = iVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 == 0) {
        lVar21 = *plVar31;
        goto LAB_0131004c;
      }
    }
  }
  else {
    if (iVar13 == 6) {
LAB_0130fc3c:
      FUN_01317b74(param_1,&local_e4,&local_e0,&local_b0,0);
      goto LAB_0130fc6c;
    }
    if (((long)iVar13 - 5U < 2) || (0x51 < uVar12)) goto LAB_0130fc6c;
    if (((0x4c < uVar12) && (uVar12 != 0x51)) || (uVar12 == 0x51)) goto LAB_0130fc3c;
    if (4 < uVar12 - 0x32) {
      if (uVar12 == 0x38) {
        uVar19 = 8;
      }
      else {
        if (uVar12 == 0x37) {
          uVar19 = 6;
          if (local_98 != 0) {
            uVar19 = 7;
          }
          goto LAB_0130fc60;
        }
        if (0x13 < uVar12 - 0x39) {
          if (uVar12 - 0x2e < 4) {
            local_bc = CONCAT44(iVar13,(undefined4)local_bc);
            local_e0 = CONCAT44(fVar35,10);
            *(bool *)(param_1 + 0xd59) = local_b0._1_1_ == '\x01';
            local_b4 = uVar12 - 0x2e;
            goto LAB_0130fc68;
          }
          goto LAB_0130fc3c;
        }
        uVar19 = 9;
      }
      local_e0 = CONCAT44(fVar35,uVar19);
      local_bc = (ulong)CONCAT14(local_90 != 0,(int)local_98);
      goto LAB_0130fc68;
    }
    lVar21 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
    uVar12 = *(uint *)(lVar21 + 400);
    if (uVar12 != 0) {
      uVar23 = 0;
      piVar22 = (int *)(lVar21 + 0x20);
LAB_013100e4:
      puVar4 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar22 + -4) != 0) {
        puVar4 = (undefined8 *)(*(long *)(piVar22 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar4 != &DAT_72837ff1f1cec6a2) || (*piVar22 != 10)) goto LAB_013105f0;
      if (0xf < (uint)uVar23) {
        plVar16 = (long *)0x0;
        goto LAB_01310118;
      }
      plVar16 = *(long **)(piVar22 + -2);
      if (plVar16 == (long *)0x0) goto LAB_01310118;
      lVar21 = plVar16[0xb];
      if (*(undefined8 **)(lVar21 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar21 + 0x10) == 0) {
          uVar32 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
          *(undefined8 *)(lVar21 + 0x10) = uVar32;
        }
        piVar22 = (int *)(lVar21 + 0xc);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar10) {
            *piVar22 = *piVar22 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_01310118:
        plVar31 = (long *)plVar16[0xd];
        goto joined_r0x0131011c;
      }
      goto LAB_013107a0;
    }
LAB_01310600:
    plVar16 = (long *)0x0;
joined_r0x0131011c:
    if (plVar31 != (long *)0x0) {
      plVar33 = plVar31 + 10;
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar10) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (plVar16 == (long *)0x0) {
LAB_01310154:
      plVar16 = *(long **)(param_1 + 0x2c8);
    }
    else {
      lVar21 = plVar16[0xb];
      piVar22 = (int *)(lVar21 + 0xc);
      do {
        iVar13 = *piVar22;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar10) {
          *piVar22 = iVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 + -1 != 0) goto LAB_01310154;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
      plVar16 = *(long **)(param_1 + 0x2c8);
    }
    if (plVar16 != (long *)0x0) {
      plVar33 = plVar16 + 10;
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar10) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    lVar21 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x130);
    uVar23 = local_98 & 0xffffffff;
    if (uVar23 < (ulong)((*(long *)(*(long *)(param_1 + 0x5c0) + 0x138) - lVar21 >> 3) *
                        -0x1111111111111111)) {
      puVar26 = (undefined4 *)(lVar21 + uVar23 * 0x78);
      puVar27 = (ushort *)(puVar26 + 0x16);
      uVar19 = *puVar26;
      lVar24 = *(long *)(param_1 + 0x1e00);
      if (*(char *)(lVar24 + 0x7c) != '\0') {
        uVar12 = (uint)*(ushort *)(lVar24 + 0x78);
        if (*(ushort *)(lVar24 + 0x78) == 0) {
          iVar13 = 0;
        }
        else {
          puVar25 = *(ushort **)(lVar24 + 0x58);
          iVar13 = 0;
          do {
            while( true ) {
              uVar6 = *puVar27;
              *puVar25 = uVar6;
              if (uVar6 == 0x10) break;
              if (uVar6 == 0) goto LAB_01310434;
              puVar25 = puVar25 + 1;
              puVar27 = puVar27 + 1;
              iVar13 = iVar13 + 1;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_01310588;
            }
            uVar6 = puVar27[1];
            uVar20 = uVar6 + 2;
            bVar10 = uVar12 < uVar20;
            uVar12 = uVar12 - uVar20;
            if (bVar10 || uVar12 == 0) {
              *puVar25 = 0;
              goto LAB_01310434;
            }
            uVar29 = uVar6 + 1;
            uVar18 = uVar29 & 7;
            puVar17 = puVar25 + 1;
            *puVar17 = uVar6;
            puVar9 = puVar27 + 1;
            puVar28 = puVar27;
            if (uVar18 != 0) {
              lVar8 = 0;
              do {
                lVar30 = lVar8;
                uVar29 = uVar29 - 1;
                uVar18 = uVar18 - 1;
                *(undefined2 *)((long)puVar25 + lVar30 + 4) =
                     *(undefined2 *)((long)puVar27 + lVar30 + 4);
                lVar8 = lVar30 + 2;
              } while (uVar18 != 0);
              puVar17 = (ushort *)((long)puVar25 + lVar30 + 4);
              puVar28 = (ushort *)((long)puVar27 + lVar30 + 2);
              puVar9 = puVar28 + 1;
              puVar25 = puVar17;
            }
            puVar27 = puVar9;
            if (6 < uVar6) {
              puVar25 = puVar17;
              do {
                puVar25[1] = puVar28[2];
                puVar25[2] = puVar27[2];
                puVar25[3] = puVar27[3];
                puVar25[4] = puVar27[4];
                puVar25[5] = puVar27[5];
                puVar25[6] = puVar27[6];
                puVar28 = puVar27 + 7;
                puVar25[7] = *puVar28;
                puVar27 = puVar27 + 8;
                uVar29 = uVar29 - 8;
                puVar25 = puVar25 + 8;
                *puVar25 = *puVar27;
              } while (uVar29 != 0);
            }
            iVar13 = uVar20 + iVar13;
          } while (uVar12 != 0);
LAB_01310588:
          if (iVar13 != 0) {
            iVar13 = iVar13 + -1;
            puVar25[-1] = 0;
          }
        }
LAB_01310434:
        *(short *)(lVar24 + 0x7a) = (short)iVar13;
      }
      if (local_d0 != (long **)0x0) {
        pplVar2 = local_d0 + 10;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
          if (bVar10) {
            *(int *)pplVar2 = *(int *)pplVar2 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (plVar16 != (long *)0x0) {
        plVar33 = plVar16 + 10;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar10) {
            *(int *)plVar33 = (int)*plVar33 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (plVar31 == (long *)0x0) {
        plVar33 = (long *)0x0;
      }
      else {
        plVar33 = plVar31 + 10;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar10) {
            *(int *)plVar33 = (int)*plVar33 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar33 = plVar31;
      }
      local_80 = 0xf285ca1470470a4;
      lVar21 = lVar21 + uVar23 * 0x78;
      local_78 = plVar31;
      local_70 = local_d0;
      local_48 = plVar16;
      FUN_013181c4(&local_70,&local_48,&local_78,&local_80,*(undefined8 *)(param_1 + 0x1e00),
                   *(undefined1 *)(lVar21 + 0x72),*(undefined1 *)(lVar21 + 0x73));
      if (plVar33 != (long *)0x0) {
        plVar3 = plVar33 + 10;
        do {
          iVar13 = (int)*plVar3 + -1;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar10) {
            *(int *)plVar3 = iVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
        }
      }
      if (local_48 != (long *)0x0) {
        plVar33 = local_48 + 10;
        do {
          iVar13 = (int)*plVar33 + -1;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar10) {
            *(int *)plVar33 = iVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (local_70 != (long **)0x0) {
        pplVar2 = local_70 + 10;
        do {
          iVar13 = *(int *)pplVar2;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
          if (bVar10) {
            *(int *)pplVar2 = iVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 + -1 == 0) {
          (*(code *)(*local_70)[2])();
        }
      }
      local_e0 = CONCAT44(local_e0._4_4_,5);
      local_c0 = (undefined2)uVar19;
      if (plVar16 != (long *)0x0) {
        plVar33 = plVar16 + 10;
        do {
          iVar13 = (int)*plVar33 + -1;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar10) {
            *(int *)plVar33 = iVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      if (plVar31 != (long *)0x0) {
        plVar16 = plVar31 + 10;
        do {
          iVar13 = (int)*plVar16 + -1;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar10) {
            *(int *)plVar16 = iVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
        }
      }
      goto LAB_0130fc68;
    }
    if (plVar16 != (long *)0x0) {
      plVar33 = plVar16 + 10;
      do {
        iVar13 = (int)*plVar33 + -1;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar10) {
          *(int *)plVar33 = iVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    if (plVar31 != (long *)0x0) {
      plVar16 = plVar31 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar10) {
          *(int *)plVar16 = iVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != 0) goto LAB_0130fc6c;
      lVar21 = *plVar31;
LAB_0131004c:
      (**(code **)(lVar21 + 0x10))(plVar31);
    }
  }
LAB_0130fc6c:
  lVar21 = *(long *)(param_1 + 0x5c0);
  *(undefined4 *)(lVar21 + 0x98) = local_e4;
  FUN_0131c59c(lVar21 + 0xa0,&local_e0);
  iVar13 = FUN_0131a338();
  if (iVar13 == 7) {
    iVar13 = 5;
  }
  iVar5 = *(int *)(*(long *)(param_1 + 0x5c0) + 0x84);
  iVar14 = FUN_0131c8b8(iVar5,iVar13,*(long *)(param_1 + 0x5c0) + 0xe4,1);
  *(bool *)(param_1 + 0xd5b) = iVar5 == iVar13 && iVar14 != 0;
  bVar11 = FUN_0131d0f4();
  *(byte *)(param_1 + 0xd58) = bVar11 & 1;
  plVar31 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar31 != (long *)0x0) {
    lVar21 = plVar31[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_013107a0;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar32 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar32;
    }
    piVar22 = (int *)(lVar21 + 0xc);
    do {
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar10) {
        *piVar22 = *piVar22 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  local_70 = &local_48;
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  uStack_68 = 0x8c9f4941309987eb;
  local_60 = "ShortcutInputX";
  uStack_58 = 0xe;
  FUN_00d6190c(plVar31,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar16 = local_48;
  if (plVar31 != (long *)0x0) {
    lVar21 = plVar31[0xb];
    piVar22 = (int *)(lVar21 + 0xc);
    do {
      iVar13 = *piVar22;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar10) {
        *piVar22 = iVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  if ((plVar16 != (long *)0x0) &&
     (cVar7 = *(char *)(param_1 + 0xd5b), *(char *)((long)plVar16 + 0xa2) != cVar7)) {
    *(char *)((long)plVar16 + 0xa2) = cVar7;
    (**(code **)(*plVar16 + 0x98))(plVar16,cVar7 != '\0');
  }
  plVar31 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar31 != (long *)0x0) {
    lVar21 = plVar31[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_013107a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar32 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar32;
    }
    piVar22 = (int *)(lVar21 + 0xc);
    do {
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar10) {
        *piVar22 = *piVar22 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  local_70 = &local_48;
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  uStack_68 = 0x8c9f484130998638;
  local_60 = "ShortcutInputY";
  uStack_58 = 0xe;
  FUN_00d6190c(plVar31,&local_70,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar16 = local_48;
  if (plVar31 != (long *)0x0) {
    lVar21 = plVar31[0xb];
    piVar22 = (int *)(lVar21 + 0xc);
    do {
      iVar13 = *piVar22;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar10) {
        *piVar22 = iVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  if ((plVar16 != (long *)0x0) &&
     (cVar7 = *(char *)(param_1 + 0xd58), *(char *)((long)plVar16 + 0xa2) != cVar7)) {
    *(char *)((long)plVar16 + 0xa2) = cVar7;
    (**(code **)(*plVar16 + 0x98))(plVar16,cVar7 != '\0');
  }
  FUN_01308e60(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x188),*(undefined1 *)(param_1 + 0xd58),
               1,*(undefined1 *)(param_1 + 0xd59),*(undefined1 *)(param_1 + 0xd5a),
               *(undefined1 *)(param_1 + 0xd5b));
  if (local_c8 != (long *)0x0) {
    plVar31 = local_c8 + 10;
    do {
      iVar13 = (int)*plVar31 + -1;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar10) {
        *(int *)plVar31 = iVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if (local_d0 != (long **)0x0) {
    pplVar2 = local_d0 + 10;
    do {
      iVar13 = *(int *)pplVar2;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
      if (bVar10) {
        *(int *)pplVar2 = iVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar13 + -1 == 0) {
      (*(code *)(*local_d0)[2])();
    }
  }
  return;
LAB_0131041c:
  uVar23 = uVar23 + 1;
  piVar22 = piVar22 + 6;
  if (uVar20 == uVar23) goto LAB_0130ff84;
  goto LAB_0130ff54;
LAB_013105f0:
  uVar23 = uVar23 + 1;
  piVar22 = piVar22 + 6;
  if (uVar12 == uVar23) goto LAB_01310600;
  goto LAB_013100e4;
}


