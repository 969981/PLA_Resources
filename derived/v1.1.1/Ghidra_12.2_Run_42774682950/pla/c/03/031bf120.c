/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bf120; name: FUN_031bf120
 */


void FUN_031bf120(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  *(long *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x30) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffff;
  iVar1 = *(int *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x7c) = iVar1 >> 3;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0xffffffff00000000;
  lVar3 = param_2[1];
  if (0x200 < *(int *)((long)param_2 + 0x14)) {
    uVar2 = (*(int *)((long)param_2 + 0x14) - 0x200U) / 0x12;
    if (0x7fff < uVar2) {
      uVar2 = 0x8000;
    }
    *(long *)(param_1 + 0x10) = lVar3 + 0x200;
    *(uint *)(param_1 + 0x28) = uVar2;
    *(ulong *)(param_1 + 0x18) = lVar3 + 0x200 + (ulong)(uVar2 << 4);
    *(long *)(param_1 + 0x20) = lVar3;
    if (lVar3 != 0) {
      FUN_032d59e0(lVar3,0xffffffff,0x80);
      FUN_032d59e0(*(undefined8 *)(param_1 + 0x18),0xffffffff,uVar2 >> 1);
      return;
    }
  }
  return;
}


