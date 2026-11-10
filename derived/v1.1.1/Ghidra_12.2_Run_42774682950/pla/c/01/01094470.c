/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01094470; name: FUN_01094470
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01094470(undefined1 *param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,undefined8 *param_9,undefined8 param_10,
                 undefined8 param_11,ulong *param_12,char param_13)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  undefined8 uVar17;
  int *piVar18;
  int iVar19;
  ulong uVar20;
  ushort *puVar21;
  int iVar22;
  ulong uVar23;
  bool bVar24;
  ulong uVar25;
  long *plVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  long lVar36;
  long *plVar37;
  long *plVar38;
  undefined2 uVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined2 uVar43;
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  uint uVar47;
  ulong uVar48;
  char cVar49;
  int *piVar50;
  long *plVar51;
  uint uVar52;
  undefined4 uVar53;
  undefined2 uVar54;
  undefined1 local_f0;
  undefined1 local_bc;
  int local_b8;
  undefined8 local_b0;
  char local_90;
  int local_8c;
  int iStack_88;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  if (param_3 != 3) {
    param_8 = param_7;
  }
  piVar16 = (int *)FUN_01095da0();
  if (piVar16 == (int *)0x0) {
    *param_1 = 0;
    return;
  }
  if (*(ushort *)((long)piVar16 - (long)*piVar16) < 0x61) {
    piVar50 = (int *)0x0;
  }
  else {
    uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[0x30];
    piVar50 = (int *)0x0;
    if (uVar20 != 0) {
      puVar1 = (uint *)((long)piVar16 + uVar20);
      piVar50 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  puVar21 = (ushort *)((long)piVar50 - (long)*piVar50);
  if (*puVar21 < 5) {
LAB_01094e14:
    bVar13 = false;
  }
  else if (((ulong)puVar21[2] == 0) || (*(char *)((long)piVar50 + (ulong)puVar21[2]) == '\0')) {
    if ((*puVar21 < 7) || ((ulong)puVar21[3] == 0)) goto LAB_01094e14;
    bVar13 = *(char *)((long)piVar50 + (ulong)puVar21[3]) != '\0';
  }
  else {
    bVar13 = true;
  }
  local_70 = 0;
  local_68 = 0;
  uVar20 = *param_12;
  uVar3 = param_12[1];
  uVar41 = uVar3 ^ uVar20;
  uVar25 = uVar41 >> 0x1b | uVar41 << 0x25;
  uVar23 = uVar41 ^ (uVar20 >> 0x28 | uVar20 << 0x18) ^ uVar41 << 0x10;
  *param_12 = uVar23;
  param_12[1] = uVar25;
  lVar36 = -(long)*piVar16;
  puVar21 = (ushort *)((long)piVar16 - (long)*piVar16);
  uVar4 = *puVar21;
  if (uVar4 < 0xd) {
    local_b0 = 0x3ffffffff;
    if (4 < uVar4) {
      local_b0 = 0x3ffffffff;
      goto LAB_01094594;
    }
    uVar52 = 0;
    uVar48 = 0;
LAB_01095130:
    iVar22 = 0;
LAB_010945dc:
    iVar15 = 0;
  }
  else {
    local_b0 = 0x3ffffffff;
    if ((ulong)puVar21[6] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[6]);
      uVar17 = 0x1ffffffff;
      if (iVar22 != 2) {
        uVar17 = 0x3ffffffff;
      }
      local_b0 = 0x2ffffffff;
      if (iVar22 != 1) {
        local_b0 = uVar17;
      }
    }
LAB_01094594:
    if ((ulong)puVar21[2] == 0) {
      uVar48 = 0;
    }
    else {
      uVar48 = (ulong)*(uint *)((long)piVar16 + (ulong)puVar21[2]);
    }
    if (uVar4 < 0xb) {
      uVar52 = 0;
      goto LAB_01095130;
    }
    if ((ulong)puVar21[5] == 0) {
      uVar52 = 0;
    }
    else {
      uVar52 = *(uint *)((long)piVar16 + (ulong)puVar21[5]);
    }
    if (uVar4 < 0x41) goto LAB_01095130;
    iVar22 = 0;
    if ((ulong)puVar21[0x20] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x20]);
    }
    if ((uVar4 < 0x43) || ((ulong)puVar21[0x21] == 0)) goto LAB_010945dc;
    iVar15 = *(int *)((long)piVar16 + (ulong)puVar21[0x21]);
  }
  uVar40 = 1;
  if ((param_5 - 1U < 100) && (param_6 - 1U < 100)) {
    if ((iVar22 < 1) || (param_5 = iVar22, iVar22 - 1U < 100)) {
      if ((iVar15 < 1) || (param_6 = iVar15, iVar15 - 1U < 100)) {
        iVar22 = param_6;
        if (param_5 <= param_6) {
          iVar22 = param_5;
        }
        if (param_6 - iVar22 == 0) {
          uVar40 = 0;
        }
        else {
          uVar47 = (param_6 - iVar22) + 1;
          if (uVar47 == 0) {
            uVar25 = uVar25 ^ uVar23;
            uVar40 = (int)uVar23 + (int)(uVar41 >> 0x1b);
            *param_12 = uVar25 ^ (uVar23 >> 0x28 | uVar23 << 0x18) ^ uVar25 << 0x10;
            param_12[1] = uVar25 >> 0x1b | uVar25 << 0x25;
          }
          else {
            lVar36 = 0x1f;
            if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar47) & 0x1f) & uVar47) != 0) {
              lVar36 = 0x20;
            }
            uVar42 = lVar36 - LZCOUNT(uVar47);
            uVar41 = uVar42 >> 6;
            if ((uVar42 & 0x3f) != 0) {
              uVar41 = uVar41 + 1;
            }
            if (uVar42 < uVar41) {
              uVar41 = 0;
            }
            else {
              uVar8 = 0;
              if (uVar41 != 0) {
                uVar8 = uVar42 / uVar41;
              }
              uVar41 = 0xffffffffffffffff >> (-uVar8 & 0x3f);
            }
            do {
              uVar42 = uVar23 ^ uVar25;
              iVar15 = (int)uVar25;
              uVar25 = uVar42 >> 0x1b | uVar42 << 0x25;
              uVar40 = (int)uVar23 + iVar15 & (uint)uVar41;
              uVar23 = uVar42 ^ (uVar23 >> 0x28 | uVar23 << 0x18) ^ uVar42 << 0x10;
            } while (uVar47 <= uVar40);
            *param_12 = uVar23;
            param_12[1] = uVar25;
          }
        }
        uVar40 = iVar22 + param_8 + uVar40;
        if (99 < (int)uVar40) {
          uVar40 = 100;
        }
        if ((int)uVar40 < 2) {
          uVar40 = 1;
        }
        lVar36 = -(long)*piVar16;
        goto LAB_010946ac;
      }
    }
    uVar40 = 1;
  }
