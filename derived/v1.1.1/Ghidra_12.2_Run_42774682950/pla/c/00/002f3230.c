/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f3230; name: FUN_002f3230
 */


void FUN_002f3230(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 < 0x18) {
LAB_002f3274:
      *param_1 = 0;
      if ((bVar1 & 1) == 0) {
        __n = (size_t)(bVar1 >> 1);
        param_2 = param_2 + 1;
      }
      else {
        __n = *(size_t *)(param_2 + 8);
        param_2 = *(byte **)(param_2 + 0x10);
      }
      *(char *)(param_1 + 1) = (char)__n;
      memcpy((void *)((long)param_1 + 9),param_2,__n);
      return;
    }
  }
  else if (*(ulong *)(param_2 + 8) < 0x18) goto LAB_002f3274;
  if ((bVar1 & 1) == 0) {
    uVar4 = (ulong)(bVar1 >> 1);
    param_1[2] = param_2 + 1;
  }
  else {
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(ulong *)(param_2 + 8);
  }
  param_1[1] = uVar4;
  puVar3 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 1) = 3;
    puVar3[6] = 1;
    puVar2 = PTR_LAB_043738a8;
    *puVar3 = puVar3 + 5;
    puVar3[3] = puVar2;
    puVar3[4] = puVar3;
    puVar3[2] = puVar3;
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)param_2;
    puVar3[9] = *(undefined8 *)(param_2 + 0x10);
    puVar3[8] = uVar6;
    puVar3[7] = uVar5;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
  }
  *param_1 = puVar3;
  return;
}


