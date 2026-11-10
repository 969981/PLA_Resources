/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e0ab8; name: FUN_029e0ab8
 */


void FUN_029e0ab8(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(*param_3 + 0x390) != 0) && (uVar1 = *(byte *)(*param_3 + 0x390) - 1, uVar1 < 0x1e))
  {
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)(byte)uVar1 * 8 + 0x120);
    if (lVar2 != 0) {
      FUN_029e0b88(param_1,lVar2,*(undefined1 *)((long)param_3 + 9));
      lVar3 = *(long *)(param_1 + 0x20);
      lVar4 = *param_3;
      lVar2 = param_3[1];
      *(undefined1 *)
       (*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0x10) + 8) +
                  (ulong)*(byte *)(lVar4 + 0x7d) * 8 + 0x120) + 0x390) = 0;
      FUN_02a3e6b8(*(undefined8 *)(lVar3 + 0x18),0x33,*(undefined1 *)(lVar4 + 0x7d),4,0);
      if (((char)lVar2 != '\0') && (*(short *)(lVar4 + 0x74) != 0)) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6f,
                     *(undefined1 *)(lVar4 + 0x7d),0);
        return;
      }
    }
  }
  return;
}


