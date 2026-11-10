/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00151930; name: FUN_00151930
 */


uint FUN_00151930(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
        iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x48);
        goto joined_r0x00151970;
      }
      plVar5 = (long *)**(long **)(param_1 + 0x20);
      puVar6 = &DAT_039c5c28;
      if ((int)plVar5[1] == 0x16) goto LAB_001519b4;
      lVar3 = *plVar5;
      puVar6 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar3 + 10)) {
        puVar6 = (undefined8 *)(lVar3 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      iVar2 = *(int *)(puVar6 + 1);
    }
    else {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
LAB_001519b4:
      iVar2 = *(int *)(puVar6 + 1);
    }
    if (iVar2 != 0x45) goto LAB_00151a30;
LAB_001519c0:
    puVar4 = (undefined8 *)FUN_00172500(*puVar6,*(long *)(param_1 + 0x10) + -0x10);
    if (*(int *)(puVar4 + 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      uVar1 = puVar4[1];
      *(undefined8 *)(lVar3 + -0x10) = *puVar4;
      *(undefined8 *)(lVar3 + -8) = uVar1;
      goto LAB_00151a4c;
    }
  }
  else {
    puVar6 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar6) {
      puVar6 = &DAT_039c5c28;
    }
    iVar2 = *(int *)(puVar6 + 1);
joined_r0x00151970:
    if (iVar2 == 0x45) goto LAB_001519c0;
LAB_00151a30:
    puVar4 = (undefined8 *)0x0;
  }
  lVar3 = *(long *)(param_1 + 0x10) + -0x10;
  FUN_001754a0(param_1,puVar6,lVar3,lVar3,puVar4);
LAB_00151a4c:
  return *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
}


