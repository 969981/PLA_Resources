/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008015b4; name: FUN_008015b4
 */


ulong FUN_008015b4(long param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 local_38;
  undefined8 local_28;
  
  FUN_007ee578(&local_38,*(long *)(param_1 + 0x78) + 0x1a8);
  if ((int)local_38 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    uVar5 = FUN_007f63fc(uVar9);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_007f6c84(uVar9), (uVar5 & 1) == 0)) {
      local_38 = 0;
      FUN_007ecf14(&local_38);
      if (*(ulong *)(param_1 + 0x70) < local_38) {
        local_38 = 0;
        FUN_007ecf14(&local_38);
        lVar11 = local_38;
        lVar10 = *(long *)(param_1 + 0xc0);
        plVar4 = (long *)FUN_007ecfa4();
        if (*(uint *)(param_1 + 200) < 6) {
          lVar1 = 0;
          if (*plVar4 != 0) {
            lVar1 = (lVar11 - lVar10) / *plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x00801768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_0080176c +
                            (ulong)(byte)(&DAT_03a729e5)[*(uint *)(param_1 + 200)] * 4))(lVar1);
          return uVar5;
        }
        local_38 = 0;
        FUN_007ecf14(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = 0;
        FUN_007ecf14(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        if ((*(int *)(param_1 + 200) == 7) || (*(int *)(param_1 + 200) == 0)) {
          *(undefined4 *)(param_1 + 200) = 4;
          *(undefined8 *)(param_1 + 0x30) = 200;
          *(undefined8 *)(param_1 + 0x38) = 1;
          pcVar8 = "NetBackgroundProcessJob::StartDestroyNetwork";
          goto LAB_00801d38;
        }
        *(undefined4 *)(param_1 + 200) = 5;
        local_38 = CONCAT44(local_38._4_4_,0x6478);
        local_28 = (ulong)local_28._4_4_ << 0x20;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)&local_28);
        FUN_007ee578(auStack_78,&local_38);
        iVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x1d0))();
        plVar4 = (long *)FUN_007ecfa4();
        lVar11 = *plVar4;
        local_28 = 0;
        FUN_007ecf14(&local_28);
        *(ulong *)(param_1 + 0x70) = local_28 + lVar11 * iVar3;
        puVar6 = auStack_78;
      }
      else {
        if ((*(int *)(param_1 + 200) == 0) || (*(char *)(*(long *)(param_1 + 0x78) + 0x24c) == '\0')
           ) {
          uVar5 = 0xf0000;
          uVar7 = 4;
          goto LAB_00801904;
        }
        local_38 = 0;
        FUN_007ecf14(&local_38);
        lVar11 = local_38;
        lVar10 = *(long *)(param_1 + 0xc0);
        plVar4 = (long *)FUN_007ecfa4();
        if (*(uint *)(param_1 + 200) < 6) {
          lVar1 = 0;
          if (*plVar4 != 0) {
            lVar1 = (lVar11 - lVar10) / *plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x00801970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_00801974 +
                            (ulong)(byte)(&DAT_03a729df)[*(uint *)(param_1 + 200)] * 4))(lVar1);
          return uVar5;
        }
        local_38 = 0;
        FUN_007ecf14(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = 0;
        FUN_007ecf14(&local_38);
        *(undefined4 *)(param_1 + 200) = 5;
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = CONCAT44(local_38._4_4_,0x647a);
        local_28 = (ulong)local_28._4_4_ << 0x20;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)&local_28);
        FUN_007ee578(auStack_88,&local_38);
        iVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x1d0))();
        plVar4 = (long *)FUN_007ecfa4();
        lVar11 = *plVar4;
        local_28 = 0;
        FUN_007ecf14(&local_28);
        puVar6 = auStack_88;
        *(ulong *)(param_1 + 0x70) = local_28 + lVar11 * iVar3;
      }
LAB_00801d18:
      FUN_007ee660(param_1 + 0x80,puVar6);
      *(undefined8 *)(param_1 + 0x30) = 0xd8;
      *(undefined8 *)(param_1 + 0x38) = 1;
      pcVar8 = "NetBackgroundProcessJob::StartDisconnectNetwork";
