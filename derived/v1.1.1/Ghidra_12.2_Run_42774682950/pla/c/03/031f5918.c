/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5918; name: FUN_031f5918
 */


void FUN_031f5918(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  bVar3 = (*(byte *)(param_1 + 0x18) & 1) != 0;
  iVar2 = (int)((uint)*(byte *)(param_1 + 0x18) << 0x18) >> 0x19;
  iVar4 = 1;
  if (bVar3) {
    iVar4 = 2;
  }
  iVar5 = 1;
  if (!bVar3) {
    iVar5 = 2;
  }
  param_2[1] = 0;
  *param_2 = 0;
  param_3[1] = 0;
  *param_3 = 0;
  iVar5 = (iVar5 + iVar2) % 3;
  iVar4 = (iVar4 + iVar2) % 3;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      param_2 = (undefined8 *)((long)param_2 + 4);
    }
    else if (iVar4 == 2) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    }
  }
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  if (iVar5 == 0) {
    *(undefined4 *)param_3 = uVar1;
    return;
  }
  if (iVar5 == 1) {
    *(undefined4 *)((long)param_3 + 4) = uVar1;
    return;
  }
  if (iVar5 == 2) {
    *(undefined4 *)(param_3 + 1) = uVar1;
    return;
  }
  *(undefined4 *)((long)param_3 + 0xc) = uVar1;
  return;
}


