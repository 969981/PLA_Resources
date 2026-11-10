/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086bca8; name: FUN_0086bca8
 */


void FUN_0086bca8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  lVar6 = 0;
  param_1[8] = (long)(param_1 + 0xc);
  param_1[9] = 0x400;
  puVar4 = PTR_DAT_04377468;
  puVar1 = PTR_DAT_04377468 + 0x10;
  puVar2 = PTR_DAT_04377468 + 0x68;
  param_1[6] = 0;
  param_1[7] = (long)puVar1;
  puVar1 = PTR_DAT_043783a8;
  param_1[0xb] = (long)puVar2;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  plVar5 = param_1;
  do {
    *(undefined2 *)((long)plVar5 + 0x61) = 0;
    lVar6 = lVar6 + 4;
    *(undefined1 *)((long)plVar5 + 99) = 0;
    plVar5 = (long *)((long)param_1 + lVar6);
    *(undefined1 *)(plVar5 + 0xc) = 0;
  } while (lVar6 != 0x400);
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  puVar1 = PTR_DAT_04378110;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x8e] = (long)(param_1 + 0x92);
  param_1[0x91] = (long)(puVar1 + 0x68);
  param_1[0x8d] = (long)(puVar1 + 0x10);
  param_1[0x8f] = 0x200;
  lVar6 = 0;
  do {
    lVar3 = lVar6 + 3;
    *(undefined2 *)((long)param_1 + lVar6 + 0x490) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0x492) = 0;
    lVar6 = lVar3;
  } while (lVar3 != 0x201);
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  param_1[0xd7] = (long)(puVar4 + 0x68);
  lVar6 = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd3] = (long)(puVar4 + 0x10);
  param_1[0xd4] = (long)(param_1 + 0xd8);
  param_1[0xd5] = 0x400;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  plVar5 = param_1;
  do {
    *(undefined2 *)((long)plVar5 + 0x6c1) = 0;
    *(undefined1 *)((long)plVar5 + 0x6c3) = 0;
    lVar6 = lVar6 + 4;
    plVar5 = (long *)((long)param_1 + lVar6);
    *(undefined1 *)(plVar5 + 0xd8) = 0;
  } while (lVar6 != 0x400);
  *(undefined8 *)((long)param_1 + 0x6ac) = 0;
  *(undefined2 *)(param_1 + 0x159) = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  *(undefined2 *)(param_1 + 0x160) = 0;
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578((long)param_1 + 0xb04,local_28);
  return;
}


