/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02604d38; name: FUN_02604d38
 */


void FUN_02604d38(long param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar3 != *param_2) {
    lVar4 = *(long *)(param_1 + 0x108);
    uVar7 = *(ulong *)(lVar4 + 0xa8);
    lVar2 = *(long *)(lVar4 + 0x70);
    if (*(long *)(lVar4 + 0x78) != lVar2) {
      uVar1 = *(long *)(lVar4 + 0xb0) + uVar7;
      puVar5 = (undefined8 *)(*(long *)(lVar2 + (uVar7 / 0x38) * 8) + (uVar7 % 0x38) * 0x48);
      puVar8 = (undefined8 *)(*(long *)(lVar2 + (uVar1 / 0x38) * 8) + (uVar1 % 0x38) * 0x48);
      if (puVar8 != puVar5) {
        plVar9 = (long *)(lVar2 + (uVar7 / 0x38) * 8);
        do {
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar6 = puVar5 + 9;
          *puVar5 = 0;
          if ((long)puVar6 - *plVar9 == 0xfc0) {
            plVar9 = plVar9 + 1;
            puVar6 = (undefined8 *)*plVar9;
          }
          puVar5 = puVar6;
        } while (puVar8 != puVar6);
      }
    }
    FUN_02604e3c(param_1,1);
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(ulong *)(param_1 + 0x180) = *(ulong *)(param_1 + 0x180) & 0xfffffffffffffff8;
    iVar3 = *param_2;
  }
  *(int *)(param_1 + 0x70) = iVar3;
  return;
}


