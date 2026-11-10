/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e610c; name: FUN_007e610c
 */


void FUN_007e610c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  FUN_007ec3f0();
  *param_1 = (long)(PTR_DAT_04377460 + 0x10);
  FUN_007e5b70(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x15) = 0;
  puVar1 = PTR_DAT_04377468 + 0x10;
  lVar2 = 0;
  param_1[0x16] = (long)(PTR_DAT_04377468 + 0x68);
  param_1[0x11] = 0;
  param_1[0x12] = (long)puVar1;
  param_1[0x13] = (long)(param_1 + 0x17);
  param_1[0x14] = 0x400;
  *(undefined1 *)(param_1 + 0x17) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0xb9) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)((long)plVar3 + 0xbb) = 0;
    plVar3 = (long *)((long)param_1 + lVar2);
    *(undefined1 *)(plVar3 + 0x17) = 0;
  } while (lVar2 != 0x400);
  lVar2 = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0xb9) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)((long)plVar3 + 0xbb) = 0;
    plVar3 = (long *)((long)param_1 + lVar2);
    *(undefined1 *)(plVar3 + 0x17) = 0;
  } while (lVar2 != 0x400);
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  FUN_007e5bd8(param_1 + 0xb);
  return;
}


