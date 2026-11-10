/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030b590; name: FUN_0030b590
 */


int FUN_0030b590(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = nnsocketAccept(param_1,param_2,param_2 + 0x80);
  if ((-1 < iVar1) &&
     (((param_3 != 0 &&
       ((uVar2 = FUN_002fcdf0(iVar1,3,0), (int)uVar2 < 0 ||
        (iVar3 = FUN_002fcdf0(iVar1,4,uVar2 | 0x800), iVar3 != 0)))) ||
      ((param_4 != 0 &&
       ((uVar2 = FUN_002fcdf0(iVar1,1,0), (int)uVar2 < 0 ||
        (iVar3 = FUN_002fcdf0(iVar1,2,uVar2 | 1), iVar3 != 0)))))))) {
    nnsocketClose(iVar1);
    iVar1 = -1;
  }
  return iVar1;
}


