/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da82d0; name: FUN_02da82d0
 */


void FUN_02da82d0(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  int local_50 [5];
  undefined4 local_3c;
  undefined8 local_38;
  
  if (*(long *)PTR_DAT_04377550 != 0) {
    bVar2 = *(byte *)(param_1 + 0x70);
    iVar3 = FUN_0082ad44();
    if (((iVar3 == 1 && bVar2 < 2) && (*(long *)PTR_DAT_043773c0 != 0)) &&
       (plVar4 = (long *)FUN_00847ad0(*(long *)PTR_DAT_043773c0 + 0x10,(&DAT_04408a80)[bVar2],0x7c),
       plVar4 != (long *)0x0)) {
      local_38 = 0;
      lVar1 = param_1 + 0x110;
      local_3c = 0;
      (**(code **)(*plVar4 + 0x68))(local_50,plVar4,&local_38,lVar1,&local_3c,0x182);
      while (local_50[0] == 0) {
        FUN_02da9800(param_1,local_38,lVar1,local_3c);
        (**(code **)(*plVar4 + 0x68))(local_50,plVar4,&local_38,lVar1,&local_3c,0x182);
      }
    }
  }
  FUN_02da83dc(param_1);
  FUN_02da8f58(param_1);
  return;
}


