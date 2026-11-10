/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ae8dc; name: FUN_013ae8dc
 */


ulong FUN_013ae8dc(long param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  char local_c0 [4];
  int local_bc;
  uint local_b8 [2];
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x23:
    uVar4 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),8);
    if ((uVar4 & 1) != 0) {
      uVar2 = 0x24;
LAB_013aea80:
      *(undefined4 *)(param_1 + 0xac) = uVar2;
    }
    break;
  case 0x24:
    uVar4 = FUN_013c6200(*(undefined8 *)(param_1 + 0xc0),8);
    if ((uVar4 & 1) != 0) {
      uVar2 = 0x25;
      goto LAB_013aea80;
    }
    break;
  case 0x25:
    FUN_013affd0(&local_b0,*(undefined8 *)(param_1 + 0xa0),(undefined8 *)(param_1 + 0xa0));
    puVar5 = local_b0;
    local_b0 = (undefined1 *)0x0;
    lVar3 = *(long *)(param_1 + 0xf8);
    *(undefined1 **)(param_1 + 0xf8) = puVar5;
    if (lVar3 == 0) {
      *(undefined1 **)(param_1 + 0x108) = local_a0;
      *(undefined1 **)(param_1 + 0x110) = local_98;
      *(code **)(param_1 + 0x100) = local_a8;
    }
    else {
      FUN_013b1008(param_1 + 0x100);
      *(code **)(param_1 + 0x100) = local_a8;
      puVar5 = *(undefined1 **)(param_1 + 0xf8);
      *(undefined1 **)(param_1 + 0x108) = local_a0;
      *(undefined1 **)(param_1 + 0x110) = local_98;
    }
    if (puVar5 != (undefined1 *)0x0) {
      FUN_013959bc(param_1 + 0x120);
      alStack_90[0] = param_1;
      if (*(int *)(param_1 + 0xb4) == 0) {
        local_b0 = &LAB_013b0a20;
        local_a8 = FUN_013b0a34;
        local_a0 = &LAB_013b0a38;
        local_98 = &LAB_013b0a44;
        uVar4 = FUN_02795924(*(undefined8 *)(param_1 + 0xf8),"normal",&local_b0);
      }
      else {
        if (*(char *)(param_1 + 0x49e) == '\0') goto LAB_013aeab8;
        local_b0 = &LAB_013b0a20;
        local_a8 = FUN_013b0a34;
        local_a0 = &LAB_013b0a38;
        local_98 = &LAB_013b0a44;
        uVar4 = FUN_02795f4c(*(undefined8 *)(param_1 + 0xf8),param_1 + 0x49f,&local_b0);
      }
      pcVar1 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = (undefined1 *)0x0;
        local_98 = (undefined1 *)0x0;
        local_b0 = (undefined1 *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar1)(alStack_90);
      }
      if ((uVar4 & 1) != 0) {
        uVar2 = 0x26;
        goto LAB_013aea80;
      }
    }
LAB_013aeab8:
    uVar4 = 0xe00000000;
    uVar6 = 1;
    goto switchD_013ae964_caseD_0;
  case 0x26:
    uVar4 = FUN_02795848(*(undefined8 *)(param_1 + 0xf8));
    if ((uVar4 & 1) != 0) {
      FUN_02795904(local_c0,*(undefined8 *)(param_1 + 0xf8));
      if (local_c0[0] != '\0') {
        if (local_bc == 0) {
          if (local_b8[0] == 0) {
            uVar2 = 0x27;
            goto LAB_013aea80;
          }
          if ((local_b8[0] & 0x3fffff) == 0x47a) goto switchD_013ae964_caseD_3;
          FUN_02727b8c(&local_b0,local_b8);
          FUN_013b1998(param_1 + 0x4c0,&local_b0);
          FUN_02727c1c(&local_b0);
        }
        else if (local_bc != 1) break;
      }
      goto LAB_013aeab8;
    }
    break;
  case 0x27:
    uVar2 = FUN_013959c8(param_1 + 0x120);
    uVar4 = 0x800000000;
    uVar6 = 1;
    switch(uVar2) {
    case 0:
      goto switchD_013ae964_caseD_0;
    case 1:
      uVar2 = 0xb;
      break;
    case 2:
      uVar2 = 0xf;
      break;
    case 3:
switchD_013ae964_caseD_3:
      uVar2 = 0xc;
      break;
    default:
      goto switchD_013ae964_default;
    }
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    uVar4 = 0x100000000;
    uVar6 = 1;
    goto switchD_013ae964_caseD_0;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
switchD_013ae964_default:
  uVar6 = 0;
  uVar4 = 0;
switchD_013ae964_caseD_0:
  return uVar4 | uVar6;
}