LAB_010946ac:
  puVar21 = (ushort *)((long)piVar16 + lVar36);
  uVar4 = *puVar21;
  if (uVar4 < 9) {
    uVar47 = 0;
  }
  else {
    uVar47 = 0;
    if ((ulong)puVar21[4] != 0) {
      uVar47 = *(uint *)((long)piVar16 + (ulong)puVar21[4]);
    }
  }
  if ((uVar47 < 0xffffffff) && (uVar47 + 1 < 5)) {
    uVar14 = uVar47;
    if (0x10 < uVar4) goto LAB_010946e4;
LAB_010951ac:
    uVar43 = (undefined2)uVar47;
    iVar22 = 0;
  }
  else {
    uVar47 = 0xff;
    uVar14 = 0xff;
    if (uVar4 < 0x11) goto LAB_010951ac;
LAB_010946e4:
    uVar43 = (undefined2)uVar14;
    iVar22 = 0;
    if ((ulong)puVar21[8] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[8]);
    }
  }
  local_b8 = 0xffff;
  if ((iVar22 != -1) && (iVar22 + 1U < 0x1b)) {
    local_b8 = iVar22;
  }
  if (uVar4 < 0xf) {
    uVar39 = 0;
    local_bc = 0xff;
  }
  else {
    if (((ulong)puVar21[7] == 0) ||
       (uVar47 = *(int *)((long)piVar16 + (ulong)puVar21[7]) - 1, 3 < uVar47)) {
      local_bc = 0xff;
    }
    else {
      local_bc = (undefined1)(0x20100fe >> (ulong)(uVar47 * 8 & 0x1f));
    }
    if (((uVar4 < 0x1f) || ((ulong)puVar21[0xf] == 0)) ||
       (iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0xf]), iVar22 == -1)) {
      uVar39 = 0;
    }
    else {
      if (iVar22 < 10) {
        if (iVar22 < 1) {
          iVar22 = 0;
        }
      }
      else {
        iVar22 = 10;
      }
      uVar39 = (undefined2)iVar22;
    }
  }
  if (uVar4 < 0x21) {
LAB_01094cbc:
    uVar27 = 0;
  }
  else {
    uVar27 = 0;
    if ((ulong)puVar21[0x10] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x10]);
      if (iVar22 == -1) goto LAB_01094cbc;
      if (iVar22 < 10) {
        if (iVar22 < 1) {
          iVar22 = 0;
        }
      }
      else {
        iVar22 = 10;
      }
      uVar27 = (undefined2)iVar22;
    }
  }
  if (uVar4 < 0x23) {
LAB_01094cd0:
    uVar28 = 0;
  }
  else {
    uVar28 = 0;
    if ((ulong)puVar21[0x11] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x11]);
      if (iVar22 == -1) goto LAB_01094cd0;
      if (iVar22 < 10) {
        if (iVar22 < 1) {
          iVar22 = 0;
        }
      }
      else {
        iVar22 = 10;
      }
      uVar28 = (undefined2)iVar22;
    }
  }
  if (uVar4 < 0x25) {
LAB_01094ce4:
    uVar29 = 0;
  }
  else {
    uVar29 = 0;
    if ((ulong)puVar21[0x12] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x12]);
      if (iVar22 == -1) goto LAB_01094ce4;
      if (iVar22 < 10) {
        if (iVar22 < 1) {
          iVar22 = 0;
        }
      }
      else {
        iVar22 = 10;
      }
      uVar29 = (undefined2)iVar22;
    }
  }
  if (uVar4 < 0x27) {
LAB_01094cf8:
    uVar30 = 0;
  }
  else {
    uVar30 = 0;
    if ((ulong)puVar21[0x13] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x13]);
      if (iVar22 == -1) goto LAB_01094cf8;
      if (iVar22 < 10) {
        if (iVar22 < 1) {
          iVar22 = 0;
        }
      }
      else {
        iVar22 = 10;
      }
      uVar30 = (undefined2)iVar22;
    }
  }
  if (uVar4 < 0x29) {
LAB_01094d0c:
    uVar31 = 0;
  }
  else {
    uVar31 = 0;
    if ((ulong)puVar21[0x14] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x14]);
      if (iVar22 == -1) goto LAB_01094d0c;
      if (iVar22 < 10) {
        if (iVar22 < 1) {
          iVar22 = 0;
        }
      }
      else {
        iVar22 = 10;
      }
      uVar31 = (undefined2)iVar22;
    }
  }
  if (uVar4 < 0x2b) {
    uVar32 = 0;
  }
  else {
    uVar32 = 0;
    if ((ulong)puVar21[0x15] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x15]);
      if (iVar22 == -1) {
        uVar32 = 0xffff;
      }
      else {
        if (iVar22 < 0x1f) {
          if (iVar22 < 1) {
            iVar22 = 0;
          }
        }
        else {
          iVar22 = 0x1f;
        }
        uVar32 = (undefined2)iVar22;
      }
    }
  }
  if (uVar4 < 0x2d) {
    uVar33 = 0;
  }
  else {
    uVar33 = 0;
    if ((ulong)puVar21[0x16] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x16]);
      if (iVar22 == -1) {
        uVar33 = 0xffff;
      }
      else {
        if (iVar22 < 0x1f) {
          if (iVar22 < 1) {
            iVar22 = 0;
          }
        }
        else {
          iVar22 = 0x1f;
        }
        uVar33 = (undefined2)iVar22;
      }
    }
  }
  if (uVar4 < 0x2f) {
    uVar34 = 0;
  }
  else {
    uVar34 = 0;
    if ((ulong)puVar21[0x17] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x17]);
      if (iVar22 == -1) {
        uVar34 = 0xffff;
      }
      else {
        if (iVar22 < 0x1f) {
          if (iVar22 < 1) {
            iVar22 = 0;
          }
        }
        else {
          iVar22 = 0x1f;
        }
        uVar34 = (undefined2)iVar22;
      }
    }
  }
  if ((uVar4 < 0x31) || ((ulong)puVar21[0x18] == 0)) {
    uVar54 = 0;
joined_r0x01094804:
    if (uVar4 < 0x33) goto LAB_01094d68;
LAB_01094808:
    uVar35 = 0;
    if ((ulong)puVar21[0x19] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x19]);
      if (iVar22 == -1) {
        uVar35 = 0xffff;
      }
      else {
        if (iVar22 < 0x1f) {
          if (iVar22 < 1) {
            iVar22 = 0;
          }
        }
        else {
          iVar22 = 0x1f;
        }
        uVar35 = (undefined2)iVar22;
      }
    }
  }
  else {
    iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x18]);
    if (iVar22 != -1) {
      if (iVar22 < 0x1f) {
        if (iVar22 < 1) {
          iVar22 = 0;
        }
      }
      else {
        iVar22 = 0x1f;
      }
      uVar54 = (undefined2)iVar22;
      goto joined_r0x01094804;
    }
    uVar54 = 0xffff;
    if (0x32 < uVar4) goto LAB_01094808;
