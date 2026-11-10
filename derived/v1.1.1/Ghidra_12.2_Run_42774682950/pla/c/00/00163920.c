/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00163920; name: FUN_00163920
 */


void FUN_00163920(long *param_1,long param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  uVar2 = *(uint *)(lVar6 + 0x10);
  lVar7 = (long)(int)uVar2;
  bVar1 = *(byte *)((long)param_1 + 0x3b);
  if (bVar1 == 0xff) {
    FUN_00163bb0(param_1,0xff,"upvalues");
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x163a4c);
    (*pcVar3)();
  }
  if (uVar2 == bVar1 || (int)uVar2 < (int)(uint)bVar1) {
    uVar4 = FUN_00161400(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar6 + 0x58),
                         (uint *)(lVar6 + 0x10),0x10,0xff,"upvalues");
    *(undefined8 *)(lVar6 + 0x58) = uVar4;
    if ((int)uVar2 < *(int *)(lVar6 + 0x10)) {
      lVar5 = lVar7 << 4;
      do {
        *(undefined8 *)(*(long *)(lVar6 + 0x58) + lVar5) = 0;
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar7 < *(int *)(lVar6 + 0x10));
    }
  }
  *(bool *)(*(long *)(lVar6 + 0x58) + (ulong)*(byte *)((long)param_1 + 0x3b) * 0x10 + 8) =
       *param_3 == 8;
  *(char *)(*(long *)(lVar6 + 0x58) + (ulong)*(byte *)((long)param_1 + 0x3b) * 0x10 + 9) =
       (char)param_3[2];
  *(long *)(*(long *)(lVar6 + 0x58) + (ulong)*(byte *)((long)param_1 + 0x3b) * 0x10) = param_2;
  if (((*(byte *)(lVar6 + 9) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 9) & 3) != 0)) {
    FUN_0015ca90(*(undefined8 *)(param_1[2] + 0x38),lVar6,param_2);
  }
  *(char *)((long)param_1 + 0x3b) = *(char *)((long)param_1 + 0x3b) + '\x01';
  return;
}


