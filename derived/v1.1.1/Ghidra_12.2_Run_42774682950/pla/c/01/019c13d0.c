/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c13d0; name: FUN_019c13d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_019c13d0(long *param_1,undefined8 param_2,char *param_3,undefined8 param_4,undefined1 *param_5,
            long param_6,undefined8 param_7,ulong param_8)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *******ppppppplVar9;
  long lVar10;
  long lVar11;
  long *******ppppppplVar12;
  undefined4 local_14c;
  undefined8 local_118;
  undefined8 local_110;
  long *******local_108;
  long *******local_100;
  long local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  long local_d0;
  long local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  if (*param_3 == '\0') {
    local_14c = 0;
  }
  else {
    lVar6 = 0;
    local_14c = 0;
    do {
      puVar5 = *(undefined1 **)(param_3 + lVar6 * 0x30 + 0x10);
      if ((puVar5 != &DAT_cbf29ce484222645) &&
         (*(undefined1 **)(param_3 + lVar6 * 0x30 + 0x18) != &DAT_cbf29ce484222645)) {
        if (puVar5 == param_5) {
          if (param_3[lVar6 * 0x30 + 0x30] == '\0') {
            lVar1 = param_6 + lVar6 * 0x20;
            uVar4 = FUN_019c2828(param_4,param_5,param_5,
                                 *(undefined1 **)(param_3 + lVar6 * 0x30 + 0x18),param_1,lVar1,
                                 lVar1 + 0x10,lVar1 + 0x18);
            param_8 = param_8 & 0xffffffff;
            if ((uVar4 & 1) != 0) {
              local_14c = 1;
            }
          }
        }
        else if ((param_8 & 1) != 0) {
          local_d0 = 0;
          local_a8 = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0x3f800000;
          local_d8 = 0;
          local_c8 = 0;
          local_b8 = 0x3ffffffffffffff;
          uStack_b0 = 0;
          local_a0 = (long *)0x0;
          local_90 = 0x3ffffffffffffff;
          uStack_88 = 0;
          local_f8 = 0;
          local_108 = (long *******)0x0;
          local_100 = (long *******)0x0;
          local_e8 = 0xfffffffffffffff;
          uStack_e0 = 0;
          local_118 = 0xe3bbef047a645a1d;
          local_110 = 0xb963d3bb4121f853;
          local_f0 = param_1;
          plStack_c0 = param_1;
          local_98 = param_1;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbec047a645504;
          local_110 = 0xb963d3bb4121f853;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbed047a6456b7;
          local_110 = 0xb963d3bb4121f853;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbea047a64519e;
          local_110 = 0xb963d3bb4121f853;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbeb047a645351;
          local_110 = 0xb963d3bb4121f853;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbe8047a644e38;
          local_110 = 0xb963d3bb4121f853;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbee047a64586a;
          FUN_019c3d58(&local_d0,&local_118,&local_108);
          plVar7 = local_f0;
          ppppppplVar12 = local_108;
          lVar1 = tpidr_el0;
          if (local_108 != (long *******)0x0) {
            local_100 = local_108;
            lVar11 = local_f8 - (long)local_108;
            uVar4 = (**(code **)(*local_f0 + 0xc0))(local_f0);
            if ((uVar4 & 1) != 0) {
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar1 + 0x38d480)) {
                FUN_02bcc824(plVar7,ppppppplVar12,lVar11,8);
                goto LAB_019c198c;
              }
            }
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar12,lVar11,8);
          }
LAB_019c198c:
          local_f8 = 0;
          local_e8 = 0xfffffffffffffff;
          uStack_e0 = 0;
          local_108 = (long *******)0x0;
          local_100 = (long *******)0x0;
          local_110 = 0x435893a13a3284d9;
          local_d8 = 0;
          local_118 = 0xe3bbee047a64586a;
          local_f0 = param_1;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbef047a645a1d;
          FUN_019c3d58(&local_d0,&local_118,&local_108);
          plVar7 = local_f0;
          ppppppplVar12 = local_108;
          if (local_108 != (long *******)0x0) {
            local_100 = local_108;
            lVar11 = local_f8 - (long)local_108;
            uVar4 = (**(code **)(*local_f0 + 0xc0))(local_f0);
            if ((uVar4 & 1) != 0) {
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar1 + 0x38d480)) {
                FUN_02bcc824(plVar7,ppppppplVar12,lVar11,8);
                goto LAB_019c1a84;
              }
            }
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar12,lVar11,8);
          }
LAB_019c1a84:
          local_f8 = 0;
          local_108 = (long *******)0x0;
          local_100 = (long *******)0x0;
          local_e8 = 0xfffffffffffffff;
          uStack_e0 = 0;
          local_d8 = 0;
          local_110 = 0x2670a8c083ef5abd;
          local_118 = 0xe3bbee047a64586a;
          local_f0 = param_1;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbec047a645504;
          FUN_019c3d58(&local_d0,&local_118,&local_108);
          plVar7 = local_f0;
          ppppppplVar12 = local_108;
          if (local_108 != (long *******)0x0) {
            local_100 = local_108;
            lVar11 = local_f8 - (long)local_108;
            uVar4 = (**(code **)(*local_f0 + 0xc0))(local_f0);
            if ((uVar4 & 1) != 0) {
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar1 + 0x38d480)) {
                FUN_02bcc824(plVar7,ppppppplVar12,lVar11,8);
                goto LAB_019c1b7c;
              }
            }
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar12,lVar11,8);
          }
