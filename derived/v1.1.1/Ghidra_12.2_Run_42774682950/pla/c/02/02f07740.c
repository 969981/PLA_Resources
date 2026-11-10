/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07740; name: FUN_02f07740
 */


void FUN_02f07740(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  char local_34 [4];
  
  if ((int)param_1[1] != 0) {
    puVar4 = (undefined4 *)*param_1;
    do {
      uVar1 = *puVar4;
      lVar3 = FUN_02f082e8(uVar1,local_34);
      if ((lVar3 != 0 && local_34[0] != '\0') &&
         (iVar2 = (**(code **)(**(long **)(lVar3 + 8) + 0x20))(), iVar2 == 0)) {
        *(undefined8 *)(lVar3 + 8) = 0;
        FUN_02f07cbc(uVar1);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 4));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((DAT_0440ab48 == 0) && (DAT_0440ab40 != 0)) {
    DAT_0440ab48 = 0;
    FUN_02f59e60(0);
    DAT_0440ab40 = 0;
    DAT_0440ab4c = 0;
  }
  return;
}


