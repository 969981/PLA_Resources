/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c6d80; name: FUN_032c6d80
 */


int FUN_032c6d80(long param_1,undefined8 param_2,ulong *param_3,uint param_4,long param_5,
                uint *param_6)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *local_150;
  undefined8 local_148;
  undefined1 local_140 [40];
  char *local_118;
  undefined8 uStack_110;
  undefined4 local_c0;
  uint local_b4;
  long local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 local_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  int local_58;
  int local_54;
  
  local_70 = param_1;
  lStack_68 = param_2;
  FUN_032c75b8(&local_90,&local_70,0x3a,0);
  local_70 = local_90;
  lStack_68 = lStack_88;
  local_54 = 0;
  FUN_032c75b8(&local_b0,&local_70,0x2c,0);
  if (local_a0 == 0) {
    iVar7 = 0;
LAB_032c6e8c:
    local_b4 = param_4;
    if ((local_70 == lStack_68) ||
       (local_58 = FUN_032c77d0(local_70,lStack_68,&local_b4), -1 < local_58)) {
      *param_6 = local_b4;
      local_58 = -0x7ffbfda9;
      if ((ulong)local_b4 < *param_3) {
        FUN_033410dc(&local_b0,param_3);
        if (local_b0 == 0) {
          FUN_032c5d4c(param_5,"(NullVar)",0xffffffff);
          local_58 = -0x7ffbfda9;
          if ((local_a0 & 1) == 0) {
            return -0x7ffbfda9;
          }
          FUN_032e0c40(local_a0 & 0xfffffffffffffffe);
          return local_58;
        }
        local_140[0] = 0;
        local_150 = local_140;
        local_148 = 0x8000008000000001;
        local_c0 = *(undefined4 *)(param_5 + 0x90);
        FUN_032e4a58(&local_b0,&local_150,local_80,uStack_78);
        iVar4 = (int)local_148 + -1;
        iVar1 = -iVar7;
        if (-1 < iVar7) {
          iVar1 = iVar7;
        }
        iVar1 = iVar1 - iVar4;
        if (0 < iVar1) {
          if (iVar7 < 1) {
            uVar2 = FUN_032c5d4c(param_5,local_150);
            FUN_032c5db8(uVar2,iVar1,0x20);
            goto LAB_032c6f5c;
          }
          param_5 = FUN_032c5db8(param_5,iVar1,0x20);
          iVar4 = (int)local_148 + -1;
        }
        FUN_032c5d4c(param_5,local_150,iVar4);
LAB_032c6f5c:
        FUN_032c4ce8(&local_150);
        if ((local_a0 & 1) != 0) {
          FUN_032e0c40(local_a0 & 0xfffffffffffffffe);
        }
        return 0;
      }
      if (DAT_04444bc0 == '\0') {
        return -0x7ffbfda9;
      }
      FUN_03326994(&local_150,&DAT_04444b70,1);
      uStack_110 = 0x49f;
      pcVar3 = "HK_RETURN_RES_IF({}) returning {}. ";
      pcVar6 = "num >= args.getSize()";
      puVar5 = &DAT_04349378;
    }
    else {
      if (DAT_04444bc0 == '\0') {
        return local_58;
      }
      FUN_03326994(&local_150,&DAT_04444b70,1);
      uStack_110 = 0x499;
      pcVar3 = "HK_RETURN_IF_FAILED({}) returning {}. ";
      pcVar6 = "parseUnsignedDecimal(spec, &num)";
      puVar5 = PTR_DAT_04389060;
    }
  }
  else {
    local_58 = FUN_032c7620(local_a0,local_98,&local_54);
    if (-1 < local_58) {
      local_58 = -0x7ffbfda9;
      iVar7 = -local_54;
      if (-1 < local_54) {
        iVar7 = local_54;
      }
      if (0x100 < iVar7) {
        if (DAT_04444bc0 == '\0') {
          return -0x7ffbfda9;
        }
        FUN_03326994(&local_150,&DAT_04444b70,1);
        local_118 = 
        "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp";
        uStack_110 = 0x491;
        uVar2 = FUN_03326338(&local_150,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_043490f8,
                             "hkMath::abs(width) > 256",&local_58);
        pcVar3 = "Width field too large";
        goto LAB_032c6fd0;
      }
      local_70 = local_b0;
      lStack_68 = lStack_a8;
      iVar7 = local_54;
      goto LAB_032c6e8c;
    }
    if (DAT_04444bc0 == '\0') {
      return local_58;
    }
    FUN_03326994(&local_150,&DAT_04444b70,1);
    pcVar3 = "HK_RETURN_IF_FAILED({}) returning {}. ";
    puVar5 = &DAT_04349058;
    uStack_110 = 0x490;
    pcVar6 = "parseSignedDecimal(numAndWidth.right, &width)";
  }
  local_118 = 
  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp";
  uVar2 = FUN_03326338(&local_150,pcVar3,puVar5,pcVar6,&local_58);
  pcVar3 = "";
LAB_032c6fd0:
  FUN_03326338(uVar2,pcVar3,PTR_DAT_04372528);
  FUN_033269dc(&local_150);
  return local_58;
}


