/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318b774; name: FUN_0318b774
 */


void FUN_0318b774(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar12 = (ulong)uVar3;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) < (int)uVar3) {
    lVar6 = FUN_0318c9b8(PTR_PTR_0434a090,uVar3,*param_2,(int)param_2[1]);
    *param_2 = lVar6;
  }
  iVar4 = (int)param_2[1];
  if (iVar4 < (int)uVar3) {
    lVar6 = *param_2;
    *(uint *)(param_2 + 1) = uVar3;
    puVar9 = (undefined8 *)(lVar6 + (long)iVar4 * 8);
    uVar10 = ((long)(int)uVar3 * 8 + (long)iVar4 * -8) - 8;
    uVar1 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar11 = -((ulong)uVar1 & 3);
      puVar8 = puVar9;
      do {
        bVar5 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        puVar9 = puVar8 + 1;
        *puVar8 = 0x7fffffff00000000;
        puVar8 = puVar9;
      } while (bVar5);
    }
    if (0x17 < uVar10) {
      do {
        *puVar9 = 0x7fffffff00000000;
        puVar9[1] = 0x7fffffff00000000;
        puVar9[2] = 0x7fffffff00000000;
        puVar9[3] = 0x7fffffff00000000;
        puVar9 = puVar9 + 4;
      } while (puVar9 != (undefined8 *)(lVar6 + (long)(int)uVar3 * 8));
    }
  }
  else if ((int)uVar3 < iVar4) {
    *(uint *)(param_2 + 1) = uVar3;
  }
  if (0 < (int)uVar3) {
    lVar11 = 0;
    lVar6 = 0;
    do {
      plVar2 = (long *)(*(long *)(param_1 + 0x38) + lVar11);
      lVar7 = *plVar2;
      if (lVar7 != 0) {
        if ((char)plVar2[2] != '\x01') {
          lVar7 = FUN_03165a00(plVar2);
        }
        FUN_0315e830(lVar7,*param_2 + lVar6);
      }
      uVar12 = uVar12 - 1;
      lVar6 = lVar6 + 8;
      lVar11 = lVar11 + 0x18;
    } while (uVar12 != 0);
  }
  return;
}


