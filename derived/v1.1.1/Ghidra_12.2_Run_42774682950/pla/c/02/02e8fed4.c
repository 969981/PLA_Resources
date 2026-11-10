/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8fed4; name: FUN_02e8fed4
 */


undefined8 FUN_02e8fed4(long param_1,uint *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  long *aplStack_88 [2];
  long lStack_78;
  long local_70;
  long lStack_68;
  long *local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  if (*(uint *)(param_1 + 0xb8) == 0) {
    nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  }
  else {
    lVar5 = -((ulong)*(uint *)(param_1 + 0xb8) * 8 + 0xf & 0xffffffff0);
    uVar6 = local_58._4_4_;
    if (*(int *)(param_1 + 0xb0) == 0) {
      iVar11 = 0;
      local_60 = (long *)0x0;
      local_58 = (ulong)local_58._4_4_ << 0x20;
      local_50 = 0;
      lVar7 = local_50;
    }
    else {
      plVar1 = (long *)(param_1 + 0xa8);
      local_58 = (ulong)local_58._4_4_ << 0x20;
      local_50 = *(long *)*plVar1;
      local_48 = 0;
      lVar8 = local_50;
      lVar7 = local_50;
      if (local_50 == 0) {
        uVar4 = *(int *)(param_1 + 0xb0) - 1;
        if (uVar4 == 0) {
          iVar11 = 1;
          lVar8 = 0;
        }
        else {
          uVar9 = 0;
          do {
            lVar8 = ((long *)*plVar1)[uVar9 + 1];
            if (lVar8 != 0) {
              iVar11 = (int)uVar9 + 1;
              local_50 = lVar8;
              goto LAB_02e900f8;
            }
            uVar9 = uVar9 + 1;
          } while (uVar4 != uVar9);
          lVar8 = 0;
          local_50 = 0;
          iVar11 = (int)uVar9 + 1;
        }
LAB_02e900f8:
        local_58 = CONCAT44(uVar6,iVar11);
        lVar7 = local_50;
      }
      local_50 = lVar8;
      iVar11 = 0;
      local_60 = plVar1;
      if (lVar7 != 0) {
        iVar11 = 0;
        if ((*(byte *)(lVar7 + 0x68) & 1) == 0) goto LAB_02e8ff9c;
LAB_02e8ff60:
        local_50 = lVar7;
        *(long *)((long)aplStack_88 + (long)iVar11 * 8 + lVar5 + 8) = local_50;
        iVar11 = iVar11 + 1;
        FUN_02e94434(aplStack_88 + 1,plVar1,&local_60);
        local_48 = lStack_68;
        local_60 = aplStack_88[1];
        local_58 = lStack_78;
        local_50 = local_70;
        lVar7 = local_50;
        do {
          local_50 = lVar7;
          lVar7 = local_50;
          if (local_50 == 0) break;
          while( true ) {
            lVar7 = local_50;
            if ((*(byte *)(local_50 + 0x68) & 1) != 0) goto LAB_02e8ff60;
LAB_02e8ff9c:
            lVar7 = *(long *)(local_50 + 0x10);
            local_48 = local_50;
            if (lVar7 != 0) break;
            uVar6 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,uVar6);
            if (*(uint *)(local_60 + 1) <= uVar6) break;
            uVar9 = (ulong)uVar6;
            while (local_50 = *(long *)(*local_60 + uVar9 * 8), local_50 == 0) {
              uVar9 = uVar9 + 1;
              if (*(uint *)(local_60 + 1) <= (uint)uVar9) {
                local_50 = 0;
                local_48 = 0;
                local_58 = CONCAT44(local_58._4_4_,(uint)uVar9);
                lVar7 = local_50;
                goto LAB_02e9001c;
              }
            }
            local_48 = 0;
            local_58 = CONCAT44(local_58._4_4_,(int)uVar9);
            if (local_50 == 0) {
              lVar7 = 0;
              goto LAB_02e9001c;
            }
          }
        } while( true );
      }
    }
LAB_02e9001c:
    local_50 = lVar7;
    nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
    if (0 < iVar11) {
      lVar7 = (long)iVar11;
      do {
        lVar8 = lVar7 * 8;
        lVar7 = lVar7 + -1;
        FUN_02e944b0(param_1,*(undefined8 *)((long)aplStack_88 + lVar8 + lVar5));
      } while (0 < lVar7);
    }
  }
  uVar6 = *param_2;
  if (1 < uVar6) {
    if (uVar6 - 2 < 2) {
      uVar6 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar6 = 0;
      }
      goto LAB_02e90064;
    }
    if (1 < uVar6 - 6) {
      uVar6 = 0;
      goto LAB_02e90064;
    }
  }
  uVar6 = param_2[1];
LAB_02e90064:
  uVar10 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 6);
  uVar3 = *(undefined8 *)(param_2 + 8);
  if (param_2[10] != 2) {
    uVar10 = 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = 1;
  FUN_02e9823c(param_1 + 0xf8,uVar2,uVar6,uVar10,1,uVar3);
  return 1;
}


