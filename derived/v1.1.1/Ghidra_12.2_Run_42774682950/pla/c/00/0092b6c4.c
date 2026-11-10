/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092b6c4; name: FUN_0092b6c4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0092b6c4(long param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  byte *pbVar20;
  long lVar21;
  long *plVar22;
  code *pcVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  ulong uVar31;
  ulong uVar32;
  undefined1 *unaff_x22;
  undefined1 *puVar33;
  undefined1 *puVar34;
  long *plVar35;
  long local_178;
  long lStack_170;
  long *local_168;
  undefined8 local_160;
  undefined8 local_158;
  ulong local_150;
  long *local_148;
  long *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  long local_110;
  undefined1 *local_108;
  long **pplStack_100;
  undefined8 local_f8;
  long *local_f0;
  code *local_e8;
  code *local_e0;
  long *local_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(int *)(param_1 + 200) == 0) {
    if (*(char *)(param_1 + 0xcc) == '\0') {
      return 0;
    }
    *(undefined4 *)(param_1 + 200) = 1;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    lVar21 = *(long *)(*(long *)(param_1 + 0x68) + 0x20);
    local_c8 = &LAB_0092cf4c;
    local_c0 = 0;
    local_f0 = (long *)&LAB_0092e344;
    local_e8 = FUN_0092e364;
    plVar15 = (long *)(lVar21 + 200);
    local_e0 = FUN_0092e368;
    local_d8 = (long *)&LAB_0092e37c;
    uVar25 = *(ulong *)(lVar21 + 0xd0);
    local_d0 = param_1;
    if (uVar25 != 0) {
      uVar26 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar26 < 2) {
        uVar27 = (ulong)((uint)uVar25 - 1) & 5;
      }
      else {
        uVar27 = 5;
        if (uVar25 < 6) {
          uVar2 = (uint)uVar25 & 0xff;
          uVar8 = 0;
          if ((uVar25 & 0xff) != 0) {
            uVar8 = 5 / uVar2;
          }
          uVar27 = (ulong)(5 - uVar8 * uVar2);
        }
      }
      plVar28 = *(long **)(*plVar15 + uVar27 * 8);
      if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
        if (uVar26 < 2) {
          do {
            if (plVar28[1] == 5) {
              if ((int)plVar28[2] == 5) goto LAB_0092bd80;
            }
            else if ((plVar28[1] & uVar25 - 1) != uVar27) break;
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
        else {
          do {
            uVar26 = plVar28[1];
            if (uVar26 == 5) {
              if ((int)plVar28[2] == 5) goto LAB_0092bd80;
            }
            else {
              if (uVar25 <= uVar26) {
                uVar31 = 0;
                if (uVar25 != 0) {
                  uVar31 = uVar26 / uVar25;
                }
                uVar26 = uVar26 - uVar31 * uVar25;
              }
              if (uVar26 != uVar27) break;
            }
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
      }
    }
    local_168 = *(long **)(lVar21 + 0x130);
    local_148 = (long *)0x0;
    local_178 = 0;
    lStack_170 = 0;
    local_128 = 0;
    local_118 = 0x3f800000;
    local_150 = local_150 & 0xffffffff00000000;
    local_120 = 0;
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,5);
    local_160 = 0x1c71c71c71c71c7;
    local_158 = 0;
    local_138 = 0x1c71c71c71c71c7;
    uStack_130 = 0;
    local_140 = local_168;
    uVar17 = FUN_0092d1d8(plVar15,&local_108);
    FUN_0092dbf0(uVar17,&local_178);
    plVar28 = local_140;
    if (local_148 != (long *)0x0) {
      unaff_x22 = &LAB_02bcbe54;
      lVar21 = tpidr_el0;
      plVar22 = local_148;
      do {
        while( true ) {
          plVar35 = (long *)*plVar22;
          pcVar23 = (code *)plVar22[5];
          if (pcVar23 != (code *)0x0) {
            plVar22[6] = 0;
            plVar22[7] = 0;
            plVar22[4] = 0;
            plVar22[5] = 0;
            (*pcVar23)(plVar22 + 8);
          }
          uVar25 = (**(code **)(*plVar28 + 0xc0))(plVar28);
          if ((uVar25 & 1) != 0) break;
LAB_0092c348:
          (**(code **)(*plVar28 + 0x18))(plVar28,plVar22,0xa0,0x10);
          plVar22 = plVar35;
          if (plVar35 == (long *)0x0) goto LAB_0092c28c;
        }
        if (*(char *)(lVar21 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar21 + 0x38d488) = 1;
          *(undefined8 *)(lVar21 + 0x38d478) = 0;
          *(undefined8 *)(lVar21 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar21 + 0x38d480) < 1) goto LAB_0092c348;
        FUN_02bcc824(plVar28,plVar22,0xa0,0x10);
        plVar22 = plVar35;
      } while (plVar35 != (long *)0x0);
    }
LAB_0092c28c:
    lVar21 = local_178;
    local_178 = 0;
    if (lVar21 != 0) {
      FUN_0092decc(&lStack_170);
    }
LAB_0092bd80:
    local_178 = CONCAT44(local_178._4_4_,5);
    plVar15 = (long *)FUN_0092d1d8(plVar15,&local_178);
    puVar34 = (undefined1 *)plVar15[1];
    if (puVar34 != (undefined1 *)0x0) {
      uVar25 = (long)puVar34 - ((ulong)puVar34 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      lVar21 = *plVar15;
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      puVar33 = (undefined1 *)0x0;
      if (1 < uVar25) goto LAB_0092be2c;
LAB_0092bdec:
      puVar30 = (undefined1 *)((ulong)puVar33 & (ulong)(puVar34 + 0x7fffffff));
LAB_0092bdf0:
      plVar28 = *(long **)(lVar21 + (long)puVar30 * 8);
      if (plVar28 != (long *)0x0) {
LAB_0092bdf8:
        plVar28 = (long *)*plVar28;
        if (plVar28 != (long *)0x0) {
          if (1 < uVar25) {
            do {
              puVar24 = (undefined1 *)plVar28[1];
              if (puVar24 == puVar33) {
                if (puVar33 == (undefined1 *)(ulong)*(uint *)(plVar28 + 2)) goto LAB_0092be20;
              }
              else {
                if (puVar34 <= puVar24) {
                  uVar26 = 0;
                  if (puVar34 != (undefined1 *)0x0) {
                    uVar26 = (ulong)puVar24 / (ulong)puVar34;
                  }
                  puVar24 = puVar24 + -(uVar26 * (long)puVar34);
                }
                if (puVar24 != puVar30) goto LAB_0092be48;
              }
              plVar28 = (long *)*plVar28;
              if (plVar28 == (long *)0x0) goto LAB_0092be48;
            } while( true );
          }
          do {
            if ((undefined1 *)plVar28[1] == puVar33) {
              if (puVar33 == (undefined1 *)(ulong)*(uint *)(plVar28 + 2)) goto LAB_0092be20;
            }
            else if ((undefined1 *)((ulong)plVar28[1] & (ulong)(puVar34 + -1)) != puVar30) break;
            plVar28 = (long *)*plVar28;
            if (plVar28 == (long *)0x0) break;
          } while( true );
        }
      }
LAB_0092be48:
      puVar30 = (undefined1 *)((ulong)puVar33 & 0xffffffff);
      iVar13 = (int)puVar33;
      if (uVar25 < 2) {
        unaff_x22 = (undefined1 *)((ulong)puVar30 & (ulong)(puVar34 + 0xffffffff));
LAB_0092be60:
        plVar28 = *(long **)(lVar21 + (long)unaff_x22 * 8);
      }
      else {
        unaff_x22 = puVar30;
        if (puVar30 < puVar34) goto LAB_0092be60;
        uVar26 = 0;
        if (puVar34 != (undefined1 *)0x0) {
          uVar26 = (ulong)puVar30 / (ulong)puVar34;
        }
        unaff_x22 = puVar30 + -(uVar26 * (long)puVar34);
        plVar28 = *(long **)(lVar21 + (long)unaff_x22 * 8);
      }
      if (plVar28 == (long *)0x0) goto LAB_0092be6c;
      if (uVar25 < 2) goto LAB_0092c404;
      goto LAB_0092c650;
    }
    puVar30 = (undefined1 *)0x0;
    puVar33 = (undefined1 *)0x0;
    iVar13 = 0;
    goto LAB_0092be6c;
  }
  switch(*(int *)(param_1 + 200)) {
  case 1:
    FUN_0092cc24(param_1);
    iVar13 = 2;
    goto LAB_0092bb44;
  case 2:
    if (*(long *)(*(long *)(param_1 + 0xa0) + 0x68) == 0) {
      local_f0 = (long *)0x0;
    }
    else {
      FUN_009c66e4(&local_f0);
      if (local_f0 != (long *)0x0) {
        lVar16 = local_f0[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        lVar21 = local_f0[0xd];
        do {
          iVar13 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_f0 + 0x20))();
        }
        if ((int)lVar21 != 3) {
          return 0;
        }
      }
    }
    if ((*(long *)(*(long *)(param_1 + 0xa8) + 0x68) != 0) &&
       (FUN_009c66e4(&local_f0), local_f0 != (long *)0x0)) {
      lVar16 = local_f0[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      lVar21 = local_f0[0xd];
      do {
        iVar13 = *piVar1;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))();
      }
      if ((int)lVar21 != 3) {
        return 0;
      }
    }
    bVar12 = *(int *)(param_1 + 0xb8) == 0;
    uVar19 = 3;
    uVar18 = 7;
    goto LAB_0092b828;
  case 3:
    FUN_0092ccf8(param_1);
    iVar13 = 4;
    goto LAB_0092bb44;
  case 4:
    if (*(long *)(param_1 + 0x70) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x70) + 0x68) == 0) {
        local_f0 = (long *)0x0;
      }
      else {
        FUN_009c66e4(&local_f0);
        if (local_f0 != (long *)0x0) {
          lVar16 = local_f0[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          lVar21 = local_f0[0xd];
          do {
            iVar13 = *piVar1;
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_f0 + 0x20))();
          }
          if ((int)lVar21 != 3) {
            return 0;
          }
        }
      }
      plVar15 = *(long **)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (plVar15 != (long *)0x0) {
        lVar21 = plVar15[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))();
        }
      }
    }
    uVar18 = 5;
    break;
  case 5:
    FUN_0092cd74(param_1);
    goto LAB_0092bb3c;
  case 6:
    uVar25 = FUN_0092cdf0(param_1);
    if ((uVar25 & 1) == 0) {
      return 0;
    }
    uVar18 = 7;
    break;
  case 7:
    DAT_04281018 = 0x3eb33333;
    DAT_0428101c = 0x3eb33333;
    DAT_0428102c = 0x3ecccccd;
    DAT_04281020 = 0x3e4ccccd;
    DAT_04281024 = 0x3d888889;
    DAT_04281028 = 3;
    local_f0 = (long *)0x933b984110c5ee2d;
    local_e8 = (code *)0x3a82ae8;
    local_e0 = (code *)0x1f;
    local_d8 = (long *)0x0;
    plVar15 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar15 + 0x10))(plVar15,&local_f0,&DAT_03a75748);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    uVar18 = *(undefined4 *)(param_1 + 0xb4);
    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28);
    uVar4 = *(undefined1 *)(param_1 + 0xb0);
    uVar5 = *(undefined1 *)(param_1 + 0xb1);
    uVar6 = *(undefined1 *)(param_1 + 0xc0);
    local_148 = (long *)0x0;
    local_140 = (long *)0x0;
    local_158 = 0;
    local_150 = 0;
    puVar34 = &DAT_cbf29ce484222645;
    local_168 = (long *)0x0;
    local_160 = 0;
    local_178 = 0;
    lStack_170 = 0;
    FUN_0099f36c(uVar17,&local_178,0x40,uVar18,uVar4);
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    snprintf((char *)&local_f0,0x80,"bin/effect/battle/sequence/%s",(char *)&local_178);
    if ((byte)local_f0 != 0) {
      pbVar20 = (byte *)((ulong)&local_f0 | 1);
      bVar3 = (byte)local_f0;
      do {
        puVar34 = (undefined1 *)(((ulong)puVar34 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar20;
        pbVar20 = pbVar20 + 1;
      } while (bVar3 != 0);
    }
    local_f8 = 0x7f;
    local_108 = puVar34;
    pplStack_100 = &local_f0;
    FUN_0099f554(&local_110,uVar17,&local_108,uVar4,uVar5,uVar18,1,1,uVar6);
    plVar15 = *(long **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (plVar15 != (long *)0x0) {
      lVar21 = plVar15[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x78) = local_110;
    plVar15 = (long *)(*(code *)**(undefined8 **)(local_110 + 0x50))
                                ((undefined8 *)(local_110 + 0x50));
    if ((*PTR_DAT_04379c68 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(PTR_DAT_04379c68);
      puVar11 = PTR_DAT_04379c80;
      if (iVar13 != 0) {
        if ((*PTR_DAT_04379c78 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(PTR_DAT_04379c78);
          puVar10 = PTR_DAT_043794d8;
          if (iVar13 != 0) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
              uVar17 = FUN_0087f8f0();
              *(undefined8 *)puVar10 = uVar17;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar11 = puVar10;
            __cxa_guard_release(PTR_DAT_04379c78);
          }
        }
        *(undefined **)PTR_DAT_04379c70 = puVar11;
        __cxa_guard_release(PTR_DAT_04379c68);
      }
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if (plVar15 == (long *)PTR_DAT_04379c70) {
        if (((*(long *)(local_110 + 0x78) != 0) &&
            (FUN_00a1eb8c(&local_f0), local_f0 != (long *)0x0)) &&
           (FUN_00ae05d8(local_f0,1), local_f0 != (long *)0x0)) {
          lVar21 = local_f0[0xb];
          piVar1 = (int *)(lVar21 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*local_f0 + 0x20))();
          }
        }
        break;
      }
    }
    goto LAB_0092bb3c;
  case 8:
    if (*(long *)(param_1 + 0x78) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x78) + 0x68) == 0) {
        local_f0 = (long *)0x0;
      }
      else {
        FUN_009c66e4(&local_f0);
        if (local_f0 != (long *)0x0) {
          lVar16 = local_f0[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          lVar21 = local_f0[0xd];
          do {
            iVar13 = *piVar1;
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_f0 + 0x20))();
          }
          if ((int)lVar21 != 3) {
            return 0;
          }
        }
      }
      plVar15 = *(long **)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (plVar15 != (long *)0x0) {
        lVar21 = plVar15[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))();
        }
      }
    }
    DAT_04281018 = 0x3e6b851f;
    DAT_0428101c = 0x3e4ccccd;
    DAT_0428102c = 0;
    uVar18 = 9;
    break;
  case 9:
    if (*(char *)(param_1 + 0xcd) == '\0') {
      FUN_0099e8c8(&local_f0,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28),
                   *(undefined1 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xb1),
                   *(undefined4 *)(param_1 + 0xb8));
      plVar15 = *(long **)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (plVar15 != (long *)0x0) {
        lVar21 = plVar15[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))();
        }
      }
      *(long **)(param_1 + 0x88) = local_f0;
      *(undefined1 *)(param_1 + 0xcd) = 1;
      iVar13 = *(int *)(param_1 + 200) + 1;
    }
    else {
      iVar13 = 10;
    }
    goto LAB_0092bb44;
  case 10:
    if (*(long *)(param_1 + 0x88) == 0) {
LAB_0092b894:
      lVar21 = *(long *)(param_1 + 0x90);
    }
    else {
      if (*(long *)(*(long *)(param_1 + 0x88) + 0x68) == 0) {
        local_f0 = (long *)0x0;
      }
      else {
        FUN_009c66e4(&local_f0);
        if (local_f0 != (long *)0x0) {
          lVar16 = local_f0[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          lVar21 = local_f0[0xd];
          do {
            iVar13 = *piVar1;
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_f0 + 0x20))();
          }
          if ((int)lVar21 != 3) {
            return 0;
          }
        }
      }
      plVar15 = *(long **)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (plVar15 == (long *)0x0) goto LAB_0092b894;
      lVar21 = plVar15[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 + -1 != 0) goto LAB_0092b894;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))();
      lVar21 = *(long *)(param_1 + 0x90);
    }
    if (lVar21 != 0) {
      if (*(long *)(lVar21 + 0x68) == 0) {
        local_f0 = (long *)0x0;
      }
      else {
        FUN_009c66e4(&local_f0);
        if (local_f0 != (long *)0x0) {
          lVar16 = local_f0[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          lVar21 = local_f0[0xd];
          do {
            iVar13 = *piVar1;
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_f0 + 0x20))();
          }
          if ((int)lVar21 != 3) {
switchD_0092b73c_default:
            return 0;
          }
        }
      }
      plVar15 = *(long **)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      if (plVar15 != (long *)0x0) {
        lVar21 = plVar15[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))();
        }
      }
    }
    bVar12 = *(char *)(param_1 + 0xc1) == '\0';
    uVar19 = 0xb;
    uVar18 = 0xd;
