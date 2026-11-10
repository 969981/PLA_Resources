/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f402e0; name: FUN_02f402e0
 */


void FUN_02f402e0(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  float fVar4;
  
  bVar2 = *(byte *)(param_1 + 0x6c);
  if ((((bVar2 & 1) == 0) && (puVar3 = *(undefined1 **)(param_1 + 8), puVar3 != (undefined1 *)0x0))
     && (*(uint *)(param_1 + 0x10) != 0)) {
    *(byte *)(param_1 + 0x6c) = bVar2 & 0xfc | 1;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar1 = (uint)CONCAT11(*puVar3,puVar3[1]);
    *(uint *)(param_1 + 0x1c) = uVar1;
    if (uVar1 != 0) {
      fVar4 = *(float *)(puVar3 + 2);
      *(float *)(param_1 + 0x50) = fVar4;
      fVar4 = fVar4 * (float)uVar1;
      *(undefined1 **)(param_1 + 0x30) = puVar3 + *(uint *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(float *)(param_1 + 0x54) = 60000.0 / fVar4;
      *(float *)(param_1 + 0x58) = fVar4 * 1.6666667e-05;
      *(undefined1 **)(param_1 + 0x28) = puVar3 + 6;
      *(byte *)(param_1 + 0x6c) = bVar2 | 3;
    }
  }
  return;
}


