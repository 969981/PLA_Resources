/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031252c; name: FUN_0031252c
 */


byte * FUN_0031252c(undefined8 *param_1,byte *param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  byte *local_28;
  
  local_28 = param_2;
  do {
    uVar5 = FUN_0030c7bc(param_3,&local_28,*(undefined4 *)(param_3 + 0x5c));
    if ((uVar5 & 1) != 0) {
      return local_28;
    }
    bVar3 = *local_28;
    uVar5 = (ulong)(uint)bVar3;
    pbVar4 = local_28 + 1;
    if ((char)bVar3 < '\0') {
      bVar2 = local_28[1];
      uVar5 = (ulong)(((uint)bVar3 + (uint)bVar2 * 0x80) - 0x80);
      if (-1 < (char)bVar2) {
        pbVar4 = local_28 + 2;
        goto LAB_003125b0;
      }
      auVar9 = FUN_00323230(local_28,uVar5);
      local_28 = auVar9._0_8_;
      if (local_28 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if (auVar9._8_4_ == 0) {
        uVar8 = 0;
        goto LAB_00312698;
      }
    }
    else {
LAB_003125b0:
      local_28 = pbVar4;
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = local_28;
      uVar8 = 0;
      if ((int)uVar5 == 0) goto LAB_00312698;
    }
    local_28 = auVar9._0_8_;
    uVar8 = auVar9._8_4_;
    if ((uVar8 & 7) == 4) {
LAB_00312698:
      *(uint *)(param_3 + 0x50) = uVar8 - 1;
      return local_28;
    }
    if (uVar8 == 0xb) {
      iVar1 = *(int *)(param_3 + 0x58);
      *(int *)(param_3 + 0x58) = iVar1 + -1;
      if (iVar1 < 1) {
        return (byte *)0x0;
      }
      *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
      local_28 = (byte *)FUN_0031a364(param_1,local_28,param_3);
      *(int *)(param_3 + 0x58) = *(int *)(param_3 + 0x58) + 1;
      *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + -1;
      iVar1 = *(int *)(param_3 + 0x50);
      *(undefined4 *)(param_3 + 0x50) = 0;
      if (iVar1 != 0xb) {
        return (byte *)0x0;
      }
    }
    else {
      uVar5 = auVar9._8_8_ >> 3 & 0x1fffffff;
      lVar6 = FUN_00343aac(param_1[1],uVar5);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        uVar7 = FUN_0038e3e8(param_1[2],uVar5);
      }
      else {
        uVar7 = FUN_003425d4(*(long *)(param_3 + 0x60),param_1[1],uVar5);
      }
      local_28 = (byte *)FUN_003126b4(*param_1,local_28,param_3,auVar9._8_8_ & 0xffffffff,param_1[2]
                                      ,uVar7);
    }
    if (local_28 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


