/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a1407c; name: FUN_02a1407c
 */


void FUN_02a1407c(long param_1,ulong param_2,ulong param_3,ulong param_4,undefined2 param_5)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = param_2 & 0xff;
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if (((uint)param_3 & 0xff) != ((uint)param_4 & 0xff)) {
    lVar7 = (param_3 & 0xff) * 8;
    lVar8 = (param_4 & 0xff) * 8;
    lVar2 = lVar4 + uVar6 * 0x38 + 8;
    uVar9 = *(undefined8 *)(lVar2 + lVar7);
    *(undefined8 *)(lVar2 + lVar7) = *(undefined8 *)(lVar2 + lVar8);
    *(undefined8 *)(lVar2 + lVar8) = uVar9;
  }
  if (((uint)param_3 & 0xff) < (uint)*(byte *)(lVar4 + uVar6 * 0x38 + 0x38)) {
    lVar4 = *(long *)(lVar4 + uVar6 * 0x38 + (param_3 & 0xff) * 8 + 8);
  }
  else {
    lVar4 = 0;
  }
  *(ushort *)(lVar4 + 0x87) = *(ushort *)(lVar4 + 0x87) | 0x80;
  *(undefined2 *)(lVar4 + 0x372) = param_5;
  *(undefined2 *)(lVar4 + 0x370) = 0;
  *(undefined8 *)(lVar4 + 0x3b8) = 0;
  *(undefined8 *)(lVar4 + 0x3c0) = 0;
  *(undefined8 *)(lVar4 + 0x3c8) = 0;
  *(undefined8 *)(lVar4 + 0x3d0) = 0;
  *(undefined8 *)(lVar4 + 0x3d8) = 0;
  *(undefined8 *)(lVar4 + 0x3e0) = 0;
  *(undefined8 *)(lVar4 + 1000) = 0;
  *(undefined8 *)(lVar4 + 0x3f0) = 0;
  *(undefined8 *)(lVar4 + 0x3f8) = 0;
  *(undefined8 *)(lVar4 + 0x400) = 0;
  *(undefined8 *)(lVar4 + 0x408) = 0;
  *(undefined8 *)(lVar4 + 0x410) = 0;
  *(undefined8 *)(lVar4 + 0x418) = 0;
  *(undefined8 *)(lVar4 + 0x420) = 0;
  *(undefined8 *)(lVar4 + 0x428) = 0;
  *(undefined8 *)(lVar4 + 0x430) = 0;
  *(undefined8 *)(lVar4 + 0x438) = 0;
  *(undefined8 *)(lVar4 + 0x440) = 0;
  *(undefined8 *)(lVar4 + 0x448) = 0;
  *(undefined8 *)(lVar4 + 0x450) = 0;
  *(undefined8 *)(lVar4 + 0x458) = 0;
  *(undefined8 *)(lVar4 + 0x460) = 0;
  *(undefined8 *)(lVar4 + 0x468) = 0;
  *(undefined8 *)(lVar4 + 0x470) = 0;
  *(undefined8 *)(lVar4 + 0x478) = 0;
  *(undefined8 *)(lVar4 + 0x480) = 0;
  *(undefined8 *)(lVar4 + 0x488) = 0;
  *(undefined8 *)(lVar4 + 0x48d) = 0;
  FUN_029526c8(lVar4);
  uVar6 = FUN_0294753c(*(undefined8 *)(param_1 + 8),param_2 & 0xffffffff,param_3 & 0xffffffff);
  uVar9 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar1 = *(byte *)(lVar4 + 0x7d);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
  *(byte *)(lVar2 + (uVar6 & 0xff) + (uVar6 & 0xff) * 2 + 2) = bVar1;
  if ((*(long *)(lVar2 + 0x30) == 0) ||
     (*(uint *)(lVar2 + 0x38) < (uint)bVar1 || *(uint *)(lVar2 + 0x38) == (uint)bVar1)) {
    puVar5 = (undefined1 *)(lVar2 + 0x3c);
  }
  else {
    puVar5 = (undefined1 *)(*(long *)(lVar2 + 0x30) + (ulong)bVar1);
  }
  *puVar5 = (char)uVar6;
  FUN_02953894(lVar2,uVar9,uVar6 & 0xffffffff,uVar3);
  return;
}


