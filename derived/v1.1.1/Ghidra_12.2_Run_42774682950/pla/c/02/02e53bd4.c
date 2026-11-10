/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e53bd4; name: FUN_02e53bd4
 */


undefined8 FUN_02e53bd4(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar5 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar6 = (*DAT_0442d138)(9,(ulong)uVar1 * 0x38);
  uVar7 = 0;
  if (lVar6 != 0) {
    lVar8 = *param_1;
    if ((lVar8 != 0) && (lVar8 != lVar6)) {
      if (uVar5 != 0) {
        lVar8 = 0;
        do {
          puVar2 = (undefined8 *)(lVar6 + lVar8);
          puVar2[6] = 0;
          *puVar2 = 0xffffffffffffffff;
          puVar2[1] = 0xffffffffffffffff;
          puVar2[2] = 0;
          puVar2[3] = &PTR_LAB_042a5e38;
          puVar2[5] = 0;
          *(undefined2 *)((long)puVar2 + 0x24) = 1;
          puVar3 = (undefined8 *)(*param_1 + lVar8);
          uVar7 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar7;
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
          *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)((long)puVar3 + 0x14);
          FUN_02e44c8c(puVar2 + 5,puVar3 + 5);
          lVar4 = *param_1 + lVar8;
          if (*(long *)(lVar4 + 0x28) != 0) {
            *(undefined4 *)(lVar4 + 0x30) = 0;
            (*DAT_0442d158)(9);
            *(undefined8 *)(lVar4 + 0x28) = 0;
            *(undefined4 *)(lVar4 + 0x34) = 0;
          }
          lVar8 = lVar8 + 0x38;
        } while ((ulong)uVar5 * 0x38 != lVar8);
        lVar8 = *param_1;
      }
      FUN_02f59e60(9,lVar8);
    }
    uVar7 = 1;
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar7;
}


