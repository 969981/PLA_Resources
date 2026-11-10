/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb66f4; name: FUN_02eb66f4
 */


undefined8 FUN_02eb66f4(long param_1,long *param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  
  *param_2 = *param_2 + 4;
  uVar4 = FUN_02eb6810(param_2,param_3,param_1);
  if ((int)uVar4 == 1) {
    puVar6 = (undefined4 *)*param_2;
    uVar1 = *puVar6;
    *param_2 = (long)(puVar6 + 1);
    uVar3 = *(undefined1 *)(puVar6 + 1);
    *param_2 = (long)puVar6 + 5;
    uVar4 = FUN_02eb692c(param_1,uVar1,uVar3);
    if ((int)uVar4 == 1) {
      uVar2 = *(uint *)*param_2;
      uVar7 = (ulong)uVar2;
      *param_2 = (long)((uint *)*param_2 + 1);
      if (uVar2 != 0) {
        lVar5 = FUN_02f59e30(0,uVar7 * 0x38);
        *(long *)(param_1 + 0x18) = lVar5;
        if (lVar5 == 0) {
          return 0x34;
        }
        *(uint *)(param_1 + 0x24) = uVar2;
        do {
          puVar6 = (undefined4 *)*param_2;
          uVar1 = *puVar6;
          *param_2 = (long)(puVar6 + 1);
          uVar2 = puVar6[1];
          *param_2 = (long)(puVar6 + 2);
          uVar4 = FUN_02eb69d8(param_1,uVar1,puVar6 + 2,(ulong)uVar2);
          if ((int)uVar4 != 1) {
            return uVar4;
          }
          lVar5 = (ulong)uVar2 * 0xc;
          *param_2 = *param_2 + lVar5;
          uVar2 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar2;
          *param_3 = *param_3 - (int)lVar5;
        } while (uVar2 != 0);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


