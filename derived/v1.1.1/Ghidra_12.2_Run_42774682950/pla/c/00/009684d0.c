/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009684d0; name: FUN_009684d0
 */


void FUN_009684d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  FUN_009680f0(param_1,(long)param_1 + 0xc,param_1 + 3);
  if ((undefined8 *)((long)param_1 + 0x24) != param_2) {
    lVar3 = 0;
    puVar6 = (undefined8 *)((long)param_1 + 0x24);
    puVar8 = param_1 + 3;
    do {
      puVar4 = puVar6;
      uVar1 = *(uint *)(puVar4 + 1);
      if (uVar1 < *(uint *)(puVar8 + 1)) {
        uVar5 = *puVar4;
        lVar2 = lVar3;
        do {
          lVar7 = lVar2;
          *(undefined8 *)((long)param_1 + lVar7 + 0x24) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x18);
          *(undefined4 *)((long)param_1 + lVar7 + 0x2c) =
               *(undefined4 *)((long)param_1 + lVar7 + 0x20);
          if (lVar7 == -0x18) {
            puVar6 = param_1;
            goto LAB_00968510;
          }
          lVar2 = lVar7 + -0xc;
        } while (uVar1 < *(uint *)((long)param_1 + lVar7 + 0x14));
        puVar6 = (undefined8 *)((long)param_1 + lVar7 + 0x18);
LAB_00968510:
        *puVar6 = uVar5;
        *(uint *)(puVar6 + 1) = uVar1;
      }
      lVar3 = lVar3 + 0xc;
      puVar6 = (undefined8 *)((long)puVar4 + 0xc);
      puVar8 = puVar4;
    } while ((undefined8 *)((long)puVar4 + 0xc) != param_2);
  }
  return;
}


