/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f599d0; name: FUN_02f599d0
 */


undefined8 * FUN_02f599d0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined8 local_18;
  
  local_28 = 0;
  local_18 = 0;
  lVar1 = (long)(int)param_1 * 0x820;
  uVar3 = param_2 + 0x60U >> (*(ulong *)(&DAT_0442c128 + lVar1) & 0x3f);
  if ((*(long *)(&DAT_0442c120 + lVar1) - 1U & param_2 + 0x60U) != 0) {
    uVar3 = uVar3 + 1;
  }
  puVar2 = (undefined8 *)
           FUN_02f58f80(param_1,uVar3 * *(long *)(&DAT_0442c120 + lVar1),&local_18,&local_28);
  if (puVar2 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar2[9] = 0;
    puVar2[10] = 0;
    *puVar2 = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(int *)(puVar2 + 6) = (int)uVar3;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0xffffffff00000000;
    *(int *)((long)puVar2 + 0x3c) = (int)local_18;
    puVar4 = puVar2 + 0xc;
    puVar2[0xb] = local_28;
  }
  return puVar4;
}


