/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eeb144; name: FUN_02eeb144
 */


void FUN_02eeb144(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))();
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 0xe0) + 0x40))();
      *(ushort *)(param_1 + 0x115) = *(ushort *)(param_1 + 0x115) & 0xfff7;
      if (*(int *)(param_1 + 0xf0) != 0) {
        lVar2 = *(long *)(param_1 + 0xe8);
        do {
          (**(code **)(**(long **)(lVar2 + 8) + 0x10))();
          lVar2 = lVar2 + 0x10;
        } while (lVar2 != *(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0xf0) * 0x10);
      }
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))();
        *(undefined8 *)(param_1 + 0xf8) = 0;
      }
    }
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))();
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}


