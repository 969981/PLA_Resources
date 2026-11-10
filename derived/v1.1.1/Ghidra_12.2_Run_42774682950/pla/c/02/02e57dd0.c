/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e57dd0; name: FUN_02e57dd0
 */


undefined8 FUN_02e57dd0(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN_02f59e30(9,(ulong)uVar1 * 0x28);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      if (uVar4 != 0) {
        lVar7 = 0;
        do {
          puVar2 = (undefined4 *)(lVar5 + lVar7);
          *puVar2 = 0;
          *(undefined8 *)(puVar2 + 2) = 0;
          puVar2[4] = 0;
          *(undefined8 *)(puVar2 + 6) = 0;
          *(undefined8 *)(puVar2 + 8) = 0;
          FUN_02e57eb8(puVar2,*param_1 + lVar7);
          lVar8 = *param_1;
          lVar3 = lVar8 + lVar7;
          if (*(long *)(lVar3 + 8) != 0) {
            FUN_02f59e60(9);
          }
          *(undefined8 *)(lVar3 + 8) = 0;
          *(undefined4 *)(lVar8 + lVar7) = 0;
          lVar7 = lVar7 + 0x28;
        } while ((ulong)uVar4 * 0x28 != lVar7);
        lVar7 = *param_1;
      }
      FUN_02f59e60(9,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar6;
}


