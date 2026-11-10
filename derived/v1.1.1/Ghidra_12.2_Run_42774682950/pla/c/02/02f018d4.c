/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f018d4; name: FUN_02f018d4
 */


undefined8 FUN_02f018d4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  void *__dest;
  byte bVar4;
  long lVar5;
  long *plVar6;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0 [2];
  void *local_a8;
  undefined4 local_a0 [5];
  int local_8c;
  undefined2 local_88;
  undefined5 uStack_86;
  undefined4 uStack_81;
  undefined1 uStack_7d;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  undefined2 local_50;
  long local_48;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  long local_28;
  
  lVar5 = *(long *)(param_1 + 0x18);
  *(byte *)(param_1 + 0x20) =
       (byte)(*(uint *)(lVar5 + 0x2a3) >> 0x14) & 2 | *(byte *)(param_1 + 0x20) & 0xfd;
  plVar6 = (long *)(lVar5 + 0x18);
  if ((*(ushort *)(lVar5 + 0x198) & 1) == 0) {
    (**(code **)(*plVar6 + 0x50))(plVar6,0);
  }
  else if ((*(ushort *)(lVar5 + 0x198) >> 4 & 1) != 0) {
    (**(code **)(*plVar6 + 0x58))();
  }
  plVar6 = (long *)(param_1 + 0x38);
  if (*plVar6 == 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = *(ulong *)(lVar5 + 0x230);
    local_c8 = (ulong)CONCAT12((char)(int)*(float *)(lVar5 + 0x2a8),*(undefined2 *)(lVar5 + 0x2a0));
    if ((*(ushort *)(local_d0 + 0xc) & 0x7c) == 0xc || (*(ushort *)(local_d0 + 0xc) & 2) != 0) {
      local_c0 = *(undefined8 *)(lVar5 + 0x2c8);
      local_b8 = (ulong)*(uint *)(lVar5 + 0x2d0);
    }
    uVar2 = FUN_02f03280(plVar6,&local_d0);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
  }
  plVar3 = *(long **)(param_1 + 0xa0);
  if (plVar3 != (long *)0x0) goto LAB_02f01c94;
  local_28 = 0;
  local_8c = 0;
  if ((*(byte *)(param_1 + 0x7a) & 0x38) == 8) {
    local_28 = *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 100);
    local_8c = *(int *)(param_1 + 0x5c) - *(uint *)(param_1 + 100);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) & 199 | 0x10;
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))(*(long **)(param_1 + 0x38),&local_d0);
    local_c8._0_6_ = CONCAT15(*(undefined1 *)(param_1 + 0x40),(undefined5)local_c8);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x30))(*(long **)(param_1 + 0x38),&local_d0);
    iVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x88))
                      (*(long **)(param_1 + 0x38),&local_28,&local_8c,0);
    if ((iVar1 != 0x11) && (iVar1 != 0x2d)) {
      if (iVar1 == 0x2e) {
        return 0x3f;
      }
      return 2;
    }
  }
  local_a8 = (void *)0x0;
  local_b0[0] = 0;
  local_a0[0] = 0;
  uVar2 = FUN_02ead870(local_28,local_8c,&local_d0,param_1 + 0x88,&local_b8,(long)&local_b8 + 4,
                       &local_c0,(long)&local_c0 + 4,local_b0,local_a0,0);
  if ((int)uVar2 != 1) {
    return uVar2;
  }
  if ((*(byte *)(param_1 + 0x7a) >> 1 & 1) == 0) {
    bVar4 = ((*(byte *)(param_1 + 0x7a) & 0x38) != 0) << 3;
  }
  else {
    bVar4 = 8;
  }
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xf7 | bVar4;
  if (local_b8._4_4_ - 1U < (uint)local_b8) {
LAB_02f01d4c:
    uVar2 = 7;
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (local_b0[0] == 0) {
LAB_02f01a8c:
      lVar5 = (**(code **)(param_1 + 0x98))(&local_d0);
      *(long *)(param_1 + 0xa0) = lVar5;
      if (lVar5 != 0) {
        lVar5 = *(long *)(param_1 + 0x18);
        local_58 = *(undefined4 *)(lVar5 + 0x7c);
        local_54 = *(uint *)(lVar5 + 0x2a3) >> 0x1c & 7;
        local_50 = *(undefined2 *)(lVar5 + 0x2a0);
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        local_70 = 0;
        local_88 = 0;
        uStack_86 = 0;
        uStack_81 = 0;
        uStack_7d = 0;
        local_7c = 0;
        local_48 = param_1;
        (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                  (*(long **)(param_1 + 0x38),(long)&local_70 + 4);
        uVar2 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))
                          (*(long **)(param_1 + 0xa0),&local_d0,&local_88,&local_58);
        if ((int)uVar2 != 1) {
          return uVar2;
        }
        if (local_78._4_4_ != 0) {
          if (((((uint)local_68 <= (int)local_c0 + local_c0._4_4_) &&
               (local_68._4_4_ <= (int)local_c0 + local_c0._4_4_)) && (local_70._4_4_ != 0.0)) &&
             ((int)local_78 != 0)) {
            lVar5 = *(long *)(param_1 + 0x18);
            *(ulong *)(lVar5 + 0x240) = CONCAT17((undefined1)uStack_81,CONCAT52(uStack_86,local_88))
            ;
            *(undefined4 *)(lVar5 + 0x247) = uStack_81;
            if (local_b8._4_4_ == 0) {
              local_b8 = CONCAT44(local_78._4_4_ + -1,(uint)local_b8);
            }
            (**(code **)(**(long **)(param_1 + 0x38) + 0x30))
                      (*(long **)(param_1 + 0x38),(long)&local_70 + 4);
            (**(code **)(**(long **)(param_1 + 0x38) + 0x38))
                      (*(long **)(param_1 + 0x38),local_70 & 0xffffffff);
            *(uint *)(param_1 + 0x6c) = (int)local_c0 + local_c0._4_4_;
            *(uint *)(param_1 + 0x70) = (uint)local_68;
            *(uint *)(param_1 + 0x74) = local_68._4_4_;
            *(undefined2 *)(param_1 + 0x78) = local_50;
            (**(code **)(**(long **)(param_1 + 0x38) + 0x28))(*(long **)(param_1 + 0x38),auStack_40)
            ;
            if (*(short *)(param_1 + 0x78) == 1) {
              local_3c = 0;
              uStack_38 = 0;
            }
            else {
              local_3c = *(undefined4 *)(param_1 + 0x70);
              uStack_38 = *(undefined4 *)(param_1 + 0x74);
            }
            (**(code **)(**(long **)(param_1 + 0x38) + 0x30))(*(long **)(param_1 + 0x38),auStack_40)
            ;
            *(undefined4 *)(param_1 + 0x24) = 0;
            *(int *)(param_1 + 0x28) = local_78._4_4_;
            *(uint *)(param_1 + 0x2c) = (uint)local_b8;
            *(int *)(param_1 + 0x30) = local_b8._4_4_;
            *(undefined2 *)(param_1 + 0x34) = local_50;
            *(int *)(param_1 + 0xac) = (int)local_78;
            *(uint *)(param_1 + 0xa8) = local_c0._4_4_;
            *(ushort *)(param_1 + 0xb0) = uStack_60._4_2_;
            *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xf8 | (byte)local_7c & 7;
            if ((uStack_60._4_2_ >> 4 & 1) == 0) {
              if ((uStack_60 & 0x100000000) == 0) {
                *(undefined4 *)(param_1 + 0xb4) = 0;
              }
              else {
                *(undefined4 *)(param_1 + 0xb4) = 1;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0xb4) = 2;
            }
            uVar2 = FUN_02f035e0(plVar6,local_28,local_8c);
            if ((int)uVar2 != 1) {
              return uVar2;
            }
            plVar3 = *(long **)(param_1 + 0xa0);
            *(ulong *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + (ulong)local_c0._4_4_;
            *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - local_c0._4_4_;
            *(uint *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + local_c0._4_4_;
LAB_02f01c94:
            uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,plVar6);
            if ((int)uVar2 != 1) {
              return uVar2;
            }
            if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x2a5) >> 6 & 1) != 0) {
              FUN_02f01e08(param_1,&local_d0,&local_88);
              uVar2 = FUN_02f01f14(param_1,local_d0 & 0xffffffff,local_88);
              if ((int)uVar2 != 1) {
                return uVar2;
              }
            }
            if ((*(ushort *)(param_1 + 0xb0) & 0x11) == 1) {
              FUN_02f02094(param_1);
            }
            return 1;
          }
        }
        goto LAB_02f01d4c;
      }
    }
    else {
      if (bVar4 != 0) {
        *(void **)(param_1 + 0x10) = local_a8;
        goto LAB_02f01a8c;
      }
      __dest = (void *)FUN_02f59e30(5);
      *(void **)(param_1 + 0x10) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,local_a8,(ulong)local_b0[0]);
        goto LAB_02f01a8c;
      }
    }
    uVar2 = 0x34;
  }
  return uVar2;
}


