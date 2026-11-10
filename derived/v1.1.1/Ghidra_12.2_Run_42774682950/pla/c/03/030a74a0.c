/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a74a0; name: FUN_030a74a0
 */


void FUN_030a74a0(long param_1,int param_2,long param_3,undefined8 param_4)

{
  ushort *puVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  *(undefined1 *)(param_3 + param_2) = 1;
  lVar9 = *(long *)(param_1 + 0x38);
  lVar10 = lVar9 + (long)param_2 * 0x70;
  sVar4 = *(short *)(lVar10 + 0xc);
  sVar5 = *(short *)(lVar10 + 0xe);
  lVar11 = *(long *)(param_1 + 8);
  lVar10 = lVar11 + (long)sVar4 * 0x10;
  uVar6 = (int)param_4 - (int)param_3;
  if (*(char *)(lVar10 + 0xf) == '\0') {
    sVar3 = *(short *)(lVar10 + 0xc);
    uVar8 = (ulong)sVar3;
    if ((-1 < sVar3) && (uVar12 = (uint)sVar3, uVar6 != uVar12 && (int)sVar3 <= (int)uVar6)) {
      while( true ) {
        uVar2 = (ushort)uVar12;
        if (*(char *)(param_3 + (short)uVar2) == '\0') {
          FUN_030a74a0(param_1,uVar8,param_3,param_4);
        }
        else {
          lVar9 = lVar9 + (long)(short)uVar2 * 0x70;
          puVar1 = (ushort *)(lVar9 + 0x10);
          if (*(short *)(lVar9 + 0xc) != sVar4) {
            puVar1 = (ushort *)(lVar9 + 0x12);
          }
          uVar2 = *puVar1;
          uVar12 = (uint)uVar2;
        }
        uVar7 = (uint)(short)uVar2;
        if (((int)uVar7 < 0) || (uVar8 = (ulong)uVar7, (int)uVar6 <= (int)uVar7)) break;
        lVar9 = *(long *)(param_1 + 0x38);
      }
      lVar11 = *(long *)(param_1 + 8);
    }
  }
  lVar11 = lVar11 + (long)sVar5 * 0x10;
  if (*(char *)(lVar11 + 0xf) == '\0') {
    sVar4 = *(short *)(lVar11 + 0xc);
    uVar8 = (ulong)sVar4;
    if ((-1 < sVar4) && (uVar12 = (uint)sVar4, uVar6 != uVar12 && (int)sVar4 <= (int)uVar6)) {
      do {
        uVar2 = (ushort)uVar12;
        if (*(char *)(param_3 + (short)uVar2) == '\0') {
          FUN_030a74a0(param_1,uVar8,param_3,param_4);
        }
        else {
          lVar10 = *(long *)(param_1 + 0x38) + (long)(short)uVar2 * 0x70;
          puVar1 = (ushort *)(lVar10 + 0x10);
          if (*(short *)(lVar10 + 0xc) != sVar5) {
            puVar1 = (ushort *)(lVar10 + 0x12);
          }
          uVar2 = *puVar1;
          uVar12 = (uint)uVar2;
        }
        uVar7 = (uint)(short)uVar2;
      } while ((-1 < (int)uVar7) && (uVar8 = (ulong)uVar7, (int)uVar7 < (int)uVar6));
    }
  }
  return;
}


