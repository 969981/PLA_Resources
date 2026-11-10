/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013db7f8; name: FUN_013db7f8
 */


void FUN_013db7f8(long param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  
  if (param_2 < *(uint *)(param_1 + 0x528)) {
    if (0x6d < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_013dd720();
    }
    puVar7 = (undefined2 *)(param_1 + (ulong)param_2 * 0xc);
    bVar2 = *(byte *)(puVar7 + 4);
    bVar3 = *(byte *)((long)puVar7 + 9);
    bVar4 = *(byte *)(puVar7 + 5);
    bVar5 = *(byte *)((long)puVar7 + 0xb);
    uVar6 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 2);
    *param_3 = *(undefined4 *)(param_1 + 0x52c);
    param_3[2] = uVar1;
    *(byte *)(param_3 + 3) = bVar2 & 1;
    *(byte *)((long)param_3 + 0xd) = bVar3 & 1;
    *(byte *)((long)param_3 + 0xe) = bVar4 & 1;
    *(undefined2 *)(param_3 + 1) = uVar6;
    *(byte *)((long)param_3 + 0xf) = bVar5 & 1;
  }
  return;
}