LAB_0092b828:
    if (!bVar12) {
      uVar18 = uVar19;
    }
    break;
  case 0xb:
    FUN_0092ced4(param_1);
LAB_0092bb3c:
    iVar13 = *(int *)(param_1 + 200) + 1;
    goto LAB_0092bb44;
  case 0xc:
    if (*(long *)(param_1 + 0x98) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x98) + 0x68) == 0) {
        local_f0 = (long *)0x0;
      }
      else {
        FUN_009c66e4(&local_f0);
        if (local_f0 != (long *)0x0) {
          lVar16 = local_f0[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          lVar21 = local_f0[0xd];
          do {
            iVar13 = *piVar1;
            cVar7 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_f0 + 0x20))();
          }
          if ((int)lVar21 != 3) {
            return 0;
          }
        }
      }
      plVar15 = *(long **)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = 0;
      if (plVar15 != (long *)0x0) {
        lVar21 = plVar15[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))();
        }
      }
    }
    uVar18 = 0xd;
    break;
  case 0xd:
    FUN_0092cc24(param_1);
    iVar13 = 0xe;
LAB_0092bb44:
    *(int *)(param_1 + 200) = iVar13;
    return 0;
  case 0xe:
    if (*(long *)(*(long *)(param_1 + 0xa0) + 0x68) == 0) {
      local_f0 = (long *)0x0;
    }
    else {
      FUN_009c66e4(&local_f0);
      if (local_f0 != (long *)0x0) {
        lVar16 = local_f0[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        lVar21 = local_f0[0xd];
        do {
          iVar13 = *piVar1;
          cVar7 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_f0 + 0x20))();
        }
        if ((int)lVar21 != 3) {
          return 0;
        }
      }
    }
    if ((*(long *)(*(long *)(param_1 + 0xa8) + 0x68) != 0) &&
       (FUN_009c66e4(&local_f0), local_f0 != (long *)0x0)) {
      lVar16 = local_f0[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      lVar21 = local_f0[0xd];
      do {
        iVar13 = *piVar1;
        cVar7 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))();
      }
      if ((int)lVar21 != 3) {
        return 0;
      }
    }
    uVar18 = 0xf;
    break;
  case 0xf:
    lVar21 = *(long *)(*(long *)(param_1 + 0x68) + 0x20);
    uVar2 = *(uint *)(param_1 + 0xd4);
    uVar25 = (ulong)uVar2;
    uVar26 = *(ulong *)(lVar21 + 0xd0);
    if ((uVar26 & uVar26 - 1) == 0) {
      plVar15 = *(long **)(*(long *)(lVar21 + 200) + (ulong)((int)uVar26 - 1U & uVar2) * 8);
      do {
        do {
          plVar15 = (long *)*plVar15;
        } while (plVar15[1] != uVar25);
      } while (*(uint *)(plVar15 + 2) != uVar2);
    }
    else {
      uVar27 = uVar25;
      if (uVar26 <= uVar25) {
        uVar27 = 0;
        if (uVar26 != 0) {
          uVar27 = uVar25 / uVar26;
        }
        uVar27 = uVar25 - uVar27 * uVar26;
      }
      plVar15 = *(long **)(*(long *)(lVar21 + 200) + uVar27 * 8);
      do {
        do {
          plVar15 = (long *)*plVar15;
        } while (plVar15[1] != uVar25);
      } while (*(uint *)(plVar15 + 2) != uVar2);
    }
    uVar26 = *(ulong *)((long)plVar15 + 0x20);
    uVar25 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
    uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar26 != 0) {
      uVar2 = *(uint *)(param_1 + 0xd0);
      uVar27 = (ulong)uVar2;
      if (uVar25 < 2) {
        uVar31 = (ulong)((int)uVar26 - 1U & uVar2);
      }
      else {
        uVar31 = uVar27;
        if (uVar26 <= uVar27) {
          uVar31 = 0;
          if (uVar26 != 0) {
            uVar31 = uVar27 / uVar26;
          }
          uVar31 = uVar27 - uVar31 * uVar26;
        }
      }
      puVar29 = *(undefined8 **)(*(long *)((long)plVar15 + 0x18) + uVar31 * 8);
      if ((puVar29 != (undefined8 *)0x0) && (plVar28 = (long *)*puVar29, plVar28 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar28[1] == uVar27) {
              if (*(uint *)(plVar28 + 2) == uVar2) goto LAB_0092bc2c;
            }
            else if ((plVar28[1] & uVar26 - 1) != uVar31) goto LAB_0092cc1c;
            plVar28 = (long *)*plVar28;
            plVar22 = (long *)0x0;
          } while (plVar28 != (long *)0x0);
        }
        else {
          do {
            uVar32 = plVar28[1];
            if (uVar32 == uVar27) {
              if (*(uint *)(plVar28 + 2) == uVar2) goto LAB_0092bc2c;
            }
            else {
              if (uVar26 <= uVar32) {
                uVar9 = 0;
                if (uVar26 != 0) {
                  uVar9 = uVar32 / uVar26;
                }
                uVar32 = uVar32 - uVar9 * uVar26;
              }
              if (uVar32 != uVar31) goto LAB_0092cc1c;
            }
            plVar28 = (long *)*plVar28;
            plVar22 = (long *)0x0;
          } while (plVar28 != (long *)0x0);
        }
        goto LAB_0092c90c;
      }
    }
