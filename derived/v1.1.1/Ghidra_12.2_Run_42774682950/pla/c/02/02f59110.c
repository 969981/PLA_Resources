/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59110; name: FUN_02f59110
 */


undefined8 * FUN_02f59110(ulong param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar2 = FUN_02f59240(param_1,param_3);
  local_60 = 0;
  uStack_58 = 0;
  puVar3 = (undefined8 *)
           FUN_02f58f80(param_1 & 0xffffffff,
                        *(long *)(&DAT_0442c138 + (long)(int)param_1 * 0x820) * uVar2,&uStack_58,
                        &local_60);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[5] = 0x100000000;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[8] = 0;
    puVar3[4] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[7] = 0;
    *(int *)(puVar3 + 6) = (int)param_3;
    *(int *)((long)puVar3 + 0x34) = (int)uVar2;
    *(int *)((long)puVar3 + 0x3c) = (int)uStack_58;
    puVar3[0xb] = local_60;
    *(int *)(puVar3 + 7) = (int)uVar2;
    if (param_3 <= uVar2 && uVar2 - param_3 != 0) {
      lVar4 = *(long *)(param_2 + 0x8f8);
      if (lVar4 != 0) {
        lVar5 = *(long *)(param_2 + 0x8e8);
        uVar1 = lVar5 - *(long *)(param_2 + 0x8f0);
        if (uVar1 != 0) {
          *(undefined4 *)(lVar5 + 0x2c) = 2;
          uVar6 = *(ulong *)(&DAT_0442c140 + (long)(int)param_1 * 0x820);
          *(undefined4 *)(lVar5 + 0x3c) = 0;
          *(int *)(lVar5 + 0x34) = (int)(uVar1 >> (uVar6 & 0x3f));
        }
        *(int *)(lVar5 + 0x30) = (int)lVar4;
        FUN_02f58420(param_1 & 0xffffffff,param_2,*(undefined8 *)(param_2 + 0x8e8));
      }
      lVar4 = *(long *)(&DAT_0442c138 + (long)(int)param_1 * 0x820);
      *(undefined8 **)(param_2 + 0x8f0) = puVar3;
      *(ulong *)(param_2 + 0x8f8) = uVar2 - param_3;
      *(undefined8 **)(param_2 + 0x8e8) = (undefined8 *)((long)puVar3 + lVar4 * param_3);
    }
  }
  return puVar3;
}


