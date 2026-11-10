/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e51e0; name: FUN_006e51e0
 */


void FUN_006e51e0(long *param_1,long param_2)

{
  ulong *puVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  
  param_1[2] = 0;
  puVar3 = PTR_DAT_043761c8;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
                    /* try { // try from 006e5214 to 006e521b has its CatchHandler @ 006e52b4 */
  FUN_006e62a8(param_1 + 2,param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  uVar6 = *(ulong *)(param_2 + 8);
  puVar1 = (ulong *)(param_1 + 1);
  if ((uVar6 & 1) != 0) {
    if ((*puVar1 & 1) == 0) {
      lVar4 = FUN_0030c8c0(puVar1);
    }
    else {
      lVar4 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
                    /* try { // try from 006e5244 to 006e52af has its CatchHandler @ 006e52cc */
    FUN_0030cefc(lVar4,(uVar6 & 0xfffffffffffffffe) + 8);
  }
  param_1[5] = (long)PTR_DAT_043730c0;
  bVar2 = **(byte **)(param_2 + 0x28);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_006e5288;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x28) + 8) == 0) goto LAB_006e5288;
  puVar5 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
  if ((*puVar1 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  FUN_0029175c(param_1 + 5,puVar5);
LAB_006e5288:
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  return;
}


