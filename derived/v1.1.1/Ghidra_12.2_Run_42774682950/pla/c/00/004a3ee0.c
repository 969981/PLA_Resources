/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a3ee0; name: FUN_004a3ee0
 */


undefined8 FUN_004a3ee0(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_0042d4f0();
  lVar4 = FUN_004a3e30();
  iVar1 = FUN_0041ccc0(param_2);
  uVar5 = 0;
  if ((lVar4 != 0) && (-1 < iVar1)) {
    iVar2 = FUN_0040a0e0(0,(int)lVar4 + 1,2);
    iVar1 = FUN_0040a0e0(0,iVar1,4);
    iVar3 = FUN_0040a0e0(0,param_3,4);
    uVar5 = 1;
    iVar1 = FUN_0040a0e0(1,iVar1 + iVar2 * 2 + iVar3,0x10);
    *param_4 = (long)iVar1;
  }
  return uVar5;
}


