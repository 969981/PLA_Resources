/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e47498; name: FUN_02e47498
 */


long * FUN_02e47498(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x3500]) {
    if (puVar1[0x3502] != 0) goto LAB_02e477b0;
  }
  puVar1 = (undefined8 *)FUN_02f59e40(10,0x1a818,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    puVar1[0x3500] = 0;
    *(undefined4 *)(puVar1 + 0x3501) = 0;
    puVar1[0x3502] = 0;
    puVar1[0x1a8] = puVar1 + 0xd4;
    puVar1[0x27c] = puVar1 + 0x1a8;
    puVar1[0x350] = puVar1 + 0x27c;
    puVar1[0x424] = puVar1 + 0x350;
    puVar1[0x4f8] = puVar1 + 0x424;
    puVar1[0x5cc] = puVar1 + 0x4f8;
    puVar1[0x6a0] = puVar1 + 0x5cc;
    puVar1[0x774] = puVar1 + 0x6a0;
    puVar1[0x848] = puVar1 + 0x774;
    puVar1[0x91c] = puVar1 + 0x848;
    puVar1[0x9f0] = puVar1 + 0x91c;
    puVar1[0xac4] = puVar1 + 0x9f0;
    puVar1[0xb98] = puVar1 + 0xac4;
    puVar1[0xc6c] = puVar1 + 0xb98;
    puVar1[0xd40] = puVar1 + 0xc6c;
    puVar1[0xe14] = puVar1 + 0xd40;
    puVar1[0xee8] = puVar1 + 0xe14;
    puVar1[0xfbc] = puVar1 + 0xee8;
    *puVar1 = 0;
    puVar1[0xd4] = puVar1;
    puVar1[0x1238] = puVar1 + 0x1164;
    puVar1[0x1164] = puVar1 + 0x1090;
    puVar1[0x1090] = puVar1 + 0xfbc;
    puVar1[0x14b4] = puVar1 + 0x13e0;
    puVar1[0x130c] = puVar1 + 0x1238;
    puVar1[0x13e0] = puVar1 + 0x130c;
    puVar1[0x165c] = puVar1 + 0x1588;
    puVar1[0x1730] = puVar1 + 0x165c;
    puVar1[0x1588] = puVar1 + 0x14b4;
    puVar1[0x1804] = puVar1 + 0x1730;
    puVar1[0x18d8] = puVar1 + 0x1804;
    puVar1[0x19ac] = puVar1 + 0x18d8;
    puVar1[0x1a80] = puVar1 + 0x19ac;
    puVar1[0x1b54] = puVar1 + 0x1a80;
    puVar1[0x1c28] = puVar1 + 0x1b54;
    puVar1[0x1cfc] = puVar1 + 0x1c28;
    puVar1[0x1dd0] = puVar1 + 0x1cfc;
    puVar1[0x1ea4] = puVar1 + 0x1dd0;
    puVar1[0x1f78] = puVar1 + 0x1ea4;
    puVar1[0x204c] = puVar1 + 0x1f78;
    puVar1[0x2120] = puVar1 + 0x204c;
    puVar1[0x21f4] = puVar1 + 0x2120;
    puVar1[0x22c8] = puVar1 + 0x21f4;
    puVar1[0x239c] = puVar1 + 0x22c8;
    puVar1[0x2470] = puVar1 + 0x239c;
    puVar1[0x2544] = puVar1 + 0x2470;
    puVar1[0x2618] = puVar1 + 0x2544;
    puVar1[0x26ec] = puVar1 + 0x2618;
    puVar1[0x27c0] = puVar1 + 0x26ec;
    puVar1[0x2894] = puVar1 + 0x27c0;
    puVar1[0x2b10] = puVar1 + 0x2a3c;
    puVar1[0x2968] = puVar1 + 0x2894;
    puVar1[0x2a3c] = puVar1 + 0x2968;
    puVar1[0x2be4] = puVar1 + 0x2b10;
    puVar1[0x2cb8] = puVar1 + 0x2be4;
    puVar1[0x2d8c] = puVar1 + 0x2cb8;
    puVar1[0x2e60] = puVar1 + 0x2d8c;
    puVar1[0x2f34] = puVar1 + 0x2e60;
    puVar1[0x3008] = puVar1 + 0x2f34;
    puVar1[0x30dc] = puVar1 + 0x3008;
    puVar1[0x31b0] = puVar1 + 0x30dc;
    puVar1[0x3284] = puVar1 + 0x31b0;
    puVar1[0x3358] = puVar1 + 0x3284;
    puVar1[0x342c] = puVar1 + 0x3358;
    puVar1[0x3502] = puVar1 + 0x342c;
    *(undefined4 *)(puVar1 + 0x3501) = 0x40;
    if (*param_1 == 0) {
      *param_1 = (long)puVar1;
      puVar1[0x3500] = 0;
    }
    else {
      puVar1[0x3500] = *param_1;
      *param_1 = (long)puVar1;
    }
LAB_02e477b0:
    plVar2 = (long *)puVar1[0x3502];
    if (plVar2 != (long *)0x0) {
      if (*plVar2 == 0) {
        puVar1[0x3502] = 0;
      }
      else {
        puVar1[0x3502] = *plVar2;
      }
      *(int *)(puVar1 + 0x3501) = *(int *)(puVar1 + 0x3501) + -1;
    }
  }
  return plVar2;
}


