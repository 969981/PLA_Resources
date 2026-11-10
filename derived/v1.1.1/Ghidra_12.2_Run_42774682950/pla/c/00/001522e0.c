/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001522e0; name: FUN_001522e0
 */


void FUN_001522e0(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  lVar2 = FUN_0016d990(param_1,param_3);
  if ((int)param_2[1] == 0x45) {
    puVar3 = (undefined8 *)FUN_00172420(*param_2,lVar2);
    if (*(int *)(puVar3 + 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      if ((((*(byte *)(lVar2 + -8) >> 6 & 1) != 0) && ((*(byte *)(*param_2 + 9) >> 2 & 1) != 0)) &&
         ((*(byte *)(*(long *)(lVar2 + -0x10) + 9) & 3) != 0)) {
        FUN_0015cbe0(param_1);
        lVar2 = *(long *)(param_1 + 0x10);
      }
      uVar1 = *(undefined8 *)(lVar2 + -8);
      *puVar3 = *(undefined8 *)(lVar2 + -0x10);
      puVar3[1] = uVar1;
      lVar2 = -1;
      goto LAB_001523b4;
    }
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  plVar5 = (long *)(param_1 + 0x10);
  plVar4 = (long *)*plVar5;
  *plVar4 = lVar2;
  *(uint *)(plVar4 + 1) = *(byte *)(lVar2 + 8) | 0x40;
  lVar2 = *plVar5;
  *plVar5 = lVar2 + 0x10;
  FUN_001755e0(param_1,param_2,lVar2,lVar2 + -0x10,puVar3);
  lVar2 = -2;
LAB_001523b4:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar2 * 0x10;
  return;
}


