/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c44118; name: FUN_02c44118
 */


void FUN_02c44118(long param_1,uint param_2,byte param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x278)) {
    lVar2 = *(long *)(param_1 + 600);
    uVar3 = (ulong)param_2;
    if (*(char *)(lVar2 + (ulong)param_2 * 0x48 + 8) != '\0') {
      plVar1 = *(long **)(lVar2 + uVar3 * 0x48 + 0x10);
      if (plVar1 != (long *)0x0) {
        *(undefined1 *)(lVar2 + uVar3 * 0x48 + 0xb) = 1;
        (**(code **)(*plVar1 + 0x20))(plVar1,1);
        lVar2 = *(long *)(param_1 + 600);
      }
      *(byte *)(lVar2 + uVar3 * 0x48 + 0xc) = param_3 & 1;
      if ((param_2 < *(uint *)(param_1 + 0x278)) &&
         (*(char *)(*(long *)(param_1 + 600) + uVar3 * 0x48 + 8) != '\0')) {
        FUN_00227728(*(undefined8 *)(*(long *)(param_1 + 600) + uVar3 * 0x48 + 0x10));
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 600) + uVar3 * 0x48 + 0x10) + 0x20) = 0;
        *(undefined1 *)(param_1 + 0x671) = 1;
      }
    }
  }
  return;
}


