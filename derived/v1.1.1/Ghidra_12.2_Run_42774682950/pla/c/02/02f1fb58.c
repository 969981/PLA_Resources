/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1fb58; name: FUN_02f1fb58
 */


void FUN_02f1fb58(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x40);
    if (uVar2 != 0) {
      uVar3 = 1;
      lVar4 = 8;
      lVar1 = *(long *)(lVar1 + 8);
      while( true ) {
        if (lVar1 != 0) {
          (*DAT_0442d150)(5);
          *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar4) = 0;
          uVar2 = *(uint *)(param_1 + 0x40);
        }
        if (uVar2 <= uVar3) break;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x10;
        lVar1 = *(long *)(*(long *)(param_1 + 0x48) + lVar4);
      }
      lVar1 = *(long *)(param_1 + 0x48);
    }
    (*DAT_0442d150)(5,lVar1);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


