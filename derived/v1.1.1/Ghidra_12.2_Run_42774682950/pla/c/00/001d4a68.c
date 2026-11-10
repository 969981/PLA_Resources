/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d4a68; name: FUN_001d4a68
 */


void FUN_001d4a68(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_043726a8;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0xffffffff;
  plVar3 = (long *)FUN_032cf5b0(0x38);
  puVar2 = PTR_DAT_043726b0;
  plVar3[6] = 0;
  plVar3[2] = 1;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0xffffffff;
  lVar4 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar4 != 0) {
    FUN_032d647c();
    plVar3 = (long *)param_1[3];
  }
  lVar4 = *(long *)(param_2 + 0x18);
  FUN_001d5bd4(plVar3 + 3,lVar4 + 0x18);
  uVar1 = *(undefined4 *)(lVar4 + 0x34);
  *(undefined8 *)((long)plVar3 + 0x2c) = *(undefined8 *)(lVar4 + 0x2c);
  *(undefined4 *)((long)plVar3 + 0x34) = uVar1;
  return;
}


