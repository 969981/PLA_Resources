/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d5648; name: FUN_014d5648
 */


ulong FUN_014d5648(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  if ((*(long *)(param_1 + 0xa8) == 0) || (lVar2 = FUN_014d4b64(), lVar2 == 0)) {
    uVar4 = 0x900000000;
    goto LAB_014d56c8;
  }
  uVar3 = 0;
  uVar4 = 0x300000000;
  uVar5 = 1;
  switch(*(undefined4 *)(param_1 + 0xa4)) {
  case 4:
    uVar4 = FUN_014d65c0(*(undefined8 *)(param_1 + 8));
    if ((uVar4 & 1) == 0) {
      uVar4 = 0x400000000;
    }
    else {
      uVar4 = FUN_014d67b0();
      if ((uVar4 & 1) == 0) {
        FUN_02cbb590(&local_a0);
        uVar4 = FUN_02728974();
        if (((uVar4 & 1) != 0) && ((int)local_a0 == 0)) {
          *(undefined4 *)(param_1 + 0xa4) = 9;
          uVar5 = FUN_014d5648(param_1);
          uVar4 = uVar5 & 0xffffffff00000000;
          uVar3 = uVar5 & 0xffffff00;
          uVar5 = uVar5 & 0xff;
          goto switchD_014d569c_caseD_9;
        }
        uVar6 = 5;
        goto LAB_014d574c;
      }
      uVar4 = 0x500000000;
    }
    break;
  case 5:
    uVar4 = FUN_014de744(lVar2,2);
    if ((uVar4 & 1) == 0) goto LAB_014d57a8;
    uVar6 = 6;
    goto LAB_014d574c;
  case 6:
    uVar4 = FUN_014de850(lVar2,2);
    if ((uVar4 & 1) == 0) goto LAB_014d57a8;
    uVar6 = 7;
    goto LAB_014d574c;
  case 7:
    local_a0 = &LAB_014d6ecc;
    local_98 = FUN_014d6f5c;
    local_90 = &LAB_014d6f60;
    local_88 = &LAB_014d6f6c;
    alStack_80[0] = param_1;
    FUN_027a7e5c(*(undefined8 *)(param_1 + 0xb8),1,&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      local_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(alStack_80);
    }
    uVar6 = 8;
LAB_014d574c:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0xa4) = uVar6;
    goto switchD_014d569c_caseD_9;
  case 8:
    FUN_027a7418(*(undefined8 *)(param_1 + 0xb8));
LAB_014d57a8:
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
  case 9:
    goto switchD_014d569c_caseD_9;
  case 10:
    uVar4 = 0;
    break;
  case 0xb:
    uVar4 = 0x800000000;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
LAB_014d56c8:
  uVar3 = 0;
  uVar5 = 1;
switchD_014d569c_caseD_9:
  return uVar4 | uVar5 | uVar3;
}


