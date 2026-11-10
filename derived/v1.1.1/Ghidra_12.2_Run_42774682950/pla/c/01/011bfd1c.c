/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011bfd1c; name: FUN_011bfd1c
 */


void FUN_011bfd1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_48 = (long *)0x0;
  uVar4 = (ulong)*(byte *)(param_1 + 4);
  lVar3 = uVar4 * 0x150;
  uVar1 = *(undefined8 *)(&DAT_041f68e0 + lVar3);
  puVar2 = (&PTR_s_anime_L_waza_btn_00_type_041f68e8)[uVar4 * 0x2a];
  uVar5 = *(undefined8 *)(&DAT_041f68f0 + lVar3);
  local_60 = uVar1;
  puStack_58 = puVar2;
  local_50 = uVar5;
  FUN_0283b1e8(*param_1,&local_60);
  local_48 = (long *)0x0;
  uVar6 = NEON_ucvtf((uint)*(byte *)(param_1 + 5));
  local_60 = uVar1;
  puStack_58 = puVar2;
  local_50 = uVar5;
  FUN_0283b748(uVar6,*param_1,&local_60);
  if (param_1[2] != 0) {
    local_60 = *(undefined8 *)(&DAT_041f68b0 + lVar3);
    puStack_58 = (&PTR_s_pane_L_waza_btn_00_P_type_icon_0_041f68b8)[uVar4 * 0x2a];
    local_50 = *(undefined8 *)(&DAT_041f68c0 + lVar3);
    local_48 = (long *)0x0;
    lVar3 = FUN_00d63240(*param_1,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (lVar3 != 0) {
      FUN_0284fbb0(param_1[2],*(undefined1 *)(param_1 + 5),0,lVar3,0,0);
    }
  }
  return;
}


