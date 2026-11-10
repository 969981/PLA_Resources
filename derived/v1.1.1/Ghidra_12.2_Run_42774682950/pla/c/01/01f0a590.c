/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0a590; name: FUN_01f0a590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0a590(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  lVar7 = DAT_043ef5b8;
  local_58 = (long *)0x0;
  local_70 = 0x1f33679e2a63116b;
  pcStack_68 = "Ambient";
  local_60 = 0x1f;
  local_90 = 0x1f33679e2a63116b;
  pcStack_88 = "Ambient";
  local_80 = 0x1f;
  uStack_78 = 0;
  uVar2 = FUN_02b1f8b0(DAT_043ef5b8,&local_70);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = FUN_02b1fb34(lVar7,&local_70,&local_90);
  }
  local_70 = 0x2036f83774399ea;
  pcStack_68 = "Direction";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar6 = (*(long *)(DAT_043ef5b8 + 0xa8) + *(long *)(DAT_043ef5b8 + 0xa0)) - 1;
  lVar7 = (long)uVar2 >> 0x20;
  lVar8 = *(long *)(*(long *)(DAT_043ef5b8 + 0x68) + (uVar6 / 0x12) * 8);
  lVar9 = (uVar6 % 0x12) * 0xd8;
  puVar3 = (undefined8 *)FUN_00aefbe4(*(long *)(lVar8 + lVar9) + lVar7 * 0x1b0 + 0xd8,&local_70);
  uVar1 = _DAT_03888d10;
  puVar3[1] = _UNK_03888d18;
  *puVar3 = uVar1;
  *(undefined1 *)(*(long *)(lVar8 + lVar9) + lVar7 * 0x1b0 + 0x1a9) = 1;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x5925fa3a92333d80;
  pcStack_68 = "Speed";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar2 = (*(long *)(DAT_043ef5b8 + 0xa8) + *(long *)(DAT_043ef5b8 + 0xa0)) - 1;
  lVar8 = *(long *)(*(long *)(DAT_043ef5b8 + 0x68) + (uVar2 / 0x12) * 8);
  lVar9 = (uVar2 % 0x12) * 0xd8;
  puVar4 = (undefined4 *)FUN_00aef474(*(long *)(lVar8 + lVar9) + lVar7 * 0x1b0 + 0x70,&local_70);
  *puVar4 = 0x40800000;
  *(undefined1 *)(*(long *)(lVar8 + lVar9) + lVar7 * 0x1b0 + 0x1a9) = 1;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0x9331808c8765e725;
  pcStack_68 = "NoiseScale";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar2 = (*(long *)(DAT_043ef5b8 + 0xa8) + *(long *)(DAT_043ef5b8 + 0xa0)) - 1;
  lVar8 = *(long *)(*(long *)(DAT_043ef5b8 + 0x68) + (uVar2 / 0x12) * 8);
  lVar9 = (uVar2 % 0x12) * 0xd8;
  puVar4 = (undefined4 *)FUN_00aef474(*(long *)(lVar8 + lVar9) + lVar7 * 0x1b0 + 0x70,&local_70);
  *puVar4 = 0x40600000;
  *(undefined1 *)(*(long *)(lVar8 + lVar9) + lVar7 * 0x1b0 + 0x1a9) = 1;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_70 = 0xc15508fa830cbd90;
  pcStack_68 = "Strength";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar2 = (*(long *)(DAT_043ef5b8 + 0xa8) + *(long *)(DAT_043ef5b8 + 0xa0)) - 1;
  lVar8 = *(long *)(*(long *)(DAT_043ef5b8 + 0x68) + (uVar2 / 0x12) * 8);
  lVar9 = (uVar2 % 0x12) * 0xd8;
  puVar4 = (undefined4 *)FUN_00aef474(*(long *)(lVar8 + lVar9) + lVar7 * 0x1b0 + 0x70,&local_70);
  *puVar4 = 0x3ecccccd;
  *(undefined1 *)(*(long *)(lVar8 + lVar9) + lVar7 * 0x1b0 + 0x1a9) = 1;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  uVar2 = (*(long *)(DAT_043ef5b8 + 0xa8) + *(long *)(DAT_043ef5b8 + 0xa0)) - 1;
  plVar5 = (long *)(*(long *)(*(long *)(DAT_043ef5b8 + 0x68) + (uVar2 / 0x12) * 8) +
                   (uVar2 % 0x12) * 0xd8);
  lVar8 = *plVar5 + lVar7 * 0x1b0;
  if (*(char *)(lVar8 + 0x1a8) != '\x01') {
    *(undefined1 *)(lVar8 + 0x1a8) = 1;
    *(undefined1 *)(*plVar5 + lVar7 * 0x1b0 + 0x1a9) = 1;
  }
  return;
}


