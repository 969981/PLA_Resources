/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00151860; name: FUN_00151860
 */


uint FUN_00151860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar2 = (undefined8 *)FUN_00172330(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),2);
  lVar3 = FUN_0016d990(param_1,param_2);
  if (*(int *)(puVar2 + 1) == 0x45) {
    puVar4 = (undefined8 *)FUN_00172420(*puVar2,lVar3);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      uVar1 = puVar4[1];
      *puVar2 = *puVar4;
      puVar2[1] = uVar1;
      lVar3 = *(long *)(param_1 + 0x10) + 0x10;
      *(long *)(param_1 + 0x10) = lVar3;
      goto LAB_00151914;
    }
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  *plVar5 = lVar3;
  *(uint *)(plVar5 + 1) = *(byte *)(lVar3 + 8) | 0x40;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  FUN_001754a0(param_1,puVar2,lVar3,lVar3,puVar4);
  lVar3 = *(long *)(param_1 + 0x10);
LAB_00151914:
  return *(uint *)(lVar3 + -8) & 0xf;
}


