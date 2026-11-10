/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085eab0; name: FUN_0085eab0
 */


void FUN_0085eab0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 auStack_30 [16];
  
  FUN_007f2058();
  puVar2 = PTR_DAT_04378160;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  puVar1 = PTR_DAT_043780f0;
  *param_1 = (long)(puVar2 + 0x10);
  plVar4 = param_1 + 0x17;
  *plVar4 = (long)(puVar1 + 0x10);
  param_1[0x1b] = (long)(puVar1 + 0x68);
  param_1[0x18] = (long)(param_1 + 0x1c);
  param_1[0x19] = 0x100;
  uVar3 = FUN_007ec9d0(plVar4,&DAT_03996322,1);
  FUN_02cbbdc4(auStack_30,plVar4,&DAT_03996322,uVar3,1);
  memset(param_1 + 0x3d,0,0x200);
  param_1[4] = (long)(param_1 + 0x3d);
  return;
}