LAB_01094d68:
    uVar35 = 0;
  }
  if ((uVar4 < 0x35) || ((ulong)puVar21[0x1a] == 0)) {
    uVar44 = 0;
joined_r0x0109482c:
    if (uVar4 < 0x37) goto LAB_01094d9c;
LAB_01094830:
    iVar22 = 0;
    if ((ulong)puVar21[0x1b] != 0) {
      iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x1b]);
    }
    iVar15 = 0;
    if (iVar22 - 1U < 6) {
      iVar15 = iVar22;
    }
    uVar12 = (char)iVar15;
LAB_0109484c:
    local_f0 = uVar12;
    if ((ulong)puVar21[9] == 0) goto LAB_01094858;
    iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[9]);
    if (0x100 < iVar22 + 1U) {
      uVar45 = 0x100;
      uVar46 = 0x100;
      goto joined_r0x01094c84;
    }
    if ((iVar22 == -1) && (iVar22 = 0xff, !bVar13)) {
      iVar22 = 0x100;
    }
    uVar46 = (undefined2)iVar22;
    uVar45 = uVar46;
    if (0x14 < uVar4) goto LAB_01094860;
LAB_01094868:
    iVar22 = 0;
  }
  else {
    iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[0x1a]);
    if (iVar22 != -1) {
      if (iVar22 < 0x1f) {
        if (iVar22 < 1) {
          iVar22 = 0;
        }
      }
      else {
        iVar22 = 0x1f;
      }
      uVar44 = (undefined2)iVar22;
      goto joined_r0x0109482c;
    }
    uVar44 = 0xffff;
    if (0x36 < uVar4) goto LAB_01094830;
LAB_01094d9c:
    local_f0 = 0;
    uVar12 = local_f0;
    local_f0 = 0;
    if (0x12 < uVar4) goto LAB_0109484c;
LAB_01094858:
    uVar45 = 0;
    uVar46 = 0;
joined_r0x01094c84:
    if (uVar4 < 0x15) goto LAB_01094868;
