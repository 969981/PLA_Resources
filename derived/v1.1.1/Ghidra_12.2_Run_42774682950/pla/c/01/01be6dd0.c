/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01be6dd0; name: FUN_01be6dd0
 */


undefined8 * FUN_01be6dd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1 != param_2) {
    do {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      plVar6 = (long *)param_1[3];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      plVar5 = (long *)param_3[3];
      param_3[3] = plVar6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      param_3[4] = param_1[4];
      uVar2 = param_1[5];
      uVar3 = param_1[6];
      uVar4 = param_1[8];
      param_3[7] = param_1[7];
      param_3[8] = uVar4;
      param_3[5] = uVar2;
      param_3[6] = uVar3;
      uVar2 = param_1[9];
      uVar3 = param_1[10];
      puVar1 = param_1 + 0xb;
      uVar4 = param_1[0xc];
      param_1 = param_1 + 0xd;
      param_3[0xb] = *puVar1;
      param_3[0xc] = uVar4;
      param_3[9] = uVar2;
      param_3[10] = uVar3;
      param_3 = param_3 + 0xd;
    } while (param_1 != param_2);
  }
  return param_3;
}


