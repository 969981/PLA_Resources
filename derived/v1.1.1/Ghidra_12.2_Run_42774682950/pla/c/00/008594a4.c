/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008594a4; name: FUN_008594a4
 */


void FUN_008594a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_0086d518();
    if ((uVar1 & 1) != 0) {
      thunk_FUN_0086f028(*(undefined8 *)(param_1 + 0x20));
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      FUN_0086d2a0(lVar2);
      FUN_0081a800(lVar2);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0xc88);
  if (lVar2 == 0) goto LAB_00859524;
  if (*(int *)(lVar2 + 4) < 1) {
LAB_00859510:
    FUN_007eb6e8(lVar2);
    FUN_0081a800(lVar2);
  }
  else {
    FUN_007eb8b0(auStack_30,lVar2);
    lVar2 = *(long *)(param_1 + 0xc88);
    if (lVar2 != 0) goto LAB_00859510;
  }
  *(undefined8 *)(param_1 + 0xc88) = 0;
LAB_00859524:
  FUN_0085a220();
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}


