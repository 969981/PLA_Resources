/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008766cc; name: FUN_008766cc
 */


void FUN_008766cc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 auStack_30 [16];
  
  FUN_007ec3f0();
  puVar2 = PTR_DAT_04378440;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar1 = PTR_DAT_04377468;
  *param_1 = (long)(puVar2 + 0x10);
  plVar4 = param_1 + 0xc;
  *plVar4 = (long)(puVar1 + 0x10);
  param_1[0x10] = (long)(puVar1 + 0x68);
  param_1[0xd] = (long)(param_1 + 0x11);
  param_1[0xe] = 0x400;
  uVar3 = FUN_007ec9d0(plVar4,&DAT_03996322,1);
  FUN_007e6544(auStack_30,plVar4,&DAT_03996322,uVar3,1);
  *(undefined2 *)(param_1 + 0x92) = 0;
  FUN_007e3400(param_1 + 0x93);
  param_1[0x97] = 0;
  return;
}


