/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e9904; name: FUN_029e9904
 */


void FUN_029e9904(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  
  uVar9 = (ulong)*(byte *)(param_2 + 0x30);
  if (uVar9 != 0) {
    lVar13 = 0;
    lVar10 = uVar9 - 1;
    puVar12 = (undefined1 *)(param_3 + 9);
    while( true ) {
      if (((uint)lVar13 & 0xff) < (uint)uVar9) {
        lVar14 = *(long *)(param_2 + lVar13 * 8);
        iVar1 = *(int *)(puVar12 + -9);
      }
      else {
        lVar14 = 0;
        iVar1 = *(int *)(puVar12 + -9);
      }
      if (iVar1 != 0) {
        FUN_029506a8(lVar14,0xf);
        lVar11 = *(long *)(param_1 + 0x20);
        uVar2 = *(undefined1 *)(lVar14 + 0x7d);
        uVar4 = puVar12[-5];
        uVar5 = puVar12[-4];
        uVar6 = puVar12[-3];
        uVar7 = puVar12[-1];
        uVar3 = *puVar12;
        uVar8 = puVar12[-2];
        FUN_02a144e4(*(undefined8 *)(lVar11 + 0x20),uVar2,uVar4,uVar5,uVar6,uVar7,uVar3,uVar8);
        FUN_02a3e6b8(*(undefined8 *)(lVar11 + 0x18),0x42,uVar2,uVar4,uVar5,uVar6,uVar7,uVar3,uVar8);
      }
      if (lVar10 == lVar13) break;
      uVar9 = (ulong)*(byte *)(param_2 + 0x30);
      lVar13 = lVar13 + 1;
      puVar12 = puVar12 + 0x10;
    }
  }
  return;
}


