/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07110; name: FUN_02f07110
 */


void FUN_02f07110(long param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  if (((uint)bVar2 != (param_2 & 0xff)) || ((uint)*(byte *)(param_1 + 0x31) != (param_3 & 0xff))) {
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x10);
      uVar1 = *puVar4;
      pcVar3 = *(code **)(*DAT_0440a098 + 0x58);
      while( true ) {
        puVar4 = puVar4 + 1;
        (*pcVar3)(DAT_0440a098,uVar1,param_2,bVar2);
        if (puVar4 == (undefined4 *)
                      (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 4)) break;
        uVar1 = *puVar4;
        pcVar3 = *(code **)(*DAT_0440a098 + 0x58);
        bVar2 = *(byte *)(param_1 + 0x30);
      }
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x20);
      do {
        puVar5 = puVar4 + 1;
        (**(code **)(*DAT_0440a098 + 0x58))
                  (DAT_0440a098,*puVar4,param_3,*(undefined1 *)(param_1 + 0x31));
        puVar4 = puVar5;
      } while (puVar5 != (undefined4 *)
                         (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 4));
    }
    *(char *)(param_1 + 0x30) = (char)param_2;
    *(char *)(param_1 + 0x31) = (char)param_3;
  }
  return;
}


