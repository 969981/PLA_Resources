/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00233768; name: FUN_00233768
 */


undefined8
FUN_00233768(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
            long param_6,long param_7)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  long local_1d8;
  long *plStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined2 local_188;
  undefined2 local_184;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  long *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined1 local_ea;
  undefined4 local_e8;
  long local_d8;
  long local_d0;
  int local_c8;
  long local_c0;
  long local_b8;
  int local_b0;
  undefined1 auStack_a8 [72];
  
  param_1[8] = param_5;
  memset(auStack_208,0,0x160);
  if (param_7 == 0) {
    local_190 = 0;
    local_1c8 = 0x3f8000003f800000;
  }
  else {
    local_1c8 = *(undefined8 *)(param_7 + 0x28);
    local_190 = *(undefined8 *)(param_7 + 0x20);
  }
  local_1b8 = *(long **)(param_6 + 0x10);
  local_1b0 = *(undefined8 *)(param_6 + 0x18);
  local_1a0 = *(undefined8 *)(param_6 + 0x28);
  local_f8 = *(undefined1 *)(param_6 + 0xd0);
  local_f7 = *(undefined1 *)(param_6 + 0xd1);
  local_f6 = *(undefined1 *)(param_6 + 0xd2);
  local_178 = *(undefined8 *)(param_6 + 0x50);
  uStack_170 = *(undefined8 *)(param_6 + 0x58);
  local_168 = *(undefined8 *)(param_6 + 0x60);
  uStack_160 = *(undefined8 *)(param_6 + 0x68);
  local_158 = *(undefined8 *)(param_6 + 0x70);
  uStack_150 = *(undefined8 *)(param_6 + 0x78);
  local_148 = *(undefined8 *)(param_6 + 0x80);
  uStack_140 = *(undefined8 *)(param_6 + 0x88);
  local_138 = *(undefined4 *)(param_6 + 0x90);
  local_134 = *(undefined4 *)(param_6 + 0x94);
  local_118 = *(undefined8 *)(param_6 + 0xb0);
  local_110 = *(undefined8 *)(param_6 + 0xb8);
  local_128 = *(long **)(param_6 + 0xa0);
  local_120 = *(undefined1 *)(param_6 + 0xa8);
  local_f0 = *(undefined1 *)(param_6 + 0xd8);
  local_ef = *(undefined1 *)(param_6 + 0xd9);
  local_ee = *(undefined1 *)(param_6 + 0xda);
  local_ed = *(undefined1 *)(param_6 + 0xdb);
  local_ec = *(undefined1 *)(param_6 + 0xdc);
  local_eb = *(undefined1 *)(param_6 + 0xdd);
  local_ea = *(undefined1 *)(param_6 + 0xde);
  local_e8 = *(undefined4 *)(param_6 + 0xe0);
  local_188 = 0;
  local_184 = 0;
  local_130 = 0;
  local_1c0 = 0;
  local_f4 = *(undefined4 *)(param_4 + 8);
  local_198 = auStack_208;
  *(int *)(local_128 + 1) = (int)local_128[1] + 1;
  lVar7 = local_128[4];
  if (lVar7 != 0) {
    plVar9 = (long *)(*(long *)(lVar7 + 0x20) + (long)*(int *)(lVar7 + 0x28) * 0x68);
    *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
    *(int *)(local_128 + 3) = (int)local_128[3] + 1;
    lVar7 = local_128[4];
    plVar9[5] = param_7;
    plVar9[6] = lVar7;
    *(undefined4 *)(plVar9 + 9) = 0;
    *(undefined4 *)(plVar9 + 0xc) = 0;
    plVar9[2] = (long)param_1;
    plVar8 = (long *)local_128[2];
    lVar7 = *plVar9;
    *plVar9 = *plVar8;
    *(long **)(lVar7 + 8) = plVar8;
    *(long **)(*plVar8 + 8) = plVar9;
    *plVar8 = lVar7;
    *(long **)(*local_128 + (long)(int)local_128[1] * 8 + -8) = plVar9;
  }
  local_d8 = param_4 + (ulong)*(ushort *)(param_4 + 6);
  local_1d8 = param_5;
  plStack_1d0 = param_1;
  local_1a8 = param_1;
  FUN_00232fb0(auStack_208,param_4);
  if (local_c8 < 0x316e6170) goto LAB_00233a3c;
  do {
    lVar7 = local_d8;
    if (local_c8 < 0x31747063) {
      if (local_c8 < 0x31726373) {
        if (local_c8 == 0x316e6170) goto LAB_00233bcc;
        lVar4 = local_c0;
        if (local_c8 == 0x31707267) {
          lVar10 = param_1[4];
          if (lVar10 == 0) {
            lVar7 = (**(code **)PTR_DAT_04372ba8)(0x10,4,*(undefined8 *)PTR_DAT_04372bb8);
            if (lVar7 != 0) {
              *(long *)lVar7 = lVar7;
              *(long *)(lVar7 + 8) = lVar7;
            }
            param_1[4] = lVar7;
            lVar7 = local_d8;
            lVar4 = local_c0;
          }
          else {
            lVar4 = local_c0;
            if (local_b0 == 1) {
              lVar6 = param_1[3];
              lVar4 = (**(code **)PTR_DAT_04372ba8)(0x38,4,*(undefined8 *)PTR_DAT_04372bb8);
              if (lVar4 != 0) {
                FUN_00230180(lVar4,lVar7,lVar6);
              }
              FUN_00230538(lVar10,lVar4);
              lVar7 = local_d8;
              lVar4 = local_c0;
            }
          }
        }
      }
      else {
        if (local_c8 == 0x31726373) goto LAB_00233bcc;
        lVar4 = local_c0;
        if ((local_c8 == 0x31746e63) && (lVar4 = local_c0, local_1b8 != (long *)0x0)) {
          FUN_0022d4e0(auStack_a8,local_d8,local_d0);
          (**(code **)(*local_1b8 + 0x10))(local_1b8,param_3,param_1,auStack_a8);
          lVar7 = local_d8;
          lVar4 = local_c0;
        }
      }
    }
    else if (local_c8 < 0x31747874) {
      if (local_c8 == 0x31747063) goto LAB_00233bcc;
      lVar4 = local_c0;
      if (local_c8 == 0x31747270) goto LAB_00233bcc;
    }
    else {
      if (local_c8 == 0x31747874) goto LAB_00233bcc;
      lVar4 = local_c0;
      if (local_c8 == 0x3174796c) {
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(local_d8 + 0xc);
        uVar2 = *(undefined4 *)(local_d8 + 0x10);
        param_1[6] = local_d8 + 0x1c;
        *(undefined4 *)((long)param_1 + 0x2c) = uVar2;
        param_1[7] = local_d0;
        lVar4 = local_c0;
      }
    }
joined_r0x00233b34:
    while( true ) {
      local_d8 = lVar4;
      if (local_d8 == 0) {
        if (local_128[4] != 0) {
          iVar3 = (int)local_128[1];
          uVar5 = 0;
          if ((0 < iVar3) && (iVar3 <= *(int *)PTR_DAT_04372bd8)) {
            uVar5 = *(undefined8 *)(*local_128 + (long)(iVar3 + -1) * 8);
          }
          local_d8 = lVar7;
          FUN_00233ea8(param_1,uVar5);
        }
        iVar3 = 0;
        if (0 < (int)local_128[1]) {
          iVar3 = (int)local_128[1] + -1;
        }
        *(int *)(local_128 + 1) = iVar3;
        return 1;
      }
      local_c0 = local_d8;
      FUN_00232fb0(auStack_208,param_4);
      if (0x316e616f < local_c8) break;
LAB_00233a3c:
      plVar8 = local_128;
      lVar7 = local_d8;
      if (local_c8 < 0x31696c61) goto LAB_00233aac;
      if (local_c8 < 0x316c7463) {
        if (local_c8 == 0x31696c61) goto LAB_00233bcc;
        lVar4 = local_c0;
        if (local_c8 == 0x316c6776) goto LAB_00233c30;
      }
      else if (local_c8 == 0x316c7463) {
LAB_00233c30:
        if (local_128[4] == 0) {
          __s = (void *)local_128[5];
          iVar3 = *(int *)PTR_DAT_04372bd8;
          *(int *)((long)local_128 + 0xc) = iVar3;
          __n = (long)iVar3 * 8;
          *local_128 = (long)__s;
          pvVar1 = (void *)((long)__s + __n);
          memset(__s,0,__n);
          *(void **)pvVar1 = pvVar1;
          *(void **)((long)pvVar1 + 8) = pvVar1;
          plVar8[2] = (long)pvVar1;
          FUN_0023599c((long)pvVar1 + 0x10,(long)pvVar1 + 0x40);
          plVar8[4] = (long)pvVar1 + 0x10;
          lVar7 = local_128[4];
          if (lVar7 != 0) {
            plVar9 = (long *)(*(long *)(lVar7 + 0x20) + (long)*(int *)(lVar7 + 0x28) * 0x68);
            *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
            *(int *)(local_128 + 3) = (int)local_128[3] + 1;
            lVar7 = local_128[4];
            plVar9[5] = param_7;
            plVar9[6] = lVar7;
            *(undefined4 *)(plVar9 + 9) = 0;
            *(undefined4 *)(plVar9 + 0xc) = 0;
            plVar9[2] = (long)param_1;
            plVar8 = (long *)local_128[2];
            lVar7 = *plVar9;
            *plVar9 = *plVar8;
            *(long **)(lVar7 + 8) = plVar8;
            *(long **)(*plVar8 + 8) = plVar9;
            *plVar8 = lVar7;
            *(long **)(*local_128 + (long)(int)local_128[1] * 8 + -8) = plVar9;
          }
        }
        if (local_c8 == 0x316c7463) {
          *(undefined8 *)(*(long *)(*local_128 + (long)(int)local_128[1] * 8 + -8) + 0x18) =
               local_1e8;
          *(undefined1 *)(*(long *)(*local_128 + (long)(int)local_128[1] * 8 + -8) + 100) =
               *(undefined1 *)(param_6 + 0xd9);
          *(undefined1 *)(*(long *)(*local_128 + (long)(int)local_128[1] * 8 + -8) + 0x65) =
               *(undefined1 *)(param_6 + 0xdb);
        }
        lVar7 = local_d8;
        lVar4 = local_c0;
        if (local_c8 == 0x316c6776) {
          *(undefined8 *)(*(long *)(*local_128 + (long)(int)local_128[1] * 8 + -8) + 0x20) =
               local_1e0;
          lVar4 = local_c0;
        }
      }
      else {
        lVar4 = local_c0;
        if (local_c8 == 0x316d7473) {
          FUN_002333a8(param_1,auStack_208,param_3,param_7);
          lVar7 = local_d8;
          lVar4 = local_c0;
        }
      }
    }
  } while( true );
LAB_00233aac:
  if (((local_c8 == 0x31636970) || (local_c8 == 0x31646e62)) ||
     (lVar4 = local_c0, local_c8 == 0x31646e77)) {
LAB_00233bcc:
    local_108 = local_d0;
    lVar10 = (**(code **)(*param_1 + 0x78))
                       (param_1,param_2,param_3,local_d8,param_7,&local_1c8,auStack_208);
    lVar7 = local_d8;
    lVar4 = local_c0;
    if (lVar10 != 0) {
      lVar4 = local_c0;
      local_b8 = lVar10;
    }
  }
  goto joined_r0x00233b34;
}