LAB_0092cc1c:
    plVar22 = (long *)0x0;
    goto LAB_0092c90c;
  default:
    goto switchD_0092b73c_default;
  }
  *(undefined4 *)(param_1 + 200) = uVar18;
  return 1;
LAB_0092be20:
  puVar33 = puVar33 + 1;
  if (uVar25 < 2) goto LAB_0092bdec;
LAB_0092be2c:
  puVar30 = puVar33;
  if (puVar33 < puVar34) goto LAB_0092bdf0;
  uVar26 = 0;
  if (puVar34 != (undefined1 *)0x0) {
    uVar26 = (ulong)puVar33 / (ulong)puVar34;
  }
  puVar30 = puVar33 + -(uVar26 * (long)puVar34);
  plVar28 = *(long **)(lVar21 + (long)puVar30 * 8);
  if (plVar28 == (long *)0x0) goto LAB_0092be48;
  goto LAB_0092bdf8;
  while( true ) {
    puVar24 = (undefined1 *)plVar28[1];
    if (puVar24 != puVar30) {
      if (puVar34 <= puVar24) {
        uVar25 = 0;
        if (puVar34 != (undefined1 *)0x0) {
          uVar25 = (ulong)puVar24 / (ulong)puVar34;
        }
        puVar24 = puVar24 + -(uVar25 * (long)puVar34);
      }
      if (puVar24 != unaff_x22) goto LAB_0092be6c;
    }
    if ((int)plVar28[2] == iVar13) break;
LAB_0092c650:
    plVar28 = (long *)*plVar28;
    if (plVar28 == (long *)0x0) goto LAB_0092be6c;
  }
  goto LAB_0092bf60;
