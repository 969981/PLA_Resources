/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4b7b8; name: FUN_02f4b7b8
 */


int FUN_02f4b7b8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  
  iVar1 = FUN_02f3a1e8();
  if (iVar1 == 1) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x108);
    if (*(uint *)(param_1 + 0x108) != 0) {
      uVar4 = 0;
      lVar5 = 0x50;
      do {
        puVar3 = *(undefined4 **)(*(long *)(param_1 + 0x100) + lVar5);
        if (puVar3 != (undefined4 *)0x0) {
          iVar1 = FUN_02ed52f0(*puVar3);
          if (iVar1 != 1) {
            if ((int)uVar4 != 0) {
              lVar5 = 0x50;
              do {
                puVar3 = *(undefined4 **)(*(long *)(param_1 + 0x100) + lVar5);
                if (puVar3 != (undefined4 *)0x0) {
                  FUN_02ed53a8(*puVar3);
                }
                uVar4 = uVar4 - 1;
                lVar5 = lVar5 + 0x60;
              } while (uVar4 != 0);
            }
            FUN_02f3a278(param_1);
            return iVar1;
          }
          uVar2 = (ulong)*(uint *)(param_1 + 0x108);
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x60;
      } while (uVar4 < uVar2);
    }
    iVar1 = 1;
  }
  return iVar1;
}


