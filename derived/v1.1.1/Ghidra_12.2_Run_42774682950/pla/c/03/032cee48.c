/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cee48; name: FUN_032cee48
 */


undefined4 FUN_032cee48(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar3 = FUN_032d43a4(param_2,"hkLifoAllocator(Stack)");
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_032d4514(param_2,uVar3,2,*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10));
  }
  plVar4 = *(long **)(param_1 + 8);
  iVar6 = (int)plVar4[1];
  if (0 < iVar6) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      puVar2 = (ulong *)(*plVar4 + lVar7);
      uVar11 = *puVar2;
      uVar5 = puVar2[1];
      uVar10 = *(long *)(param_1 + 0x10) + *(long *)(plVar4[2] + (long)(int)puVar2[2] * 8);
      if (uVar5 <= uVar10 && uVar11 <= uVar5) {
        uVar10 = uVar5;
      }
      FUN_032d4514(param_2,uVar3,0,uVar11,uVar10 - uVar11);
      plVar4 = *(long **)(param_1 + 8);
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x18;
      iVar6 = (int)plVar4[1];
    } while (lVar9 < iVar6);
  }
  uVar10 = (ulong)(int)plVar4[3];
  if ((int)plVar4[3] < 1) {
    return uVar3;
  }
  uVar11 = (ulong)(iVar6 - 1);
  do {
    uVar10 = uVar10 - 1;
    uVar8 = *(ulong *)(plVar4[2] + uVar10 * 8);
    uVar5 = *(long *)(param_1 + 0x10) + uVar8;
    iVar6 = (int)uVar11;
    if (*(ulong *)(param_1 + 0x20) == uVar5) {
      FUN_032d4514(param_2,uVar3,2,*(long *)(param_1 + 0x18),uVar5 - *(long *)(param_1 + 0x18));
      uVar5 = *(ulong *)(param_1 + 0x18);
    }
    if (-1 < iVar6) {
      lVar9 = ((long)iVar6 + (long)iVar6 * 2) * 8;
      uVar13 = (long)iVar6;
      do {
        lVar12 = **(long **)(param_1 + 8);
        lVar7 = lVar12 + lVar9;
        if (uVar10 != *(uint *)(lVar7 + 0x10)) {
          uVar11 = uVar13 & 0xffffffff;
          break;
        }
        uVar11 = *(ulong *)(lVar7 + 8);
        if (uVar11 <= uVar5 && uVar5 - uVar11 != 0) {
          FUN_032d4514(param_2,uVar3,1,uVar11,uVar5 - uVar11);
        }
        uVar5 = *(ulong *)(lVar12 + lVar9);
        uVar11 = uVar13 - 1;
        lVar9 = lVar9 + -0x18;
        bVar1 = 0 < (long)uVar13;
        uVar13 = uVar11;
      } while (bVar1);
    }
    if (uVar8 <= uVar5 && uVar5 - uVar8 != 0) {
      FUN_032d4514(param_2,uVar3,1,uVar8,uVar5 - uVar8);
    }
    if ((long)uVar10 < 1) {
      return uVar3;
    }
    plVar4 = *(long **)(param_1 + 8);
  } while( true );
}


