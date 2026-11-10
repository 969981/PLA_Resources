/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a1eac; name: FUN_032a1eac
 */


void FUN_032a1eac(long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x1e0) - param_2;
  }
  lVar5 = *(long *)(param_1 + 0x1a0);
  iVar3 = *(int *)(param_1 + 0x1b0);
  *(undefined1 *)(param_4 + 0x308) = 1;
  *(int *)(param_4 + 0x304) = param_3;
  uVar2 = *(uint *)(param_1 + 0x118);
  *(uint *)(param_4 + 0x300) = uVar2;
  if (0 < (int)uVar2) {
    uVar4 = 0;
    puVar6 = (undefined8 *)(param_4 + 0xc);
    do {
      *(long *)((long)puVar6 + -0xc) =
           lVar5 + (long)iVar3 * (long)param_2 + (long)*(int *)(param_1 + 0x11c + uVar4 * 4);
      lVar1 = uVar4 * 8;
      uVar4 = uVar4 + 1;
      *(undefined4 *)((long)puVar6 + -4) = *(undefined4 *)(param_1 + 0x1b0);
      *puVar6 = *(undefined8 *)(param_1 + 0x11c + lVar1 + -0x104);
      puVar6 = puVar6 + 3;
    } while (uVar2 != uVar4);
  }
  return;
}


