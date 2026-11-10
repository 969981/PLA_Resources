/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f88a80; name: FUN_01f88a80
 */


/* WARNING: Removing unreachable block (ram,0x01f88f60) */
/* WARNING: Removing unreachable block (ram,0x01f88f64) */
/* WARNING: Removing unreachable block (ram,0x01f88f6c) */
/* WARNING: Removing unreachable block (ram,0x01f88f74) */
/* WARNING: Removing unreachable block (ram,0x01f896c4) */

void FUN_01f88a80(long *param_1,long param_2,long *param_3,undefined8 param_4,long *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  long **pplVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined4 *puVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long *unaff_x22;
  long *plVar18;
  undefined4 uVar19;
  long **local_288;
  undefined8 *local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  long *local_268;
  undefined8 *local_260;
  undefined8 local_258;
  undefined1 local_250;
  long *local_248;
  undefined8 *local_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined8 local_228;
  long *local_220;
  undefined8 *local_218;
  undefined8 uStack_210;
  long **local_208;
  long *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  long *local_198;
  undefined8 uStack_190;
  long *local_188;
  long *plStack_180;
  long *local_178;
  long *local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long *plStack_150;
  long *local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  long *local_128;
  long *plStack_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long local_f8;
  long *local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long **local_c8;
  long *local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  float local_98;
  long *local_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70 [2];
  
  local_88 = param_3;
  if (*(long *)(param_2 + 0x68) == 0) {
    local_90 = (long *)0x0;
  }
  else {
    FUN_00ca554c(&local_90);
  }
  plVar18 = local_90;
  local_f8 = 0;
  local_f0 = (long *)0x0;
  local_e8 = local_90[0x58];
  local_e0 = local_90[0x59];
  lStack_d8 = local_90[0x5a];
  plVar16 = &local_f8;
  local_d0 = local_90[0x5b];
  local_c8 = (long **)0x0;
  local_c0 = (long *)local_90[0x5d];
  local_b8 = local_90[0x5e];
  lStack_b0 = local_90[0x5f];
  local_a8 = local_90[0x60];
  local_a0 = 0;
  local_98 = *(float *)(local_90 + 0x62);
  FUN_018bbce8(&local_f8,local_90[0x57]);
  plVar18 = (long *)plVar18[0x5c];
  if (plVar18 != (long *)0x0) {
    do {
      plVar12 = local_f0;
      plVar16 = (long *)plVar18[2];
      if (local_f0 == (long *)0x0) {
LAB_01f88b8c:
        pplVar7 = (long **)(**(code **)(*local_c0 + 0x10))(local_c0,0xf0,8);
        if (pplVar7 == (long **)0x0) {
          (**(code **)(*local_c0 + 0xb8))();
        }
        FUN_01f8a674(&local_c0,pplVar7 + 2,plVar18 + 2);
        *pplVar7 = (long *)0x0;
        pplVar7[1] = plVar16;
        if ((plVar12 == (long *)0x0) || (local_98 * (float)plVar12 < (float)(local_a0 + 1))) {
          uVar10 = (ulong)(plVar12 < (long *)0x3 || ((ulong)plVar12 & (long)plVar12 - 1U) != 0) |
                   (long)plVar12 << 1;
          uVar15 = (ulong)((float)(local_a0 + 1) / local_98);
          if (uVar15 <= uVar10) {
            uVar15 = uVar10;
          }
          FUN_018bbce8(&local_f8,uVar15);
          plVar12 = local_f0;
          if (((ulong)local_f0 & (long)local_f0 - 1U) == 0) {
            unaff_x22 = (long *)((long)local_f0 - 1U & (ulong)plVar16);
          }
          else if (plVar16 < local_f0) {
            unaff_x22 = plVar16;
          }
          else {
            uVar10 = 0;
            if (local_f0 != (long *)0x0) {
              uVar10 = (ulong)plVar16 / (ulong)local_f0;
            }
            unaff_x22 = (long *)((long)plVar16 - uVar10 * (long)local_f0);
          }
        }
        plVar11 = *(long **)(local_f8 + (long)unaff_x22 * 8);
        if (plVar11 == (long *)0x0) {
          *pplVar7 = (long *)local_c8;
          *(long ****)(local_f8 + (long)unaff_x22 * 8) = &local_c8;
          local_c8 = pplVar7;
          if (*pplVar7 != (long *)0x0) {
            plVar11 = (long *)(*pplVar7)[1];
            if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
              plVar11 = (long *)((ulong)plVar11 & (long)plVar12 - 1U);
            }
            else if (plVar12 <= plVar11) {
              uVar10 = 0;
              if (plVar12 != (long *)0x0) {
                uVar10 = (ulong)plVar11 / (ulong)plVar12;
              }
              plVar11 = (long *)((long)plVar11 - uVar10 * (long)plVar12);
            }
            plVar11 = (long *)(local_f8 + (long)plVar11 * 8);
            goto LAB_01f88c34;
          }
        }
        else {
          *pplVar7 = (long *)*plVar11;
LAB_01f88c34:
          *plVar11 = (long)pplVar7;
        }
        local_a0 = local_a0 + 1;
      }
      else {
        uVar10 = (long)local_f0 - ((ulong)local_f0 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          unaff_x22 = (long *)((long)local_f0 - 1U & (ulong)plVar16);
        }
        else {
          unaff_x22 = plVar16;
          if (local_f0 <= plVar16) {
            uVar15 = 0;
            if (local_f0 != (long *)0x0) {
              uVar15 = (ulong)plVar16 / (ulong)local_f0;
            }
            unaff_x22 = (long *)((long)plVar16 - uVar15 * (long)local_f0);
          }
        }
        plVar11 = *(long **)(local_f8 + (long)unaff_x22 * 8);
        if (plVar11 == (long *)0x0) goto LAB_01f88b8c;
        if (uVar10 < 2) {
          do {
            plVar11 = (long *)*plVar11;
            if ((plVar11 == (long *)0x0) ||
               ((long *)plVar11[1] != plVar16 &&
                (long *)((ulong)plVar11[1] & (long)local_f0 - 1U) != unaff_x22)) goto LAB_01f88b8c;
          } while ((long *)plVar11[2] != plVar16);
        }
        else {
          do {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_01f88b8c;
            plVar14 = (long *)plVar11[1];
            if (plVar14 != plVar16) {
              if (local_f0 <= plVar14) {
                uVar10 = 0;
                if (local_f0 != (long *)0x0) {
                  uVar10 = (ulong)plVar14 / (ulong)local_f0;
                }
                plVar14 = (long *)((long)plVar14 - uVar10 * (long)local_f0);
              }
              if (plVar14 != unaff_x22) goto LAB_01f88b8c;
            }
          } while ((long *)plVar11[2] != plVar16);
        }
      }
      plVar18 = (long *)*plVar18;
    } while (plVar18 != (long *)0x0);
  }
  plVar12 = local_88;
  plVar18 = local_f0;
  local_288 = &local_88;
  if (local_f0 == (long *)0x0) {
LAB_01f88df0:
    FUN_01f8a9c8(&local_208,&local_f8,local_88,&local_288);
    if ((plVar18 == (long *)0x0) || (local_98 * (float)plVar18 < (float)(local_a0 + 1))) {
      uVar10 = (ulong)(plVar18 < (long *)0x3 || ((ulong)plVar18 & (long)plVar18 - 1U) != 0) |
               (long)plVar18 << 1;
      uVar15 = (ulong)((float)(local_a0 + 1) / local_98);
      if (uVar15 <= uVar10) {
        uVar15 = uVar10;
      }
      FUN_018bbce8(&local_f8,uVar15);
      plVar18 = local_f0;
      if (((ulong)local_f0 & (long)local_f0 - 1U) == 0) {
        plVar16 = (long *)((long)local_f0 - 1U & (ulong)plVar12);
      }
      else if (plVar12 < local_f0) {
        plVar16 = plVar12;
      }
      else {
        uVar10 = 0;
        if (local_f0 != (long *)0x0) {
          uVar10 = (ulong)plVar12 / (ulong)local_f0;
        }
        plVar16 = (long *)((long)plVar12 - uVar10 * (long)local_f0);
      }
    }
    plVar12 = *(long **)(local_f8 + (long)plVar16 * 8);
    if (plVar12 == (long *)0x0) {
      *local_208 = (long *)local_c8;
      local_c8 = local_208;
      *(long ****)(local_f8 + (long)plVar16 * 8) = &local_c8;
      if (*local_208 != (long *)0x0) {
        plVar16 = (long *)(*local_208)[1];
        if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
          plVar16 = (long *)((ulong)plVar16 & (long)plVar18 - 1U);
        }
        else if (plVar18 <= plVar16) {
          uVar10 = 0;
          if (plVar18 != (long *)0x0) {
            uVar10 = (ulong)plVar16 / (ulong)plVar18;
          }
          plVar16 = (long *)((long)plVar16 - uVar10 * (long)plVar18);
        }
        *(long ***)(local_f8 + (long)plVar16 * 8) = local_208;
      }
    }
    else {
      *local_208 = (long *)*plVar12;
      *plVar12 = (long)local_208;
    }
    local_a0 = local_a0 + 1;
    pplVar7 = local_208;
  }
  else {
    uVar10 = (long)local_f0 - ((ulong)local_f0 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      plVar16 = (long *)((long)local_f0 - 1U & (ulong)local_88);
    }
    else {
      plVar16 = local_88;
      if (local_f0 <= local_88) {
        uVar15 = 0;
        if (local_f0 != (long *)0x0) {
          uVar15 = (ulong)local_88 / (ulong)local_f0;
        }
        plVar16 = (long *)((long)local_88 - uVar15 * (long)local_f0);
      }
    }
    pplVar7 = *(long ***)(local_f8 + (long)plVar16 * 8);
    if (pplVar7 == (long **)0x0) goto LAB_01f88df0;
    if (uVar10 < 2) {
      do {
        pplVar7 = (long **)*pplVar7;
        if ((pplVar7 == (long **)0x0) ||
           (pplVar7[1] != local_88 && (long *)((ulong)pplVar7[1] & (long)local_f0 - 1U) != plVar16))
        goto LAB_01f88df0;
      } while (pplVar7[2] != local_88);
    }
    else {
      do {
        pplVar7 = (long **)*pplVar7;
        if (pplVar7 == (long **)0x0) goto LAB_01f88df0;
        plVar11 = pplVar7[1];
        if (plVar11 != local_88) {
          if (local_f0 <= plVar11) {
            uVar10 = 0;
            if (local_f0 != (long *)0x0) {
              uVar10 = (ulong)plVar11 / (ulong)local_f0;
            }
            plVar11 = (long *)((long)plVar11 - uVar10 * (long)local_f0);
          }
          if (plVar11 != plVar16) goto LAB_01f88df0;
        }
      } while (pplVar7[2] != local_88);
    }
  }
  local_270 = 0;
  local_258 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_250 = 0;
  local_238 = 0;
  local_230 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_208 = (long **)&DAT_cbf29ce484222645;
  local_200 = (long *)0x0;
  local_1e8 = (long *)&DAT_cbf29ce484222645;
  local_1e0 = (long *)0x0;
  local_1c8 = (long *)&DAT_cbf29ce484222645;
  local_1c0 = (long *)0x0;
  local_1a8 = 0;
  local_1a0 = (long *)0x0;
  local_198 = (long *)0x0;
  uStack_190 = 0;
  local_188 = (long *)&DAT_cbf29ce484222645;
  plStack_180 = (long *)0x0;
  local_178 = (long *)0x0;
  local_170 = (long *)&DAT_cbf29ce484222645;
  local_168 = (long *)0x0;
  local_160 = (long *)0x0;
  local_158 = (long *)&DAT_cbf29ce484222645;
  plStack_150 = (long *)0x0;
  local_148 = (long *)0x0;
  local_140 = (long *)&DAT_cbf29ce484222645;
  local_138 = (long *)0x0;
  local_130 = (long *)0x0;
  local_128 = (long *)&DAT_cbf29ce484222645;
  plStack_120 = (long *)0x0;
  local_118 = (long *)0x0;
  local_110 = (long *)&DAT_cbf29ce484222645;
  local_108 = (long *)0x0;
  local_100 = (long *)0x0;
  local_280 = (undefined8 *)0x0;
  uStack_278 = 0;
  local_260 = (undefined8 *)0x0;
  local_240 = (undefined8 *)0x0;
  local_228 = 0;
  local_218 = (undefined8 *)0x0;
  uStack_210 = 0;
  local_288 = (long **)pplVar7[4];
  local_268 = pplVar7[5];
  local_248 = pplVar7[6];
  local_220 = *(long **)(param_2 + 0x88);
  if (local_220 != (long *)0x0) {
    plVar18 = local_220 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_009630f4(&local_218,param_4);
  local_208 = local_288;
  FUN_00b636fc(&local_200,&local_280);
  local_1f0 = CONCAT71(local_1f0._1_7_,local_270);
  local_1e8 = local_268;
  FUN_00b636fc(&local_1e0,&local_260);
  local_1d0 = CONCAT71(local_1d0._1_7_,local_250);
  local_1c8 = local_248;
  FUN_00b636fc(&local_1c0,&local_240);
  plVar18 = local_1a0;
  local_1b0 = CONCAT71(local_1b0._1_7_,local_230);
  local_1a8 = local_228;
  if (local_220 != (long *)0x0) {
    plVar16 = local_220 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_1a0 = local_220;
  if (plVar18 != (long *)0x0) {
    plVar16 = plVar18 + 10;
    do {
      iVar6 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  FUN_009630f4(&local_198,&local_218);
  local_188 = pplVar7[0xc];
  plStack_180 = pplVar7[0xd];
  local_178 = pplVar7[0xe];
  local_170 = pplVar7[0xf];
  local_168 = pplVar7[0x10];
  local_160 = pplVar7[0x11];
  local_158 = pplVar7[0x12];
  plStack_150 = pplVar7[0x13];
  local_148 = pplVar7[0x14];
  local_140 = pplVar7[0x15];
  local_138 = pplVar7[0x16];
  local_130 = pplVar7[0x17];
  local_128 = pplVar7[0x18];
  plStack_120 = pplVar7[0x19];
  local_118 = pplVar7[0x1a];
  local_110 = pplVar7[0x1b];
  local_108 = pplVar7[0x1c];
  local_100 = pplVar7[0x1d];
  if (*(int *)(pplVar7 + 7) == 0) {
    puVar13 = (undefined4 *)((long)pplVar7 + 0x44);
LAB_01f890c8:
    uVar19 = *puVar13;
  }
  else {
    if (*(int *)(pplVar7 + 7) == 1) {
      puVar13 = (undefined4 *)((long)pplVar7 + 0x54);
      goto LAB_01f890c8;
    }
    uVar19 = 0;
  }
  local_1a8 = CONCAT44(uVar19,(undefined4)local_1a8);
  lVar17 = *param_5;
  plVar18 = *(long **)(param_2 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar18;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x410,0x10);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*plVar18 + 0xb8))(plVar18);
  }
  FUN_01f81fc0(plVar16,&local_208);
  plVar16[1] = (long)plVar18;
  plVar16[2] = (long)plVar16;
  plVar16[3] = 0x410;
  plVar16[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (plVar16 != (long *)0x0) {
    lVar8 = plVar16[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01f89a48;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar18 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar18 = plVar16 + 9;
  }
  (**(code **)(*plVar18 + 0xb8))(plVar18,lVar17);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_009ad580(&local_80,lVar17 + 0x318);
  (**(code **)(*plVar18 + 0xc0))(plVar18,&local_80);
  puVar4 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_70[0] = (long *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,local_70);
    }
  }
  (**(code **)(*plVar18 + 200))(plVar18,*(undefined1 *)(lVar17 + 0x33b));
  (**(code **)(*plVar18 + 0x90))(plVar18);
  local_70[0] = plVar16;
  FUN_02a4dad4(lVar17 + 0xf0,local_70);
  if (local_70[0] != (long *)0x0) {
    lVar17 = local_70[0][0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  *param_1 = (long)plVar16;
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_01f89a48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = local_218;
  if (local_218 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_218 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_218[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_80 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar17 + 0xd8,&local_80);
    }
  }
  puVar4 = local_240;
  if (local_220 != (long *)0x0) {
    plVar18 = local_220 + 10;
    do {
      iVar6 = (int)*plVar18 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *(int *)plVar18 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_220 + 0x10))();
      puVar4 = local_240;
    }
  }
  local_240 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_80 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar17 + 0xd8,&local_80);
    }
  }
  puVar4 = local_260;
  if (local_260 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_260 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_260[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_80 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar17 + 0xd8,&local_80);
    }
  }
  puVar4 = local_280;
  if (local_280 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_280 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_280[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_80 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar17 + 0xd8,&local_80);
    }
  }
  plVar18 = local_198;
  if (local_198 != (long *)0x0) {
    plVar16 = local_198 + 1;
    do {
      iVar6 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      local_198[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_288 = (long **)*plVar18;
      FUN_02a44274(lVar17 + 0xd8,&local_288);
    }
  }
  plVar18 = local_1c0;
  if (local_1a0 != (long *)0x0) {
    plVar16 = local_1a0 + 10;
    do {
      iVar6 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_1a0 + 0x10))();
      plVar18 = local_1c0;
    }
  }
  local_1c0 = plVar18;
  if (plVar18 != (long *)0x0) {
    plVar16 = plVar18 + 1;
    do {
      iVar6 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      plVar18[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_288 = (long **)*plVar18;
      FUN_02a44274(lVar17 + 0xd8,&local_288);
    }
  }
  plVar18 = local_1e0;
  if (local_1e0 != (long *)0x0) {
    plVar16 = local_1e0 + 1;
    do {
      iVar6 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      local_1e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_288 = (long **)*plVar18;
      FUN_02a44274(lVar17 + 0xd8,&local_288);
    }
  }
  plVar18 = local_200;
  if (local_200 != (long *)0x0) {
    plVar16 = local_200 + 1;
    do {
      iVar6 = (int)*plVar16 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      local_200[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_288 = (long **)*plVar18;
      FUN_02a44274(lVar17 + 0xd8,&local_288);
    }
  }
  FUN_01f8a768(&local_f8);
  if (local_90 != (long *)0x0) {
    lVar17 = local_90[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  return;
}