LAB_0092be6c:
  plVar28 = (long *)(**(code **)(*(long *)plVar15[7] + 0x10))((long *)plVar15[7],0xa0,0x10);
  if (plVar28 == (long *)0x0) {
    (**(code **)(*(long *)plVar15[7] + 0xb8))();
  }
  lVar21 = plVar15[7];
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar11 = PTR_DAT_04379528;
    if (iVar14 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar16 == 0) {
    *(int *)(plVar28 + 2) = iVar13;
    plVar28[4] = 0;
    plVar28[5] = 0;
    plVar28[6] = 0;
    plVar28[7] = 0;
    plVar28[8] = 0;
    plVar28[9] = 0;
    plVar28[10] = 0;
    plVar28[0xb] = 0;
    plVar28[0xc] = 0;
    plVar28[0xd] = 0;
    plVar28[0xe] = 0;
    plVar28[0xf] = 0;
    plVar28[0x10] = 0;
    plVar28[0x11] = 0;
    plVar28[0x12] = 0;
    plVar28[0x13] = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar21;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    *(int *)(plVar28 + 2) = iVar13;
    plVar28[4] = 0;
    plVar28[5] = 0;
    plVar28[6] = 0;
    plVar28[7] = 0;
    plVar28[8] = 0;
    plVar28[9] = 0;
    plVar28[10] = 0;
    plVar28[0xb] = 0;
    plVar28[0xc] = 0;
    plVar28[0xd] = 0;
    plVar28[0xe] = 0;
    plVar28[0xf] = 0;
    plVar28[0x10] = 0;
    plVar28[0x11] = 0;
    plVar28[0x12] = 0;
    plVar28[0x13] = 0;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  }
  *plVar28 = 0;
  plVar28[1] = (long)puVar30;
  if ((puVar34 == (undefined1 *)0x0) ||
     (*(float *)(plVar15 + 0xc) * (float)puVar34 < (float)(plVar15[0xb] + 1))) {
    uVar25 = (ulong)(puVar34 < (undefined1 *)0x3 || ((ulong)puVar34 & (ulong)(puVar34 + -1)) != 0) |
             (long)puVar34 << 1;
    uVar26 = (ulong)((float)(plVar15[0xb] + 1) / *(float *)(plVar15 + 0xc));
    if (uVar26 <= uVar25) {
      uVar26 = uVar25;
    }
    FUN_0092dfdc(plVar15,uVar26);
    puVar34 = (undefined1 *)plVar15[1];
    if (((ulong)puVar34 & (ulong)(puVar34 + -1)) == 0) {
      unaff_x22 = (undefined1 *)((ulong)((int)puVar34 - 1) & (ulong)puVar30);
    }
    else if (puVar30 < puVar34) {
      unaff_x22 = puVar30;
    }
    else {
      uVar25 = 0;
      if (puVar34 != (undefined1 *)0x0) {
        uVar25 = (ulong)puVar30 / (ulong)puVar34;
      }
      unaff_x22 = puVar30 + -(uVar25 * (long)puVar34);
    }
  }
  plVar22 = *(long **)(*plVar15 + (long)unaff_x22 * 8);
  if (plVar22 == (long *)0x0) {
    plVar22 = plVar15 + 6;
    *plVar28 = *plVar22;
    *plVar22 = (long)plVar28;
    *(long **)(*plVar15 + (long)unaff_x22 * 8) = plVar22;
    if (*plVar28 != 0) {
      puVar30 = *(undefined1 **)(*plVar28 + 8);
      if (((ulong)puVar34 & (ulong)(puVar34 + -1)) == 0) {
        puVar30 = (undefined1 *)((ulong)puVar30 & (ulong)(puVar34 + -1));
      }
      else if (puVar34 <= puVar30) {
        uVar25 = 0;
        if (puVar34 != (undefined1 *)0x0) {
          uVar25 = (ulong)puVar30 / (ulong)puVar34;
        }
        puVar30 = puVar30 + -(uVar25 * (long)puVar34);
      }
      plVar22 = (long *)(*plVar15 + (long)puVar30 * 8);
      goto LAB_0092c174;
    }
  }
  else {
    *plVar28 = *plVar22;
LAB_0092c174:
    *plVar22 = (long)plVar28;
  }
  plVar15[0xb] = plVar15[0xb] + 1;
  goto LAB_0092bf60;
