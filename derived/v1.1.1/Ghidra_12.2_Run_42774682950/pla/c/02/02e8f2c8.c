/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8f2c8; name: FUN_02e8f2c8
 */


int FUN_02e8f2c8(long param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  if (*param_2 != 0) {
    iVar9 = 1;
    switch(*param_2) {
    case 1:
      local_68 = *(undefined8 *)param_2;
      local_60 = *(undefined8 *)(param_2 + 2);
      uStack_58 = *(undefined8 *)(param_2 + 4);
      local_50 = *(undefined8 *)(param_2 + 6);
      uStack_48 = *(undefined8 *)(param_2 + 8);
      local_38 = *(long *)(param_2 + 0xc);
      iVar9 = FUN_02e8f724(param_1,&local_68);
      break;
    case 2:
      local_b0 = *(undefined8 *)param_2;
      local_a8 = *(undefined8 *)(param_2 + 2);
      uStack_a0 = *(undefined8 *)(param_2 + 4);
      local_98 = *(undefined8 *)(param_2 + 6);
      uStack_90 = *(undefined8 *)(param_2 + 8);
      local_88 = *(undefined8 *)(param_2 + 10);
      local_80 = *(undefined8 *)(param_2 + 0xc);
      local_78 = *(undefined8 *)(param_2 + 0xe);
      local_70 = *(undefined8 *)(param_2 + 0x10);
      iVar9 = FUN_02e8f924(param_1,&local_b0);
      break;
    case 3:
      local_f8 = *(undefined8 *)param_2;
      local_f0 = *(undefined8 *)(param_2 + 2);
      uStack_e8 = *(undefined8 *)(param_2 + 4);
      local_e0 = *(undefined8 *)(param_2 + 6);
      uStack_d8 = *(undefined8 *)(param_2 + 8);
      local_d0 = *(undefined8 *)(param_2 + 10);
      uStack_c8 = *(undefined8 *)(param_2 + 0xc);
      local_c0 = *(undefined8 *)(param_2 + 0xe);
      uStack_b8 = *(undefined8 *)(param_2 + 0x10);
      iVar9 = FUN_02e8fb3c(param_1,&local_f8);
      break;
    case 4:
      local_140 = *(undefined8 *)param_2;
      local_138 = *(undefined8 *)(param_2 + 2);
      uStack_130 = *(undefined8 *)(param_2 + 4);
      local_128 = *(undefined8 *)(param_2 + 6);
      uStack_120 = *(undefined8 *)(param_2 + 8);
      local_118 = *(undefined8 *)(param_2 + 10);
      uStack_110 = *(undefined8 *)(param_2 + 0xc);
      local_108 = *(undefined8 *)(param_2 + 0xe);
      uStack_100 = *(undefined8 *)(param_2 + 0x10);
      iVar9 = FUN_02e8fc40(param_1,&local_140);
      break;
    case 5:
      local_188 = *(undefined8 *)param_2;
      local_180 = *(undefined8 *)(param_2 + 2);
      uStack_178 = *(undefined8 *)(param_2 + 4);
      local_170 = *(undefined8 *)(param_2 + 6);
      uStack_168 = *(undefined8 *)(param_2 + 8);
      local_160 = *(undefined8 *)(param_2 + 10);
      uStack_158 = *(undefined8 *)(param_2 + 0xc);
      local_150 = *(undefined8 *)(param_2 + 0xe);
      uStack_148 = *(undefined8 *)(param_2 + 0x10);
      FUN_02e8fe44(param_1,&local_188);
      return 1;
    case 6:
      local_218 = *(undefined8 *)param_2;
      local_210 = *(undefined8 *)(param_2 + 2);
      uStack_208 = *(undefined8 *)(param_2 + 4);
      local_200 = *(undefined8 *)(param_2 + 6);
      uStack_1f8 = *(undefined8 *)(param_2 + 8);
      local_1f0 = *(undefined8 *)(param_2 + 10);
      uStack_1e8 = *(undefined8 *)(param_2 + 0xc);
      local_1e0 = *(undefined8 *)(param_2 + 0xe);
      uStack_1d8 = *(undefined8 *)(param_2 + 0x10);
      iVar9 = FUN_02e90148(param_1,&local_218);
      break;
    case 7:
      local_260 = *(undefined8 *)param_2;
      local_258 = *(undefined8 *)(param_2 + 2);
      uStack_250 = *(undefined8 *)(param_2 + 4);
      local_248 = *(undefined8 *)(param_2 + 6);
      uStack_240 = *(undefined8 *)(param_2 + 8);
      local_238 = *(undefined8 *)(param_2 + 10);
      uStack_230 = *(undefined8 *)(param_2 + 0xc);
      local_228 = *(undefined8 *)(param_2 + 0xe);
      uStack_220 = *(undefined8 *)(param_2 + 0x10);
      FUN_02e9022c(param_1,&local_260);
      return 1;
    case 8:
      local_1d0 = *(undefined8 *)param_2;
      local_1c8 = *(undefined8 *)(param_2 + 2);
      uStack_1c0 = *(undefined8 *)(param_2 + 4);
      local_1b8 = *(undefined8 *)(param_2 + 6);
      uStack_1b0 = *(undefined8 *)(param_2 + 8);
      local_1a8 = *(undefined8 *)(param_2 + 10);
      uStack_1a0 = *(undefined8 *)(param_2 + 0xc);
      local_198 = *(undefined8 *)(param_2 + 0xe);
      uStack_190 = *(undefined8 *)(param_2 + 0x10);
      FUN_02e8fed4(param_1,&local_1d0);
      return 1;
    case 10:
      local_2a8 = *(undefined8 *)param_2;
      local_2a0 = *(undefined8 *)(param_2 + 2);
      uStack_298 = *(undefined8 *)(param_2 + 4);
      local_290 = *(undefined8 *)(param_2 + 6);
      uStack_288 = *(undefined8 *)(param_2 + 8);
      local_280 = *(undefined8 *)(param_2 + 10);
      uStack_278 = *(undefined8 *)(param_2 + 0xc);
      local_270 = *(undefined8 *)(param_2 + 0xe);
      uStack_268 = *(undefined8 *)(param_2 + 0x10);
      iVar9 = FUN_02e902c8(param_1,&local_2a8);
    }
    return iVar9;
  }
  local_38 = 0;
  local_88 = *(undefined8 *)param_2;
  local_80 = *(undefined8 *)(param_2 + 2);
  local_78 = *(undefined8 *)(param_2 + 4);
  local_70 = *(undefined8 *)(param_2 + 6);
  local_68 = *(undefined8 *)(param_2 + 8);
  local_60 = *(undefined8 *)(param_2 + 10);
  uStack_58 = *(undefined8 *)(param_2 + 0xc);
  local_50 = *(undefined8 *)(param_2 + 0xe);
  uStack_48 = *(undefined8 *)(param_2 + 0x10);
  iVar9 = FUN_02e90504(param_1,&local_88,&local_38,0,0,0);
  lVar8 = local_38;
  if (iVar9 == 1) {
    *(byte *)(local_38 + 0x68) = *(byte *)(local_38 + 0x68) | 1;
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    if (param_2[10] != 2) {
      uVar11 = 0;
    }
    FUN_02e97894(param_1 + 0xa8,param_2[1],uVar11);
LAB_02e8f5a8:
    iVar12 = 1;
  }
  else {
    if (iVar9 == 0x45) goto LAB_02e8f5a8;
    iVar12 = iVar9;
    if (local_38 != 0) {
      FUN_02e8ec28(local_38);
      nn::os::LockMutex((MutexType *)&DAT_0440a350);
      piVar1 = (int *)(lVar8 + 0x60);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 < 1) {
        if (*(long *)(lVar8 + 0x18) != 0) {
          (*DAT_0442d158)(((*(byte *)(lVar8 + 0x68) & 8) >> 3) << 0x1f | 3);
          *(undefined8 *)(lVar8 + 0x18) = 0;
        }
        FUN_02e8e6dc(DAT_0440a148,lVar8);
        iVar2 = *(int *)(lVar8 + 100);
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        if (iVar2 < 1) {
          if ((*(byte *)(lVar8 + 0x68) >> 1 & 1) != 0) {
            (*DAT_0442d150)(0,*(undefined8 *)(lVar8 + 0x20));
            *(byte *)(lVar8 + 0x68) = *(byte *)(lVar8 + 0x68) & 0xfd;
          }
          *(undefined8 *)(lVar8 + 0x20) = 0;
          (*DAT_0442d150)(0,lVar8);
        }
      }
      else {
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
      }
    }
  }
  uVar10 = *param_2;
  if (1 < uVar10) {
    if (uVar10 - 2 < 2) {
      uVar10 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar10 = 0;
      }
      goto LAB_02e8f5bc;
    }
    if (1 < uVar10 - 6) {
      uVar10 = 0;
      goto LAB_02e8f5bc;
    }
  }
  uVar10 = param_2[1];
LAB_02e8f5bc:
  uVar5 = param_2[10];
  uVar11 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 6);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0xf4) = iVar9;
  if (uVar5 != 2) {
    uVar11 = 0;
  }
  FUN_02e9823c(param_1 + 0xf8,uVar3,uVar10,uVar11,iVar9,uVar4);
  return iVar12;
}


