/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008461cc; name: FUN_008461cc
 */


void FUN_008461cc(long *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong local_1a0;
  ulong local_198;
  undefined4 local_190;
  undefined1 auStack_184 [4];
  undefined4 local_180 [2];
  int local_178 [2];
  int local_170 [2];
  ulong *local_168;
  undefined4 local_160;
  long local_158;
  undefined4 local_150;
  ulong local_70 [2];
  
  if ((int)param_1[0xf6] == 0) {
    FUN_00846754(&local_1a0);
    if ((int)local_1a0 != 0) {
      sprintf((char *)local_170,"%08x");
    }
    FUN_00847058(local_178,(long)param_1 + 0x7c4,&local_1a0,param_2);
    if (local_178[0] != 0) {
      sprintf((char *)local_170,"%08x");
      local_180[0] = 0x8000000;
      lVar7 = (**(code **)(*param_1 + 0x78))(param_1,local_180,local_178,0,0,0);
      if (lVar7 != 0) {
        if ((int)param_1[0xf6] == 0) {
          local_70[0] = CONCAT44(local_70[0]._4_4_,0x10408);
        }
        else {
          FUN_00848d94(param_1 + 9,auStack_184);
          local_70[0] = local_70[0] & 0xffffffff00000000;
        }
        local_198 = local_198 & 0xffffffff00000000;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_198);
        FUN_007ee578(&local_198,local_70);
        FUN_00847058(local_70,(long)param_1 + 0x7c4,local_178,param_2);
      }
    }
    iVar10 = (int)param_1[1];
    if (iVar10 == 1) {
      local_158 = (long)param_1 + 0xc;
      local_150 = 0x10;
      local_170[0] = iVar10;
      lVar7 = FUN_00845d14(param_1[8],0);
      plVar4 = (long *)PTR_DAT_043773c0;
    }
    else {
      if (iVar10 == 0) {
        local_170[0] = 0;
      }
      lVar7 = FUN_00845d14(param_1[8],0);
      plVar4 = (long *)PTR_DAT_043773c0;
    }
    PTR_DAT_043773c0 = (undefined *)plVar4;
    if (lVar7 != 0) {
      iVar10 = 0;
      do {
        local_198 = local_198 & 0xffffffffffff0000;
        local_1a0 = local_1a0 & 0xffffffffffff0000;
        plVar8 = (long *)FUN_00854f4c(*plVar4);
        uVar9 = FUN_00845d14(param_1[8],iVar10);
        (**(code **)(*plVar8 + 0x20))(plVar8,uVar9,&local_198,&local_1a0);
        lVar7 = FUN_00845d14(param_1[8],iVar10);
        cVar2 = *(char *)(lVar7 + 0x622);
        lVar7 = FUN_00845d14(param_1[8],iVar10);
        iVar11 = 0;
        if (*(byte *)(lVar7 + 0x14) + 0x1c <= *(uint *)(lVar7 + 0x5f8)) {
          iVar11 = (*(uint *)(lVar7 + 0x5f8) - (uint)*(byte *)(lVar7 + 0x14)) + -0x1c;
        }
        if (cVar2 == '\0') {
          uVar5 = FUN_007e6cb0(local_170[0]);
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = ((iVar11 + uVar5) - 1) / uVar5;
          }
          iVar11 = uVar3 * uVar5;
        }
        lVar7 = FUN_00845d14(param_1[8],iVar10);
        iVar1 = 0;
        if (*(byte *)(lVar7 + 0x14) + 0x1c <= *(uint *)(lVar7 + 0x5f8)) {
          iVar1 = (*(uint *)(lVar7 + 0x5f8) - (uint)*(byte *)(lVar7 + 0x14)) + 0xffe4;
        }
        iVar11 = iVar11 - iVar1;
        plVar8 = (long *)FUN_00854f4c(*plVar4);
        uVar9 = FUN_00845d14(param_1[8],iVar10);
        uVar6 = (**(code **)(*plVar8 + 0x28))(plVar8,uVar9);
        if ((uint)(ushort)local_198 + (uint)(ushort)local_1a0 != 0) {
          uVar12 = *(undefined8 *)(*plVar4 + 0x78);
          uVar9 = FUN_00845d14(param_1[8],iVar10);
          FUN_00844d04(local_70,uVar12,uVar9,(uint)(ushort)local_1a0 + (uint)(ushort)local_198,uVar6
                       ,iVar11,1);
        }
        if ((ushort)local_198 != 0) {
          uVar12 = *(undefined8 *)(*plVar4 + 0x80);
          uVar9 = FUN_00845d14(param_1[8],iVar10);
          FUN_00844d04(local_70,uVar12,uVar9,local_198 & 0xffff,uVar6,iVar11,1);
        }
        if ((ushort)local_1a0 != 0) {
          uVar12 = *(undefined8 *)(*plVar4 + 0x88);
          uVar9 = FUN_00845d14(param_1[8],iVar10);
          FUN_00844d04(local_70,uVar12,uVar9,local_1a0 & 0xffff,uVar6,iVar11,1);
        }
        if ((local_170[0] != 0) &&
           (lVar7 = FUN_00845d14(param_1[8],iVar10), *(char *)(lVar7 + 0x622) == '\0')) {
          local_70[0] = 0;
          FUN_007ecf14(local_70);
          local_1a0 = local_70[0];
          memcpy(&local_198,&local_1a0,8);
          if (((int)param_1[1] == 1) && (param_1[0xf7] != 0)) {
            param_1[0xfa] = param_1[0xfa] + 1;
            lVar7 = FUN_00845d14(param_1[8],iVar10);
            FUN_007ed360(lVar7 + 0x15,param_1[0xfa]);
            plVar8 = (long *)param_1[0xf7];
            uVar9 = FUN_00845d14(param_1[8],iVar10);
            (**(code **)(*plVar8 + 0x18))(local_70,plVar8,&local_198,0xc,uVar9);
          }
          local_160 = 0xc;
          local_168 = &local_198;
          uVar9 = FUN_00845d14(param_1[8],iVar10);
          FUN_007f09f4(local_70,uVar9,local_170);
          if ((int)local_70[0] != 0) {
            return;
          }
        }
        plVar8 = (long *)FUN_00854f4c(*plVar4);
        uVar9 = FUN_00845d14(param_1[8],iVar10);
        (**(code **)(*plVar8 + 0x30))(local_70,plVar8,uVar9);
        if ((int)local_70[0] != 0) {
          lVar7 = FUN_00845d14(param_1[8],iVar10);
          *(undefined1 *)(lVar7 + 0x648) = 0;
        }
        FUN_00845d14(param_1[8],iVar10);
        FUN_007f031c();
        local_198 = 0x400000000;
        local_190 = 0;
        uVar9 = FUN_00845d14(param_1[8],iVar10);
        FUN_008439a4(param_1,&local_198,uVar9,1,&DAT_03996322);
        iVar10 = iVar10 + 1;
        lVar7 = FUN_00845d14(param_1[8],iVar10);
      } while (lVar7 != 0);
    }
    FUN_00845d5c(param_1[8]);
    *(undefined2 *)(param_1 + 0x81) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xf] = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    param_1[0x14] = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    param_1[0x19] = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    param_1[0x23] = 0;
    *(undefined1 *)(param_1 + 0x27) = 0;
    param_1[0x28] = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    param_1[0x2d] = 0;
    *(undefined1 *)(param_1 + 0x31) = 0;
    param_1[0x32] = 0;
    *(undefined1 *)(param_1 + 0x36) = 0;
    param_1[0x37] = 0;
    *(undefined1 *)(param_1 + 0x3b) = 0;
    param_1[0x3c] = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
    param_1[0x41] = 0;
    *(undefined1 *)(param_1 + 0x45) = 0;
    param_1[0x46] = 0;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    param_1[0x4b] = 0;
    *(undefined1 *)(param_1 + 0x4f) = 0;
    param_1[0x50] = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
    param_1[0x55] = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
    param_1[0x5a] = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    param_1[0x5f] = 0;
    *(undefined1 *)(param_1 + 99) = 0;
    param_1[100] = 0;
    *(undefined1 *)(param_1 + 0x68) = 0;
    param_1[0x69] = 0;
    *(undefined1 *)(param_1 + 0x6d) = 0;
    param_1[0x6e] = 0;
    *(undefined1 *)(param_1 + 0x72) = 0;
    param_1[0x73] = 0;
    *(undefined1 *)(param_1 + 0x77) = 0;
    param_1[0x78] = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    param_1[0x7d] = 0;
  }
  return;
}


