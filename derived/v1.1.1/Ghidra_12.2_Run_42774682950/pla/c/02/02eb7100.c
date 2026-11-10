/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb7100; name: FUN_02eb7100
 */


/* WARNING: Removing unreachable block (ram,0x02eb7630) */
/* WARNING: Removing unreachable block (ram,0x02eb7754) */
/* WARNING: Removing unreachable block (ram,0x02eb7798) */
/* WARNING: Removing unreachable block (ram,0x02eb77b4) */

void FUN_02eb7100(float param_1,float param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  bool bVar7;
  float *pfVar8;
  long *plVar9;
  float *pfVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined4 local_348 [2];
  long local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  int *local_328;
  long local_320;
  long local_318;
  undefined4 local_310;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined2 local_214;
  ushort local_212;
  long local_210;
  ulong local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined1 auStack_1e8 [256];
  undefined1 *local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  byte local_c4;
  byte local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  long *local_a8;
  byte local_a0;
  long local_98;
  float local_90;
  undefined1 local_88;
  
  if ((int)param_3[4] != 0) {
    local_a0 = *param_4 == 0 | 0x1c;
    local_a8 = param_3;
    local_90 = param_2;
    (**(code **)(*param_3 + 0x10))();
    uVar4 = *(uint *)(param_3 + 4);
    if (uVar4 != 0) {
      lVar13 = param_3[3];
      if (*(long **)(lVar13 + 0x10) == (long *)0x0) {
        lVar14 = lVar13;
      }
      else {
        (**(code **)(**(long **)(lVar13 + 0x10) + 0x10))();
        uVar4 = *(uint *)(param_3 + 4);
        lVar14 = param_3[3];
      }
      if (lVar13 + 0x38 != lVar14 + (ulong)uVar4 * 0x38) {
        if (*(long **)(lVar13 + 0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar13 + 0x48) + 0x10))();
          lVar14 = param_3[3];
          uVar4 = *(uint *)(param_3 + 4);
        }
        for (lVar13 = lVar13 + 0x70; lVar13 != lVar14 + (ulong)uVar4 * 0x38; lVar13 = lVar13 + 0x38)
        {
          if (*(long **)(lVar13 + 0x10) != (long *)0x0) {
            (**(code **)(**(long **)(lVar13 + 0x10) + 0x10))();
            lVar14 = param_3[3];
            uVar4 = *(uint *)(param_3 + 4);
          }
        }
      }
      if (uVar4 != 0) {
        do {
          if (*(long *)(lVar14 + 0x10) != 0) {
            lVar13 = param_3[6];
            if (((*(char *)(lVar13 + 0x108) == '\0') ||
                (plVar2 = *(long **)(lVar14 + 0x30), plVar2 == (long *)0x0)) ||
               (*(uint *)(plVar2 + 1) == 0)) {
LAB_02eb722c:
              lVar13 = *(long *)(*(long *)(lVar14 + 0x10) + 0x78);
            }
            else {
              lVar6 = (ulong)*(uint *)(plVar2 + 1) << 3;
              pfVar8 = (float *)(*plVar2 + 4);
              pfVar10 = pfVar8;
              lVar11 = lVar6;
              do {
                if ((pfVar10[-1] <= param_1) && (param_1 <= *pfVar10)) {
                  bVar5 = false;
                  goto LAB_02eb737c;
                }
                lVar11 = lVar11 + -8;
                pfVar10 = pfVar10 + 2;
              } while (lVar11 != 0);
              bVar5 = true;
LAB_02eb737c:
              do {
                if ((pfVar8[-1] <= param_2) && (param_2 <= *pfVar8)) {
                  if (!bVar5) goto LAB_02eb722c;
                  bVar7 = false;
                  bVar5 = true;
                  plVar2 = *(long **)(lVar13 + 0x100);
                  goto joined_r0x02eb73a4;
                }
                lVar6 = lVar6 + -8;
                pfVar8 = pfVar8 + 2;
              } while (lVar6 != 0);
              if (bVar5) goto LAB_02eb722c;
              bVar5 = false;
              bVar7 = true;
              plVar2 = *(long **)(lVar13 + 0x100);
joined_r0x02eb73a4:
              if (plVar2 == (long *)0x0) goto LAB_02eb722c;
              do {
                while( true ) {
                  if ((((((*param_4 == 0) || (plVar2[1] == *param_4)) &&
                        (((int)param_4[1] == 0 || ((int)plVar2[2] == (int)param_4[1])))) &&
                       (((int)param_4[2] == 0 || ((int)plVar2[3] == (int)param_4[2])))) &&
                      (((char)param_4[3] == -1 || ((char)plVar2[4] == (char)param_4[3])))) &&
                     ((((char)param_4[4] == -1 || ((char)plVar2[5] == (char)param_4[4])) &&
                      ((param_4[5] == 0 || (plVar2[6] == param_4[5])))))) break;
LAB_02eb73ec:
                  plVar2 = (long *)*plVar2;
                  if (plVar2 == (long *)0x0) goto LAB_02eb7684;
                }
                if (param_5 != (undefined8 *)0x0) {
                  uVar3 = (**(code **)*param_5)(param_5);
                  if ((uVar3 & 1) != 0) goto LAB_02eb73ec;
                }
                lVar13 = FUN_02eb5660(plVar2 + 0xb,*(undefined4 *)(lVar14 + 8),local_348);
                if ((lVar13 == 0) || ((char)local_348[0] == '\0')) goto LAB_02eb73ec;
                if (!bVar7 && !(bool)(bVar5 ^ 1)) {
                  iVar1 = *(int *)(lVar13 + 4) + -1;
                  *(int *)(lVar13 + 4) = iVar1;
                  if (iVar1 == 0) {
                    local_212 = local_212 & 0xfc00;
                    local_c4 = local_c4 & 0xfe;
                    local_340 = param_3[6];
                    local_338 = (undefined4)plVar2[1];
                    uStack_334 = (undefined4)((ulong)plVar2[1] >> 0x20);
                    local_320 = plVar2[8];
                    local_318 = plVar2[9];
                    local_328 = (int *)plVar2[7];
                    if (local_328 != (int *)0x0) {
                      *local_328 = *local_328 + 1;
                    }
                    local_2c8 = (undefined4)plVar2[10];
                    local_c0 = local_c0 & 0xf0 | 0xb;
                    plVar9 = *(long **)(lVar14 + 0x10);
                    local_b0 = 0;
                    local_b8 = 0x400000000;
                    local_c8 = 0;
                    local_d0 = 0;
                    local_d8 = 0;
                    local_e0 = 0;
                    local_e8 = (undefined1 *)0x0;
                    local_1f0 = 0;
                    uStack_1f8 = 0;
                    local_200 = 0;
                    local_208 = 0;
                    local_210 = 0;
                    local_214 = 0;
                    local_218 = 0;
                    local_220 = 0;
                    local_224 = 0;
                    local_22c = 0;
                    local_234 = 0;
                    local_238 = 0x3f800000;
                    uStack_240 = 0;
                    local_248 = 0;
                    uStack_250 = 0;
                    local_258 = 0;
                    uStack_260 = 0;
                    local_268 = 0;
                    uStack_270 = 0;
                    local_278 = 0;
                    uStack_280 = 0;
                    local_288 = 0;
                    uStack_290 = 0;
                    local_298 = 0;
                    uStack_2a0 = 0;
                    local_2a8 = 0;
                    local_2b0 = 0xff00;
                    uStack_2b4 = 0;
                    local_2b8 = 0;
                    uStack_2bc = 0;
                    local_2c4 = 0;
                    local_2cc = 0;
                    local_310 = 0;
                    local_348[0] = 0;
                    uStack_330 = &local_b8;
                    iVar1 = FUN_02ed2bb4(plVar9,local_348);
                    if (iVar1 == 1) {
                      (**(code **)(*plVar9 + 0x240))(plVar9,local_348);
                    }
                    if (local_210 != 0) {
                      local_208 = local_208 & 0xffffffff00000000;
                      (*DAT_0442d150)(0);
                      local_208 = local_208 & 0xffffffff;
                    }
                    local_210 = 0;
                    if (local_e8 != (undefined1 *)0x0) {
                      local_210 = 0;
                      local_e0 = local_e0 & 0xffffffff00000000;
                      if (auStack_1e8 != local_e8) {
                        FUN_02f59e70(0);
                      }
                      local_e0 = local_e0 & 0xffffffff;
                    }
                    local_e8 = (undefined1 *)0x0;
                    if (local_328 != (int *)0x0) {
                      FUN_02e771a8();
                      goto LAB_02eb750c;
                    }
                  }
                  goto LAB_02eb73ec;
                }
                if ((bVar5 || (bool)(bVar7 ^ 1)) ||
                   (iVar1 = *(int *)(lVar13 + 4), *(int *)(lVar13 + 4) = iVar1 + 1, iVar1 != 0))
                goto LAB_02eb73ec;
                uStack_330._4_4_ = uStack_330._4_4_ & 0xffffff00;
                local_320 = 0;
                local_348[0] = 0;
                local_340 = plVar2[1];
                local_338 = (undefined4)plVar2[2];
                uStack_334 = 0;
                uStack_330._0_4_ = 4;
                local_328 = (int *)((ulong)local_328 & 0xffffff0000000000);
                (**(code **)(**(long **)(lVar14 + 0x10) + 0x98))
                          (*(long **)(lVar14 + 0x10),local_348);
                FUN_02e83118(DAT_0440a128,*(undefined8 *)(lVar14 + 0x10),plVar2[1],(int)plVar2[2]);
LAB_02eb750c:
                plVar2 = (long *)*plVar2;
              } while (plVar2 != (long *)0x0);
LAB_02eb7684:
              lVar13 = *(long *)(*(long *)(lVar14 + 0x10) + 0x78);
            }
            if ((lVar13 != 0) && (0 < *(short *)(lVar13 + 0x90))) {
              local_98 = lVar14 + 0x18;
              local_88 = 0;
              (**(code **)(**(long **)(lVar14 + 0x10) + 0xf8))
                        (*(long **)(lVar14 + 0x10),&LAB_02eb7810,param_4,&local_a8);
            }
          }
          lVar14 = lVar14 + 0x38;
          uVar4 = *(uint *)(param_3 + 4);
        } while (lVar14 != param_3[3] + (ulong)uVar4 * 0x38);
        uVar12 = uVar4 - 1;
        if (0 < (int)uVar4) {
          lVar13 = (ulong)uVar12 * 0x38 + 0x10;
          plVar2 = *(long **)(param_3[3] + lVar13);
          while( true ) {
            if (plVar2 != (long *)0x0) {
              iVar1 = (**(code **)(*plVar2 + 0x18))();
              if (iVar1 == 0) {
                *(undefined8 *)(param_3[3] + lVar13) = 0;
              }
            }
            if ((int)uVar12 < 1) break;
            uVar12 = uVar12 - 1;
            lVar13 = lVar13 + -0x38;
            plVar2 = *(long **)(param_3[3] + lVar13);
          }
        }
      }
    }
    (**(code **)(*param_3 + 0x18))(param_3);
  }
  return;
}


