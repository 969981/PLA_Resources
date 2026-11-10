/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef27dc; name: FUN_01ef27dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ef27dc(long *param_1,void *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *unaff_x19;
  long *unaff_x22;
  long *plVar13;
  long *plVar14;
  char *unaff_x25;
  ulong unaff_x26;
  long *unaff_x28;
  long *local_238;
  undefined4 local_230 [4];
  long *local_220;
  long local_210;
  long local_208;
  long local_200;
  long lStack_1f8;
  char local_1f0 [136];
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  long *local_150;
  uint local_148;
  undefined4 uStack_144;
  uint local_140;
  undefined4 local_13c;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined1 local_134;
  undefined1 uStack_133;
  undefined2 local_132;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  long *local_120;
  char *pcStack_118;
  long local_110;
  long *plStack_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long *plStack_88;
  long local_80;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar6 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar6;
  plVar14 = *(long **)(lVar6 + 200);
  if (plVar14 != (long *)0x0) {
    unaff_x19 = (long *)plVar14[0xb];
    if ((undefined8 *)unaff_x19[3] == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (unaff_x19[2] == 0) {
      lVar6 = (*(code *)**(undefined8 **)unaff_x19[3])();
      unaff_x19[2] = lVar6;
    }
    piVar1 = (int *)((long)unaff_x19 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar6 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar6;
  plVar13 = *(long **)(*(long *)(lVar6 + 0x78) + 0x70);
  plVar7 = (long *)plVar13[0x36];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - ((ulong)plVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      plVar9 = (long *)((long)plVar7 - 1U & (ulong)param_1);
    }
    else {
      plVar9 = param_1;
      if (plVar7 <= param_1) {
        uVar10 = 0;
        if (plVar7 != (long *)0x0) {
          uVar10 = (ulong)param_1 / (ulong)plVar7;
        }
        plVar9 = (long *)((long)param_1 - uVar10 * (long)plVar7);
      }
    }
    plVar12 = *(long **)(plVar13[0x35] + (long)plVar9 * 8);
    if ((plVar12 != (long *)0x0) && (unaff_x19 = (long *)*plVar12, unaff_x19 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if ((long *)unaff_x19[1] == param_1) {
            if ((long *)unaff_x19[2] == param_1) goto LAB_01ef2988;
          }
          else if ((long *)((ulong)unaff_x19[1] & (long)plVar7 - 1U) != plVar9) break;
          unaff_x19 = (long *)*unaff_x19;
        } while (unaff_x19 != (long *)0x0);
      }
      else {
        do {
          plVar12 = (long *)unaff_x19[1];
          if (plVar12 == param_1) {
            if ((long *)unaff_x19[2] == param_1) goto LAB_01ef2988;
          }
          else {
            if (plVar7 <= plVar12) {
              uVar8 = 0;
              if (plVar7 != (long *)0x0) {
                uVar8 = (ulong)plVar12 / (ulong)plVar7;
              }
              plVar12 = (long *)((long)plVar12 - uVar8 * (long)plVar7);
            }
            if (plVar12 != plVar9) break;
          }
          unaff_x19 = (long *)*unaff_x19;
        } while (unaff_x19 != (long *)0x0);
      }
    }
  }
  goto LAB_01ef2ec8;
LAB_01ef2a8c:
  unaff_x19 = (long *)unaff_x28[4];
  unaff_x25 = (char *)unaff_x28[5];
  local_110 = unaff_x28[6];
  plVar13 = (long *)unaff_x28[7];
  local_120 = unaff_x19;
  pcStack_118 = unaff_x25;
  plStack_108 = plVar13;
  if (plVar13 == (long *)0x0) goto LAB_01ef2aa0;
  goto LAB_01ef2ecc;
LAB_01ef2988:
  param_1 = (long *)unaff_x19[7];
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  unaff_x26 = unaff_x19[0x14];
  unaff_x22 = (long *)unaff_x19[0x17];
  if (unaff_x22 == (long *)0x0) {
    uVar8 = plVar13[0x36];
  }
  else {
    (**(code **)(*unaff_x22 + 0x18))(unaff_x22);
    uVar8 = plVar13[0x36];
  }
  if (uVar8 != 0) {
    uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar8 - 1 & unaff_x26;
    }
    else {
      uVar11 = unaff_x26;
      if (uVar8 <= unaff_x26) {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = unaff_x26 / uVar8;
        }
        uVar11 = unaff_x26 - uVar11 * uVar8;
      }
    }
    plVar7 = *(long **)(plVar13[0x35] + uVar11 * 8);
    if ((plVar7 != (long *)0x0) && (unaff_x28 = (long *)*plVar7, unaff_x28 != (long *)0x0)) {
      local_238 = plVar14;
      if (uVar10 < 2) {
        do {
          if (unaff_x28[1] == unaff_x26) {
            if (unaff_x28[2] == unaff_x26) goto LAB_01ef2a8c;
          }
          else if ((unaff_x28[1] & uVar8 - 1) != uVar11) break;
          unaff_x28 = (long *)*unaff_x28;
        } while (unaff_x28 != (long *)0x0);
      }
      else {
        do {
          uVar10 = unaff_x28[1];
          if (uVar10 == unaff_x26) {
            if (unaff_x28[2] == unaff_x26) goto LAB_01ef2a8c;
          }
          else {
            if (uVar8 <= uVar10) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar10 / uVar8;
              }
              uVar10 = uVar10 - uVar4 * uVar8;
            }
            if (uVar10 != uVar11) break;
          }
          unaff_x28 = (long *)*unaff_x28;
        } while (unaff_x28 != (long *)0x0);
      }
    }
  }