LAB_0092bc2c:
  plVar22 = plVar28;
LAB_0092c90c:
  uVar27 = plVar22[1];
  if (uVar25 < 2) {
    uVar27 = uVar27 & uVar26 - 1;
  }
  else if (uVar26 <= uVar27) {
    uVar31 = 0;
    if (uVar26 != 0) {
      uVar31 = uVar27 / uVar26;
    }
    uVar27 = uVar27 - uVar31 * uVar26;
  }
  plVar28 = *(long **)(*(long *)((long)plVar15 + 0x18) + uVar27 * 8);
  do {
    plVar35 = plVar28;
    plVar28 = (long *)*plVar35;
  } while ((long *)*plVar35 != plVar22);
  if (plVar35 == (long *)((long)plVar15 + 0x48)) {
LAB_0092c944:
    if (*plVar22 != 0) {
      uVar31 = *(ulong *)(*plVar22 + 8);
      if (uVar25 < 2) {
        uVar31 = uVar31 & uVar26 - 1;
      }
      else if (uVar26 <= uVar31) {
        uVar32 = 0;
        if (uVar26 != 0) {
          uVar32 = uVar31 / uVar26;
        }
        uVar31 = uVar31 - uVar32 * uVar26;
      }
      if (uVar31 == uVar27) goto LAB_0092c950;
    }
    *(undefined8 *)(*(long *)((long)plVar15 + 0x18) + uVar27 * 8) = 0;
  }
  else {
    uVar31 = plVar35[1];
    if (uVar25 < 2) {
      uVar31 = uVar31 & uVar26 - 1;
    }
    else if (uVar26 <= uVar31) {
      uVar32 = 0;
      if (uVar26 != 0) {
        uVar32 = uVar31 / uVar26;
      }
      uVar31 = uVar31 - uVar32 * uVar26;
    }
    if (uVar31 != uVar27) goto LAB_0092c944;
  }
