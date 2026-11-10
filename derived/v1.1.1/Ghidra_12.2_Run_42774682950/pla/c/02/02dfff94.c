/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfff94; name: FUN_02dfff94
 */


void FUN_02dfff94(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  bVar1 = *(byte *)(lVar3 + 0x18);
  if ((bVar1 & 1) != 0) {
    *(float *)(param_1 + 0x1c) = (*(float *)(lVar3 + 8) * 6.2831855) / *(float *)(param_1 + 0x20);
    bVar1 = *(byte *)(lVar3 + 0x18);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x10));
    *(uint *)(param_1 + 8) = (int)(*(float *)(lVar3 + 0x10) * fVar4) + 3U & 0xfffffffc;
  }
  *(undefined1 *)(lVar3 + 0x18) = 0;
  uVar2 = FUN_02dfff38(param_1 + 8,*(undefined2 *)(param_2 + 2),(long)param_2 + 0x12);
  *(undefined4 *)((long)param_2 + 0xc) = uVar2;
  if (*(short *)((long)param_2 + 0x12) != 0) {
    FUN_02e000e0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc),
                 param_1 + 0x18,*param_2);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc);
  }
  return;
}


