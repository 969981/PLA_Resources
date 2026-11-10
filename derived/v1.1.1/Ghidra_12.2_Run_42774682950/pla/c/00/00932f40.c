/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00932f40; name: FUN_00932f40
 */


void FUN_00932f40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_00932b70(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar6 = 0;
    puVar4 = param_1 + 3;
    puVar5 = param_1 + 2;
    do {
      puVar3 = puVar4;
      local_60 = *puVar5;
      uStack_58 = *puVar3;
      uVar2 = (*(code *)*param_3)(param_3 + 4,&uStack_58,&local_60);
      if ((uVar2 & 1) != 0) {
        uVar7 = *puVar3;
        lVar1 = lVar6;
        do {
          lVar8 = lVar1;
          *(undefined8 *)((long)param_1 + lVar8 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x10);
          if (lVar8 == -0x10) {
            puVar4 = param_1;
            goto LAB_0093300c;
          }
          local_60 = *(undefined8 *)((long)param_1 + lVar8 + 8);
          uStack_58 = uVar7;
          uVar2 = (*(code *)*param_3)(param_3 + 4,&uStack_58,&local_60);
          lVar1 = lVar8 + -8;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar8 + 0x10);
LAB_0093300c:
        *puVar4 = uVar7;
      }
      lVar6 = lVar6 + 8;
      puVar4 = puVar3 + 1;
      puVar5 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}


