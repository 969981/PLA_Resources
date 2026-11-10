/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba7000; name: FUN_01ba7000
 */


void FUN_01ba7000(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  
  FUN_01ba6d30(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar3 = 0;
    puVar6 = param_1 + 6;
    puVar8 = param_1 + 4;
    do {
      puVar4 = puVar6;
      fVar9 = *(float *)(puVar4 + 1);
      if (fVar9 < *(float *)(puVar8 + 1)) {
        uVar5 = *puVar4;
        uVar1 = *(undefined4 *)((long)puVar4 + 0xc);
        lVar2 = lVar3;
        do {
          lVar7 = lVar2;
          *(undefined8 *)((long)param_1 + lVar7 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x20);
          *(undefined8 *)((long)param_1 + lVar7 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x28);
          if (lVar7 == -0x20) {
            puVar6 = param_1;
            goto LAB_01ba7040;
          }
          lVar2 = lVar7 + -0x10;
        } while (fVar9 < *(float *)((long)param_1 + lVar7 + 0x18));
        puVar6 = (undefined8 *)((long)param_1 + lVar7 + 0x20);
LAB_01ba7040:
        *puVar6 = uVar5;
        *(float *)(puVar6 + 1) = fVar9;
        *(undefined4 *)((long)puVar6 + 0xc) = uVar1;
      }
      lVar3 = lVar3 + 0x10;
      puVar6 = puVar4 + 2;
      puVar8 = puVar4;
    } while (puVar4 + 2 != param_2);
  }
  return;
}


