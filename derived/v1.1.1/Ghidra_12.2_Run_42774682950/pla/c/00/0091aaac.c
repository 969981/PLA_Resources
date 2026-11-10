/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091aaac; name: FUN_0091aaac
 */


void FUN_0091aaac(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined4 local_c8;
  long local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined4 local_a8;
  long local_a0;
  int local_98;
  undefined3 uStack_93;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined4 local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined5 uStack_58;
  undefined3 local_53;
  undefined5 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined5 uStack_38;
  undefined3 local_33;
  undefined5 uStack_30;
  undefined4 local_28;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_a8 = 0;
  local_88 = 0;
  local_68 = 0;
  local_48 = 0;
  local_20 = 0;
  local_28 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a0 = 0;
  _local_98 = 0;
  uStack_93 = 0;
  _auStack_90 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  uStack_70 = 0;
  uStack_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_53 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_33 = 0;
  uStack_30 = 0;
  local_1c = 0x1f;
  local_18 = 0;
  uVar3 = FUN_0091abfc(param_1,&local_e0);
  FUN_0091adf0(uVar3,&local_e0);
  if (0 < local_20) {
    if (local_d8 < 1) {
      local_d8 = 0;
    }
    *(int *)(local_e0 + 0xac) = local_d8;
    *(undefined4 *)(local_e0 + 0xb0) = local_d4;
    *(undefined1 *)(local_e0 + 0xb8) = uStack_cc;
    *(undefined4 *)(local_e0 + 0xb4) = uStack_d0;
    if (local_20 != 1) {
      if (local_b8 < 1) {
        local_b8 = 0;
      }
      *(int *)(local_c0 + 0xac) = local_b8;
      *(undefined4 *)(local_c0 + 0xb0) = local_b4;
      *(undefined1 *)(local_c0 + 0xb8) = uStack_ac;
      *(undefined4 *)(local_c0 + 0xb4) = uStack_b0;
      if (local_20 != 2) {
        lVar4 = (long)local_20 + -2;
        puVar5 = auStack_8c;
        do {
          iVar2 = *(int *)(puVar5 + -0xc);
          lVar6 = *(long *)(puVar5 + -0x14);
          if (iVar2 < 1) {
            iVar2 = 0;
          }
          lVar4 = lVar4 + -1;
          *(int *)(lVar6 + 0xac) = iVar2;
          *(undefined4 *)(lVar6 + 0xb0) = *(undefined4 *)(puVar5 + -8);
          *(undefined1 *)(lVar6 + 0xb8) = *puVar5;
          puVar1 = (undefined4 *)(puVar5 + -4);
          puVar5 = puVar5 + 0x20;
          *(undefined4 *)(lVar6 + 0xb4) = *puVar1;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}


