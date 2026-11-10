/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2c538; name: FUN_02f2c538
 */


int FUN_02f2c538(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  byte bVar13;
  long lVar14;
  uint local_dc;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  long *local_c8 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  long *local_a8 [9];
  
  lVar14 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
  *(undefined8 *)(param_1 + 0x150) = 0x500000000;
  uVar4 = (*DAT_0442d138)(5,0xa0);
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  local_a8[0] = *(long **)(param_1 + 0x128);
  local_b8 = *(undefined8 *)(lVar14 + 0x240);
  local_b0 = *(undefined4 *)(lVar14 + 0x248);
  iVar3 = (**(code **)(*local_a8[0] + 0x60))();
  uVar2 = DAT_042ab258;
  if (iVar3 == 1) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x128) + 0xb8))();
    if ((uVar5 & 1) == 0) {
      puVar6 = (undefined8 *)(*DAT_0442d138)(5,0xf8);
      if (puVar6 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x138) = 0;
        return 0x34;
      }
      *(undefined4 *)(puVar6 + 0xf) = 0;
      *puVar6 = &PTR_LAB_042aca78;
      puVar6[1] = 0;
      puVar6[8] = 0x10000;
      puVar6[9] = 0;
      puVar6[0xe] = 0x3f80000000000000;
      *(undefined1 *)((long)puVar6 + 0x7e) = 1;
      *(undefined1 *)(puVar6 + 0xd) = 0;
      puVar6[0x1c] = param_1;
      *(undefined4 *)(puVar6 + 0x12) = 0;
      *(undefined8 *)((long)puVar6 + 0x94) = 0;
      *(undefined8 *)((long)puVar6 + 0xa4) = 0x1ffffffff;
      puVar6[0x16] = 0;
      *(undefined4 *)(puVar6 + 0x17) = 0;
      *(undefined4 *)((long)puVar6 + 0xbc) = 0x2b;
      *(undefined4 *)(puVar6 + 0x18) = 0;
      *(undefined8 *)((long)puVar6 + 0xc4) = 0;
      *(undefined8 *)((long)puVar6 + 0xd4) = 0x1ffffffff;
      puVar6[0x10] = 0;
      puVar6[0x11] = 0x2b00000000;
      *(undefined8 *)((long)puVar6 + 0x9c) = 0x3f800000ffffffff;
      *(undefined8 *)((long)puVar6 + 0xcc) = 0x3f800000ffffffff;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(undefined8 **)(param_1 + 0x138) = puVar6;
      puVar6[0x1d] = lVar14;
      *(undefined1 *)(puVar6 + 0x1e) = 0;
      *(undefined1 *)((long)puVar6 + 0xf2) = 1;
      iVar3 = FUN_02f1c4cc(puVar6 + 2,&local_b8,uVar2);
      if (iVar3 != 1) {
        return 2;
      }
      local_a8[1] = *(long **)(param_1 + 0x138);
      bVar13 = 2;
    }
    else {
      bVar13 = 1;
    }
    uVar5 = 0;
    *(byte *)(param_1 + 0x160) = *(byte *)(param_1 + 0x160) | 2;
    local_b8 = CONCAT44(local_b8._4_4_,uVar2);
    do {
      local_c8[0] = (long *)0x0;
      if ((*(byte *)(lVar14 + 0x198) >> 6 & 1) == 0) {
        (**(code **)(**(long **)(lVar14 + 0x180) + 0x1d0))
                  (*(long **)(lVar14 + 0x180),uVar5 & 0xffffffff,local_c8,
                   *(undefined8 *)(lVar14 + 0x28));
        if (local_c8[0] != (long *)0x0) {
          local_d8 = 0;
          local_d0 = 1;
          local_ce = 0;
          if ((DAT_0440a430 == 0) || (*DAT_0440a428 == (int)local_c8[0][6])) {
            piVar8 = DAT_0440a428;
          }
          else {
            lVar7 = (ulong)DAT_0440a430 << 5;
            piVar9 = DAT_0440a428;
            do {
              lVar7 = lVar7 + -0x20;
              if (lVar7 == 0) goto LAB_02f2ca2c;
              piVar1 = piVar9 + 8;
              piVar8 = piVar9 + 8;
              piVar9 = piVar9 + 8;
            } while (*piVar1 != (int)local_c8[0][6]);
          }
          if (piVar8 == DAT_0440a428 + (ulong)DAT_0440a430 * 8) {
LAB_02f2ca2c:
            local_dc = 4;
            iVar3 = 0x58;
          }
          else {
            plVar11 = (long *)(**(code **)(piVar8 + 2))(&PTR_PTR_042a9250);
            if (plVar11 == (long *)0x0) {
              iVar3 = 2;
            }
            else {
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_d8);
              if ((local_d8._4_4_ - 0x7e201U < 0x102) && ((int)local_d8 == 3)) {
                if ((char)local_d0 == '\0') {
                  plVar10 = (long *)(*DAT_0442d138)(5,0x128);
                  if (plVar10 != (long *)0x0) {
                    memset(plVar10 + 1,0,0x120);
                    *(undefined1 *)(plVar10 + 10) = 0xff;
                    *(undefined1 *)(plVar10 + 0xb) = 0xff;
                    plVar10[4] = (long)&PTR_LAB_042aca38;
                    *(undefined4 *)(plVar10 + 0x10) = 0xffffffff;
                    *plVar10 = (long)&PTR_FUN_042acc48;
                    *(undefined8 *)((long)plVar10 + 0xb4) = 0x2b;
                    *(undefined4 *)(plVar10 + 0x16) = 0;
                    plVar10[0x15] = 0;
                    *(undefined8 *)((long)plVar10 + 0xbc) = 0;
                    *(undefined4 *)(plVar10 + 0x1d) = 0;
                    *(undefined8 *)((long)plVar10 + 0xec) = 0;
                    plVar10[0xc] = 0;
                    plVar10[0xd] = 0;
                    plVar10[0xe] = 0;
                    plVar10[0xf] = 0;
                    plVar10[0x1b] = 0;
                    plVar10[0x1c] = 0x2b00000000;
                  }
                }
                else {
                  if (local_d0._1_1_ != '\0') {
                    lVar7 = *plVar11;
                    goto LAB_02f2c9e0;
                  }
                  plVar10 = (long *)(*DAT_0442d138)(5,0xb0);
                  if (plVar10 != (long *)0x0) {
                    *plVar10 = (long)&PTR_FUN_042acae8;
                    plVar10[1] = 0;
                    plVar10[10] = 0;
                    plVar10[0xb] = 0;
                    *(undefined1 *)(plVar10 + 10) = 0xff;
                    *(undefined1 *)(plVar10 + 0xb) = 0xff;
                    plVar10[4] = 0;
                    plVar10[5] = 0;
                    plVar10[4] = (long)&PTR_LAB_042aca38;
                    plVar10[0x14] = 0;
                    plVar10[0x15] = 0;
                    *(undefined4 *)(plVar10 + 0x15) = 0;
                    plVar10[0x12] = 0;
                    plVar10[0x13] = 0;
                    plVar10[0x10] = 0;
                    plVar10[0x11] = 0;
                    *(undefined4 *)(plVar10 + 0x10) = 0xffffffff;
                    plVar10[0xe] = 0;
                    plVar10[0xf] = 0;
                    plVar10[0xc] = 0;
                    plVar10[0xd] = 0;
                    plVar10[8] = 0;
                    plVar10[9] = 0;
                    plVar10[6] = 0;
                    plVar10[7] = 0;
                    plVar10[2] = 0;
                    plVar10[3] = 0;
                    plVar10[0xc] = 0;
                    plVar10[0xd] = 0;
                    plVar10[0xe] = 0;
                    plVar10[0xf] = 0;
                  }
                }
                if (plVar10 == (long *)0x0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11,&PTR_PTR_042a9250);
                  local_dc = 5;
                  iVar3 = 2;
                }
                else {
                  iVar3 = (**(code **)(*plVar10 + 0x60))
                                    (plVar10,plVar11,local_c8,uVar5 & 0xffffffff,param_1,&local_b8);
                  if (iVar3 == 1) {
                    *(long **)(param_1 + uVar5 * 8 + 0xf0) = plVar10;
                    local_a8[bVar13] = plVar10;
                    bVar13 = bVar13 + 1;
                    local_dc = 0;
                  }
                  else {
                    (**(code **)(*plVar10 + 0x68))(plVar10);
                    (**(code **)*plVar10)(plVar10);
                    (*DAT_0442d150)(5,plVar10);
                    local_dc = 4;
                  }
                }
                goto joined_r0x02f2ca3c;
              }
              lVar7 = *plVar11;
LAB_02f2c9e0:
              (**(code **)(lVar7 + 0x10))(plVar11,&PTR_PTR_042a9250);
              iVar3 = 1;
            }
            local_dc = 4;
          }
joined_r0x02f2ca3c:
          if (local_c8[0] != (long *)0x0) {
            (**(code **)(*local_c8[0] + 0x18))();
            local_c8[0] = (long *)0x0;
          }
          if ((local_dc | 4) != 4) {
            return iVar3;
          }
        }
      }
      else {
        local_c8[0] = (long *)0x0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 4);
    *(undefined4 *)(param_1 + 0x198) = local_b8._4_4_;
    iVar3 = FUN_02f212d4(param_1 + 0x78);
    if (iVar3 == 1) {
      local_a8[bVar13] = (long *)(param_1 + 0x68);
      *(long *)(param_1 + 0x120) = lVar14;
      plVar11 = (long *)(param_1 + 0x110);
      uVar5 = (ulong)(bVar13 + 1) & 0xff;
      local_a8[uVar5] = plVar11;
      if (bVar13 + 1 >> 8 == 0) {
        plVar10 = local_a8[uVar5 - 1];
        (**(code **)(*plVar11 + 0x58))(plVar11,plVar10);
        if (bVar13 != 0) {
          plVar11 = local_a8[uVar5 - 2];
          (**(code **)(*plVar10 + 0x58))(plVar10,plVar11);
          if (((uint)(uVar5 - 1) & 0xff) != 1) {
            plVar10 = local_c8[uVar5 + 1];
            (**(code **)(*plVar11 + 0x58))(plVar11,plVar10);
            if (((uint)(uVar5 - 2) & 0xff) != 1) {
              do {
                plVar11 = local_c8[uVar5];
                (**(code **)(*plVar10 + 0x58))(plVar10,plVar11);
                uVar12 = (uint)uVar5;
                uVar5 = uVar5 - 1;
                plVar10 = plVar11;
              } while ((uVar12 & 0xff) != 4);
            }
          }
        }
      }
      lVar14 = *(long *)(param_1 + 0x138);
      if ((lVar14 != 0) && (lVar7 = (**(code **)(**(long **)(lVar14 + 8) + 0x50))(), lVar7 != 0)) {
        FUN_02f1c7c0(lVar14 + 0x10,(ulong)&local_b8 | 4,lVar7);
      }
      FUN_02f2d5fc(param_1);
      return 1;
    }
  }
  return iVar3;
}