LAB_01094860:
    uVar46 = uVar45;
    if ((ulong)puVar21[10] == 0) goto LAB_01094868;
    iVar22 = *(int *)((long)piVar16 + (ulong)puVar21[10]);
    if (iVar22 + 1U < 0x101) {
      if ((iVar22 == -1) && (iVar22 = 0xff, !bVar13)) {
        iVar22 = 0x100;
      }
    }
    else {
      iVar22 = 0x100;
    }
  }
  uVar40 = uVar40 & 0xff;
  uVar47 = (uint)uVar48;
  if (((uVar52 & 0xffff) == 1) && ((uVar47 & 0xffff) == 900)) {
LAB_0109524c:
    bVar24 = true;
  }
  else {
    uVar14 = uVar47 & 0xffff;
    if (((uVar52 & 0xffff) == 2) && (uVar14 == 0x225 || (uVar14 == 0x3b || uVar14 == 0x65)))
    goto LAB_0109524c;
    bVar24 = (uVar52 & 0xffff) == 2 && uVar14 == 0x2c9;
  }
  if ((((4 < *(ushort *)((long)piVar50 - (long)*piVar50)) &&
       (uVar23 = (ulong)((ushort *)((long)piVar50 - (long)*piVar50))[2], uVar23 != 0)) &&
      (*(char *)((long)piVar50 + uVar23) != '\0')) &&
     (piVar50 = (int *)*param_9, piVar50 != (int *)0x0)) {
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar17 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar17;
    piVar18 = (int *)FUN_010aa6c0(uVar17,uVar48,uVar52);
    puVar21 = (ushort *)((long)piVar50 - (long)*piVar50);
    uVar4 = *puVar21;
    if (uVar4 < 7) {
      iStack_88 = 0;
LAB_01095450:
      uStack_84 = 0;
LAB_01095454:
      local_80 = 0;
LAB_01095458:
      local_78 = 0;
      local_7c = 0;
    }
    else {
      iStack_88 = 0;
      if ((ulong)puVar21[3] != 0) {
        iStack_88 = *(int *)((long)piVar50 + (ulong)puVar21[3]);
      }
      if (uVar4 < 9) goto LAB_01095450;
      uStack_84 = 0;
      if ((ulong)puVar21[4] != 0) {
        uStack_84 = *(undefined4 *)((long)piVar50 + (ulong)puVar21[4]);
      }
      if (uVar4 < 0xb) goto LAB_01095454;
      local_80 = 0;
      if ((ulong)puVar21[5] != 0) {
        local_80 = *(undefined4 *)((long)piVar50 + (ulong)puVar21[5]);
      }
      if (uVar4 < 0xd) goto LAB_01095458;
      local_7c = 0;
      if ((ulong)puVar21[6] != 0) {
        local_7c = *(undefined4 *)((long)piVar50 + (ulong)puVar21[6]);
      }
      if (uVar4 < 0xf) {
        local_78 = 0;
      }
      else {
        local_78 = 0;
        if ((ulong)puVar21[7] != 0) {
          local_78 = *(undefined4 *)((long)piVar50 + (ulong)puVar21[7]);
        }
      }
    }
    iVar15 = iStack_88;
    if ((0x10 < *(ushort *)((long)piVar18 - (long)*piVar18)) &&
       (uVar23 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[8], uVar23 != 0)) {
      iVar19 = *(int *)((long)piVar18 + uVar23);
      local_8c = 4;
      if (0 < iVar19) {
        if (4 < iVar19) {
          iVar19 = 5;
        }
        iVar15 = (&local_8c)[iVar19];
      }
    }
    local_8c = 4;
    uVar40 = iVar15 + uVar40;
    if (99 < (int)uVar40) {
      uVar40 = 100;
    }
    if ((int)uVar40 < 2) {
      uVar40 = 1;
    }
  }
  puVar9 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar11 = PTR_DAT_04379568;
  puVar10 = PTR_DAT_04379560;
  lVar36 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar36;
  plVar51 = *(long **)(lVar36 + 0x280);
  if (plVar51 == (long *)0x0) {
    bVar6 = false;
  }
  else {
    lVar36 = plVar51[0xb];
    if (*(undefined8 **)(lVar36 + 0x18) == (undefined8 *)0x0) goto LAB_010959a8;
    if (*(long *)(lVar36 + 0x10) == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar36 + 0x18))();
      *(undefined8 *)(lVar36 + 0x10) = uVar17;
    }
    piVar50 = (int *)(lVar36 + 0xc);
    do {
      cVar49 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar50,0x10);
      if (bVar6) {
        *piVar50 = *piVar50 + 1;
        cVar49 = ExclusiveMonitorsStatus();
      }
    } while (cVar49 != '\0');
    FUN_02c4fb44(&stack0xffffffffffffff78,0x278);
    uVar23 = FUN_02c4fc60(&stack0xffffffffffffff78,0xe);
    iVar15 = (int)uVar23;
    uVar14 = FUN_010dac08(uVar23,uVar23 & 0xffffffff);
    if (iVar15 == 0) {
      plVar26 = plVar51 + 0xd;
joined_r0x01094e28:
      if (uVar14 != 0) {
        uVar23 = 0;
        do {
          if ((short)*plVar26 == 0x278) {
            if ((((uint)uVar23 < uVar14) && ((short)*plVar26 == 0x278)) &&
               (*(short *)((long)plVar26 + 2) != 0)) {
              bVar6 = true;
              goto LAB_010949c4;
            }
            break;
          }
          uVar23 = uVar23 + 1;
          plVar26 = (long *)((long)plVar26 + 4);
        } while (uVar14 != uVar23);
      }
    }
    else {
      if (iVar15 == 1) {
        plVar26 = (long *)((long)plVar51 + 0xaf4);
        goto joined_r0x01094e28;
      }
      if (iVar15 == 2) {
        plVar26 = (long *)((long)plVar51 + 0xc84);
        goto joined_r0x01094e28;
      }
    }
    bVar6 = false;
