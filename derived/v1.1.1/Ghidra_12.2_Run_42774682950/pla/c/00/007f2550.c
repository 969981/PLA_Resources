/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2550; name: FUN_007f2550
 */


void FUN_007f2550(long param_1)

{
  void *__s;
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [4];
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    lVar2 = *(long *)PTR_DAT_04377550;
    __s = (void *)(*(long *)(param_1 + 0x20) + 0x17);
    memset(__s,0,0x45);
    uVar1 = FUN_007e8464();
    (**(code **)(*(long *)(lVar2 + 0x1f8) + 0x10))(auStack_38,lVar2 + 0x1f8,__s,auStack_24,uVar1);
  }
  return;
}


