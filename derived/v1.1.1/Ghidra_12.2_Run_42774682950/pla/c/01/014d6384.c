/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d6384; name: FUN_014d6384
 */


ulong FUN_014d6384(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined1 local_70;
  undefined1 auStack_6c [20];
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  iVar2 = *(int *)(param_1 + 0xa4);
  if (iVar2 == 0x25) {
    if (*(char *)(param_1 + 0xe8) == '\0') {
      FUN_02784bc0(local_78);
    }
    else {
      local_78[0] = *(char *)(param_1 + 0xf0) != '\0';
      if ((bool)local_78[0]) {
        local_74 = *(undefined4 *)(param_1 + 0xf4);
      }
      local_70 = 0;
      bVar1 = *(char *)(param_1 + 0xf8) != '\0';
      if (bVar1) {
        FUN_007ee578(auStack_6c,param_1 + 0xfc);
      }
      local_58 = *(char *)(param_1 + 0x110) != '\0';
      if ((bool)local_58) {
        local_50 = *(undefined8 *)(param_1 + 0x118);
      }
      local_48 = *(char *)(param_1 + 0x120) != '\0';
      if ((bool)local_48) {
        local_44 = *(undefined8 *)(param_1 + 0x124);
      }
      local_3c = *(undefined8 *)(param_1 + 300);
      local_70 = bVar1;
      if (*(char *)(param_1 + 0xe8) != '\0') {
        FUN_02727c1c((char *)(param_1 + 0xf0));
        *(undefined1 *)(param_1 + 0xe8) = 0;
      }
    }
    FUN_02728014(local_78);
    FUN_02727c1c(local_78);
    if ((*(long *)(param_1 + 0x78) != 0) && (lVar5 = FUN_014d472c(), lVar5 != 0)) {
      FUN_014db8a0();
    }
    uVar7 = 0;
    uVar8 = 0;
    uVar4 = 1;
  }
  else {
    if (iVar2 == 0x24) {
      puVar3 = (undefined8 *)FUN_0120ca1c();
      *(undefined8 *)PTR_DAT_0437e8f8 = *puVar3;
      uVar4 = FUN_027bdc94();
      if ((uVar4 & 1) != 0) {
        uVar7 = 0;
        uVar4 = 0;
        uVar8 = 0;
        goto LAB_014d63e8;
      }
      uVar6 = 0x25;
    }
    else {
      if (iVar2 != 0x23) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      puVar3 = (undefined8 *)FUN_0120ca1c();
      *(undefined8 *)PTR_DAT_0437e8f8 = *puVar3;
      FUN_027be890();
      uVar6 = 0x24;
    }
    *(undefined4 *)(param_1 + 0xa4) = uVar6;
    uVar4 = FUN_014d6384(param_1);
    uVar8 = uVar4 & 0xffffffffffffff00;
    uVar7 = uVar4 & 0xffffffff00000000;
  }
LAB_014d63e8:
  return uVar4 & 0xff | uVar7 | uVar8 & 0xffffff00;
}


