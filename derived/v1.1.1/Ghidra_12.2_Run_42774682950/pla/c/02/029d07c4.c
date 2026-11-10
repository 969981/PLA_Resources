/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d07c4; name: FUN_029d07c4
 */


void FUN_029d07c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long local_98 [10];
  undefined6 uStack_48;
  undefined2 local_42;
  undefined2 uStack_40;
  byte bStack_3e;
  undefined1 uStack_3d;
  byte bStack_3c;
  undefined1 uStack_3b;
  undefined1 auStack_38 [8];
  long *local_28;
  
  uStack_40 = 0;
  bStack_3e = 0;
  uStack_3d = 0;
  bStack_3c = 0;
  uStack_3b = 0;
  local_98[9] = 0;
  uStack_48 = 0;
  local_42 = 0;
  local_98[0] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  FUN_029d08ec(param_1,local_98,*param_3);
  local_28 = local_98;
  FUN_029f7874(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x17e0),auStack_38,&local_28);
  if (bStack_3e == 0) {
    bStack_3c = 0;
  }
  else {
    bStack_3c = 1;
    lVar1 = local_98[0];
    while (lVar1 != 0) {
      FUN_02979098(*(undefined8 *)(param_1 + 0x38),lVar1,0x6b);
      uVar2 = (ulong)bStack_3c;
      if (bStack_3e <= bStack_3c) {
        bStack_3c = 0;
        if (bStack_3e == 0) goto LAB_029d08cc;
        break;
      }
      bStack_3c = bStack_3c + 1;
      lVar1 = local_98[uVar2];
    }
    bStack_3c = 1;
    lVar1 = local_98[0];
    while (lVar1 != 0) {
      FUN_02979098(*(undefined8 *)(param_1 + 0x38),lVar1,0x6c);
      uVar2 = (ulong)bStack_3c;
      if (bStack_3e <= bStack_3c) break;
      bStack_3c = bStack_3c + 1;
      lVar1 = local_98[uVar2];
    }
  }
LAB_029d08cc:
  FUN_029d0bf0(param_1,local_98);
  return;
}


