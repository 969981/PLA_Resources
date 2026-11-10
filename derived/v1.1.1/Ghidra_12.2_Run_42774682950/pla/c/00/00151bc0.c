/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00151bc0; name: FUN_00151bc0
 */


uint FUN_00151bc0(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
        iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x48);
        goto joined_r0x00151c08;
      }
      plVar7 = (long *)**(long **)(param_1 + 0x20);
      puVar5 = &DAT_039c5c28;
      if ((int)plVar7[1] == 0x16) goto LAB_00151c4c;
      lVar3 = *plVar7;
      puVar5 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
        puVar5 = (undefined8 *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      iVar2 = *(int *)(puVar5 + 1);
    }
    else {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
LAB_00151c4c:
      iVar2 = *(int *)(puVar5 + 1);
    }
    if (iVar2 != 0x45) goto LAB_00151cd0;
LAB_00151c58:
    puVar4 = (undefined8 *)FUN_00172330(*puVar5,param_3);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x10);
      uVar1 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar1;
      lVar3 = *(long *)(param_1 + 0x10) + 0x10;
      *(long *)(param_1 + 0x10) = lVar3;
      goto LAB_00151d04;
    }
  }
  else {
    puVar5 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar5) {
      puVar5 = &DAT_039c5c28;
    }
    iVar2 = *(int *)(puVar5 + 1);
joined_r0x00151c08:
    if (iVar2 == 0x45) goto LAB_00151c58;
LAB_00151cd0:
    puVar4 = (undefined8 *)0x0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  *puVar6 = param_3;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_001754a0(param_1,puVar5,lVar3,lVar3,puVar4);
  lVar3 = *(long *)(param_1 + 0x10);
LAB_00151d04:
  return *(uint *)(lVar3 + -8) & 0xf;
}