LAB_010949c4:
    lVar36 = plVar51[0xb];
    piVar50 = (int *)(lVar36 + 0xc);
    do {
      iVar15 = *piVar50;
      cVar49 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar50,0x10);
      if (bVar7) {
        *piVar50 = iVar15 + -1;
        cVar49 = ExclusiveMonitorsStatus();
      }
    } while (cVar49 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar36 + 0x18) = 0;
      (**(code **)(*plVar51 + 0x20))(plVar51);
    }
  }
  local_90 = param_13 + '\x01';
  if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar36 = *(long *)puVar10;
  *(long *)puVar11 = lVar36;
  plVar51 = *(long **)(lVar36 + 0x238);
  if (plVar51 == (long *)0x0) {
    if (bVar6) goto LAB_01095298;
    goto LAB_01094a74;
  }
  lVar36 = plVar51[0xb];
  if (*(undefined8 **)(lVar36 + 0x18) == (undefined8 *)0x0) goto LAB_010959a8;
  if (*(long *)(lVar36 + 0x10) == 0) {
    uVar17 = (**(code **)**(undefined8 **)(lVar36 + 0x18))();
    *(undefined8 *)(lVar36 + 0x10) = uVar17;
  }
  piVar50 = (int *)(lVar36 + 0xc);
  do {
    cVar49 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar50,0x10);
    if (bVar7) {
      *piVar50 = *piVar50 + 1;
      cVar49 = ExclusiveMonitorsStatus();
    }
  } while (cVar49 != '\0');
  iVar15 = FUN_0111d778(plVar51,0x278);
  bVar6 = (bool)(bVar6 | iVar15 != 0);
  lVar36 = plVar51[0xb];
  piVar50 = (int *)(lVar36 + 0xc);
  do {
    iVar15 = *piVar50;
    cVar49 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar50,0x10);
    if (bVar7) {
      *piVar50 = iVar15 + -1;
      cVar49 = ExclusiveMonitorsStatus();
    }
  } while (cVar49 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar36 + 0x18) = 0;
    (**(code **)(*plVar51 + 0x20))(plVar51);
    if (!bVar6) goto LAB_01094a74;
LAB_01095298:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar36 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar36;
    uVar23 = *(ulong *)(lVar36 + 0x60);
    if (uVar23 == 0) {
LAB_01095678:
      cVar49 = '\0';
    }
    else {
      uVar25 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar41 = uVar23 - 1 & 0xe8b16773d87b87ab;
      }
      else if (uVar23 < 0xe8b16773d87b87ac) {
        uVar41 = 0;
        if (uVar23 != 0) {
          uVar41 = 0xe8b16773d87b87ab / uVar23;
        }
        uVar41 = 0xe8b16773d87b87ab - uVar41 * uVar23;
      }
      else {
        uVar41 = 0xe8b16773d87b87ab;
      }
      plVar51 = *(long **)(*(long *)(lVar36 + 0x58) + uVar41 * 8);
      if ((plVar51 == (long *)0x0) || (plVar51 = (long *)*plVar51, plVar51 == (long *)0x0))
      goto LAB_01095678;
      if (1 < uVar25) {
        do {
          uVar25 = plVar51[1];
          if (uVar25 == 0xe8b16773d87b87ab) {
            if (plVar51[2] == -0x174e988c27847855) goto LAB_01095354;
          }
          else {
            if (uVar23 <= uVar25) {
              uVar42 = 0;
              if (uVar23 != 0) {
                uVar42 = uVar25 / uVar23;
              }
              uVar25 = uVar25 - uVar42 * uVar23;
            }
            if (uVar25 != uVar41) break;
          }
          plVar51 = (long *)*plVar51;
        } while (plVar51 != (long *)0x0);
        goto LAB_01095678;
      }
      do {
        if (plVar51[1] == 0xe8b16773d87b87ab) {
          if (plVar51[2] == -0x174e988c27847855) goto LAB_01095354;
        }
        else if ((plVar51[1] & uVar23 - 1) != uVar41) goto LAB_01095678;
        plVar51 = (long *)*plVar51;
        cVar49 = '\0';
      } while (plVar51 != (long *)0x0);
    }
    goto LAB_01095778;
  }
  if (bVar6) goto LAB_01095298;
LAB_01094a74:
  bVar2 = *puVar9;
  goto joined_r0x01095788;
