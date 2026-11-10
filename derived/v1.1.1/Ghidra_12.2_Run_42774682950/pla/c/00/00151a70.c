/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00151a70; name: FUN_00151a70
 */


uint FUN_00151a70(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_1 + 0x20);
        puVar4 = &DAT_039c5c28;
        if ((int)plVar5[1] != 0x16) {
          lVar2 = *plVar5;
          puVar4 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar2 + 10)) {
            puVar4 = (undefined8 *)(lVar2 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar4 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar4) {
      puVar4 = &DAT_039c5c28;
    }
  }
  lVar2 = FUN_0016d990(param_1,param_3);
  if (*(int *)(puVar4 + 1) == 0x45) {
    puVar3 = (undefined8 *)FUN_00172420(*puVar4,lVar2);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0x10);
      uVar1 = puVar3[1];
      *puVar4 = *puVar3;
      puVar4[1] = uVar1;
      lVar2 = *(long *)(param_1 + 0x10) + 0x10;
      *(long *)(param_1 + 0x10) = lVar2;
      goto LAB_00151b68;
    }
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  *plVar5 = lVar2;
  *(uint *)(plVar5 + 1) = *(byte *)(lVar2 + 8) | 0x40;
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2 + 0x10;
  FUN_001754a0(param_1,puVar4,lVar2,lVar2,puVar3);
  lVar2 = *(long *)(param_1 + 0x10);
LAB_00151b68:
  return *(uint *)(lVar2 + -8) & 0xf;
}


