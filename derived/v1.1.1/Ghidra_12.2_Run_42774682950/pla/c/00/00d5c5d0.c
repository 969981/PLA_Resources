/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5c5d0; name: FUN_00d5c5d0
 */


void FUN_00d5c5d0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  iVar1 = *(int *)(param_1 + 0x6d8);
  lVar7 = (long)iVar1;
  if (iVar1 == 2) {
    iVar1 = 0;
  }
  lVar5 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  iVar2 = *(int *)(*(long *)(lVar5 + 0x8b0) + 0x10);
  uVar4 = FUN_00d5d460(param_1);
  *(ushort *)(param_1 + 0x6ec) = uVar4;
  iVar3 = *(int *)(param_1 + lVar7 * 0x60 + 0x640);
  iVar1 = 0;
  if (*(int *)(param_1 + 0x6d8) != 2) {
    iVar1 = *(int *)(param_1 + 0x6d8);
  }
  lVar7 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  *(undefined1 *)(lVar7 + 0x9f7) = 0;
  FUN_0282ef20((float)iVar2,*(undefined8 *)(lVar7 + 0x7f8));
  FUN_02819878(lVar7,(uint)uVar4 - iVar3 * iVar2,iVar2);
  local_44[0] = 0;
  local_48[0] = 0;
  uVar6 = FUN_00d5d4ec(param_1,*(undefined2 *)(param_1 + 0x6ec),local_44,local_48);
  if ((uVar6 & 1) == 0) {
    local_44[0] = 1;
    local_48[0] = 1;
  }
  FUN_00d59948(param_1,local_44[0],local_48[0]);
  return;
}


