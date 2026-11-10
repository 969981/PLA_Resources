/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df138; name: FUN_001df138
 */


undefined8 FUN_001df138(long param_1,long *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char acStack_c0 [128];
  
  lVar4 = *param_2;
  puVar1 = (undefined4 *)FUN_001df080(param_2,*(undefined8 *)(lVar4 + 0x1100));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_002044c4(0x30);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar1 + 2) = 0;
      *puVar1 = 0;
      FUN_001e370c(puVar1 + 4,&LAB_001df7d4);
      FUN_001df0f0(param_2,acStack_c0);
      uVar5 = *(undefined8 *)(lVar4 + 0x1100);
      sVar2 = strlen(acStack_c0);
      lVar3 = FUN_001e0b00(uVar5,acStack_c0,sVar2,puVar1);
      if (lVar3 != 0) goto LAB_001df170;
      FUN_001df24c(puVar1);
    }
    uVar5 = 0x1b;
  }
  else {
LAB_001df170:
    FUN_001e3718(puVar1 + 4,*(undefined8 *)(puVar1 + 6),param_2,param_2 + 1);
    param_2[0xcc] = (long)puVar1;
    *(long *)(puVar1 + 2) = *(long *)(puVar1 + 2) + 1;
    lVar3 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar3 + 1;
    param_2[0xc] = lVar3;
    uVar5 = 0;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  if (*(long *)(lVar4 + 0xe8) != 0) {
    FUN_001f43f8(lVar4,5);
  }
  return uVar5;
}