LAB_01095354:
  plVar51 = (long *)plVar51[3];
  if (plVar51 == (long *)0x0) goto LAB_01095678;
  plVar26 = plVar51 + 10;
  do {
    cVar49 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar6) {
      *(int *)plVar26 = (int)*plVar26 + 1;
      cVar49 = ExclusiveMonitorsStatus();
    }
  } while (cVar49 != '\0');
  uVar23 = plVar51[0x14];
  if (uVar23 == 0) {
    uVar53 = 0;
  }
  else {
    uVar25 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
    uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar25 < 2) {
      uVar41 = uVar23 - 1 & 0x95ccdc647c831655;
    }
    else if (uVar23 < 0x95ccdc647c831656) {
      uVar41 = 0;
      if (uVar23 != 0) {
        uVar41 = 0x95ccdc647c831655 / uVar23;
      }
      uVar41 = 0x95ccdc647c831655 - uVar41 * uVar23;
    }
    else {
      uVar41 = 0x95ccdc647c831655;
    }
    plVar37 = *(long **)(plVar51[0x13] + uVar41 * 8);
    if (plVar37 == (long *)0x0) {
      uVar53 = 0;
    }
    else {
      plVar37 = (long *)*plVar37;
      if (plVar37 == (long *)0x0) {
        uVar53 = 0;
      }
      else if (uVar25 < 2) {
        do {
          if (plVar37[1] == 0x95ccdc647c831655) {
            if (plVar37[2] == -0x6a33239b837ce9ab) goto LAB_01095760;
          }
          else if ((plVar37[1] & uVar23 - 1) != uVar41) {
            uVar53 = 0;
            break;
          }
          plVar37 = (long *)*plVar37;
          uVar53 = 0;
        } while (plVar37 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar37[1];
          if (uVar25 == 0x95ccdc647c831655) {
            if (plVar37[2] == -0x6a33239b837ce9ab) goto LAB_01095760;
          }
          else {
            if (uVar23 <= uVar25) {
              uVar42 = 0;
              if (uVar23 != 0) {
                uVar42 = uVar25 / uVar23;
              }
              uVar25 = uVar25 - uVar42 * uVar23;
            }
            if (uVar25 != uVar41) {
              uVar53 = 0;
              goto LAB_01095764;
            }
          }
          plVar37 = (long *)*plVar37;
        } while (plVar37 != (long *)0x0);
        uVar53 = 0;
      }
    }
  }
  goto LAB_01095764;
LAB_010951cc:
  plVar26 = (long *)*plVar26;
  if (plVar26 == (long *)0x0) goto LAB_010951d4;
  goto LAB_01094f10;
LAB_01095224:
  uVar53 = (undefined4)plVar38[6];
  goto LAB_01095228;
LAB_010956f4:
  uVar53 = (undefined4)plVar38[6];
  goto LAB_010956f8;
LAB_01095648:
  plVar26 = (long *)*plVar26;
  if (plVar26 == (long *)0x0) goto LAB_01095650;
  goto LAB_01095524;
LAB_01095760:
  uVar53 = (undefined4)plVar37[6];
LAB_01095764:
  do {
    cVar49 = (char)uVar53;
    iVar15 = (int)*plVar26 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar6) {
      *(int *)plVar26 = iVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar51 + 0x10))();
  }
LAB_01095778:
  local_90 = local_90 + cVar49;
  bVar2 = *puVar9;
joined_r0x01095788:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar36 = *(long *)puVar10;
  *(long *)puVar11 = lVar36;
  plVar51 = *(long **)(lVar36 + 0x298);
  if (plVar51 == (long *)0x0) goto LAB_01094b20;
  lVar36 = plVar51[0xb];
  if (*(undefined8 **)(lVar36 + 0x18) == (undefined8 *)0x0) {
LAB_010959a8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar36 + 0x10) == 0) {
    uVar17 = (**(code **)**(undefined8 **)(lVar36 + 0x18))();
    *(undefined8 *)(lVar36 + 0x10) = uVar17;
  }
  piVar50 = (int *)(lVar36 + 0xc);
  do {
    cVar49 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar50,0x10);
    if (bVar6) {
      *piVar50 = *piVar50 + 1;
      cVar49 = ExclusiveMonitorsStatus();
    }
  } while (cVar49 != '\0');
  if ((int)uVar47 < 0x3d5) {
    if ((99 < *(ushort *)((long)plVar51 + uVar48 * 0x58 + 0xe4)) &&
       (uVar23 = FUN_011357f8(plVar51,uVar48), (uVar23 & 1) != 0)) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar36 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar36;
      uVar23 = *(ulong *)(lVar36 + 0x60);
      if (uVar23 != 0) {
        uVar25 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
        uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
        uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar25 < 2) {
          uVar41 = uVar23 - 1 & 0xe8b16773d87b87ab;
        }
        else if (uVar23 < 0xe8b16773d87b87ac) {
          uVar41 = 0;
          if (uVar23 != 0) {
            uVar41 = 0xe8b16773d87b87ab / uVar23;
          }
          uVar41 = 0xe8b16773d87b87ab - uVar41 * uVar23;
        }
        else {
          uVar41 = 0xe8b16773d87b87ab;
        }
        plVar26 = *(long **)(*(long *)(lVar36 + 0x58) + uVar41 * 8);
        if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
          if (uVar25 < 2) {
            do {
              if (plVar26[1] == 0xe8b16773d87b87ab) {
                if (plVar26[2] == -0x174e988c27847855) {
                  plVar26 = (long *)plVar26[3];
                  goto joined_r0x0109596c;
                }
              }
              else if ((plVar26[1] & uVar23 - 1) != uVar41) {
                cVar49 = '\0';
                break;
              }
              plVar26 = (long *)*plVar26;
              cVar49 = '\0';
            } while (plVar26 != (long *)0x0);
          }
          else {
LAB_01094f10:
            uVar25 = plVar26[1];
            if (uVar25 != 0xe8b16773d87b87ab) {
              if (uVar23 <= uVar25) {
                uVar42 = 0;
                if (uVar23 != 0) {
                  uVar42 = uVar25 / uVar23;
                }
                uVar25 = uVar25 - uVar42 * uVar23;
              }
              if (uVar25 == uVar41) goto LAB_010951cc;
              goto LAB_010951d4;
            }
            if (plVar26[2] != -0x174e988c27847855) goto LAB_010951cc;
            plVar26 = (long *)plVar26[3];
joined_r0x0109596c:
            if (plVar26 != (long *)0x0) {
              plVar37 = plVar26 + 10;
              do {
                cVar49 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar6) {
                  *(int *)plVar37 = (int)*plVar37 + 1;
                  cVar49 = ExclusiveMonitorsStatus();
                }
              } while (cVar49 != '\0');
              uVar23 = plVar26[0x14];
              if (uVar23 == 0) {
                uVar53 = 0;
              }
              else {
                uVar25 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
                uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
                uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar25 < 2) {
                  uVar41 = uVar23 - 1 & 0x79efd2242bab9e76;
                }
                else if (uVar23 < 0x79efd2242bab9e77) {
                  uVar41 = 0;
                  if (uVar23 != 0) {
                    uVar41 = 0x79efd2242bab9e76 / uVar23;
                  }
                  uVar41 = 0x79efd2242bab9e76 - uVar41 * uVar23;
                }
                else {
                  uVar41 = 0x79efd2242bab9e76;
                }
                plVar38 = *(long **)(plVar26[0x13] + uVar41 * 8);
                if (plVar38 == (long *)0x0) {
                  uVar53 = 0;
                }
                else {
                  plVar38 = (long *)*plVar38;
                  if (plVar38 == (long *)0x0) {
                    uVar53 = 0;
                  }
                  else if (uVar25 < 2) {
                    do {
                      if (plVar38[1] == 0x79efd2242bab9e76) {
                        if (plVar38[2] == 0x79efd2242bab9e76) goto LAB_01095224;
                      }
                      else if ((plVar38[1] & uVar23 - 1) != uVar41) {
                        uVar53 = 0;
                        break;
                      }
                      plVar38 = (long *)*plVar38;
                      uVar53 = 0;
                    } while (plVar38 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar25 = plVar38[1];
                      if (uVar25 != 0x79efd2242bab9e76) {
                        if (uVar23 <= uVar25) {
                          uVar42 = 0;
                          if (uVar23 != 0) {
                            uVar42 = uVar25 / uVar23;
                          }
                          uVar25 = uVar25 - uVar42 * uVar23;
                        }
                        if (uVar25 == uVar41) goto LAB_01094ff4;
                        uVar53 = 0;
                        goto LAB_01095228;
                      }
                      if (plVar38[2] == 0x79efd2242bab9e76) goto LAB_01095224;
LAB_01094ff4:
                      plVar38 = (long *)*plVar38;
                    } while (plVar38 != (long *)0x0);
                    uVar53 = 0;
                  }
                }
              }
LAB_01095228:
              do {
                cVar49 = (char)uVar53;
                iVar15 = (int)*plVar37 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar6) {
                  *(int *)plVar37 = iVar15;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar15 == 0) {
                (**(code **)(*plVar26 + 0x10))();
              }
              goto LAB_0109523c;
            }