LAB_0092c950:
  if (*plVar22 != 0) {
    uVar31 = *(ulong *)(*plVar22 + 8);
    if (uVar25 < 2) {
      uVar31 = uVar31 & uVar26 - 1;
    }
    else if (uVar26 <= uVar31) {
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = uVar31 / uVar26;
      }
      uVar31 = uVar31 - uVar25 * uVar26;
    }
    if (uVar31 != uVar27) {
      *(long **)(*(long *)((long)plVar15 + 0x18) + uVar31 * 8) = plVar35;
    }
  }
  *plVar35 = *plVar22;
  *plVar22 = 0;
  *(long *)((long)plVar15 + 0x70) = *(long *)((long)plVar15 + 0x70) + -1;
  if (plVar22 != (long *)0x0) {
    pcVar23 = (code *)plVar22[5];
    if (pcVar23 != (code *)0x0) {
      plVar22[6] = 0;
      plVar22[7] = 0;
      plVar22[4] = 0;
      plVar22[5] = 0;
      (*pcVar23)(plVar22 + 8);
    }
    plVar15 = *(long **)((long)plVar15 + 0x50);
    uVar25 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar25 & 1) != 0) {
      lVar21 = tpidr_el0;
      if (*(char *)(lVar21 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar21 + 0x38d488) = 1;
        *(undefined8 *)(lVar21 + 0x38d478) = 0;
        *(undefined8 *)(lVar21 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar21 + 0x38d480)) {
        FUN_02bcc824(plVar15,plVar22,0xa0,0x10);
        goto LAB_0092ca04;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,plVar22,0xa0,0x10);
  }
