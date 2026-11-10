/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f3164; name: FUN_029f3164
 */


void FUN_029f3164(long param_1,byte *param_2,undefined8 *param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
  **(undefined8 **)(param_1 + 0x18) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x50) + 0xe) = 0;
  lVar5 = *(long *)(param_1 + 0x30);
  lVar3 = *(long *)(lVar5 + 0x30);
  if (*(int *)(lVar3 + 0xc08) != 0) {
    lVar4 = 0;
    *(undefined4 *)(lVar3 + 0xc08) = 0;
    do {
      lVar1 = lVar3 + lVar4;
      lVar4 = lVar4 + 0x60;
      *(undefined2 *)(*(long *)(lVar1 + 8) + 8) = 0;
      *(undefined2 *)(*(long *)(lVar1 + 0x28) + 8) = 0;
      *(undefined2 *)(*(long *)(lVar1 + 0x48) + 8) = 0;
    } while (lVar4 != 0xc00);
    FUN_0299a884(*(undefined8 *)(lVar5 + 0x50));
    *(undefined8 *)(lVar5 + 0x70) =
         *(undefined8 *)
          (*(long *)(lVar5 + 0x50) + (ulong)*(uint *)(*(long *)(lVar5 + 0x50) + 0x408) * 0x20 + 8);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x48) + 0xd88) = 0;
  FUN_029f7b78(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1820),*(undefined8 *)(param_1 + 0x48),
               *param_3);
  local_58 = *(undefined8 *)(param_1 + 0x48);
  FUN_029f7504(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1800),auStack_60,&local_58);
  FUN_029ed534(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1540),auStack_50,auStack_48);
  bVar2 = **(byte **)(*(long *)(param_1 + 0x40) + 0x28);
  if ((bVar2 < 7) && ((1 << (ulong)(bVar2 & 0x1f) & 0x71U) != 0)) {
    FUN_029fbef4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1980),auStack_40,auStack_38);
    bVar2 = **(byte **)(*(long *)(param_1 + 0x40) + 0x28);
  }
  *param_2 = bVar2;
  return;
}


