/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e63e50; name: FUN_02e63e50
 */


bool FUN_02e63e50(long param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  
  uVar2 = *(uint *)(param_1 + 0xe4);
  *(undefined4 **)(param_1 + (ulong)uVar2 * 8 + 0xf8) = param_2;
  *(undefined4 *)(param_1 + (ulong)uVar2 * 4) = *param_2;
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0x20) = param_2[2];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0x30) = param_2[3];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0x40) = param_2[4];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0x50) = param_2[5];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0x60) = param_2[6];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0x70) = param_2[7];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0x80) = param_2[8];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0x90) = param_2[9];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0xa0) = param_2[10];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe4) * 4 + 0xb0) = param_2[0xb];
  iVar1 = *(int *)(param_1 + 0xe4) + 1;
  *(int *)(param_1 + 0xe4) = iVar1;
  if (iVar1 == 4) {
    uVar3 = FUN_02e63f74(param_1);
    if ((uVar3 & 1) == 0) {
      cVar4 = *(char *)(param_1 + 0xe8);
    }
    else {
      cVar4 = '\x01';
    }
    *(char *)(param_1 + 0xe8) = cVar4;
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  else {
    cVar4 = *(char *)(param_1 + 0xe8);
  }
  return cVar4 == '\0';
}


