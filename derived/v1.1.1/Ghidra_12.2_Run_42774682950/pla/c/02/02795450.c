/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02795450; name: FUN_02795450
 */


void FUN_02795450(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0x100;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  uVar3 = FUN_02795570(7);
  local_78 = uVar3;
  uStack_70 = param_2;
  local_68 = param_3;
  FUN_027956a4(&local_60,&local_78);
  *(undefined8 *)(param_1 + 0x6c) = uStack_48;
  *(undefined8 *)(param_1 + 100) = local_50;
  *(undefined8 *)(param_1 + 0x5c) = uStack_58;
  *(undefined8 *)(param_1 + 0x54) = local_60;
  if (uVar3 < 8) {
    puVar5 = *(undefined **)((long)&PTR_DAT_0426bea0 + (uVar3 & 0x3ffffffffffffffe) * 4);
  }
  else {
    puVar5 = &DAT_03a7e260;
  }
  lVar4 = FUN_02795570(10);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(puVar5 + lVar4 * 2);
  uVar1 = param_4[1];
  *(undefined8 *)(param_1 + 0x3c) = *param_4;
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  uVar2 = FUN_02786ad0();
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  lVar4 = FUN_02795570(0xb);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(&DAT_03a7e208 + lVar4 * 2);
  *param_1 = 1;
  return;
}


