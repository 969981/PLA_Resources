/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033541d0; name: FUN_033541d0
 */


void FUN_033541d0(long param_1,int param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  
  do {
    uVar2 = *(uint *)(param_1 + (long)((int)(param_2 + param_3) >> 1) * 0xc + 4);
    uVar4 = (ulong)param_3;
    iVar12 = param_2;
    do {
      while( true ) {
        puVar1 = (undefined8 *)(param_1 + -0xc + (long)iVar12 * 0xc);
        do {
          iVar13 = iVar12;
          puVar5 = puVar1;
          puVar1 = (undefined8 *)((long)puVar5 + 0xc);
          iVar12 = iVar13 + 1;
        } while (uVar2 < *(uint *)(puVar5 + 2));
        uVar7 = (ulong)(int)uVar4;
        if (*(uint *)(param_1 + (long)(int)uVar4 * 0xc + 4) < uVar2) {
          puVar8 = (uint *)(param_1 + -8 + uVar7 * 0xc);
          do {
            uVar6 = *puVar8;
            uVar7 = uVar7 - 1;
            puVar8 = puVar8 + -3;
          } while (uVar6 < uVar2);
        }
        uVar6 = (uint)uVar7;
        if ((int)uVar6 < iVar13) break;
        if (uVar6 + 1 != iVar12) {
          puVar9 = (undefined8 *)(param_1 + uVar7 * 0xc);
          uVar10 = *puVar9;
          uVar3 = *(undefined4 *)(puVar9 + 1);
          uVar11 = *puVar1;
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((long)puVar5 + 0x14);
          *puVar9 = uVar11;
          *(undefined4 *)((long)puVar5 + 0x14) = uVar3;
          *puVar1 = uVar10;
        }
        uVar6 = uVar6 - 1;
        uVar4 = (ulong)uVar6;
        iVar13 = iVar12;
        if ((int)uVar6 < iVar12) goto LAB_033542c4;
      }
      uVar4 = uVar7 & 0xffffffff;
      iVar12 = iVar13;
    } while (iVar13 <= (int)uVar6);
LAB_033542c4:
    if (param_2 < (int)uVar6) {
      FUN_033541d0(param_1);
    }
    param_2 = iVar13;
    if ((int)param_3 <= iVar13) {
      return;
    }
  } while( true );
}


