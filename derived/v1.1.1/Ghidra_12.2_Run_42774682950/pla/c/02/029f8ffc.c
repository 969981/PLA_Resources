/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f8ffc; name: FUN_029f8ffc
 */


void FUN_029f8ffc(long param_1,undefined1 *param_2,undefined2 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *local_c0 [10];
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined2 uStack_68;
  byte bStack_66;
  undefined1 uStack_65;
  byte bStack_64;
  undefined1 uStack_63;
  undefined1 *local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  
  FUN_0298ac7c(*(undefined8 *)(param_1 + 0x38),0x1f,*param_3);
  uVar1 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if ((uVar1 & 1) == 0) {
    uStack_68 = 0;
    bStack_66 = 0;
    uStack_65 = 0;
    bStack_64 = 0;
    uStack_63 = 0;
    local_c0[9] = (undefined1 *)0x0;
    uStack_70 = 0;
    local_6a = 0;
    local_c0[0] = (undefined1 *)0x0;
    local_c0[7] = (undefined1 *)0x0;
    local_c0[8] = (undefined1 *)0x0;
    local_c0[5] = (undefined1 *)0x0;
    local_c0[6] = (undefined1 *)0x0;
    local_c0[3] = (undefined1 *)0x0;
    local_c0[4] = (undefined1 *)0x0;
    local_c0[1] = (undefined1 *)0x0;
    local_c0[2] = (undefined1 *)0x0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x12c0);
    FUN_029e9bc4(lVar2,local_c0);
    local_60 = (undefined1 *)local_c0;
    FUN_029f7874(*(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x17e0),local_48,&local_60);
    bStack_64 = 0;
    if (bStack_66 != 0) {
      bStack_64 = 1;
      puVar3 = local_c0[0];
      while (puVar3 != (undefined1 *)0x0) {
        FUN_0298ac7c(*(undefined8 *)(param_1 + 0x38),puVar3[0x7d],*param_3);
        local_58 = 1;
        local_50 = 0;
        local_60 = puVar3;
        FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),local_48,&local_60);
        if (((**(char **)(*(long *)(param_1 + 0x40) + 0x28) == '\x05') ||
            (uVar1 = FUN_029cddec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10)),
            (uVar1 & 1) != 0)) || (uVar1 = (ulong)bStack_64, bStack_66 <= bStack_64)) break;
        bStack_64 = bStack_64 + 1;
        puVar3 = local_c0[uVar1];
      }
    }
    FUN_029d3abc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x2e0),local_48,&local_60);
    local_60._0_1_ = local_48[0];
  }
  else {
    FUN_029d3abc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x2e0),&local_60,local_c0);
  }
  *param_2 = local_60._0_1_;
  return;
}


