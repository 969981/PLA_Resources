/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082ecb8; name: FUN_0082ecb8
 */


void FUN_0082ecb8(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_1;
  uVar4 = (ulong)(uVar1 - 1);
  uVar2 = FUN_007e336c();
  puVar3 = (undefined8 *)FUN_0081a750(uVar4 * 0x38,uVar2);
  if ((puVar3 != (undefined8 *)0x0) && (uVar1 - 1 != 0)) {
    puVar5 = puVar3;
    do {
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[2] = 0;
      *puVar5 = 0xfdfd;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      FUN_007f0ce0();
      *(undefined2 *)(puVar5 + 5) = 0xfdfd;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 7;
    } while (uVar4 != 0);
  }
  uVar1 = *param_1;
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  uVar4 = (ulong)(uVar1 - 1);
  uVar2 = FUN_007e336c();
  puVar3 = (undefined8 *)FUN_0081a750(uVar4 * 0x38,uVar2);
  if ((puVar3 != (undefined8 *)0x0) && (uVar1 - 1 != 0)) {
    puVar5 = puVar3;
    do {
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[2] = 0;
      *puVar5 = 0xfdfd;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      FUN_007f0ce0();
      *(undefined2 *)(puVar5 + 5) = 0xfdfd;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 7;
    } while (uVar4 != 0);
  }
  *(undefined8 **)(param_1 + 0x1c) = puVar3;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}


