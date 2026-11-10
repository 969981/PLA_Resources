/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085914c; name: FUN_0085914c
 */


void FUN_0085914c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  FUN_007f25dc();
  puVar1 = PTR_DAT_043780e8;
  *(undefined4 *)(param_1 + 5) = 0;
  puVar2 = PTR_DAT_043780f0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[6] = (long)(puVar2 + 0x68);
  lVar4 = 0;
  param_1[2] = (long)(puVar2 + 0x10);
  param_1[3] = (long)(param_1 + 7);
  param_1[4] = 0x100;
  *(undefined1 *)(param_1 + 7) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x39) = 0;
    lVar4 = lVar4 + 4;
    *(undefined1 *)((long)plVar3 + 0x3b) = 0;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 7) = 0;
  } while (lVar4 != 0x100);
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  lVar4 = 0;
  param_1[0x2d] = (long)(puVar2 + 0x68);
  param_1[0x28] = 0x20;
  param_1[0x29] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2a] = (long)(param_1 + 0x2e);
  param_1[0x2b] = 0x100;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x171) = 0;
    *(undefined1 *)((long)plVar3 + 0x173) = 0;
    lVar4 = lVar4 + 4;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 0x2e) = 0;
  } while (lVar4 != 0x100);
  lVar4 = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x39) = 0;
    lVar4 = lVar4 + 4;
    *(undefined1 *)((long)plVar3 + 0x3b) = 0;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 7) = 0;
  } while (lVar4 != 0x100);
  lVar4 = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x171) = 0;
    *(undefined1 *)((long)plVar3 + 0x173) = 0;
    lVar4 = lVar4 + 4;
    plVar3 = (long *)((long)param_1 + lVar4);
    *(undefined1 *)(plVar3 + 0x2e) = 0;
  } while (lVar4 != 0x100);
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  return;
}