LAB_01ef2ec8:
  FUN_01ef92e0();
LAB_01ef2ecc:
  (**(code **)(*plVar13 + 0x18))(plVar13);
LAB_01ef2aa0:
  local_a8 = unaff_x28[0x13];
  local_b8 = unaff_x28[0x11];
  local_c8 = unaff_x28[0xf];
  local_d8 = unaff_x28[0xd];
  local_e8 = unaff_x28[0xb];
  local_f8 = unaff_x28[9];
  local_100 = unaff_x28[8];
  local_f0 = unaff_x28[10];
  local_e0 = unaff_x28[0xc];
  local_d0 = unaff_x28[0xe];
  local_c0 = unaff_x28[0x10];
  local_b0 = unaff_x28[0x12];
  local_a0 = unaff_x28[0x14];
  local_98 = unaff_x28[0x15];
  local_90 = unaff_x28[0x16];
  plVar14 = (long *)unaff_x28[0x17];
  plStack_88 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  local_80 = unaff_x28[0x18];
  local_230[0] = 0;
  local_208 = 0;
  local_220 = (long *)&DAT_cbf29ce484222645;
  local_1f0[0x80] = 0;
  lStack_1f8 = _UNK_0388a138;
  local_200 = _DAT_0388a130;
  local_210 = 0;
  local_1f0[0] = '\0';
  local_1f0[1] = '\0';
  local_1f0[2] = '\0';
  local_1f0[3] = '\0';
  local_1f0[4] = '\0';
  local_1f0[5] = '\0';
  local_1f0[6] = '\0';
  local_1f0[7] = '\0';
  local_1f0[8] = '\0';
  local_1f0[9] = '\0';
  local_1f0[10] = '\0';
  local_1f0[0xb] = '\0';
  local_1f0[0xc] = '\0';
  local_1f0[0xd] = '\0';
  local_1f0[0xe] = '\0';
  local_1f0[0xf] = '\0';
  local_1f0[0x10] = '\0';
  local_1f0[0x11] = '\0';
  local_1f0[0x12] = '\0';
  local_1f0[0x13] = '\0';
  local_1f0[0x14] = '\0';
  local_1f0[0x15] = '\0';
  local_1f0[0x16] = '\0';
  local_1f0[0x17] = '\0';
  local_1f0[0x18] = '\0';
  local_1f0[0x19] = '\0';
  local_1f0[0x1a] = '\0';
  local_1f0[0x1b] = '\0';
  local_1f0[0x1c] = '\0';
  local_1f0[0x1d] = '\0';
  local_1f0[0x1e] = '\0';
  local_1f0[0x1f] = '\0';
  local_1f0[0x20] = '\0';
  local_1f0[0x21] = '\0';
  local_1f0[0x22] = '\0';
  local_1f0[0x23] = '\0';
  local_1f0[0x24] = '\0';
  local_1f0[0x25] = '\0';
  local_1f0[0x26] = '\0';
  local_1f0[0x27] = '\0';
  local_1f0[0x28] = '\0';
  local_1f0[0x29] = '\0';
  local_1f0[0x2a] = '\0';
  local_1f0[0x2b] = '\0';
  local_1f0[0x2c] = '\0';
  local_1f0[0x2d] = '\0';
  local_1f0[0x2e] = '\0';
  local_1f0[0x2f] = '\0';
  local_1f0[0x30] = '\0';
  local_1f0[0x31] = '\0';
  local_1f0[0x32] = '\0';
  local_1f0[0x33] = '\0';
  local_1f0[0x34] = '\0';
  local_1f0[0x35] = '\0';
  local_1f0[0x36] = '\0';
  local_1f0[0x37] = '\0';
  local_1f0[0x38] = '\0';
  local_1f0[0x39] = '\0';
  local_1f0[0x3a] = '\0';
  local_1f0[0x3b] = '\0';
  local_1f0[0x3c] = '\0';
  local_1f0[0x3d] = '\0';
  local_1f0[0x3e] = '\0';
  local_1f0[0x3f] = '\0';
  local_1f0[0x40] = '\0';
  local_1f0[0x41] = '\0';
  local_1f0[0x42] = '\0';
  local_1f0[0x43] = '\0';
  local_1f0[0x44] = '\0';
  local_1f0[0x45] = '\0';
  local_1f0[0x46] = '\0';
  local_1f0[0x47] = '\0';
  local_1f0[0x48] = '\0';
  local_1f0[0x49] = '\0';
  local_1f0[0x4a] = '\0';
  local_1f0[0x4b] = '\0';
  local_1f0[0x4c] = '\0';
  local_1f0[0x4d] = '\0';
  local_1f0[0x4e] = '\0';
  local_1f0[0x4f] = '\0';
  local_1f0[0x50] = '\0';
  local_1f0[0x51] = '\0';
  local_1f0[0x52] = '\0';
  local_1f0[0x53] = '\0';
  local_1f0[0x54] = '\0';
  local_1f0[0x55] = '\0';
  local_1f0[0x56] = '\0';
  local_1f0[0x57] = '\0';
  local_1f0[0x58] = '\0';
  local_1f0[0x59] = '\0';
  local_1f0[0x5a] = '\0';
  local_1f0[0x5b] = '\0';
  local_1f0[0x5c] = '\0';
  local_1f0[0x5d] = '\0';
  local_1f0[0x5e] = '\0';
  local_1f0[0x5f] = '\0';
  local_1f0[0x60] = '\0';
  local_1f0[0x61] = '\0';
  local_1f0[0x62] = '\0';
  local_1f0[99] = '\0';
  local_1f0[100] = '\0';
  local_1f0[0x65] = '\0';
  local_1f0[0x66] = '\0';
  local_1f0[0x67] = '\0';
  local_1f0[0x68] = '\0';
  local_1f0[0x69] = '\0';
  local_1f0[0x6a] = '\0';
  local_1f0[0x6b] = '\0';
  local_1f0[0x6c] = '\0';
  local_1f0[0x6d] = '\0';
  local_1f0[0x6e] = '\0';
  local_1f0[0x6f] = '\0';
  local_1f0[0x70] = '\0';
  local_1f0[0x71] = '\0';
  local_1f0[0x72] = '\0';
  local_1f0[0x73] = '\0';
  local_1f0[0x74] = '\0';
  local_1f0[0x75] = '\0';
  local_1f0[0x76] = '\0';
  local_1f0[0x77] = '\0';
  local_1f0[0x78] = '\0';
  local_1f0[0x79] = '\0';
  local_1f0[0x7a] = '\0';
  local_1f0[0x7b] = '\0';
  local_1f0[0x7c] = '\0';
  local_1f0[0x7d] = '\0';
  local_1f0[0x7e] = '\0';
  local_1f0[0x7f] = '\0';
  local_1f0[0x81] = '\x01';
  local_1f0[0x82] = '\x01';
  local_1f0[0x83] = '\0';
  local_1f0[0x84] = '\0';
  local_148 = local_148 & 0xffffff00;
  local_140 = local_140 & 0xffffff00;
  local_168 = &DAT_cbf29ce484222645;
  local_160 = &DAT_03996322;
  uStack_144 = 0x43340000;
  local_158 = 0;
  local_150 = (long *)0x0;
  local_13c = 0;
  uStack_138 = 0;
  uStack_136 = 1;
  local_134 = 0;
  uStack_130 = 0;
  uStack_12c = 1;
  uStack_12b = 0;
  strncpy(local_1f0,unaff_x25,0x80);
  uStack_138 = 0x101;
  local_210 = local_c0;
  lStack_1f8 = local_a8;
  local_208 = local_b8;
  local_200 = local_b0;
  uStack_12b = unaff_x26 == 0xf9793a8ec65c8a9c ||
               (unaff_x26 == 0x3bd33532768c9f56 ||
               (unaff_x26 == 0x3bd33432768c9da3 ||
               (unaff_x26 == 0xc13c0eefe9e22470 ||
               (unaff_x26 == 0xc13c0fefe9e22623 ||
               (unaff_x26 == 0xc13c10efe9e227d6 ||
               (unaff_x26 == 0xb6c695278cbddbf4 ||
               (unaff_x26 == 0xb6c698278cbde10d ||
               (unaff_x26 == 0x8b2ff543ad9cfd01 ||
               (unaff_x26 == 0x8b2ff243ad9cf7e8 ||
               (unaff_x26 == 0x6cc34b2c1b070c02 ||
               (unaff_x26 == 0x6cc34a2c1b070a4f ||
               (unaff_x26 == 0x1a4447091ecd74c2 || unaff_x26 == 0x1a4446091ecd730f))))))))))));
  local_220 = unaff_x19;
  FUN_01ef3618(&local_120,local_230);
  memcpy(param_2,local_230,0xc5);
  plVar7 = local_150;
  *(undefined1 **)((long)param_2 + 200) = local_168;
  *(undefined1 **)((long)param_2 + 0xd0) = local_160;
  *(undefined8 *)((long)param_2 + 0xd8) = local_158;
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x18))(local_150);
  }
  plVar9 = *(long **)((long)param_2 + 0xe0);
  *(long **)((long)param_2 + 0xe0) = plVar7;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  *(ulong *)((long)param_2 + 0xfe) =
       CONCAT17(uStack_12b,CONCAT16(uStack_12c,CONCAT42(uStack_130,local_132)));
  *(ulong *)((long)param_2 + 0xe8) = CONCAT44(uStack_144,local_148);
  *(ulong *)((long)param_2 + 0xf0) = CONCAT44(local_13c,local_140);
  *(ulong *)((long)param_2 + 0xf8) =
       CONCAT26(local_132,CONCAT15(uStack_133,CONCAT14(local_134,CONCAT22(uStack_136,uStack_138))));
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (unaff_x22 != (long *)0x0) {
    (**(code **)(*unaff_x22 + 0x20))(unaff_x22);
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (local_238 != (long *)0x0) {
    lVar6 = local_238[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_238 + 0x20))(local_238);
    }
  }
  return;
}


