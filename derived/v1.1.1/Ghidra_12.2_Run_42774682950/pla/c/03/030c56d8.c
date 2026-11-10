/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c56d8; name: FUN_030c56d8
 */


/* WARNING: Removing unreachable block (ram,0x030c57a8) */
/* WARNING: Removing unreachable block (ram,0x030c57b0) */

undefined8 * FUN_030c56d8(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int aiStack_a0 [32];
  
  lVar3 = (long)(int)param_3[1];
  aiStack_a0[param_4 & 0xff] = (int)param_3[1];
  lVar5 = *param_3;
  puVar1 = (undefined8 *)(lVar5 + lVar3 * 0x20);
  lVar4 = lVar3 + 1;
  *(int *)(param_3 + 1) = (int)lVar4;
  *puVar1 = &PTR_LAB_042b49e0;
  if (puVar1 + 4 != (undefined8 *)(lVar5 + lVar4 * 0x20)) {
    lVar4 = lVar4 * 0x20 + lVar3 * -0x20 + -0x20;
    puVar2 = puVar1 + 4;
    do {
      lVar4 = lVar4 + -0x20;
      *puVar2 = &PTR_LAB_042b49e0;
      puVar2 = puVar2 + 4;
    } while (lVar4 != 0);
  }
  *puVar1 = &PTR_LAB_042b49e0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 2) = 0x301;
  *(short *)((long)puVar1 + 0x12) =
       (short)((uint)(((int)(param_4 * 0x10000 + 0x10000) >> 0x10) * (int)(short)param_4) >> 1) +
       (short)param_4;
  *(char *)((long)puVar1 + 0x14) = (char)param_4;
  *(char *)((long)puVar1 + 0x15) = (char)param_4;
  *(undefined1 *)((long)puVar1 + 0x16) = 0;
  return puVar1;
}


