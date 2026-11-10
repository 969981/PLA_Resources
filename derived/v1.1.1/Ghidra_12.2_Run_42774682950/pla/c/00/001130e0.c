/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001130e0; name: FUN_001130e0
 */


void FUN_001130e0(undefined2 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_04372350;
  *param_1 = 0;
  uVar2 = **(undefined8 **)puVar1;
  *(undefined8 *)(param_1 + 5) = (*(undefined8 **)puVar1)[1];
  *(undefined8 *)(param_1 + 1) = uVar2;
  uVar3 = *(undefined8 *)(*(long *)puVar1 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)puVar1 + 0x10);
  param_1[0x11] = 0;
  *(undefined8 *)(param_1 + 0xd) = uVar3;
  *(undefined8 *)(param_1 + 9) = uVar2;
  uVar2 = **(undefined8 **)puVar1;
  *(undefined8 *)(param_1 + 0x16) = (*(undefined8 **)puVar1)[1];
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  uVar3 = *(undefined8 *)(*(long *)puVar1 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)puVar1 + 0x10);
  *(undefined8 *)(param_1 + 0x22) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x26) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x2a) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x2e) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x32) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x36) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x3a) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x3e) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x42) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x46) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4a) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4e) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x52) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x56) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x5a) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x5e) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x62) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x66) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x6a) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x6e) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x72) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x76) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x7a) = 0x2000200020002000;
  param_1[0x7e] = 0x2000;
  *(undefined8 *)(param_1 + 0x1e) = uVar3;
  *(undefined8 *)(param_1 + 0x1a) = uVar2;
  return;
}