LAB_019c1b7c:
          local_f8 = 0;
          local_108 = (long *******)0x0;
          local_100 = (long *******)0x0;
          local_d8 = 0;
          local_110 = 0xf36c3f92c86219b5;
          local_118 = 0xe3bbee047a64586a;
          local_e8 = 0xfffffffffffffff;
          uStack_e0 = 0;
          local_f0 = param_1;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbed047a6456b7;
          FUN_019c3d58(&local_d0,&local_118,&local_108);
          plVar7 = local_f0;
          ppppppplVar12 = local_108;
          if (local_108 != (long *******)0x0) {
            local_100 = local_108;
            lVar11 = local_f8 - (long)local_108;
            uVar4 = (**(code **)(*local_f0 + 0xc0))(local_f0);
            if ((uVar4 & 1) != 0) {
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar1 + 0x38d480)) {
                FUN_02bcc824(plVar7,ppppppplVar12,lVar11,8);
                goto LAB_019c1c70;
              }
            }
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar12,lVar11,8);
          }
LAB_019c1c70:
          local_f8 = 0;
          local_108 = (long *******)0x0;
          local_100 = (long *******)0x0;
          local_d8 = 0;
          local_110 = 0x5d96a1ad0b542c22;
          local_118 = 0xe3bbee047a64586a;
          local_e8 = 0xfffffffffffffff;
          uStack_e0 = 0;
          local_f0 = param_1;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbea047a64519e;
          FUN_019c3d58(&local_d0,&local_118,&local_108);
          plVar7 = local_f0;
          ppppppplVar12 = local_108;
          if (local_108 != (long *******)0x0) {
            local_100 = local_108;
            lVar11 = local_f8 - (long)local_108;
            uVar4 = (**(code **)(*local_f0 + 0xc0))(local_f0);
            if ((uVar4 & 1) != 0) {
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar1 + 0x38d480)) {
                FUN_02bcc824(plVar7,ppppppplVar12,lVar11,8);
                goto LAB_019c1d64;
              }
            }
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar12,lVar11,8);
          }
LAB_019c1d64:
          local_f8 = 0;
          local_108 = (long *******)0x0;
          local_100 = (long *******)0x0;
          local_d8 = 0;
          local_110 = 0x383ee8ebaf3948ec;
          local_118 = 0xe3bbee047a64586a;
          local_e8 = 0xfffffffffffffff;
          uStack_e0 = 0;
          local_f0 = param_1;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbeb047a645351;
          FUN_019c3d58(&local_d0,&local_118,&local_108);
          plVar7 = local_f0;
          ppppppplVar12 = local_108;
          if (local_108 != (long *******)0x0) {
            local_100 = local_108;
            lVar11 = local_f8 - (long)local_108;
            uVar4 = (**(code **)(*local_f0 + 0xc0))(local_f0);
            if ((uVar4 & 1) != 0) {
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar1 + 0x38d480)) {
                FUN_02bcc824(plVar7,ppppppplVar12,lVar11,8);
                goto LAB_019c1e58;
              }
            }
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar12,lVar11,8);
          }
LAB_019c1e58:
          local_f8 = 0;
          local_108 = (long *******)0x0;
          local_100 = (long *******)0x0;
          local_d8 = 0;
          local_110 = 0xb0039c9b461e0b6;
          local_118 = 0xe3bbee047a64586a;
          local_e8 = 0xfffffffffffffff;
          uStack_e0 = 0;
          local_f0 = param_1;
          FUN_019c3ad0(&local_108,&local_118);
          local_118 = 0xe3bbe8047a644e38;
          FUN_019c3d58(&local_d0,&local_118,&local_108);
          plVar7 = local_f0;
          ppppppplVar12 = local_108;
          if (local_108 != (long *******)0x0) {
            local_100 = local_108;
            lVar11 = local_f8 - (long)local_108;
            uVar4 = (**(code **)(*local_f0 + 0xc0))(local_f0);
            if ((uVar4 & 1) != 0) {
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar1 + 0x38d480)) {
                FUN_02bcc824(plVar7,ppppppplVar12,lVar11,8);
                goto LAB_019c1f40;
              }
            }
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar12,lVar11,8);
          }
