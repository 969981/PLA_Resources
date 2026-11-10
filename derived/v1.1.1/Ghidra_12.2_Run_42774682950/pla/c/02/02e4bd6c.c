/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4bd6c; name: FUN_02e4bd6c
 */


void FUN_02e4bd6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  char local_44 [4];
  char local_38 [4];
  char local_34 [4];
  
  if ((*(char *)(param_1 + 0x48) == '\0') || (*(char *)(param_1 + 0x60) == '\0')) {
    for (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x40); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x48)) {
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x36);
      if (*(ushort *)(lVar3 + 0x36) != 0) {
        lVar4 = 0;
        uVar5 = 0;
        do {
          if (param_1 - *(long *)(lVar3 + 0x28) != lVar4) {
            lVar1 = *(long *)(lVar3 + 0x28) + lVar4;
            local_34[0] = '\0';
            FUN_02e4bbd0(param_1,lVar1,local_34,local_38,local_44,auStack_48,auStack_4c);
            if (local_34[0] != '\0') {
              FUN_02e4be58(param_1,lVar1,(long)local_38[0],(long)local_44[0]);
            }
            uVar2 = (ulong)*(ushort *)(lVar3 + 0x36);
          }
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x88;
        } while (uVar5 < uVar2);
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return;
}


