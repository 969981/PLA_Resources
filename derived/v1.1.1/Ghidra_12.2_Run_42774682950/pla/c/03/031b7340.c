/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b7340; name: FUN_031b7340
 */


void FUN_031b7340(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x30) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffff;
  iVar1 = *(int *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x7c) = iVar1 >> 3;
  if (0x200 < *(int *)((long)param_2 + 0x14)) {
    lVar2 = param_2[1];
    uVar3 = (*(int *)((long)param_2 + 0x14) - 0x200U) / 0x12;
    if (0x7fff < uVar3) {
      uVar3 = 0x8000;
    }
    *(long *)(param_1 + 0x10) = lVar2 + 0x200;
    *(uint *)(param_1 + 0x28) = uVar3;
    *(ulong *)(param_1 + 0x18) = lVar2 + 0x200 + (ulong)(uVar3 << 4);
    *(long *)(param_1 + 0x20) = lVar2;
    if (lVar2 != 0) {
      FUN_032d59e0(lVar2,0xffffffff,0x80);
      FUN_032d59e0(*(undefined8 *)(param_1 + 0x18),0xffffffff,uVar3 >> 1);
      return;
    }
  }
  return;
}


