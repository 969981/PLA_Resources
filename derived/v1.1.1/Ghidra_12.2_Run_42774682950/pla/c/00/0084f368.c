/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084f368; name: FUN_0084f368
 */


undefined8 FUN_0084f368(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    lVar2 = (**(code **)(*param_1 + 0x48))(param_1,iVar5);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x48))(param_1,iVar5);
      uVar3 = (uint)*(ushort *)(lVar2 + 0x1a);
      if (*(ushort *)(lVar2 + 0x1a) != 0) {
        uVar4 = *(uint *)(lVar2 + 0x14);
        do {
          uVar1 = 0;
          if (*(ushort *)(lVar2 + 0x10) <= uVar4) {
            uVar1 = (uint)*(ushort *)(lVar2 + 0x10);
          }
          if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - uVar1) * 0x5b8) == '\0') break;
          if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - uVar1) * 0x5b8 + 1) != '\0') {
            return 1;
          }
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 0x18) {
      return 0;
    }
  } while( true );
}


