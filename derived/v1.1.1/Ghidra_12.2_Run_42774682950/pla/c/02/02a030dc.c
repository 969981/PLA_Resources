/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a030dc; name: FUN_02a030dc
 */


bool FUN_02a030dc(long param_1,long param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 == 0) {
LAB_02a03184:
    bVar2 = false;
  }
  else {
    if (*(int *)(param_2 + 0x300) == param_3) {
      lVar8 = 0;
    }
    else if (*(int *)(param_2 + 0x31c) == param_3) {
      lVar8 = 1;
    }
    else if (*(int *)(param_2 + 0x338) == param_3) {
      lVar8 = 2;
    }
    else {
      if (*(int *)(param_2 + 0x354) != param_3) goto LAB_02a03184;
      lVar8 = 3;
    }
    bVar3 = FUN_02980ca0(*(undefined8 *)(param_1 + 0x38),param_2,lVar8,param_3,param_4,param_5);
    if ((uint)lVar8 < (uint)*(byte *)(param_2 + 0x368)) {
      bVar5 = *(byte *)(param_2 + lVar8 * 0x1c + 0x304);
    }
    else {
      bVar5 = 0;
    }
    if (bVar5 <= bVar3) {
      bVar3 = bVar5;
    }
    bVar2 = bVar3 != 0;
    if (bVar2) {
      FUN_02a3b928(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x5e0) + 0x20),param_2,
                   lVar8);
    }
    lVar4 = *(long *)(param_1 + 0x20);
    bVar5 = *(byte *)(param_2 + 0x7d);
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0x10) + 8) + (ulong)bVar5 * 8 +
                     0x120);
    lVar7 = lVar6 + lVar8 * 0x1c;
    pbVar1 = (byte *)(lVar7 + 0x307);
    bVar3 = *(byte *)(lVar7 + 0x307);
    if (bVar3 < 0x10) {
      bVar3 = bVar3 & 0xf | 0x10;
      *pbVar1 = bVar3;
      *(char *)(lVar6 + 0x36c) = *(char *)(lVar6 + 0x36c) + '\x01';
    }
    bVar3 = bVar3 & 0xf0 | 1;
    *pbVar1 = bVar3;
    if (*(char *)(lVar6 + lVar8 * 0x1c + 0x30c) != '\0') {
      *(byte *)(lVar6 + lVar8 * 0x1c + 0x2fb) = bVar3;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar4 + 0x18),7,(ulong)bVar5,lVar8);
  }
  return bVar2;
}


