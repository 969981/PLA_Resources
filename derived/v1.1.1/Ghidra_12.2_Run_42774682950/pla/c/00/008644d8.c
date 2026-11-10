/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008644d8; name: FUN_008644d8
 */


void FUN_008644d8(int *param_1,long param_2,long param_3)

{
  long lVar1;
  MutexType *pMVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined2 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  ulong local_c8;
  ulong local_c0;
  int local_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined2 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_48 [2];
  
  lVar1 = param_3 + 0x600;
  uVar6 = FUN_007f0ee4(lVar1);
  if ((uVar6 & 1) != 0) {
    if (*(short *)(param_2 + 0x92) != 0) {
      lVar11 = 0;
      uVar6 = 0;
      do {
        FUN_007f0fc8(&local_c8,*(long *)(param_2 + 0x80) + lVar11);
        FUN_007f0fc8(&local_68,lVar1);
        uVar7 = FUN_007e45a8(&local_c8,&local_68);
        FUN_007e34a4(&local_68);
        FUN_007e34a4(&local_c8);
        if ((uVar7 & 1) != 0) {
          if (*(short *)(param_3 + 0x12) == 0) {
            uVar5 = FUN_007f02dc(param_2 + 8,uVar6 & 0xffffffff);
            *(undefined2 *)(param_3 + 0x12) = uVar5;
          }
          *(undefined2 *)(param_3 + 0xe) = *(undefined2 *)(*(long *)(param_2 + 0x88) + uVar6 * 2);
          cVar4 = *(char *)(param_3 + 0x623);
          goto joined_r0x008645a4;
        }
        uVar6 = uVar6 + 1;
        lVar11 = lVar11 + 0x20;
      } while (uVar6 < *(ushort *)(param_2 + 0x92));
    }
    cVar4 = *(char *)(param_3 + 0x623);
joined_r0x008645a4:
    if (cVar4 == '\0') {
      if (*(ushort *)(param_3 + 0xe) < 2) {
        local_c0 = local_c0 & 0xffffffff00000000;
        local_c8 = 0x20000000;
        FUN_007f0cd0(param_3,&local_c8,0);
        goto LAB_008648c8;
      }
    }
    else {
      *(undefined2 *)(param_3 + 0xe) = 0;
    }
    FUN_007f031c(param_3);
    if (*(char *)(param_3 + 0x648) != '\0') {
      uVar6 = (**(code **)(**(long **)(param_2 + 0x58) + 0x3d0))(*(long **)(param_2 + 0x58),lVar1);
      plVar8 = *(long **)(param_2 + 0x58);
      if ((uVar6 & 1) == 0) {
        uVar6 = (**(code **)(*plVar8 + 0x3d8))(plVar8,lVar1);
        if ((uVar6 & 1) == 0) {
          FUN_007f0fc8(&local_c8,lVar1);
          FUN_00864304(param_1,param_2,param_3,&local_c8);
          FUN_007e34a4(&local_c8);
          if (*param_1 != 0) {
            local_c8 = CONCAT44(local_c8._4_4_,0x10407);
            local_68 = local_68 & 0xffffffff00000000;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)&local_c8 | 4),(Result *)&local_68);
            if (*param_1 == (int)local_c8) {
              local_c0 = local_c0 & 0xffffffff00000000;
              local_c8 = 1;
              FUN_007f0cd0(param_3,&local_c8,0);
              return;
            }
            return;
          }
        }
        else {
          uVar9 = FUN_0085c374(*(undefined8 *)(param_2 + 0x58),lVar1);
          (**(code **)(**(long **)(param_2 + 0x58) + 0x3a0))
                    (param_1,*(long **)(param_2 + 0x58),param_3,uVar9);
          if (*param_1 != 0) {
            return;
          }
        }
      }
      else {
        uVar9 = FUN_0085c374(plVar8,lVar1);
        local_c8 = 0xffffffffffffffff;
        local_c0 = 0;
        local_b8 = 0;
        FUN_007e3400(auStack_b0);
        FUN_007e3400(auStack_90);
        local_70 = 0;
        pMVar2 = (MutexType *)(*(long *)(param_2 + 0x58) + 0x1378);
        nn::os::LockMutex(pMVar2);
        puVar10 = (ulong *)FUN_0085e934(*(undefined8 *)(param_2 + 0xa0),uVar9);
        if (puVar10 != (ulong *)0x0) {
          local_c8 = *puVar10;
          local_c0 = puVar10[1];
          local_b8 = (int)puVar10[2];
          FUN_007e346c(auStack_b0,puVar10 + 3);
          FUN_007e346c(auStack_90,puVar10 + 7);
          local_70 = (undefined2)puVar10[0xb];
        }
        uVar6 = *(ulong *)(*(long *)(param_2 + 0xa0) + 0x18);
        nn::os::UnlockMutex(pMVar2);
        if (local_c8 != 0xffffffffffffffff) {
          if (local_b8 != 0xd) {
            if (local_c8 == uVar6) {
              local_60 = 0;
              local_68 = 0x800000;
              FUN_007f0cd0(param_3,&local_68,1);
              local_60 = 0;
              local_68 = 0x800000;
              FUN_0085eaac(*(undefined8 *)(param_2 + 0xa0),&local_68);
              local_68 = local_68 & 0xffffffff00000000;
              local_48[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_48);
            }
            else {
              (**(code **)(**(long **)(param_2 + 0x58) + 0x388))
                        (&local_68,*(long **)(param_2 + 0x58),param_3);
              if ((int)local_68 == 0) goto LAB_008648ac;
            }
            FUN_007ee578(param_1,&local_68);
LAB_00864898:
            FUN_007e34a4(auStack_90);
            FUN_007e34a4(auStack_b0);
            return;
          }
          puVar3 = auStack_90;
          if ((char)local_70 != '\0') {
            puVar3 = auStack_b0;
          }
          FUN_007e3428(&local_68,puVar3);
          FUN_00864304(param_1,param_2,param_3,&local_68);
          FUN_007e34a4(&local_68);
          if (*param_1 != 0) {
            local_68 = CONCAT44(local_68._4_4_,0x10407);
            local_48[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_48);
            if (*param_1 == (int)local_68) {
              local_60 = 0;
              local_68 = 1;
              FUN_007f0cd0(param_3,&local_68,0);
            }
            goto LAB_00864898;
          }
        }
LAB_008648ac:
        FUN_007e34a4(auStack_90);
        FUN_007e34a4(auStack_b0);
      }
    }
  }
LAB_008648c8:
  local_c8 = local_c8 & 0xffffffff00000000;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_c8 | 4),(Result *)&local_68);
  FUN_007ee578(param_1,&local_c8);
  return;
}