LAB_0092ca04:
  *(undefined2 *)(param_1 + 0xb0) = 0x1f1f;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  return 0;
  while ((int)plVar28[2] != iVar13) {
LAB_0092c404:
    plVar28 = (long *)*plVar28;
    if ((plVar28 == (long *)0x0) ||
       ((undefined1 *)plVar28[1] != puVar30 &&
        (undefined1 *)((ulong)plVar28[1] & (ulong)(puVar34 + -1)) != unaff_x22)) goto LAB_0092be6c;
  }
LAB_0092bf60:
  pcVar23 = (code *)plVar28[5];
  if (pcVar23 != (code *)0x0) {
    plVar28[6] = 0;
    plVar28[7] = 0;
    plVar28[4] = 0;
    plVar28[5] = 0;
    (*pcVar23)(plVar28 + 8);
  }
  if (local_e0 != (code *)0x0) {
    (*local_e0)(&local_d0,plVar28 + 8);
    plVar28[5] = (long)local_e8;
    plVar28[7] = (long)local_d8;
    plVar28[6] = (long)local_e0;
    plVar28[4] = (long)local_f0;
  }
  pcVar23 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar23)(&local_d0);
  }
  *(ulong *)(param_1 + 0xd0) = (ulong)puVar33 | 0x500000000;
  return 1;
}


