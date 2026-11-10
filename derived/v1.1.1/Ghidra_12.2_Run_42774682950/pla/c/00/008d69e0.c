/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d69e0; name: FUN_008d69e0
 */


void FUN_008d69e0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  FUN_008d67a0(param_1,param_1 + 1,param_1 + 2);
  if (param_1 + 3 != param_2) {
    lVar3 = 0x18;
    puVar6 = param_1 + 3;
    puVar9 = param_1 + 2;
    do {
      puVar2 = puVar6;
      uVar4 = *puVar2;
      uVar7 = *puVar9;
      iVar5 = (int)((ulong)uVar4 >> 0x20);
      if ((int)((ulong)uVar7 >> 0x20) < iVar5) {
        lVar8 = lVar3;
        do {
          lVar1 = lVar8 + -8;
          *(undefined8 *)((long)param_1 + lVar8) = uVar7;
          if (lVar1 == 0) {
            puVar6 = param_1;
            goto LAB_008d6a20;
          }
          uVar7 = *(undefined8 *)((long)param_1 + lVar8 + -0x10);
          lVar8 = lVar1;
        } while ((int)((ulong)uVar7 >> 0x20) < iVar5);
        puVar6 = (undefined8 *)((long)param_1 + lVar1);
LAB_008d6a20:
        *puVar6 = uVar4;
      }
      lVar3 = lVar3 + 8;
      puVar6 = puVar2 + 1;
      puVar9 = puVar2;
    } while (puVar2 + 1 != param_2);
  }
  return;
}