LAB_019c1f40:
          local_e8 = 0x1fffffffffffffff;
          uStack_e0 = 0;
          local_f8 = 0;
          local_d8 = 0;
          local_108 = (long *******)&local_108;
          local_100 = (long *******)&local_108;
          local_f0 = param_1;
          uVar4 = FUN_019c42b8(param_1,param_2,param_4,param_5,
                               *(undefined8 *)(param_3 + lVar6 * 0x30 + 0x10),&local_108,&local_d0,0
                               ,param_6 + lVar6 * 0x20,param_7);
          plVar7 = local_f0;
          ppppppplVar12 = local_100;
          if ((uVar4 & 1) != 0) {
            local_14c = 1;
          }
          bVar2 = local_f8 == 0;
          local_f8 = 0;
          plVar8 = local_a0;
          if (bVar2) goto joined_r0x019c2158;
          (*local_100)[1] = (long *****)local_108[1];
          *local_108[1] = (long *****)*local_100;
          local_f8 = 0;
          if ((long ********)local_100 == &local_108) goto joined_r0x019c2158;
          ppppppplVar9 = (long *******)local_100[1];
          uVar4 = (**(code **)(*local_f0 + 0xc0))(local_f0);
          if ((uVar4 & 1) == 0) {
LAB_019c2024:
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar12,0x18,8);
            plVar7 = local_f0;
          }
          else {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_019c2024;
            FUN_02bcc824(plVar7,ppppppplVar12,0x18,8);
            plVar7 = local_f0;
          }
          local_f0 = plVar7;
          plVar8 = local_a0;
          if ((long ********)ppppppplVar9 == &local_108) goto joined_r0x019c2158;
          ppppppplVar12 = (long *******)ppppppplVar9[1];
          uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar4 & 1) == 0) {
LAB_019c20a8:
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar9,0x18,8);
            plVar7 = local_f0;
          }
          else {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_019c20a8;
            FUN_02bcc824(plVar7,ppppppplVar9,0x18,8);
            plVar7 = local_f0;
          }
          local_f0 = plVar7;
          plVar8 = local_a0;
          if ((long ********)ppppppplVar12 == &local_108) goto joined_r0x019c2158;
          ppppppplVar9 = (long *******)ppppppplVar12[1];
          uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar4 & 1) == 0) {
LAB_019c212c:
            (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar12,0x18,8);
            plVar7 = local_f0;
          }
          else {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_019c212c;
            FUN_02bcc824(plVar7,ppppppplVar12,0x18,8);
            plVar7 = local_f0;
          }
          while( true ) {
            local_f0 = plVar7;
            plVar8 = local_a0;
            if ((long ********)ppppppplVar9 == &local_108) break;
            ppppppplVar12 = (long *******)ppppppplVar9[1];
            uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
            if ((uVar4 & 1) == 0) {
LAB_019c2314:
              (**(code **)(*plVar7 + 0x18))(plVar7,ppppppplVar9,0x18,8);
              ppppppplVar9 = ppppppplVar12;
              plVar7 = local_f0;
            }
            else {
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_019c2314;
              FUN_02bcc824(plVar7,ppppppplVar9,0x18,8);
              ppppppplVar9 = ppppppplVar12;
              plVar7 = local_f0;
            }
          }
joined_r0x019c2158:
          if (plVar8 != (long *)0x0) {
            do {
              plVar7 = (long *)*plVar8;
              lVar11 = plVar8[3];
              if (lVar11 != 0) {
                lVar10 = plVar8[5];
                plVar3 = (long *)plVar8[6];
                plVar8[4] = lVar11;
                uVar4 = (**(code **)(*plVar3 + 0xc0))(plVar3);
                if ((uVar4 & 1) != 0) {
                  if (*(char *)(lVar1 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar1 + 0x38d488) = 1;
                    *(undefined8 *)(lVar1 + 0x38d478) = 0;
                    *(undefined8 *)(lVar1 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar1 + 0x38d480)) {
                    FUN_02bcc824(plVar3,lVar11,lVar10 - lVar11,8);
                    goto LAB_019c157c;
                  }
                }
                (**(code **)(*plVar3 + 0x18))(plVar3,lVar11,lVar10 - lVar11,8);
              }
LAB_019c157c:
              plVar3 = local_98;
              uVar4 = (**(code **)(*local_98 + 0xc0))(local_98);
              if ((uVar4 & 1) == 0) goto LAB_019c15d8;
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_019c15d8;
              FUN_02bcc824(plVar3,plVar8,0x50,8);
              plVar8 = plVar7;
              if (plVar7 == (long *)0x0) break;
            } while( true );
          }
          plVar7 = plStack_c0;
          lVar11 = local_d0;
          local_d0 = 0;
          if (lVar11 != 0) {
            lVar10 = local_c8 << 3;
            uVar4 = (**(code **)(*plStack_c0 + 0xc0))(plStack_c0);
            if ((uVar4 & 1) != 0) {
              if (*(char *)(lVar1 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar1 + 0x38d488) = 1;
                *(undefined8 *)(lVar1 + 0x38d478) = 0;
                *(undefined8 *)(lVar1 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar1 + 0x38d480)) {
                FUN_02bcc824(plVar7,lVar11,lVar10,8);
                goto LAB_019c168c;
              }
            }
            (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,lVar10,8);
          }
LAB_019c168c:
          param_8 = param_8 & 0xffffffff;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
  }
  return local_14c;
LAB_019c15d8:
  (**(code **)(*plVar3 + 0x18))(plVar3,plVar8,0x50,8);
  plVar8 = plVar7;
  goto joined_r0x019c2158;
}


