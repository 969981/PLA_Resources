/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00152fd0; name: FUN_00152fd0
 */


int FUN_00152fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_58 [40];
  
  puVar1 = &DAT_038f8f88;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  FUN_00179130(param_1,auStack_58,param_2,param_3);
  iVar3 = FUN_0015b970(param_1,auStack_58,puVar1,param_5);
  if ((iVar3 == 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + -0x10), *(char *)(lVar7 + 10) != '\0')) {
    puVar4 = (undefined8 *)FUN_00172330(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),2);
    puVar5 = (undefined8 *)**(undefined8 **)(lVar7 + 0x20);
    uVar2 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar2;
    plVar6 = (long *)**(long **)(lVar7 + 0x20);
    if (((*(byte *)(plVar6 + 1) >> 6 & 1) != 0) && (plVar6 == *(long **)(lVar7 + 0x20) + 2)) {
      FUN_0015cc00(param_1);
    }
  }
  return iVar3;
}


