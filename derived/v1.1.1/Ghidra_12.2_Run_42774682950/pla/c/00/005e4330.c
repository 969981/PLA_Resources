/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e4330; name: FUN_005e4330
 */


void FUN_005e4330(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_0053ee00(PTR_PTR_04375108);
  if ((*(int *)(puVar1 + 1) != 1) || (puVar4 = (undefined8 *)*puVar1, puVar4 == (undefined8 *)0x0))
  {
    puVar4 = (undefined8 *)FUN_0053ee00(PTR_DAT_04375110,param_3);
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = puVar4;
  }
  sVar2 = strlen(param_2);
  if (0x7f < sVar2) {
    sVar2 = 0x80;
  }
  *puVar4 = param_2;
  puVar4[1] = sVar2;
  uVar3 = FUN_00542580(puVar1,PTR_PTR_04375108,param_3,&local_38);
  FUN_002f2f40(param_1,uVar3,local_38);
  return;
}


