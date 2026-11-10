/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00151ee0; name: FUN_00151ee0
 */


uint FUN_00151ee0(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_30;
  undefined4 local_28;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_1 + 0x20);
        puVar2 = &DAT_039c5c28;
        if ((int)plVar4[1] != 0x16) {
          lVar3 = *plVar4;
          puVar2 = &DAT_039c5c28;
          if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
            puVar2 = (undefined8 *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
          }
        }
      }
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    puVar2 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar2) {
      puVar2 = &DAT_039c5c28;
    }
  }
  local_28 = 2;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  local_30 = param_3;
  puVar2 = (undefined8 *)FUN_00172500(*puVar2,&local_30);
  uVar1 = puVar2[1];
  *puVar5 = *puVar2;
  puVar5[1] = uVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  return *(uint *)(lVar3 + 8) & 0xf;
}


