/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f6ad8; name: FUN_030f6ad8
 */


void FUN_030f6ad8(long param_1,undefined8 param_2)

{
  long lVar1;
  ushort *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  ushort *local_50;
  int local_44;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x18) + lVar3 * 8);
      FUN_032bf564(*(long *)(lVar4 + 0x7c0) + 0x18);
      lVar1 = lVar4 + 0x6c0;
      FUN_032bf99c(auStack_58,lVar1);
      puVar2 = local_50;
      while (puVar2 != (ushort *)0x0) {
        while( true ) {
          FUN_032c0b20(param_2,puVar2);
          local_44 = local_44 + -1;
          if (local_44 < 1) break;
          puVar2 = (ushort *)((long)local_50 + (ulong)*puVar2);
          local_50 = puVar2;
          if (puVar2 == (ushort *)0x0) goto LAB_030f6b0c;
        }
        puVar2 = (ushort *)FUN_032bf9c8(auStack_58,1);
      }
LAB_030f6b0c:
      FUN_032be7c0(lVar1,*(undefined8 *)(lVar4 + 0x10));
      FUN_032bf508(*(long *)(lVar4 + 0x7c0) + 0x18,*(undefined8 *)(lVar4 + 0x10),lVar1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}


