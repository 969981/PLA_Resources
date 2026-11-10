/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03357d20; name: FUN_03357d20
 */


void FUN_03357d20(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  param_2 = param_2 & 0xffffffff;
  do {
    iVar11 = (int)param_2;
    uVar1 = *(uint *)(param_1 + (long)((int)(iVar11 + param_3) >> 1) * 0xc + 8);
    uVar3 = (ulong)param_3;
    do {
      while( true ) {
        iVar12 = (int)param_2;
        param_2 = (ulong)iVar12;
        if (*(uint *)(param_1 + (long)iVar12 * 0xc + 8) < uVar1) {
          puVar5 = (uint *)(param_1 + 0x14 + param_2 * 0xc);
          do {
            uVar4 = *puVar5;
            param_2 = param_2 + 1;
            puVar5 = puVar5 + 3;
          } while (uVar4 < uVar1);
        }
        uVar6 = (ulong)(int)uVar3;
        if (uVar1 < *(uint *)(param_1 + (long)(int)uVar3 * 0xc + 8)) {
          puVar5 = (uint *)(param_1 + -4 + uVar6 * 0xc);
          do {
            uVar4 = *puVar5;
            uVar6 = uVar6 - 1;
            puVar5 = puVar5 + -3;
          } while (uVar1 < uVar4);
        }
        uVar4 = (uint)uVar6;
        uVar13 = (uint)param_2;
        if ((int)uVar4 < (int)uVar13) break;
        if (uVar4 != uVar13) {
          puVar8 = (undefined8 *)(param_1 + uVar6 * 0xc);
          uVar9 = *puVar8;
          puVar7 = (undefined8 *)(param_1 + param_2 * 0xc);
          uVar2 = *(undefined4 *)(puVar8 + 1);
          uVar10 = *puVar7;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
          *puVar8 = uVar10;
          *(undefined4 *)(puVar7 + 1) = uVar2;
          *puVar7 = uVar9;
        }
        uVar4 = uVar4 - 1;
        uVar3 = (ulong)uVar4;
        param_2 = (ulong)(uVar13 + 1);
        if ((int)uVar4 < (int)(uVar13 + 1)) goto LAB_03357e1c;
      }
      uVar3 = uVar6 & 0xffffffff;
    } while ((int)uVar13 <= (int)uVar4);
LAB_03357e1c:
    if (iVar11 < (int)uVar4) {
      FUN_03357d20(param_1);
    }
    if ((int)param_3 <= (int)param_2) {
      return;
    }
  } while( true );
}


