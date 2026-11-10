/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00865240; name: FUN_00865240
 */


void FUN_00865240(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_043780f0;
  *(undefined4 *)(param_1 + 2) = 30000;
  param_1[4] = (long)(param_1 + 8);
  param_1[5] = 0x100;
  param_1[7] = (long)(puVar2 + 0x68);
  param_1[3] = (long)(puVar2 + 0x10);
  lVar3 = 0;
  puVar1 = PTR_DAT_04378260 + 0x10;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x41) = 0;
    lVar3 = lVar3 + 4;
    *(undefined1 *)((long)plVar4 + 0x43) = 0;
    plVar4 = (long *)((long)param_1 + lVar3);
    *(undefined1 *)(plVar4 + 8) = 0;
  } while (lVar3 != 0x100);
  param_1[0x2d] = (long)(puVar2 + 0x68);
  lVar3 = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[0x29] = (long)(puVar2 + 0x10);
  param_1[0x2a] = (long)(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2b] = 0x100;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x171) = 0;
    *(undefined1 *)((long)plVar4 + 0x173) = 0;
    lVar3 = lVar3 + 4;
    plVar4 = (long *)((long)param_1 + lVar3);
    *(undefined1 *)(plVar4 + 0x2e) = 0;
  } while (lVar3 != 0x100);
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  puVar1 = PTR_DAT_04377498 + 0x68;
  param_1[0x4f] = (long)(PTR_DAT_04377498 + 0x10);
  param_1[0x53] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x50] = (long)(param_1 + 0x54);
  param_1[0x51] = 0x50;
  FUN_02cbbc50(param_1 + 0x4f);
  lVar3 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x41) = 0;
    lVar3 = lVar3 + 4;
    *(undefined1 *)((long)plVar4 + 0x43) = 0;
    plVar4 = (long *)((long)param_1 + lVar3);
    *(undefined1 *)(plVar4 + 8) = 0;
  } while (lVar3 != 0x100);
  lVar3 = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  plVar4 = param_1;
  do {
    *(undefined2 *)((long)plVar4 + 0x171) = 0;
    *(undefined1 *)((long)plVar4 + 0x173) = 0;
    lVar3 = lVar3 + 4;
    plVar4 = (long *)((long)param_1 + lVar3);
    *(undefined1 *)(plVar4 + 0x2e) = 0;
  } while (lVar3 != 0x100);
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  FUN_02cbbc50(param_1 + 0x4f);
  return;
}


