/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecaccc; name: FUN_02ecaccc
 */


undefined8 FUN_02ecaccc(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  puVar3 = (undefined4 *)FUN_02f59e30(0,(ulong)uVar1 * 0x18);
  uVar5 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)*param_1;
    if ((puVar6 != (undefined4 *)0x0) && (puVar6 != puVar3)) {
      if (uVar2 != 0) {
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 2) = 0;
        puVar6 = (undefined4 *)*param_1;
        *puVar3 = *puVar6;
        FUN_02ecada0(puVar3 + 2,puVar6 + 2);
        if (uVar2 != 1) {
          lVar9 = 0;
          lVar8 = (ulong)uVar2 - 1;
          do {
            puVar4 = (undefined8 *)((long)puVar3 + lVar9 + 0x20);
            *puVar4 = 0;
            *(undefined8 *)((long)puVar3 + lVar9 + 0x28) = 0;
            lVar7 = *param_1;
            *(undefined4 *)((long)puVar3 + lVar9 + 0x18) = *(undefined4 *)(lVar7 + lVar9 + 0x18);
            FUN_02ecada0(puVar4,lVar7 + lVar9 + 0x20);
            lVar8 = lVar8 + -1;
            lVar9 = lVar9 + 0x18;
          } while (lVar8 != 0);
        }
        puVar6 = (undefined4 *)*param_1;
      }
      FUN_02f59e60(0,puVar6);
    }
    uVar5 = 1;
    *param_1 = (long)puVar3;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar5;
}


