/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db340; name: FUN_032db340
 */


int FUN_032db340(long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *local_50;
  undefined8 *puStack_48;
  
  FUN_032e2dd4(&local_50,param_1,0);
  iVar2 = 1;
  do {
    if (local_50 + 1 < puStack_48) {
      local_50 = local_50 + 1;
      uVar1 = FUN_032e3f8c();
    }
    else {
      uVar3 = FUN_032e2de0(&local_50);
      if ((uVar3 & 1) == 0) {
        while( true ) {
          if (param_1 == 0) {
            return iVar2;
          }
          uVar1 = FUN_032e2598(param_1);
          if ((uVar1 >> 7 & 1) != 0) break;
          param_1 = *(long *)(param_1 + 8);
        }
        if (iVar2 <= param_3) {
          iVar2 = param_3;
        }
        return iVar2;
      }
      uVar1 = FUN_032e3f8c(local_50);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      iVar2 = FUN_032db410(*local_50,iVar2,param_2);
    }
  } while( true );
}


