/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c307d0; name: FUN_02c307d0
 */


void FUN_02c307d0(long param_1,uint param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined *puVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar5 = -param_2;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if (*(char *)(param_1 + 0x7c) != '\0') {
    **(undefined2 **)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x7a) = 0;
  }
  puVar2 = &UNK_03a847a4;
  if (param_5 != 0) {
    puVar2 = &UNK_03a847ba;
  }
  if ((int)param_2 < 0) {
    uVar7 = 0x30fc;
    if (param_5 != 0) {
      uVar7 = 0x2d;
    }
    if (*(char *)(param_1 + 0x7c) != '\0') {
      uVar3 = *(ushort *)(param_1 + 0x7a);
      if (uVar3 + 1 < (uint)*(ushort *)(param_1 + 0x78)) {
        *(ushort *)(param_1 + 0x7a) = uVar3 + 1;
        *(undefined2 *)(*(long *)(param_1 + 0x58) + (ulong)uVar3 * 2) = uVar7;
        *(undefined2 *)(*(long *)(param_1 + 0x58) + (ulong)*(ushort *)(param_1 + 0x7a) * 2) = 0;
      }
    }
  }
  uVar6 = *(uint *)(&DAT_03a847d0 + (ulong)(param_3 - 1) * 4);
  uVar7 = 0x3000;
  if (param_5 != 0) {
    uVar7 = 0x20;
  }
  do {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar5 / uVar6;
    }
    uVar8 = uVar8 & 0xffff;
    uVar5 = uVar5 - uVar8 * uVar6;
    if (9 < uVar8) {
      uVar8 = 10;
    }
    if (((param_4 == 2) || (uVar6 == 1)) || (uVar8 != 0)) {
      if (*(char *)(param_1 + 0x7c) != '\0') {
        sVar4 = *(short *)(puVar2 + (ulong)uVar8 * 2);
        uVar3 = *(ushort *)(param_1 + 0x7a);
        uVar9 = (ulong)uVar3;
        if (uVar3 + 1 < (uint)*(ushort *)(param_1 + 0x78)) {
          *(ushort *)(param_1 + 0x7a) = uVar3 + 1;
          *(short *)(*(long *)(param_1 + 0x58) + uVar9 * 2) = sVar4;
          uVar9 = (ulong)*(ushort *)(param_1 + 0x7a);
        }
        else {
          if (sVar4 != 0 || uVar3 + 1 != (uint)*(ushort *)(param_1 + 0x78)) goto LAB_02c30854;
          *(ushort *)(param_1 + 0x7a) = uVar3 + 1;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x58) + uVar9 * 2) = 0;
      }
LAB_02c30854:
      param_4 = 2;
    }
    else if (param_4 == 1) {
      if (*(char *)(param_1 + 0x7c) != '\0') {
        uVar3 = *(ushort *)(param_1 + 0x7a);
        if (uVar3 + 1 < (uint)*(ushort *)(param_1 + 0x78)) {
          *(ushort *)(param_1 + 0x7a) = uVar3 + 1;
          *(undefined2 *)(*(long *)(param_1 + 0x58) + (ulong)uVar3 * 2) = uVar7;
          *(undefined2 *)(*(long *)(param_1 + 0x58) + (ulong)*(ushort *)(param_1 + 0x7a) * 2) = 0;
        }
      }
      param_4 = 1;
    }
    bVar1 = uVar6 < 10;
    uVar6 = uVar6 / 10;
    if (bVar1) {
      return;
    }
  } while( true );
}


