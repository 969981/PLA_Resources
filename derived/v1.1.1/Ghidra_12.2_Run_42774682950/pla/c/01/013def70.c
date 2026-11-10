/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013def70; name: FUN_013def70
 */


void FUN_013def70(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  FUN_013deb90(param_1,(long)param_1 + 0xc,param_1 + 3);
  if ((undefined8 *)((long)param_1 + 0x24) != param_2) {
    lVar4 = 0;
    puVar6 = (undefined8 *)((long)param_1 + 0x24);
    puVar8 = param_1 + 3;
    do {
      puVar3 = puVar6;
      uVar1 = *(uint *)(puVar3 + 1);
      if (uVar1 < *(uint *)(puVar8 + 1)) {
        uVar5 = *puVar3;
        lVar2 = lVar4;
        do {
          lVar7 = lVar2;
          *(undefined8 *)((long)param_1 + lVar7 + 0x24) =
               *(undefined8 *)((long)param_1 + lVar7 + 0x18);
          *(undefined4 *)((long)param_1 + lVar7 + 0x2c) =
               *(undefined4 *)((long)param_1 + lVar7 + 0x20);
          if (lVar7 == -0x18) {
            puVar6 = param_1;
            goto LAB_013defb0;
          }
          lVar2 = lVar7 + -0xc;
        } while (uVar1 < *(uint *)((long)param_1 + lVar7 + 0x14));
        puVar6 = (undefined8 *)((long)param_1 + lVar7 + 0x18);
LAB_013defb0:
        *puVar6 = uVar5;
        *(uint *)(puVar6 + 1) = uVar1;
      }
      lVar4 = lVar4 + 0xc;
      puVar6 = (undefined8 *)((long)puVar3 + 0xc);
      puVar8 = puVar3;
    } while ((undefined8 *)((long)puVar3 + 0xc) != param_2);
  }
  return;
}


