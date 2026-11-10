/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c62bd4; name: FUN_02c62bd4
 */


void FUN_02c62bd4(long param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined **local_60;
  undefined4 local_58;
  undefined2 local_54;
  
  uVar3 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  uVar1 = (undefined2)uVar4;
  local_60 = &PTR_LAB_0428aca8;
  local_58 = uVar3;
  local_54 = uVar1;
  iVar5 = FUN_02c55458(&local_60,param_2);
  local_60 = &PTR_LAB_0428aca8;
  local_58 = uVar3;
  local_54 = uVar1;
  uVar6 = FUN_02c555ac(&local_60,param_2);
  local_60 = &PTR_LAB_0428aca8;
  local_58 = uVar3;
  local_54 = uVar1;
  uVar8 = FUN_02c551b0(&local_60,param_2);
  local_60 = &PTR_LAB_0428aca8;
  local_58 = uVar3;
  local_54 = uVar1;
  iVar7 = FUN_02c55458(&local_60,param_2);
  if (iVar5 != iVar7) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (((6 < iVar5 - 0x299U) || ((1 << (ulong)(iVar5 - 0x299U & 0x1f) & 99U) == 0)) &&
     (1 < iVar5 - 0x19dU)) {
    uVar4 = uVar6;
  }
  FUN_02c62e18(param_1,iVar5,uVar4);
  iVar7 = FUN_02c69538(*(undefined8 *)(param_1 + 0x98));
  if ((iVar5 == 0x305) && (iVar7 == 0xe1)) {
    sVar2 = FUN_02c687d4(*(undefined8 *)(param_1 + 0x98));
    if ((ushort)(sVar2 - 0x388U) < 0x11) {
      uVar9 = (&DAT_03a85242)[*(long *)(&DAT_03a84d38 + (long)(short)(sVar2 - 0x388U) * 8) * 4];
    }
    else {
      uVar9 = 0;
    }
    FUN_02c62fcc(param_1,uVar9,0);
  }
  else if (iVar5 == 0x365) {
    sVar2 = FUN_02c687d4(*(undefined8 *)(param_1 + 0x98));
    iVar5 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
    if (iVar5 == 0x365) {
      if ((ushort)(sVar2 - 0x455U) < 7) {
        uVar9 = (&DAT_03a85286)[(ulong)(ushort)(sVar2 - 0x455U) * 4];
      }
      else {
        uVar9 = 0;
      }
      FUN_02c8ad24(*(undefined8 *)(param_1 + 0x98));
      FUN_02c8a9e4(*(undefined8 *)(param_1 + 0x98),uVar9);
    }
  }
  if (((uint)uVar8 < 0x2e) && ((1L << (uVar8 & 0x3f) & 0x200000180040U) != 0)) {
    FUN_02c79f04(*(undefined8 *)(param_1 + 0x98),0);
    return;
  }
  return;
}