LAB_00801d38:
      uVar7 = 0;
      uVar5 = 0;
      *(char **)(param_1 + 0x40) = pcVar8;
      goto LAB_00801904;
    }
    iVar3 = *(int *)(param_1 + 200);
    if (iVar3 == 7) {
LAB_0080167c:
      uVar5 = FUN_007f63fc(*(undefined8 *)(param_1 + 0x78));
      if ((uVar5 & 1) == 0) {
        local_38 = CONCAT44(local_38._4_4_,0x6c57);
        local_28 = local_28 & 0xffffffff00000000;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)&local_28);
        FUN_007ee660(param_1 + 0x80,&local_38);
        local_38 = 0;
        FUN_007ecf14(&local_38);
        lVar11 = local_38;
        lVar10 = *(long *)(param_1 + 0xc0);
        plVar4 = (long *)FUN_007ecfa4();
        if (*(uint *)(param_1 + 200) < 6) {
          lVar1 = 0;
          if (*plVar4 != 0) {
            lVar1 = (lVar11 - lVar10) / *plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x008016f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_008016f8 +
                            (ulong)(byte)(&DAT_03a729eb)[*(uint *)(param_1 + 200)] * 4))(lVar1);
          return uVar5;
        }
        local_38 = 0;
        FUN_007ecf14(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = 0;
        FUN_007ecf14(&local_38);
        *(undefined4 *)(param_1 + 200) = 4;
        *(undefined8 *)(param_1 + 0x30) = 200;
        *(undefined8 *)(param_1 + 0x38) = 1;
        *(ulong *)(param_1 + 0xc0) = local_38;
        pcVar8 = "NetBackgroundProcessJob::StartDestroyNetwork";
        goto LAB_00801d38;
      }
    }
    else {
      if (iVar3 == 1) {
        uVar5 = FUN_007f63fc(*(undefined8 *)(param_1 + 0x78));
        if ((uVar5 & 1) == 0) {
          iVar3 = *(int *)(param_1 + 200);
          goto LAB_0080178c;
        }
LAB_008017b4:
        local_38 = 0;
        FUN_007ecf14(&local_38);
        lVar11 = local_38;
        lVar10 = *(long *)(param_1 + 0xc0);
        plVar4 = (long *)FUN_007ecfa4();
        if (*(uint *)(param_1 + 200) < 6) {
          lVar1 = 0;
          if (*plVar4 != 0) {
            lVar1 = (lVar11 - lVar10) / *plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x008017f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(&UNK_008017fc +
                            (ulong)(byte)(&DAT_03a729f7)[*(uint *)(param_1 + 200)] * 4))(lVar1);
          return uVar5;
        }
        local_38 = 0;
        FUN_007ecf14(&local_38);
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = 0;
        FUN_007ecf14(&local_38);
        *(undefined4 *)(param_1 + 200) = 5;
        *(ulong *)(param_1 + 0xc0) = local_38;
        local_38 = CONCAT44(local_38._4_4_,0x647a);
        local_28 = (ulong)local_28._4_4_ << 0x20;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)&local_28);
        FUN_007ee578(auStack_58,&local_38);
        iVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0x1d0))();
        plVar4 = (long *)FUN_007ecfa4();
        lVar11 = *plVar4;
        local_28 = 0;
        FUN_007ecf14(&local_28);
        *(ulong *)(param_1 + 0x70) = local_28 + lVar11 * iVar3;
        puVar6 = auStack_58;
        goto LAB_00801d18;
      }
      if (iVar3 == 0) goto LAB_0080167c;
LAB_0080178c:
      if (((iVar3 == 8) && (uVar5 = FUN_007f63fc(*(undefined8 *)(param_1 + 0x78)), (uVar5 & 1) != 0)
          ) && (uVar2 = FUN_007f9434(*(undefined8 *)(param_1 + 0x78)), 1 < uVar2))
      goto LAB_008017b4;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    local_38 = (ulong)local_38._4_4_ << 0x20;
    local_28 = (ulong)local_28._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)&local_28);
    FUN_007ee578(auStack_68,&local_38);
    FUN_007e5c40(uVar9,auStack_68);
    *(undefined8 *)(param_1 + 0x58) = 0;
    local_38 = 0;
    FUN_007ecf14(&local_38);
    lVar11 = local_38;
    lVar10 = *(long *)(param_1 + 0xc0);
    plVar4 = (long *)FUN_007ecfa4();
    if (*(uint *)(param_1 + 200) < 6) {
      lVar1 = 0;
      if (*plVar4 != 0) {
        lVar1 = (lVar11 - lVar10) / *plVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x00801888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)(&UNK_0080188c + (ulong)(byte)(&DAT_03a729f1)[*(uint *)(param_1 + 200)] * 4)
              )(lVar1);
      return uVar5;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    FUN_007ee578(auStack_48,*(long *)(param_1 + 0x78) + 0x1a8);
    FUN_007e5cac(uVar9,auStack_48);
    *(undefined8 *)(param_1 + 0x58) = 0;
    local_38 = 0;
    FUN_007ecf14(&local_38);
    lVar11 = local_38;
    lVar10 = *(long *)(param_1 + 0xc0);
    plVar4 = (long *)FUN_007ecfa4();
    if (*(uint *)(param_1 + 200) < 6) {
      lVar1 = 0;
      if (*plVar4 != 0) {
        lVar1 = (lVar11 - lVar10) / *plVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x00801644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)(&UNK_0080188c + (ulong)(byte)(&DAT_03a729d9)[*(uint *)(param_1 + 200)] * 4)
              )(lVar1);
      return uVar5;
    }
  }
  local_38 = 0;
  FUN_007ecf14(&local_38);
  uVar5 = 0;
  *(ulong *)(param_1 + 0xc0) = local_38;
  uVar7 = 1;
LAB_00801904:
  return uVar5 | uVar7;
}


