/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0088362c; name: FUN_0088362c
 */


void FUN_0088362c(long param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  lVar3 = FUN_00934074(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0xd0),0);
  if (lVar3 == 0) {
    bVar6 = 0x1f;
  }
  else {
    bVar6 = *(byte *)(*(long *)(lVar3 + 0x70) + 0x7d);
  }
  lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x2b68) + 0xd0) +
                                                 0x68) + 0x98) + 0x370) + 8);
  uVar2 = 3;
  if (0x17 < bVar6) {
    uVar2 = (uint)(bVar6 < 0x1e) << 2;
  }
  uVar5 = 1;
  if (0x11 < bVar6) {
    uVar5 = uVar2;
  }
  uVar2 = 2;
  if (0xb < bVar6) {
    uVar2 = uVar5;
  }
  uVar5 = 0;
  if (5 < bVar6) {
    uVar5 = uVar2;
  }
  uVar2 = (uint)*(byte *)(lVar3 + (ulong)uVar5 * 0x38 + 0x38);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(byte *)(*(long *)(lVar3 + (ulong)uVar5 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8) + 0x7d)
          == bVar6) {
        uVar2 = FUN_0294753c();
        if ((uVar2 & 0xff) != 6) goto LAB_008836f8;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  uVar2 = 6;
LAB_008836f8:
  uVar1 = FUN_02947e24(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98),uVar2);
  lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x2b68) + 0x98) + 0x370) + 8);
  uVar2 = (uint)*(byte *)(lVar3 + 0x38);
  if (uVar2 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    do {
      if (*(char *)(*(long *)(lVar3 + (ulong)(uVar5 & 0xff) * 8 + 8) + 0x7d) == param_3)
      goto LAB_00883758;
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
    uVar5 = 0xffffffff;
  }
LAB_00883758:
  FUN_0293d0f0(param_2,uVar1,uVar5);
  return;
}


