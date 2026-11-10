/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03395780; name: FUN_03395780
 */


void FUN_03395780(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  FUN_032c2320(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  FUN_032c2320(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  FUN_032c2320(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x8000000000000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000000000;
  FUN_032c2320(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  lVar2 = param_1[0x1b];
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)((long)param_1 + 0xe4) & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_0338cccc(PTR_PTR_0434a080,iVar1);
    iVar3 = *(int *)(param_1 + 0x1c);
    param_1[0x1b] = lVar2;
  }
  puVar4 = (undefined8 *)(lVar2 + (long)iVar3 * 0x18);
  *puVar4 = 0x100000000;
  puVar4[1] = 0;
  puVar4[2] = 0x8000000000000000;
  *(int *)(param_1 + 0x1c) = iVar1;
  *(undefined4 *)(param_1 + 0x1d) = 1;
  return;
}


