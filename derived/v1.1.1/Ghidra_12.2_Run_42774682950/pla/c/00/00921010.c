/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00921010; name: FUN_00921010
 */


void FUN_00921010(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_00920dc0(param_1,param_1 + 1,param_1 + 2);
  if (param_1 + 3 != param_2) {
    lVar2 = 0;
    puVar5 = param_1 + 3;
    puVar7 = param_1 + 2;
    do {
      puVar3 = puVar5;
      if (*(int *)((long)puVar7 + 4) < *(int *)((long)puVar3 + 4)) {
        uVar4 = *puVar3;
        lVar1 = lVar2;
        do {
          lVar6 = lVar1;
          *(undefined8 *)((long)param_1 + lVar6 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x10);
          if (lVar6 == -0x10) {
            puVar5 = param_1;
            goto LAB_00921050;
          }
          lVar1 = lVar6 + -8;
        } while (*(int *)((long)param_1 + lVar6 + 0xc) < (int)((ulong)uVar4 >> 0x20));
        puVar5 = (undefined8 *)((long)param_1 + lVar6 + 0x10);
LAB_00921050:
        *puVar5 = uVar4;
      }
      lVar2 = lVar2 + 8;
      puVar5 = puVar3 + 1;
      puVar7 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}


