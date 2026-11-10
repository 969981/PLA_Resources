/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00245684; name: FUN_00245684
 */


void FUN_00245684(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined4 local_48;
  undefined4 local_44;
  
  *(long *)(param_1 + 0x58) = param_3;
  lVar6 = **(long **)(param_4 + 0x30) + 0xc;
  uVar2 = *(uint *)(lVar6 + (ulong)*(ushort *)(param_3 + 4) * 4);
  uVar5 = FUN_00233e78(*(undefined8 *)(param_4 + 0xa0));
  lVar6 = FUN_00235c58(uVar5,lVar6 + (ulong)uVar2);
  uVar8 = 3;
  if (0 < *(int *)(param_4 + 0xe0)) {
    uVar8 = 1;
  }
  lVar1 = param_1 + 0x60;
  *(undefined1 *)(lVar6 + 0x18) = uVar8;
  FUN_0024bc10(lVar1,*(undefined8 *)(lVar6 + 8));
  FUN_0024bc2c(lVar1,*(byte *)(param_3 + 6) & 3,*(byte *)(param_3 + 7) & 3);
  FUN_0024bc48(lVar1,*(byte *)(param_3 + 6) >> 2 & 3,*(byte *)(param_3 + 7) >> 2 & 3);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar6 + 0x20);
  lVar6 = 0;
  if ((*(byte *)(*(long *)(param_1 + 0x58) + 8) & 0x40) != 0) {
    lVar6 = 0x50;
  }
  local_44 = *(undefined4 *)((long)&DAT_039cfc24 + lVar6);
  lVar6 = FUN_00235844(*(undefined8 *)(param_4 + 0x20),param_2,0x48535244,1,&local_44);
  *(long *)(param_1 + 0xe0) = lVar6;
  uVar5 = *(undefined8 *)(lVar6 + 0x38);
  lVar6 = 0;
  do {
    local_48 = *(undefined4 *)((long)&DAT_039cfc24 + lVar6);
    iVar3 = FUN_002506a0(uVar5,0x48535244,1,&local_48);
    *(int *)(param_1 + lVar6 + 0xe8) = iVar3;
    if (-1 < iVar3) {
      uVar7 = FUN_0022fc40(*(undefined8 *)(param_1 + 0xe0),iVar3);
      uVar4 = FUN_0087d8bc(uVar7,4,3,"uDropShadowBlur");
      *(undefined4 *)(param_1 + lVar6 + 0x180) = uVar4;
    }
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x98);
  return;
}


