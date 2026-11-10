/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029da694; name: FUN_029da694
 */


void FUN_029da694(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  
  lVar3 = param_3[1];
  cVar6 = *(char *)(lVar3 + 1);
  if (cVar6 == '\0') {
    pbVar9 = (byte *)param_3[2];
    if ((uint)pbVar9[1] + (uint)*pbVar9 == 0) {
      cVar6 = '\0';
    }
    else {
      lVar3 = *param_3;
      uVar4 = 0;
      lVar5 = param_3[3];
      pbVar11 = pbVar9 + 6;
      do {
        FUN_029815e4(*(undefined8 *)(param_1 + 0x38),lVar3,
                     *(undefined8 *)
                      (*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)*pbVar11 * 8 + 0x120),lVar5
                    );
        uVar4 = uVar4 + 1;
        pbVar11 = pbVar11 + 0xc;
      } while (uVar4 < (ulong)pbVar9[1] + (ulong)*pbVar9);
      lVar3 = param_3[1];
      cVar6 = *(char *)(lVar3 + 1);
    }
  }
  *(char *)(lVar3 + 1) = cVar6 + '\x01';
  pbVar9 = (byte *)param_3[2];
  uVar4 = (ulong)*pbVar9;
  bVar7 = pbVar9[1];
  if ((uint)bVar7 + (uint)*pbVar9 != 0) {
    lVar3 = *param_3;
    uVar10 = 0;
    pbVar11 = pbVar9 + 0xd;
    bVar2 = *pbVar11;
    while( true ) {
      if ((bVar2 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x20);
        bVar7 = *(byte *)(lVar3 + 0x7d);
        lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) +
                          (ulong)bVar7 * 8 + 0x120);
        iVar1 = *(int *)(lVar8 + 0x394);
        iVar13 = 0xffff;
        if (iVar1 + 1U < 0xffff) {
          iVar13 = iVar1 + 1;
        }
        *(int *)(lVar8 + 0x394) = iVar13;
        FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x35,(ulong)bVar7,0,1);
        uVar4 = (ulong)*pbVar9;
        bVar7 = pbVar9[1];
      }
      uVar10 = uVar10 + 1;
      pbVar11 = pbVar11 + 0xc;
      if (uVar4 + bVar7 <= uVar10) break;
      bVar2 = *pbVar11;
    }
    pbVar9 = (byte *)param_3[2];
    if ((uint)pbVar9[1] + (uint)*pbVar9 != 0) {
      uVar4 = 0;
      pbVar11 = pbVar9 + 6;
      do {
        lVar3 = *(long *)(param_1 + 0x20);
        bVar7 = *pbVar11;
        lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) +
                          (ulong)bVar7 * 8 + 0x120);
        uVar12 = *(int *)(lVar5 + 0x39c) + (uint)*(ushort *)(pbVar11 + -2);
        if (0xfffe < uVar12) {
          uVar12 = 0xffff;
        }
        *(uint *)(lVar5 + 0x39c) = uVar12;
        FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x35,(ulong)bVar7,2);
        uVar4 = uVar4 + 1;
        pbVar11 = pbVar11 + 0xc;
      } while (uVar4 < (ulong)pbVar9[1] + (ulong)*pbVar9);
    }
  }
  return;
}