LAB_010951d4:
            cVar49 = '\0';
          }
LAB_0109523c:
          local_90 = cVar49 + local_90;
        }
      }
    }
    if ((*(byte *)((long)plVar51 + uVar48 * 0x58 + 0xdc) >> 2 & 1) != 0) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar36 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar36;
      uVar23 = *(ulong *)(lVar36 + 0x60);
      if (uVar23 == 0) {
LAB_01095650:
        cVar49 = '\0';
      }
      else {
        uVar25 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
        uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
        uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar25 < 2) {
          uVar41 = uVar23 - 1 & 0xe8b16773d87b87ab;
        }
        else if (uVar23 < 0xe8b16773d87b87ac) {
          uVar41 = 0;
          if (uVar23 != 0) {
            uVar41 = 0xe8b16773d87b87ab / uVar23;
          }
          uVar41 = 0xe8b16773d87b87ab - uVar41 * uVar23;
        }
        else {
          uVar41 = 0xe8b16773d87b87ab;
        }
        plVar26 = *(long **)(*(long *)(lVar36 + 0x58) + uVar41 * 8);
        if ((plVar26 == (long *)0x0) || (plVar26 = (long *)*plVar26, plVar26 == (long *)0x0))
        goto LAB_01095650;
        if (1 < uVar25) {
LAB_01095524:
          uVar25 = plVar26[1];
          if (uVar25 != 0xe8b16773d87b87ab) {
            if (uVar23 <= uVar25) {
              uVar48 = 0;
              if (uVar23 != 0) {
                uVar48 = uVar25 / uVar23;
              }
              uVar25 = uVar25 - uVar48 * uVar23;
            }
            if (uVar25 == uVar41) goto LAB_01095648;
            goto LAB_01095650;
          }
          if (plVar26[2] != -0x174e988c27847855) goto LAB_01095648;
          plVar26 = (long *)plVar26[3];
joined_r0x01095540:
          if (plVar26 == (long *)0x0) goto LAB_01095650;
          plVar37 = plVar26 + 10;
          do {
            cVar49 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar6) {
              *(int *)plVar37 = (int)*plVar37 + 1;
              cVar49 = ExclusiveMonitorsStatus();
            }
          } while (cVar49 != '\0');
          uVar23 = plVar26[0x14];
          if (uVar23 == 0) {
            uVar53 = 0;
          }
          else {
            uVar25 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
            uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
            uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar25 < 2) {
              uVar41 = uVar23 - 1 & 0x9b7e367dc52b434;
            }
            else if (uVar23 < 0x9b7e367dc52b435) {
              uVar41 = 0;
              if (uVar23 != 0) {
                uVar41 = 0x9b7e367dc52b434 / uVar23;
              }
              uVar41 = 0x9b7e367dc52b434 - uVar41 * uVar23;
            }
            else {
              uVar41 = 0x9b7e367dc52b434;
            }
            plVar38 = *(long **)(plVar26[0x13] + uVar41 * 8);
            if (plVar38 == (long *)0x0) {
              uVar53 = 0;
            }
            else {
              plVar38 = (long *)*plVar38;
              if (plVar38 == (long *)0x0) {
                uVar53 = 0;
              }
              else if (uVar25 < 2) {
                do {
                  if (plVar38[1] == 0x9b7e367dc52b434) {
                    if (plVar38[2] == 0x9b7e367dc52b434) goto LAB_010956f4;
                  }
                  else if ((plVar38[1] & uVar23 - 1) != uVar41) {
                    uVar53 = 0;
                    break;
                  }
                  plVar38 = (long *)*plVar38;
                  uVar53 = 0;
                } while (plVar38 != (long *)0x0);
              }
              else {
                do {
                  uVar25 = plVar38[1];
                  if (uVar25 != 0x9b7e367dc52b434) {
                    if (uVar23 <= uVar25) {
                      uVar48 = 0;
                      if (uVar23 != 0) {
                        uVar48 = uVar25 / uVar23;
                      }
                      uVar25 = uVar25 - uVar48 * uVar23;
                    }
                    if (uVar25 == uVar41) goto LAB_01095610;
                    uVar53 = 0;
                    goto LAB_010956f8;
                  }
                  if (plVar38[2] == 0x9b7e367dc52b434) goto LAB_010956f4;
LAB_01095610:
                  plVar38 = (long *)*plVar38;
                } while (plVar38 != (long *)0x0);
                uVar53 = 0;
              }
            }
          }
