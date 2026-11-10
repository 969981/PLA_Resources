/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7d5c4; name: FUN_02e7d5c4
 */


undefined8 FUN_02e7d5c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = DAT_0440a1a0._4_4_;
  uVar6 = (ulong)DAT_0440a1a0._4_4_;
  uVar2 = (*DAT_0442d138)(0x10,uVar6);
  param_1[2] = uVar2;
  if (param_1[2] == 0) {
    uVar2 = 2;
  }
  else {
    *param_1 = param_1[2];
    param_1[1] = param_1[2];
    param_1[3] = param_1[2] + uVar6;
    *(uint *)(param_1 + 4) = uVar5;
    puVar3 = (undefined8 *)(*DAT_0442d138)(0,0x300);
    param_1[8] = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      uVar5 = 0;
      param_1[7] = puVar3;
      *(undefined4 *)(param_1 + 9) = 0x20;
      do {
        puVar1 = puVar3;
        *puVar1 = puVar1 + 3;
        uVar5 = uVar5 + 1;
        puVar3 = puVar1 + 3;
      } while (uVar5 < *(uint *)(param_1 + 9));
      *puVar1 = 0;
      puVar3 = (undefined8 *)(*DAT_0442d138)(0,0x300);
      param_1[0xd] = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = 0;
        param_1[0xc] = puVar3;
        *(undefined4 *)(param_1 + 0xe) = 0x20;
        do {
          puVar1 = puVar3;
          *puVar1 = puVar1 + 3;
          uVar5 = uVar5 + 1;
          puVar3 = puVar1 + 3;
        } while (uVar5 < *(uint *)(param_1 + 0xe));
        uVar2 = 1;
        *puVar1 = 0;
        goto LAB_02e7d6b4;
      }
    }
    uVar2 = 0x34;
  }
LAB_02e7d6b4:
  uVar4 = nn::os::GetSystemTick();
  param_1[0x11] = uVar4;
  return uVar2;
}


