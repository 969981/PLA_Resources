/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00284834; name: FUN_00284834
 */


bool FUN_00284834(long param_1,int param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_38;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x9e8 + 0x9b8);
  if (lVar4 == 0) {
    bVar3 = false;
  }
  else {
    lVar4 = lVar4 + (param_4 & 0xffffffff) * 8;
    iVar1 = *(int *)(lVar4 + 0x14);
    iVar2 = *(int *)(lVar4 + 0x18);
    local_4e = 0;
    local_50 = 0;
    local_38 = param_5;
    lVar4 = FUN_0028d0f0(auStack_58);
    bVar3 = false;
    if (lVar4 != 0) {
      bVar3 = iVar2 != -1;
      if (bVar3) {
        FUN_008782ac(param_3,iVar2,0,&local_38,lVar4 + 0x28);
      }
      if (iVar1 != -1) {
        FUN_008782ac(param_3,iVar1,4,&local_38,lVar4 + 0x28);
        bVar3 = true;
      }
    }
  }
  return bVar3;
}