LAB_010956f8:
          do {
            cVar49 = (char)uVar53;
            iVar15 = (int)*plVar37 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar6) {
              *(int *)plVar37 = iVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 == 0) {
            (**(code **)(*plVar26 + 0x10))();
          }
          goto LAB_0109570c;
        }
        do {
          if (plVar26[1] == 0xe8b16773d87b87ab) {
            if (plVar26[2] == -0x174e988c27847855) {
              plVar26 = (long *)plVar26[3];
              goto joined_r0x01095540;
            }
          }
          else if ((plVar26[1] & uVar23 - 1) != uVar41) {
            cVar49 = '\0';
            break;
          }
          plVar26 = (long *)*plVar26;
          cVar49 = '\0';
        } while (plVar26 != (long *)0x0);
      }
LAB_0109570c:
      local_90 = cVar49 + local_90;
    }
  }
  lVar36 = plVar51[0xb];
  piVar50 = (int *)(lVar36 + 0xc);
  do {
    iVar15 = *piVar50;
    cVar49 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar50,0x10);
    if (bVar6) {
      *piVar50 = iVar15 + -1;
      cVar49 = ExclusiveMonitorsStatus();
    }
  } while (cVar49 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar36 + 0x18) = 0;
    (**(code **)(*plVar51 + 0x20))(plVar51);
  }
LAB_01094b20:
  *(uint *)(param_1 + 0x14) = CONCAT31((undefined3)uStack_84,uStack_85);
  *(int *)(param_1 + 0x11) = iStack_88;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = local_b0;
  *(short *)(param_1 + 0x38) = (short)uVar40;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x3a) = uVar43;
  param_1[0x40] = local_bc;
  *(undefined2 *)(param_1 + 0x42) = uVar32;
  *(undefined2 *)(param_1 + 0x44) = uVar33;
  *(undefined2 *)(param_1 + 0x46) = uVar34;
  *(undefined2 *)(param_1 + 0x48) = uVar54;
  *(undefined2 *)(param_1 + 0x4a) = uVar35;
  *(undefined2 *)(param_1 + 0x4c) = uVar44;
  *(undefined8 *)(param_1 + 0x4e) = local_70;
  *(undefined2 *)(param_1 + 0x5a) = uVar39;
  *(undefined2 *)(param_1 + 0x5c) = uVar27;
  *(undefined2 *)(param_1 + 0x5e) = uVar28;
  *(undefined2 *)(param_1 + 0x60) = uVar29;
  *(undefined2 *)(param_1 + 0x62) = uVar30;
  *(undefined2 *)(param_1 + 100) = uVar31;
  *(short *)(param_1 + 0x3c) = (short)local_b8;
  *(undefined2 *)(param_1 + 0x3e) = 0xffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffff;
  *(undefined2 *)(param_1 + 0x72) = 0xffff;
  param_1[0x75] = bVar24;
  *(undefined2 *)(param_1 + 0x76) = local_74;
  *(undefined2 *)(param_1 + 0x66) = (undefined2)local_8c;
  *(ulong *)(param_1 + 8) = uVar3 + uVar20;
  param_1[0x10] = 1;
  *(uint *)(param_1 + 0x30) = uVar47;
  *(short *)(param_1 + 0x34) = (short)uVar52;
  *(undefined2 *)(param_1 + 0x36) = 0;
  param_1[0x41] = local_90;
  *(undefined4 *)(param_1 + 0x56) = local_68;
  *(short *)(param_1 + 0x6e) = (short)iVar22;
  param_1[0x74] = bVar13;
  *(int **)(param_1 + 0x78) = piVar16;
  *param_1 = 1;
  param_1[0x6c] = local_f0;
  *(undefined2 *)(param_1 + 0x70) = uVar46;
  return;
}


