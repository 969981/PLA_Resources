/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e65804; name: FUN_02e65804
 */


void FUN_02e65804(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined4 *)(*DAT_0442d138)(7,0x38);
  if (puVar4 != (undefined4 *)0x0) {
    bVar1 = *(byte *)(puVar4 + 0xd) & 0xfc;
    *(byte *)(puVar4 + 0xd) = *(byte *)(puVar4 + 0xd) & 0xfe;
    if (param_2 == (undefined8 *)0x0) {
      *(byte *)(puVar4 + 0xd) = bVar1;
    }
    else {
      *(byte *)(puVar4 + 0xd) = bVar1 | 2;
      *(undefined8 *)(puVar4 + 2) = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar5 = param_2[3];
      puVar4[10] = *(undefined4 *)(param_2 + 4);
      *(undefined8 *)(puVar4 + 6) = uVar3;
      *(undefined8 *)(puVar4 + 8) = uVar5;
      *(undefined8 *)(puVar4 + 4) = uVar2;
    }
    *puVar4 = param_1;
    puVar4[0xc] = param_3;
  }
  return;
}


