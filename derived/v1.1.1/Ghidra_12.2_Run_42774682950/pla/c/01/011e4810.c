/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e4810; name: FUN_011e4810
 */


void FUN_011e4810(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 local_34;
  
  FUN_011e4580(param_1,param_1 + 1,param_1 + 2);
  if (param_1 + 3 != param_2) {
    lVar6 = 0;
    puVar3 = param_1 + 3;
    puVar5 = param_1 + 2;
    do {
      puVar4 = puVar3;
      uVar2 = FUN_011e4478(puVar4,puVar5);
      if ((uVar2 & 1) != 0) {
        local_34 = *puVar4;
        lVar1 = lVar6;
        do {
          lVar7 = lVar1;
          *(undefined4 *)((long)param_1 + lVar7 + 0xc) = *(undefined4 *)((long)param_1 + lVar7 + 8);
          if (lVar7 == -8) {
            puVar3 = param_1;
            goto LAB_011e4854;
          }
          uVar2 = FUN_011e4478(&local_34,(long)param_1 + lVar7 + 4);
          lVar1 = lVar7 + -4;
        } while ((uVar2 & 1) != 0);
        puVar3 = (undefined4 *)((long)param_1 + lVar7 + 8);
LAB_011e4854:
        *puVar3 = local_34;
      }
      lVar6 = lVar6 + 4;
      puVar3 = puVar4 + 1;
      puVar5 = puVar4;
    } while (puVar4 + 1 != param_2);
  }
  return;
}


