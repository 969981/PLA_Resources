/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00875d30; name: FUN_00875d30
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00875d30(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_170 [24];
  undefined2 local_158;
  undefined1 local_150 [8];
  undefined1 *local_148;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined *local_130;
  undefined1 local_128;
  undefined2 local_127;
  undefined1 local_125 [197];
  undefined4 local_60 [4];
  
  if ((int)param_1[0xf7] != 4 && (int)param_1[0xf7] != 1) {
    return;
  }
  local_60[0] = 0;
  local_150 = (undefined1  [8])((ulong)local_150 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_150);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = FUN_00873808(param_1,uVar9);
  local_150 = (undefined1  [8])(PTR_DAT_043777e0 + 0x10);
  local_130 = PTR_DAT_043777e0 + 0x68;
  uVar10 = uVar5 & 0xffffffff;
  local_148 = &local_128;
  uStack_140 = 0xc0;
  local_128 = 0;
  lVar7 = 0;
  puVar8 = (undefined8 *)local_150;
  do {
    *(undefined2 *)((long)puVar8 + 0x29) = 0;
    lVar1 = lVar7 + 4;
    *(undefined1 *)((long)puVar8 + 0x2b) = 0;
    puVar8 = (undefined8 *)((long)local_150 + lVar1);
    local_125[lVar7 + 1] = 0;
    lVar7 = lVar1;
  } while (lVar1 != 0xc0);
  local_13c = 0;
  uStack_138 = 0;
  uStack_136 = 0;
  FUN_007e37e0(param_4,local_150);
  cVar3 = *(char *)(param_2 + 8);
  uVar4 = (uint)uVar5;
  if (cVar3 != '\a') {
    if ((*(short *)(param_2 + 0x2a) != 0) && (*(short *)(param_2 + 0x2a) != (short)param_1[0xf9])) {
      return;
    }
    switch(cVar3) {
    case '\0':
      return;
    case '\b':
    case '\t':
      if ((uVar4 & 0xffff) < 0x17) {
        uVar10 = uVar5 & 0xffff;
        if ((int)param_1[uVar10 * 0x16 + 0x10b] != 1) {
          return;
        }
        *(undefined2 *)(param_1 + uVar10 * 0x16 + 0x10d) = *(undefined2 *)(param_2 + 0x28);
        uVar6 = FUN_007e4430(param_1 + uVar10 * 0x16 + 0x10e);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = FUN_007e4430(param_1 + uVar10 * 0x16 + 0x112), (uVar6 & 1) == 0)) {
          FUN_008761ac(param_1,uVar5 & 0xffffffff,param_2);
          FUN_007ecf14(param_1 + uVar10 * 0x16 + 0x11e);
          *(undefined4 *)(param_1 + uVar10 * 0x16 + 0x10b) = 2;
          FUN_007ecf14(param_1 + 0x108);
        }
        if (*(char *)(param_2 + 8) == '\b') {
          FUN_00875ad8(param_1,9,uVar9,(short)param_1[uVar10 * 0x16 + 0x10d]);
        }
        FUN_008749a8(param_1,0,param_1 + uVar10 * 0x16 + 0x112,(short)param_1[uVar10 * 0x16 + 0x10d]
                    );
        return;
      }
      break;
    case '\n':
    case '\f':
      if ((uVar4 & 0xffff) < 0x17) {
        uVar10 = FUN_007e4430(param_1 + (uVar5 & 0xffff) * 0x16 + 0x112);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (*(char *)(param_2 + 8) == '\n') {
          uVar9 = 0xb;
        }
        else {
          uVar9 = 0xd;
        }
        FUN_00874c48(param_1,uVar9,param_1 + (uVar5 & 0xffff) * 0x16 + 0x112,(short)param_1[0xc],
                     (short)param_1[(uVar5 & 0xffff) * 0x16 + 0x10d]);
        return;
      }
      break;
    case '\v':
    case '\r':
      if ((uVar4 & 0xffff) < 0x17) {
        uVar5 = uVar5 & 0xffff;
        if ((int)param_1[uVar5 * 0x16 + 0x10b] == 3) {
          *(uint *)(param_1 + uVar5 * 0x16 + 0x120) = (uint)(cVar3 == '\v');
          FUN_007ecf14(param_1 + uVar5 * 0x16 + 0x11e);
          *(undefined4 *)(param_1 + uVar5 * 0x16 + 0x10b) = 4;
          return;
        }
        return;
      }
    }
    local_148 = (undefined1 *)((ulong)local_148 & 0xffffffff00000000);
    local_150 = (undefined1  [8])0x1000;
    (**(code **)(*param_1 + 0x10))(param_1,local_150);
    return;
  }
  if ((uint)*(ushort *)(param_1 + 0xc) != (uVar4 & 0xffff)) {
    uVar5 = uVar5 & 0xffff;
    if ((short)param_1[uVar5 * 0x16 + 0x10d] == *(short *)(param_2 + 0x28)) {
      FUN_007e3400(local_150);
      FUN_007e34ac(local_150,*(undefined4 *)(param_2 + 0xc));
      uStack_138 = *(undefined2 *)(param_2 + 0x10);
      FUN_007e3400(auStack_170);
      FUN_007e34ac(auStack_170,*(undefined4 *)(param_2 + 0x14));
      local_158 = *(undefined2 *)(param_2 + 0x10);
      uVar6 = FUN_007e45a8(param_1 + uVar5 * 0x16 + 0x10e,local_150);
      if (((uVar6 & 1) == 0) ||
         (uVar6 = FUN_007e45a8(param_1 + uVar5 * 0x16 + 0x112,auStack_170), (uVar6 & 1) == 0)) {
        FUN_0087088c(param_1 + uVar5 * 0x16 + 0x10b);
        uVar10 = (ulong)*(ushort *)(param_1 + 0xc);
      }
      FUN_007e34a4(auStack_170);
      FUN_007e34a4(local_150);
      if ((uint)*(ushort *)(param_1 + 0xc) != ((uint)uVar10 & 0xffff)) {
        iVar2 = (int)param_1[0xf7];
        goto joined_r0x0087600c;
      }
    }
    else {
      FUN_0087088c(param_1 + uVar5 * 0x16 + 0x10b);
    }
  }
  uVar4 = FUN_00873aa4(param_1,uVar9,*(undefined2 *)(param_2 + 0x28));
  if (0x16 < (uVar4 & 0xffff)) {
    return;
  }
  uVar10 = (ulong)uVar4;
  FUN_007ecf14(param_1 + 0x108);
  iVar2 = (int)param_1[0xf7];
joined_r0x0087600c:
  if (iVar2 == 4) {
    uVar10 = uVar10 & 0xffff;
    uVar5 = FUN_007e4430(param_1 + uVar10 * 0x16 + 0x10e);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = FUN_007e4430(param_1 + uVar10 * 0x16 + 0x112), (uVar5 & 1) == 0)) {
      FUN_00875ad8(param_1,8,uVar9,(short)param_1[uVar10 * 0x16 + 0x10d]);
      FUN_007ecf14(param_1 + uVar10 * 0x16 + 0x11e);
      *(undefined4 *)(param_1 + uVar10 * 0x16 + 0x10b) = 1;
    }
    else {
      FUN_00875ad8(param_1,9,uVar9,(short)param_1[uVar10 * 0x16 + 0x10d]);
    }
    uVar5 = FUN_007e4430(param_1 + uVar10 * 0x16 + 0x112);
    if ((uVar5 & 1) != 0) {
      FUN_008749a8(param_1,0,param_1 + uVar10 * 0x16 + 0x112,(short)param_1[uVar10 * 0x16 + 0x10d]);
    }
  }
  return;
}


