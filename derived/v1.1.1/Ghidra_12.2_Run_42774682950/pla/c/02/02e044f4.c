/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e044f4; name: FUN_02e044f4
 */


void FUN_02e044f4(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((int)param_1[7] != 0)) {
    lVar2 = 0;
    uVar3 = 1;
    while( true ) {
      lVar1 = lVar1 + lVar2;
      *(undefined1 *)(lVar1 + 0x44) = 0;
      *(undefined1 *)(lVar1 + 0x54) = 0;
      *(undefined1 *)(lVar1 + 100) = 0;
      if (*(char *)((long)param_1 + 0x4e) != '\0') {
        FUN_02e072d8(lVar1);
      }
      FUN_02e072d8(lVar1 + 0x18);
      if (*(void **)(lVar1 + 0x68) != (void *)0x0) {
        memset(*(void **)(lVar1 + 0x68),0,(ulong)((*(uint *)(param_1 + 8) & 0x7ffffffe) * 2 + 4));
      }
      if (*(uint *)(param_1 + 7) <= uVar3) break;
      lVar1 = *param_1;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x78;
    }
  }
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)((long)param_1 + 0x4c) = 0x101;
  return;
}


